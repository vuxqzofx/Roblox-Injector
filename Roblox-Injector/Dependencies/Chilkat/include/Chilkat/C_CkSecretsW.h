// This is a generated source file for Chilkat version 11.3.0
#ifndef _C_CkSecretsWH
#define _C_CkSecretsWH
#include "chilkatDefs.h"

#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkSecretsW_setAbortCheck(HCkSecretsW cHandle, BOOL (*fnAbortCheck)(void));
CK_C_VISIBLE_PUBLIC void CkSecretsW_setPercentDone(HCkSecretsW cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_C_VISIBLE_PUBLIC void CkSecretsW_setProgressInfo(HCkSecretsW cHandle, void (*fnProgressInfo)(const wchar_t *name, const wchar_t *value));
CK_C_VISIBLE_PUBLIC void CkSecretsW_setTaskCompleted(HCkSecretsW cHandle, void (*fnTaskCompleted)(HCkTaskW hTask));

CK_C_VISIBLE_PUBLIC HCkSecretsW CkSecretsW_Create(void);
CK_C_VISIBLE_PUBLIC void CkSecretsW_Dispose(HCkSecretsW handle);
CK_C_VISIBLE_PUBLIC BOOL CkSecretsW_getAutoSplit(HCkSecretsW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSecretsW_putAutoSplit(HCkSecretsW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkSecretsW_getCompression(HCkSecretsW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSecretsW_putCompression(HCkSecretsW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkSecretsW_getDebugLogFilePath(HCkSecretsW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkSecretsW_putDebugLogFilePath(HCkSecretsW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSecretsW_debugLogFilePath(HCkSecretsW cHandle);
CK_C_VISIBLE_PUBLIC void CkSecretsW_getLastErrorHtml(HCkSecretsW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSecretsW_lastErrorHtml(HCkSecretsW cHandle);
CK_C_VISIBLE_PUBLIC void CkSecretsW_getLastErrorText(HCkSecretsW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSecretsW_lastErrorText(HCkSecretsW cHandle);
CK_C_VISIBLE_PUBLIC void CkSecretsW_getLastErrorXml(HCkSecretsW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSecretsW_lastErrorXml(HCkSecretsW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkSecretsW_getLastMethodSuccess(HCkSecretsW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSecretsW_putLastMethodSuccess(HCkSecretsW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkSecretsW_getLocation(HCkSecretsW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkSecretsW_putLocation(HCkSecretsW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSecretsW_location(HCkSecretsW cHandle);
CK_C_VISIBLE_PUBLIC void CkSecretsW_getUncommonOptions(HCkSecretsW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkSecretsW_putUncommonOptions(HCkSecretsW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSecretsW_uncommonOptions(HCkSecretsW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkSecretsW_getVerboseLogging(HCkSecretsW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSecretsW_putVerboseLogging(HCkSecretsW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkSecretsW_getVersion(HCkSecretsW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSecretsW_version(HCkSecretsW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkSecretsW_DeleteSecret(HCkSecretsW cHandle, HCkJsonObjectW jsonId);
CK_C_VISIBLE_PUBLIC HCkTaskW CkSecretsW_DeleteSecretAsync(HCkSecretsW cHandle, HCkJsonObjectW jsonId);
CK_C_VISIBLE_PUBLIC BOOL CkSecretsW_GetSecretBd(HCkSecretsW cHandle, HCkJsonObjectW jsonId, HCkBinDataW bd);
CK_C_VISIBLE_PUBLIC HCkTaskW CkSecretsW_GetSecretBdAsync(HCkSecretsW cHandle, HCkJsonObjectW jsonId, HCkBinDataW bd);
CK_C_VISIBLE_PUBLIC BOOL CkSecretsW_GetSecretJson(HCkSecretsW cHandle, HCkJsonObjectW jsonId, HCkJsonObjectW jsonOut);
CK_C_VISIBLE_PUBLIC HCkTaskW CkSecretsW_GetSecretJsonAsync(HCkSecretsW cHandle, HCkJsonObjectW jsonId, HCkJsonObjectW jsonOut);
CK_C_VISIBLE_PUBLIC BOOL CkSecretsW_GetSecretSb(HCkSecretsW cHandle, HCkJsonObjectW jsonId, HCkStringBuilderW sb);
CK_C_VISIBLE_PUBLIC HCkTaskW CkSecretsW_GetSecretSbAsync(HCkSecretsW cHandle, HCkJsonObjectW jsonId, HCkStringBuilderW sb);
CK_C_VISIBLE_PUBLIC BOOL CkSecretsW_GetSecretStr(HCkSecretsW cHandle, HCkJsonObjectW jsonId, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSecretsW_getSecretStr(HCkSecretsW cHandle, HCkJsonObjectW jsonId);
CK_C_VISIBLE_PUBLIC HCkTaskW CkSecretsW_GetSecretStrAsync(HCkSecretsW cHandle, HCkJsonObjectW jsonId);
CK_C_VISIBLE_PUBLIC BOOL CkSecretsW_ListSecrets(HCkSecretsW cHandle, HCkJsonObjectW json, HCkJsonObjectW jsonOut);
CK_C_VISIBLE_PUBLIC HCkTaskW CkSecretsW_ListSecretsAsync(HCkSecretsW cHandle, HCkJsonObjectW json, HCkJsonObjectW jsonOut);
CK_C_VISIBLE_PUBLIC BOOL CkSecretsW_SetBootstrapSecret(HCkSecretsW cHandle, HCkJsonObjectW jsonId, HCkSecretsW secretContent);
CK_C_VISIBLE_PUBLIC BOOL CkSecretsW_UpdateSecretBd(HCkSecretsW cHandle, HCkJsonObjectW jsonId, HCkBinDataW secret);
CK_C_VISIBLE_PUBLIC HCkTaskW CkSecretsW_UpdateSecretBdAsync(HCkSecretsW cHandle, HCkJsonObjectW jsonId, HCkBinDataW secret);
CK_C_VISIBLE_PUBLIC BOOL CkSecretsW_UpdateSecretJson(HCkSecretsW cHandle, HCkJsonObjectW jsonId, HCkJsonObjectW secret);
CK_C_VISIBLE_PUBLIC HCkTaskW CkSecretsW_UpdateSecretJsonAsync(HCkSecretsW cHandle, HCkJsonObjectW jsonId, HCkJsonObjectW secret);
CK_C_VISIBLE_PUBLIC BOOL CkSecretsW_UpdateSecretSb(HCkSecretsW cHandle, HCkJsonObjectW jsonId, HCkStringBuilderW sb);
CK_C_VISIBLE_PUBLIC HCkTaskW CkSecretsW_UpdateSecretSbAsync(HCkSecretsW cHandle, HCkJsonObjectW jsonId, HCkStringBuilderW sb);
CK_C_VISIBLE_PUBLIC BOOL CkSecretsW_UpdateSecretStr(HCkSecretsW cHandle, HCkJsonObjectW jsonId, const wchar_t *secret);
CK_C_VISIBLE_PUBLIC HCkTaskW CkSecretsW_UpdateSecretStrAsync(HCkSecretsW cHandle, HCkJsonObjectW jsonId, const wchar_t *secret);
#endif
