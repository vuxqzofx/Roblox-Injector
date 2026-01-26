// This is a generated source file for Chilkat version 11.3.0
#ifndef _C_CkCertStore_H
#define _C_CkCertStore_H
#include "chilkatDefs.h"
#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC HCkCertStore CkCertStore_Create(void);
CK_C_VISIBLE_PUBLIC HCkCertStore CkCertStore_Create2(int progLang);
CK_C_VISIBLE_PUBLIC void CkCertStore_Dispose(HCkCertStore handle);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_getAvoidWindowsPkAccess(HCkCertStore cHandle);
CK_C_VISIBLE_PUBLIC void CkCertStore_putAvoidWindowsPkAccess(HCkCertStore cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkCertStore_getDebugLogFilePath(HCkCertStore cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkCertStore_putDebugLogFilePath(HCkCertStore cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkCertStore_debugLogFilePath(HCkCertStore cHandle);
CK_C_VISIBLE_PUBLIC void CkCertStore_getLastErrorHtml(HCkCertStore cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkCertStore_lastErrorHtml(HCkCertStore cHandle);
CK_C_VISIBLE_PUBLIC void CkCertStore_getLastErrorText(HCkCertStore cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkCertStore_lastErrorText(HCkCertStore cHandle);
CK_C_VISIBLE_PUBLIC void CkCertStore_getLastErrorXml(HCkCertStore cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkCertStore_lastErrorXml(HCkCertStore cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_getLastMethodSuccess(HCkCertStore cHandle);
CK_C_VISIBLE_PUBLIC void CkCertStore_putLastMethodSuccess(HCkCertStore cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC int CkCertStore_getNumCertificates(HCkCertStore cHandle);
CK_C_VISIBLE_PUBLIC void CkCertStore_getSmartCardPin(HCkCertStore cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkCertStore_putSmartCardPin(HCkCertStore cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkCertStore_smartCardPin(HCkCertStore cHandle);
CK_C_VISIBLE_PUBLIC void CkCertStore_getUncommonOptions(HCkCertStore cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkCertStore_putUncommonOptions(HCkCertStore cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkCertStore_uncommonOptions(HCkCertStore cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_getUtf8(HCkCertStore cHandle);
CK_C_VISIBLE_PUBLIC void CkCertStore_putUtf8(HCkCertStore cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_getVerboseLogging(HCkCertStore cHandle);
CK_C_VISIBLE_PUBLIC void CkCertStore_putVerboseLogging(HCkCertStore cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkCertStore_getVersion(HCkCertStore cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkCertStore_version(HCkCertStore cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_AddCertificate(HCkCertStore cHandle, HCkCert cert);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_CloseCertStore(HCkCertStore cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_CreateFileStore(HCkCertStore cHandle, const char *filename);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_CreateMemoryStore(HCkCertStore cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_CreateRegistryStore(HCkCertStore cHandle, const char *regRoot, const char *regPath);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_FindCert(HCkCertStore cHandle, HCkJsonObject json, HCkCert cert);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_GetCert(HCkCertStore cHandle, int index, HCkCert cert);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_LoadPemFile(HCkCertStore cHandle, const char *pemPath);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_LoadPemStr(HCkCertStore cHandle, const char *pemString);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_LoadPfxBd(HCkCertStore cHandle, HCkBinData bd, const char *password);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_LoadPfxFile(HCkCertStore cHandle, const char *pfxFilename, const char *password);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_OpenCurrentUserStore(HCkCertStore cHandle, BOOL readOnly);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_OpenFileStore(HCkCertStore cHandle, const char *filename, BOOL readOnly);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_OpenLocalSystemStore(HCkCertStore cHandle, BOOL readOnly);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_OpenRegistryStore(HCkCertStore cHandle, const char *regRoot, const char *regPath, BOOL readOnly);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_OpenSmartcard(HCkCertStore cHandle, const char *csp);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_OpenWindowsStore(HCkCertStore cHandle, const char *storeLocation, const char *storeName, BOOL readOnly);
CK_C_VISIBLE_PUBLIC BOOL CkCertStore_RemoveCertificate(HCkCertStore cHandle, HCkCert cert);
#endif
