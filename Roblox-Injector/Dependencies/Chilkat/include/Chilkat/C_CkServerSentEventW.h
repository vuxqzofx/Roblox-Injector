// This is a generated source file for Chilkat version 11.3.0
#ifndef _C_CkServerSentEventWH
#define _C_CkServerSentEventWH
#include "chilkatDefs.h"

#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC HCkServerSentEventW CkServerSentEventW_Create(void);
CK_C_VISIBLE_PUBLIC void CkServerSentEventW_Dispose(HCkServerSentEventW handle);
CK_C_VISIBLE_PUBLIC void CkServerSentEventW_getData(HCkServerSentEventW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkServerSentEventW_data(HCkServerSentEventW cHandle);
CK_C_VISIBLE_PUBLIC void CkServerSentEventW_getDebugLogFilePath(HCkServerSentEventW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkServerSentEventW_putDebugLogFilePath(HCkServerSentEventW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkServerSentEventW_debugLogFilePath(HCkServerSentEventW cHandle);
CK_C_VISIBLE_PUBLIC void CkServerSentEventW_getEventName(HCkServerSentEventW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkServerSentEventW_eventName(HCkServerSentEventW cHandle);
CK_C_VISIBLE_PUBLIC void CkServerSentEventW_getLastErrorHtml(HCkServerSentEventW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkServerSentEventW_lastErrorHtml(HCkServerSentEventW cHandle);
CK_C_VISIBLE_PUBLIC void CkServerSentEventW_getLastErrorText(HCkServerSentEventW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkServerSentEventW_lastErrorText(HCkServerSentEventW cHandle);
CK_C_VISIBLE_PUBLIC void CkServerSentEventW_getLastErrorXml(HCkServerSentEventW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkServerSentEventW_lastErrorXml(HCkServerSentEventW cHandle);
CK_C_VISIBLE_PUBLIC void CkServerSentEventW_getLastEventId(HCkServerSentEventW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkServerSentEventW_lastEventId(HCkServerSentEventW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkServerSentEventW_getLastMethodSuccess(HCkServerSentEventW cHandle);
CK_C_VISIBLE_PUBLIC void  CkServerSentEventW_putLastMethodSuccess(HCkServerSentEventW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC int CkServerSentEventW_getRetry(HCkServerSentEventW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkServerSentEventW_getVerboseLogging(HCkServerSentEventW cHandle);
CK_C_VISIBLE_PUBLIC void  CkServerSentEventW_putVerboseLogging(HCkServerSentEventW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkServerSentEventW_getVersion(HCkServerSentEventW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkServerSentEventW_version(HCkServerSentEventW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkServerSentEventW_LoadEvent(HCkServerSentEventW cHandle, const wchar_t *eventText);
#endif
