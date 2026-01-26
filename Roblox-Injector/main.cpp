#include <Windows.h>
#include <iostream>
#include <filesystem>

#include <Certificate.c>
#include <Chilkat/CkCert.h>
#include <Chilkat/CkByteData.h>
#include <Chilkat/CkCodeSign.h>
#include <Chilkat/CkJsonObject.h>

std::string SignModule(std::string ModulePath)
{
    char TempPath[MAX_PATH]{};
    GetTempPathA(MAX_PATH, TempPath);
    std::string SignedModulePath = std::string(TempPath) + "vcruntime140.dll";

    DeleteFileA(SignedModulePath.c_str());
    if (!std::filesystem::exists(SignedModulePath))
    {
        std::filesystem::copy(ModulePath, SignedModulePath);

        CkCert Cert;
        CkByteData PfxBd;
        std::vector<uint8_t> Pfx(PfxData, PfxData + sizeof(PfxData));
        PfxBd.append2(Pfx.data(), static_cast<unsigned long>(Pfx.size()));
        Cert.LoadPfxData(PfxBd, "NG");

        CkCodeSign CodeSign;
        CkJsonObject Options;
        Options.UpdateString("hashAlgorithm", "SHA256");
        CodeSign.AddSignature(SignedModulePath.c_str(), Cert, Options);

        return SignedModulePath;
    }
    
    return "";
}

int main()
{
    SetConsoleTitleA("Roblox-Injector");
    std::cout << "\n [!] Waiting for Roblox";

	HWND hWindow = NULL;
    while (hWindow == NULL || !IsWindowVisible(hWindow))
    {
        hWindow = FindWindowA(NULL, "Roblox");
        Sleep(100);
    }

    system("cls");
    std::cout << "\n [!] Starting injection";
    if (!std::filesystem::exists("Module.dll"))
    {
        std::cout << "\n [-] Module not found";
        Sleep(2500);
        return 0;
    }

    std::string SignedModule = SignModule("Module.dll");
    if (SignedModule.empty())
    {
        std::cout << "\n [/] Failed to delete old Module or youre already injected";
        Sleep(2500);
        return 0;
    }

    DWORD ProcessID, ThreadID = GetWindowThreadProcessId(hWindow, &ProcessID);
    HMODULE hModule = LoadLibraryExA(SignedModule.c_str(), NULL, DONT_RESOLVE_DLL_REFERENCES);
    if (!GetProcAddress(hModule, "_CreateFrameInfo"))
    {
        std::cout << "\n [-] Module is not Proxied";
        Sleep(2500);
        return 0;
    }

    HOOKPROC Callback = reinterpret_cast<HOOKPROC>(GetProcAddress(hModule, "NextHook"));
    if (!Callback)
    {
        std::cout << "\n [-] Callback not found";
        Sleep(2500);
        return 0;
    }

    HHOOK hHook = SetWindowsHookExA(WH_GETMESSAGE, Callback, hModule, ThreadID);
    PostThreadMessageA(ThreadID, WM_NULL, NULL, NULL);
    Sleep(1000);
    UnhookWindowsHookEx(hHook);
    FreeLibrary(hModule);

    std::cout << "\n [+] Injected into client: " << ProcessID;
    Sleep(2500);

    return 0;
}