// This is a generated source file for Chilkat version 11.3.0
#ifndef _C_CkAi_H
#define _C_CkAi_H
#include "chilkatDefs.h"
#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkAi_setAbortCheck(HCkAi cHandle, BOOL (*fnAbortCheck)(void));
CK_C_VISIBLE_PUBLIC void CkAi_setPercentDone(HCkAi cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_C_VISIBLE_PUBLIC void CkAi_setProgressInfo(HCkAi cHandle, void (*fnProgressInfo)(const char *name, const char *value));
CK_C_VISIBLE_PUBLIC void CkAi_setTaskCompleted(HCkAi cHandle, void (*fnTaskCompleted)(HCkTask hTask));

CK_C_VISIBLE_PUBLIC void CkAi_setAbortCheck2(HCkAi cHandle, BOOL (*fnAbortCheck2)(void *pContext));
CK_C_VISIBLE_PUBLIC void CkAi_setPercentDone2(HCkAi cHandle, BOOL (*fnPercentDone2)(int pctDone, void *pContext));
CK_C_VISIBLE_PUBLIC void CkAi_setProgressInfo2(HCkAi cHandle, void (*fnProgressInfo2)(const char *name, const char *value, void *pContext));
CK_C_VISIBLE_PUBLIC void CkAi_setTaskCompleted2(HCkAi cHandle, void (*fnTaskCompleted2)(HCkTask hTask, void *pContext));

// setExternalProgress is for C callback functions defined in the external programming language (such as Go)
CK_C_VISIBLE_PUBLIC void CkAi_setExternalProgress(HCkAi cHandle, BOOL on);
CK_C_VISIBLE_PUBLIC void CkAi_setCallbackContext(HCkAi cHandle, void *pContext);

CK_C_VISIBLE_PUBLIC HCkAi CkAi_Create(void);
CK_C_VISIBLE_PUBLIC HCkAi CkAi_Create2(int progLang);
CK_C_VISIBLE_PUBLIC void CkAi_Dispose(HCkAi handle);
CK_C_VISIBLE_PUBLIC void CkAi_getApiKey(HCkAi cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkAi_putApiKey(HCkAi cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkAi_apiKey(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC void CkAi_getApiKeyHeader(HCkAi cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkAi_putApiKeyHeader(HCkAi cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkAi_apiKeyHeader(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC void CkAi_getApiSpec(HCkAi cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkAi_putApiSpec(HCkAi cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkAi_apiSpec(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC void CkAi_getBaseUrl(HCkAi cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkAi_putBaseUrl(HCkAi cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkAi_baseUrl(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC void CkAi_getDebugLogFilePath(HCkAi cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkAi_putDebugLogFilePath(HCkAi cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkAi_debugLogFilePath(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkAi_getFullTranscript(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC void CkAi_putFullTranscript(HCkAi cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC int CkAi_getHeartbeatMs(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC void CkAi_putHeartbeatMs(HCkAi cHandle, int newVal);
CK_C_VISIBLE_PUBLIC BOOL CkAi_getHostedConvo(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC void CkAi_putHostedConvo(HCkAi cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC int CkAi_getIdleTimeoutMs(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC void CkAi_putIdleTimeoutMs(HCkAi cHandle, int newVal);
CK_C_VISIBLE_PUBLIC void CkAi_getLastErrorHtml(HCkAi cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkAi_lastErrorHtml(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC void CkAi_getLastErrorText(HCkAi cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkAi_lastErrorText(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC void CkAi_getLastErrorXml(HCkAi cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkAi_lastErrorXml(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkAi_getLastMethodSuccess(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC void CkAi_putLastMethodSuccess(HCkAi cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkAi_getModel(HCkAi cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkAi_putModel(HCkAi cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkAi_model(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC void CkAi_getProvider(HCkAi cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkAi_putProvider(HCkAi cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkAi_provider(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC int CkAi_getResponseStatusCode(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC void CkAi_getSelectedConvo(HCkAi cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkAi_putSelectedConvo(HCkAi cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkAi_selectedConvo(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkAi_getStreaming(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC void CkAi_putStreaming(HCkAi cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkAi_getUncommonOptions(HCkAi cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkAi_putUncommonOptions(HCkAi cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkAi_uncommonOptions(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkAi_getUtf8(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC void CkAi_putUtf8(HCkAi cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkAi_getVerboseLogging(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC void CkAi_putVerboseLogging(HCkAi cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkAi_getVersion(HCkAi cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkAi_version(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkAi_Ask(HCkAi cHandle, const char *outputType);
CK_C_VISIBLE_PUBLIC HCkTask CkAi_AskAsync(HCkAi cHandle, const char *outputType);
CK_C_VISIBLE_PUBLIC BOOL CkAi_DeleteConvo(HCkAi cHandle, const char *name);
CK_C_VISIBLE_PUBLIC BOOL CkAi_ExportConvo(HCkAi cHandle, const char *name, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC void CkAi_GetLastJsonData(HCkAi cHandle, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC BOOL CkAi_GetModels(HCkAi cHandle, HCkStringTable st);
CK_C_VISIBLE_PUBLIC HCkTask CkAi_GetModelsAsync(HCkAi cHandle, HCkStringTable st);
CK_C_VISIBLE_PUBLIC BOOL CkAi_GetOutputText(HCkAi cHandle, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkAi_getOutputText(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkAi_GetOutputTextSb(HCkAi cHandle, HCkStringBuilder sb);
CK_C_VISIBLE_PUBLIC BOOL CkAi_ImportConvo(HCkAi cHandle, const char *name, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC BOOL CkAi_InputAddFileData(HCkAi cHandle, const char *filename, HCkBinData bd, const char *summary);
CK_C_VISIBLE_PUBLIC BOOL CkAi_InputAddFileUrl(HCkAi cHandle, const char *url, const char *summary);
CK_C_VISIBLE_PUBLIC BOOL CkAi_InputAddImageData(HCkAi cHandle, HCkBinData bd, const char *summary);
CK_C_VISIBLE_PUBLIC BOOL CkAi_InputAddImageUrl(HCkAi cHandle, const char *url, const char *summary);
CK_C_VISIBLE_PUBLIC BOOL CkAi_InputAddText(HCkAi cHandle, const char *text);
CK_C_VISIBLE_PUBLIC BOOL CkAi_InputAddTextSb(HCkAi cHandle, HCkStringBuilder sb);
CK_C_VISIBLE_PUBLIC void CkAi_InputClear(HCkAi cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkAi_ListConvos(HCkAi cHandle, HCkStringTable st);
CK_C_VISIBLE_PUBLIC BOOL CkAi_NewConvo(HCkAi cHandle, const char *name, const char *sysMsg, const char *devMsg);
CK_C_VISIBLE_PUBLIC BOOL CkAi_NextAiEvent(HCkAi cHandle, int maxWaitMs, HCkStringBuilder sbName, HCkStringBuilder sbDelta);
CK_C_VISIBLE_PUBLIC int CkAi_PollAi(HCkAi cHandle, BOOL abort);
CK_C_VISIBLE_PUBLIC BOOL CkAi_SetAskParams(HCkAi cHandle, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC BOOL CkAi_SetConnectionSettings(HCkAi cHandle, HCkSocket sock);
CK_C_VISIBLE_PUBLIC BOOL CkAi_SetProviderParams(HCkAi cHandle, HCkJsonObject json);
CK_C_VISIBLE_PUBLIC void CkAi_SleepMs(HCkAi cHandle, int millisec);
#endif
