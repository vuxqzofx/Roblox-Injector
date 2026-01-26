// This is a generated source file for Chilkat version 11.3.0
#ifndef _C_CkSecrets_H
#define _C_CkSecrets_H
#include "chilkatDefs.h"
#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkSecrets_setAbortCheck(HCkSecrets cHandle, BOOL (*fnAbortCheck)(void));
CK_C_VISIBLE_PUBLIC void CkSecrets_setPercentDone(HCkSecrets cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_C_VISIBLE_PUBLIC void CkSecrets_setProgressInfo(HCkSecrets cHandle, void (*fnProgressInfo)(const char *name, const char *value));
CK_C_VISIBLE_PUBLIC void CkSecrets_setTaskCompleted(HCkSecrets cHandle, void (*fnTaskCompleted)(HCkTask hTask));

CK_C_VISIBLE_PUBLIC void CkSecrets_setAbortCheck2(HCkSecrets cHandle, BOOL (*fnAbortCheck2)(void *pContext));
CK_C_VISIBLE_PUBLIC void CkSecrets_setPercentDone2(HCkSecrets cHandle, BOOL (*fnPercentDone2)(int pctDone, void *pContext));
CK_C_VISIBLE_PUBLIC void CkSecrets_setProgressInfo2(HCkSecrets cHandle, void (*fnProgressInfo2)(const char *name, const char *value, void *pContext));
CK_C_VISIBLE_PUBLIC void CkSecrets_setTaskCompleted2(HCkSecrets cHandle, void (*fnTaskCompleted2)(HCkTask hTask, void *pContext));

// setExternalProgress is for C callback functions defined in the external programming language (such as Go)
CK_C_VISIBLE_PUBLIC void CkSecrets_setExternalProgress(HCkSecrets cHandle, BOOL on);
CK_C_VISIBLE_PUBLIC void CkSecrets_setCallbackContext(HCkSecrets cHandle, void *pContext);

CK_C_VISIBLE_PUBLIC HCkSecrets CkSecrets_Create(void);
CK_C_VISIBLE_PUBLIC HCkSecrets CkSecrets_Create2(int progLang);
CK_C_VISIBLE_PUBLIC void CkSecrets_Dispose(HCkSecrets handle);
CK_C_VISIBLE_PUBLIC BOOL CkSecrets_getAutoSplit(HCkSecrets cHandle);
CK_C_VISIBLE_PUBLIC void CkSecrets_putAutoSplit(HCkSecrets cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkSecrets_getCompression(HCkSecrets cHandle);
CK_C_VISIBLE_PUBLIC void CkSecrets_putCompression(HCkSecrets cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkSecrets_getDebugLogFilePath(HCkSecrets cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkSecrets_putDebugLogFilePath(HCkSecrets cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkSecrets_debugLogFilePath(HCkSecrets cHandle);
CK_C_VISIBLE_PUBLIC void CkSecrets_getLastErrorHtml(HCkSecrets cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkSecrets_lastErrorHtml(HCkSecrets cHandle);
CK_C_VISIBLE_PUBLIC void CkSecrets_getLastErrorText(HCkSecrets cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkSecrets_lastErrorText(HCkSecrets cHandle);
CK_C_VISIBLE_PUBLIC void CkSecrets_getLastErrorXml(HCkSecrets cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkSecrets_lastErrorXml(HCkSecrets cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkSecrets_getLastMethodSuccess(HCkSecrets cHandle);
CK_C_VISIBLE_PUBLIC void CkSecrets_putLastMethodSuccess(HCkSecrets cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkSecrets_getLocation(HCkSecrets cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkSecrets_putLocation(HCkSecrets cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkSecrets_location(HCkSecrets cHandle);
CK_C_VISIBLE_PUBLIC void CkSecrets_getUncommonOptions(HCkSecrets cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkSecrets_putUncommonOptions(HCkSecrets cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkSecrets_uncommonOptions(HCkSecrets cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkSecrets_getUtf8(HCkSecrets cHandle);
CK_C_VISIBLE_PUBLIC void CkSecrets_putUtf8(HCkSecrets cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkSecrets_getVerboseLogging(HCkSecrets cHandle);
CK_C_VISIBLE_PUBLIC void CkSecrets_putVerboseLogging(HCkSecrets cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkSecrets_getVersion(HCkSecrets cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkSecrets_version(HCkSecrets cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkSecrets_DeleteSecret(HCkSecrets cHandle, HCkJsonObject jsonId);
CK_C_VISIBLE_PUBLIC HCkTask CkSecrets_DeleteSecretAsync(HCkSecrets cHandle, HCkJsonObject jsonId);
CK_C_VISIBLE_PUBLIC BOOL CkSecrets_GetSecretBd(HCkSecrets cHandle, HCkJsonObject jsonId, HCkBinData bd);
CK_C_VISIBLE_PUBLIC HCkTask CkSecrets_GetSecretBdAsync(HCkSecrets cHandle, HCkJsonObject jsonId, HCkBinData bd);
CK_C_VISIBLE_PUBLIC BOOL CkSecrets_GetSecretJson(HCkSecrets cHandle, HCkJsonObject jsonId, HCkJsonObject jsonOut);
CK_C_VISIBLE_PUBLIC HCkTask CkSecrets_GetSecretJsonAsync(HCkSecrets cHandle, HCkJsonObject jsonId, HCkJsonObject jsonOut);
CK_C_VISIBLE_PUBLIC BOOL CkSecrets_GetSecretSb(HCkSecrets cHandle, HCkJsonObject jsonId, HCkStringBuilder sb);
CK_C_VISIBLE_PUBLIC HCkTask CkSecrets_GetSecretSbAsync(HCkSecrets cHandle, HCkJsonObject jsonId, HCkStringBuilder sb);
CK_C_VISIBLE_PUBLIC BOOL CkSecrets_GetSecretStr(HCkSecrets cHandle, HCkJsonObject jsonId, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkSecrets_getSecretStr(HCkSecrets cHandle, HCkJsonObject jsonId);
CK_C_VISIBLE_PUBLIC HCkTask CkSecrets_GetSecretStrAsync(HCkSecrets cHandle, HCkJsonObject jsonId);
CK_C_VISIBLE_PUBLIC BOOL CkSecrets_ListSecrets(HCkSecrets cHandle, HCkJsonObject json, HCkJsonObject jsonOut);
CK_C_VISIBLE_PUBLIC HCkTask CkSecrets_ListSecretsAsync(HCkSecrets cHandle, HCkJsonObject json, HCkJsonObject jsonOut);
CK_C_VISIBLE_PUBLIC BOOL CkSecrets_SetBootstrapSecret(HCkSecrets cHandle, HCkJsonObject jsonId, HCkSecrets secretContent);
CK_C_VISIBLE_PUBLIC BOOL CkSecrets_UpdateSecretBd(HCkSecrets cHandle, HCkJsonObject jsonId, HCkBinData secret);
CK_C_VISIBLE_PUBLIC HCkTask CkSecrets_UpdateSecretBdAsync(HCkSecrets cHandle, HCkJsonObject jsonId, HCkBinData secret);
CK_C_VISIBLE_PUBLIC BOOL CkSecrets_UpdateSecretJson(HCkSecrets cHandle, HCkJsonObject jsonId, HCkJsonObject secret);
CK_C_VISIBLE_PUBLIC HCkTask CkSecrets_UpdateSecretJsonAsync(HCkSecrets cHandle, HCkJsonObject jsonId, HCkJsonObject secret);
CK_C_VISIBLE_PUBLIC BOOL CkSecrets_UpdateSecretSb(HCkSecrets cHandle, HCkJsonObject jsonId, HCkStringBuilder sb);
CK_C_VISIBLE_PUBLIC HCkTask CkSecrets_UpdateSecretSbAsync(HCkSecrets cHandle, HCkJsonObject jsonId, HCkStringBuilder sb);
CK_C_VISIBLE_PUBLIC BOOL CkSecrets_UpdateSecretStr(HCkSecrets cHandle, HCkJsonObject jsonId, const char *secret);
CK_C_VISIBLE_PUBLIC HCkTask CkSecrets_UpdateSecretStrAsync(HCkSecrets cHandle, HCkJsonObject jsonId, const char *secret);
#endif
