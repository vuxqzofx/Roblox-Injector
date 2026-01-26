// This is a generated source file for Chilkat version 11.3.0
#ifndef _C_CkCertStoreWH
#define _C_CkCertStoreWH
#include "chilkatDefs.h"

#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC HCkCertStoreW CkCertStoreW_Create(void);
CK_C_VISIBLE_PUBLIC void CkCertStoreW_Dispose(HCkCertStoreW handle);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_getAvoidWindowsPkAccess(HCkCertStoreW cHandle);
CK_C_VISIBLE_PUBLIC void  CkCertStoreW_putAvoidWindowsPkAccess(HCkCertStoreW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkCertStoreW_getDebugLogFilePath(HCkCertStoreW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkCertStoreW_putDebugLogFilePath(HCkCertStoreW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkCertStoreW_debugLogFilePath(HCkCertStoreW cHandle);
CK_C_VISIBLE_PUBLIC void CkCertStoreW_getLastErrorHtml(HCkCertStoreW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkCertStoreW_lastErrorHtml(HCkCertStoreW cHandle);
CK_C_VISIBLE_PUBLIC void CkCertStoreW_getLastErrorText(HCkCertStoreW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkCertStoreW_lastErrorText(HCkCertStoreW cHandle);
CK_C_VISIBLE_PUBLIC void CkCertStoreW_getLastErrorXml(HCkCertStoreW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkCertStoreW_lastErrorXml(HCkCertStoreW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_getLastMethodSuccess(HCkCertStoreW cHandle);
CK_C_VISIBLE_PUBLIC void  CkCertStoreW_putLastMethodSuccess(HCkCertStoreW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC int CkCertStoreW_getNumCertificates(HCkCertStoreW cHandle);
CK_C_VISIBLE_PUBLIC void CkCertStoreW_getSmartCardPin(HCkCertStoreW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkCertStoreW_putSmartCardPin(HCkCertStoreW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkCertStoreW_smartCardPin(HCkCertStoreW cHandle);
CK_C_VISIBLE_PUBLIC void CkCertStoreW_getUncommonOptions(HCkCertStoreW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkCertStoreW_putUncommonOptions(HCkCertStoreW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkCertStoreW_uncommonOptions(HCkCertStoreW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_getVerboseLogging(HCkCertStoreW cHandle);
CK_C_VISIBLE_PUBLIC void  CkCertStoreW_putVerboseLogging(HCkCertStoreW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkCertStoreW_getVersion(HCkCertStoreW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkCertStoreW_version(HCkCertStoreW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_AddCertificate(HCkCertStoreW cHandle, HCkCertW cert);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_CloseCertStore(HCkCertStoreW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_CreateFileStore(HCkCertStoreW cHandle, const wchar_t *filename);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_CreateMemoryStore(HCkCertStoreW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_CreateRegistryStore(HCkCertStoreW cHandle, const wchar_t *regRoot, const wchar_t *regPath);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_FindCert(HCkCertStoreW cHandle, HCkJsonObjectW json, HCkCertW cert);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_GetCert(HCkCertStoreW cHandle, int index, HCkCertW cert);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_LoadPemFile(HCkCertStoreW cHandle, const wchar_t *pemPath);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_LoadPemStr(HCkCertStoreW cHandle, const wchar_t *pemString);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_LoadPfxBd(HCkCertStoreW cHandle, HCkBinDataW bd, const wchar_t *password);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_LoadPfxFile(HCkCertStoreW cHandle, const wchar_t *pfxFilename, const wchar_t *password);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_OpenCurrentUserStore(HCkCertStoreW cHandle, BOOL readOnly);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_OpenFileStore(HCkCertStoreW cHandle, const wchar_t *filename, BOOL readOnly);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_OpenLocalSystemStore(HCkCertStoreW cHandle, BOOL readOnly);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_OpenRegistryStore(HCkCertStoreW cHandle, const wchar_t *regRoot, const wchar_t *regPath, BOOL readOnly);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_OpenSmartcard(HCkCertStoreW cHandle, const wchar_t *csp);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_OpenWindowsStore(HCkCertStoreW cHandle, const wchar_t *storeLocation, const wchar_t *storeName, BOOL readOnly);
CK_C_VISIBLE_PUBLIC BOOL CkCertStoreW_RemoveCertificate(HCkCertStoreW cHandle, HCkCertW cert);
#endif
