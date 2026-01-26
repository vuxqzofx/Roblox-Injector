// This is a generated source file for Chilkat version 11.3.0
#ifndef _C_CkCodeSign_H
#define _C_CkCodeSign_H
#include "chilkatDefs.h"
#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkCodeSign_setAbortCheck(HCkCodeSign cHandle, BOOL (*fnAbortCheck)(void));
CK_C_VISIBLE_PUBLIC void CkCodeSign_setPercentDone(HCkCodeSign cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_C_VISIBLE_PUBLIC void CkCodeSign_setProgressInfo(HCkCodeSign cHandle, void (*fnProgressInfo)(const char *name, const char *value));
CK_C_VISIBLE_PUBLIC void CkCodeSign_setTaskCompleted(HCkCodeSign cHandle, void (*fnTaskCompleted)(HCkTask hTask));

CK_C_VISIBLE_PUBLIC void CkCodeSign_setAbortCheck2(HCkCodeSign cHandle, BOOL (*fnAbortCheck2)(void *pContext));
CK_C_VISIBLE_PUBLIC void CkCodeSign_setPercentDone2(HCkCodeSign cHandle, BOOL (*fnPercentDone2)(int pctDone, void *pContext));
CK_C_VISIBLE_PUBLIC void CkCodeSign_setProgressInfo2(HCkCodeSign cHandle, void (*fnProgressInfo2)(const char *name, const char *value, void *pContext));
CK_C_VISIBLE_PUBLIC void CkCodeSign_setTaskCompleted2(HCkCodeSign cHandle, void (*fnTaskCompleted2)(HCkTask hTask, void *pContext));

// setExternalProgress is for C callback functions defined in the external programming language (such as Go)
CK_C_VISIBLE_PUBLIC void CkCodeSign_setExternalProgress(HCkCodeSign cHandle, BOOL on);
CK_C_VISIBLE_PUBLIC void CkCodeSign_setCallbackContext(HCkCodeSign cHandle, void *pContext);

CK_C_VISIBLE_PUBLIC HCkCodeSign CkCodeSign_Create(void);
CK_C_VISIBLE_PUBLIC HCkCodeSign CkCodeSign_Create2(int progLang);
CK_C_VISIBLE_PUBLIC void CkCodeSign_Dispose(HCkCodeSign handle);
CK_C_VISIBLE_PUBLIC void CkCodeSign_getDebugLogFilePath(HCkCodeSign cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkCodeSign_putDebugLogFilePath(HCkCodeSign cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkCodeSign_debugLogFilePath(HCkCodeSign cHandle);
CK_C_VISIBLE_PUBLIC int CkCodeSign_getHeartbeatMs(HCkCodeSign cHandle);
CK_C_VISIBLE_PUBLIC void CkCodeSign_putHeartbeatMs(HCkCodeSign cHandle, int newVal);
CK_C_VISIBLE_PUBLIC void CkCodeSign_getLastErrorHtml(HCkCodeSign cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkCodeSign_lastErrorHtml(HCkCodeSign cHandle);
CK_C_VISIBLE_PUBLIC void CkCodeSign_getLastErrorText(HCkCodeSign cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkCodeSign_lastErrorText(HCkCodeSign cHandle);
CK_C_VISIBLE_PUBLIC void CkCodeSign_getLastErrorXml(HCkCodeSign cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkCodeSign_lastErrorXml(HCkCodeSign cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCodeSign_getLastMethodSuccess(HCkCodeSign cHandle);
CK_C_VISIBLE_PUBLIC void CkCodeSign_putLastMethodSuccess(HCkCodeSign cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkCodeSign_getUncommonOptions(HCkCodeSign cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkCodeSign_putUncommonOptions(HCkCodeSign cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkCodeSign_uncommonOptions(HCkCodeSign cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCodeSign_getUtf8(HCkCodeSign cHandle);
CK_C_VISIBLE_PUBLIC void CkCodeSign_putUtf8(HCkCodeSign cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkCodeSign_getVerboseLogging(HCkCodeSign cHandle);
CK_C_VISIBLE_PUBLIC void CkCodeSign_putVerboseLogging(HCkCodeSign cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkCodeSign_getVersion(HCkCodeSign cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkCodeSign_version(HCkCodeSign cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCodeSign_AddSignature(HCkCodeSign cHandle, const char *path, HCkCert cert, HCkJsonObject options);
CK_C_VISIBLE_PUBLIC HCkTask CkCodeSign_AddSignatureAsync(HCkCodeSign cHandle, const char *path, HCkCert cert, HCkJsonObject options);
CK_C_VISIBLE_PUBLIC BOOL CkCodeSign_GetSignerCert(HCkCodeSign cHandle, HCkCert cert);
CK_C_VISIBLE_PUBLIC BOOL CkCodeSign_RemoveSignature(HCkCodeSign cHandle, const char *path);
CK_C_VISIBLE_PUBLIC BOOL CkCodeSign_VerifySignature(HCkCodeSign cHandle, const char *path, HCkJsonObject sigInfo);
#endif
