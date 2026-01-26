// This is a generated source file for Chilkat version 11.3.0
#ifndef _C_CkAiWH
#define _C_CkAiWH
#include "chilkatDefs.h"

#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkAiW_setAbortCheck(HCkAiW cHandle, BOOL (*fnAbortCheck)(void));
CK_C_VISIBLE_PUBLIC void CkAiW_setPercentDone(HCkAiW cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_C_VISIBLE_PUBLIC void CkAiW_setProgressInfo(HCkAiW cHandle, void (*fnProgressInfo)(const wchar_t *name, const wchar_t *value));
CK_C_VISIBLE_PUBLIC void CkAiW_setTaskCompleted(HCkAiW cHandle, void (*fnTaskCompleted)(HCkTaskW hTask));

CK_C_VISIBLE_PUBLIC HCkAiW CkAiW_Create(void);
CK_C_VISIBLE_PUBLIC void CkAiW_Dispose(HCkAiW handle);
CK_C_VISIBLE_PUBLIC void CkAiW_getApiKey(HCkAiW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkAiW_putApiKey(HCkAiW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkAiW_apiKey(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC void CkAiW_getApiKeyHeader(HCkAiW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkAiW_putApiKeyHeader(HCkAiW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkAiW_apiKeyHeader(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC void CkAiW_getApiSpec(HCkAiW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkAiW_putApiSpec(HCkAiW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkAiW_apiSpec(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC void CkAiW_getBaseUrl(HCkAiW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkAiW_putBaseUrl(HCkAiW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkAiW_baseUrl(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC void CkAiW_getDebugLogFilePath(HCkAiW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkAiW_putDebugLogFilePath(HCkAiW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkAiW_debugLogFilePath(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_getFullTranscript(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC void  CkAiW_putFullTranscript(HCkAiW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC int CkAiW_getHeartbeatMs(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC void  CkAiW_putHeartbeatMs(HCkAiW cHandle, int newVal);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_getHostedConvo(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC void  CkAiW_putHostedConvo(HCkAiW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC int CkAiW_getIdleTimeoutMs(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC void  CkAiW_putIdleTimeoutMs(HCkAiW cHandle, int newVal);
CK_C_VISIBLE_PUBLIC void CkAiW_getLastErrorHtml(HCkAiW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkAiW_lastErrorHtml(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC void CkAiW_getLastErrorText(HCkAiW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkAiW_lastErrorText(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC void CkAiW_getLastErrorXml(HCkAiW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkAiW_lastErrorXml(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_getLastMethodSuccess(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC void  CkAiW_putLastMethodSuccess(HCkAiW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkAiW_getModel(HCkAiW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkAiW_putModel(HCkAiW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkAiW_model(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC void CkAiW_getProvider(HCkAiW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkAiW_putProvider(HCkAiW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkAiW_provider(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC int CkAiW_getResponseStatusCode(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC void CkAiW_getSelectedConvo(HCkAiW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkAiW_putSelectedConvo(HCkAiW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkAiW_selectedConvo(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_getStreaming(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC void  CkAiW_putStreaming(HCkAiW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkAiW_getUncommonOptions(HCkAiW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkAiW_putUncommonOptions(HCkAiW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkAiW_uncommonOptions(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_getVerboseLogging(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC void  CkAiW_putVerboseLogging(HCkAiW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkAiW_getVersion(HCkAiW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkAiW_version(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_Ask(HCkAiW cHandle, const wchar_t *outputType);
CK_C_VISIBLE_PUBLIC HCkTaskW CkAiW_AskAsync(HCkAiW cHandle, const wchar_t *outputType);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_DeleteConvo(HCkAiW cHandle, const wchar_t *name);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_ExportConvo(HCkAiW cHandle, const wchar_t *name, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC void CkAiW_GetLastJsonData(HCkAiW cHandle, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_GetModels(HCkAiW cHandle, HCkStringTableW st);
CK_C_VISIBLE_PUBLIC HCkTaskW CkAiW_GetModelsAsync(HCkAiW cHandle, HCkStringTableW st);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_GetOutputText(HCkAiW cHandle, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkAiW_getOutputText(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_GetOutputTextSb(HCkAiW cHandle, HCkStringBuilderW sb);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_ImportConvo(HCkAiW cHandle, const wchar_t *name, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_InputAddFileData(HCkAiW cHandle, const wchar_t *filename, HCkBinDataW bd, const wchar_t *summary);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_InputAddFileUrl(HCkAiW cHandle, const wchar_t *url, const wchar_t *summary);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_InputAddImageData(HCkAiW cHandle, HCkBinDataW bd, const wchar_t *summary);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_InputAddImageUrl(HCkAiW cHandle, const wchar_t *url, const wchar_t *summary);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_InputAddText(HCkAiW cHandle, const wchar_t *text);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_InputAddTextSb(HCkAiW cHandle, HCkStringBuilderW sb);
CK_C_VISIBLE_PUBLIC void CkAiW_InputClear(HCkAiW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_ListConvos(HCkAiW cHandle, HCkStringTableW st);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_NewConvo(HCkAiW cHandle, const wchar_t *name, const wchar_t *sysMsg, const wchar_t *devMsg);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_NextAiEvent(HCkAiW cHandle, int maxWaitMs, HCkStringBuilderW sbName, HCkStringBuilderW sbDelta);
CK_C_VISIBLE_PUBLIC int CkAiW_PollAi(HCkAiW cHandle, BOOL abort);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_SetAskParams(HCkAiW cHandle, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_SetConnectionSettings(HCkAiW cHandle, HCkSocketW sock);
CK_C_VISIBLE_PUBLIC BOOL CkAiW_SetProviderParams(HCkAiW cHandle, HCkJsonObjectW json);
CK_C_VISIBLE_PUBLIC void CkAiW_SleepMs(HCkAiW cHandle, int millisec);
#endif
