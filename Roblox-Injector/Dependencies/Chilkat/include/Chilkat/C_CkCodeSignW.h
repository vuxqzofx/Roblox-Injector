// This is a generated source file for Chilkat version 11.3.0
#ifndef _C_CkCodeSignWH
#define _C_CkCodeSignWH
#include "chilkatDefs.h"

#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkCodeSignW_setAbortCheck(HCkCodeSignW cHandle, BOOL (*fnAbortCheck)(void));
CK_C_VISIBLE_PUBLIC void CkCodeSignW_setPercentDone(HCkCodeSignW cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_C_VISIBLE_PUBLIC void CkCodeSignW_setProgressInfo(HCkCodeSignW cHandle, void (*fnProgressInfo)(const wchar_t *name, const wchar_t *value));
CK_C_VISIBLE_PUBLIC void CkCodeSignW_setTaskCompleted(HCkCodeSignW cHandle, void (*fnTaskCompleted)(HCkTaskW hTask));

CK_C_VISIBLE_PUBLIC HCkCodeSignW CkCodeSignW_Create(void);
CK_C_VISIBLE_PUBLIC void CkCodeSignW_Dispose(HCkCodeSignW handle);
CK_C_VISIBLE_PUBLIC void CkCodeSignW_getDebugLogFilePath(HCkCodeSignW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkCodeSignW_putDebugLogFilePath(HCkCodeSignW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkCodeSignW_debugLogFilePath(HCkCodeSignW cHandle);
CK_C_VISIBLE_PUBLIC int CkCodeSignW_getHeartbeatMs(HCkCodeSignW cHandle);
CK_C_VISIBLE_PUBLIC void  CkCodeSignW_putHeartbeatMs(HCkCodeSignW cHandle, int newVal);
CK_C_VISIBLE_PUBLIC void CkCodeSignW_getLastErrorHtml(HCkCodeSignW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkCodeSignW_lastErrorHtml(HCkCodeSignW cHandle);
CK_C_VISIBLE_PUBLIC void CkCodeSignW_getLastErrorText(HCkCodeSignW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkCodeSignW_lastErrorText(HCkCodeSignW cHandle);
CK_C_VISIBLE_PUBLIC void CkCodeSignW_getLastErrorXml(HCkCodeSignW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkCodeSignW_lastErrorXml(HCkCodeSignW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCodeSignW_getLastMethodSuccess(HCkCodeSignW cHandle);
CK_C_VISIBLE_PUBLIC void  CkCodeSignW_putLastMethodSuccess(HCkCodeSignW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkCodeSignW_getUncommonOptions(HCkCodeSignW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkCodeSignW_putUncommonOptions(HCkCodeSignW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkCodeSignW_uncommonOptions(HCkCodeSignW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCodeSignW_getVerboseLogging(HCkCodeSignW cHandle);
CK_C_VISIBLE_PUBLIC void  CkCodeSignW_putVerboseLogging(HCkCodeSignW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkCodeSignW_getVersion(HCkCodeSignW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkCodeSignW_version(HCkCodeSignW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCodeSignW_AddSignature(HCkCodeSignW cHandle, const wchar_t *path, HCkCertW cert, HCkJsonObjectW options);
CK_C_VISIBLE_PUBLIC HCkTaskW CkCodeSignW_AddSignatureAsync(HCkCodeSignW cHandle, const wchar_t *path, HCkCertW cert, HCkJsonObjectW options);
CK_C_VISIBLE_PUBLIC BOOL CkCodeSignW_GetSignerCert(HCkCodeSignW cHandle, HCkCertW cert);
CK_C_VISIBLE_PUBLIC BOOL CkCodeSignW_RemoveSignature(HCkCodeSignW cHandle, const wchar_t *path);
CK_C_VISIBLE_PUBLIC BOOL CkCodeSignW_VerifySignature(HCkCodeSignW cHandle, const wchar_t *path, HCkJsonObjectW sigInfo);
#endif
