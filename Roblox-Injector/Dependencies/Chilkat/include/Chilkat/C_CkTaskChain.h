// This is a generated source file for Chilkat version 11.3.0
#ifndef _C_CkTaskChain_H
#define _C_CkTaskChain_H
#include "chilkatDefs.h"
#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkTaskChain_setAbortCheck(HCkTaskChain cHandle, BOOL (*fnAbortCheck)(void));
CK_C_VISIBLE_PUBLIC void CkTaskChain_setPercentDone(HCkTaskChain cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_C_VISIBLE_PUBLIC void CkTaskChain_setProgressInfo(HCkTaskChain cHandle, void (*fnProgressInfo)(const char *name, const char *value));
CK_C_VISIBLE_PUBLIC void CkTaskChain_setTaskCompleted(HCkTaskChain cHandle, void (*fnTaskCompleted)(HCkTask hTask));

CK_C_VISIBLE_PUBLIC void CkTaskChain_setAbortCheck2(HCkTaskChain cHandle, BOOL (*fnAbortCheck2)(void *pContext));
CK_C_VISIBLE_PUBLIC void CkTaskChain_setPercentDone2(HCkTaskChain cHandle, BOOL (*fnPercentDone2)(int pctDone, void *pContext));
CK_C_VISIBLE_PUBLIC void CkTaskChain_setProgressInfo2(HCkTaskChain cHandle, void (*fnProgressInfo2)(const char *name, const char *value, void *pContext));
CK_C_VISIBLE_PUBLIC void CkTaskChain_setTaskCompleted2(HCkTaskChain cHandle, void (*fnTaskCompleted2)(HCkTask hTask, void *pContext));

// setExternalProgress is for C callback functions defined in the external programming language (such as Go)
CK_C_VISIBLE_PUBLIC void CkTaskChain_setExternalProgress(HCkTaskChain cHandle, BOOL on);
CK_C_VISIBLE_PUBLIC void CkTaskChain_setCallbackContext(HCkTaskChain cHandle, void *pContext);

CK_C_VISIBLE_PUBLIC HCkTaskChain CkTaskChain_Create(void);
CK_C_VISIBLE_PUBLIC HCkTaskChain CkTaskChain_Create2(int progLang);
CK_C_VISIBLE_PUBLIC void CkTaskChain_Dispose(HCkTaskChain handle);
CK_C_VISIBLE_PUBLIC void CkTaskChain_getDebugLogFilePath(HCkTaskChain cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkTaskChain_putDebugLogFilePath(HCkTaskChain cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkTaskChain_debugLogFilePath(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkTaskChain_getFinished(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC int CkTaskChain_getHeartbeatMs(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC void CkTaskChain_putHeartbeatMs(HCkTaskChain cHandle, int newVal);
CK_C_VISIBLE_PUBLIC BOOL CkTaskChain_getInert(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC void CkTaskChain_getLastErrorHtml(HCkTaskChain cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkTaskChain_lastErrorHtml(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC void CkTaskChain_getLastErrorText(HCkTaskChain cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkTaskChain_lastErrorText(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC void CkTaskChain_getLastErrorXml(HCkTaskChain cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkTaskChain_lastErrorXml(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkTaskChain_getLastMethodSuccess(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC void CkTaskChain_putLastMethodSuccess(HCkTaskChain cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkTaskChain_getLive(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC int CkTaskChain_getNumTasks(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC void CkTaskChain_getStatus(HCkTaskChain cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkTaskChain_status(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC int CkTaskChain_getStatusInt(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkTaskChain_getStopOnFailedTask(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC void CkTaskChain_putStopOnFailedTask(HCkTaskChain cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkTaskChain_getUtf8(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC void CkTaskChain_putUtf8(HCkTaskChain cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkTaskChain_getVerboseLogging(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC void CkTaskChain_putVerboseLogging(HCkTaskChain cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkTaskChain_getVersion(HCkTaskChain cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkTaskChain_version(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkTaskChain_Append(HCkTaskChain cHandle, HCkTask task);
CK_C_VISIBLE_PUBLIC BOOL CkTaskChain_Cancel(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC HCkTask CkTaskChain_GetTask(HCkTaskChain cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkTaskChain_Run(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkTaskChain_RunSynchronously(HCkTaskChain cHandle);
CK_C_VISIBLE_PUBLIC void CkTaskChain_SleepMs(HCkTaskChain cHandle, int numMs);
CK_C_VISIBLE_PUBLIC BOOL CkTaskChain_Wait(HCkTaskChain cHandle, int maxWaitMs);
#endif
