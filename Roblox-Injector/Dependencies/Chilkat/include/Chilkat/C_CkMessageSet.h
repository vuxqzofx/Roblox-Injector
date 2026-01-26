// This is a generated source file for Chilkat version 11.3.0
#ifndef _C_CkMessageSet_H
#define _C_CkMessageSet_H
#include "chilkatDefs.h"
#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC HCkMessageSet CkMessageSet_Create(void);
CK_C_VISIBLE_PUBLIC HCkMessageSet CkMessageSet_Create2(int progLang);
CK_C_VISIBLE_PUBLIC void CkMessageSet_Dispose(HCkMessageSet handle);
CK_C_VISIBLE_PUBLIC int CkMessageSet_getCount(HCkMessageSet cHandle);
CK_C_VISIBLE_PUBLIC void CkMessageSet_getDebugLogFilePath(HCkMessageSet cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkMessageSet_putDebugLogFilePath(HCkMessageSet cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkMessageSet_debugLogFilePath(HCkMessageSet cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkMessageSet_getHasUids(HCkMessageSet cHandle);
CK_C_VISIBLE_PUBLIC void CkMessageSet_putHasUids(HCkMessageSet cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkMessageSet_getLastErrorHtml(HCkMessageSet cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkMessageSet_lastErrorHtml(HCkMessageSet cHandle);
CK_C_VISIBLE_PUBLIC void CkMessageSet_getLastErrorText(HCkMessageSet cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkMessageSet_lastErrorText(HCkMessageSet cHandle);
CK_C_VISIBLE_PUBLIC void CkMessageSet_getLastErrorXml(HCkMessageSet cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkMessageSet_lastErrorXml(HCkMessageSet cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkMessageSet_getLastMethodSuccess(HCkMessageSet cHandle);
CK_C_VISIBLE_PUBLIC void CkMessageSet_putLastMethodSuccess(HCkMessageSet cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkMessageSet_getUtf8(HCkMessageSet cHandle);
CK_C_VISIBLE_PUBLIC void CkMessageSet_putUtf8(HCkMessageSet cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkMessageSet_getVerboseLogging(HCkMessageSet cHandle);
CK_C_VISIBLE_PUBLIC void CkMessageSet_putVerboseLogging(HCkMessageSet cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkMessageSet_getVersion(HCkMessageSet cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkMessageSet_version(HCkMessageSet cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkMessageSet_ContainsId(HCkMessageSet cHandle, unsigned long msgId);
CK_C_VISIBLE_PUBLIC BOOL CkMessageSet_FromCompactString(HCkMessageSet cHandle, const char *str);
CK_C_VISIBLE_PUBLIC unsigned long CkMessageSet_GetId(HCkMessageSet cHandle, int index);
CK_C_VISIBLE_PUBLIC void CkMessageSet_InsertId(HCkMessageSet cHandle, unsigned long id);
CK_C_VISIBLE_PUBLIC BOOL CkMessageSet_LoadTaskResult(HCkMessageSet cHandle, HCkTask task);
CK_C_VISIBLE_PUBLIC void CkMessageSet_RemoveId(HCkMessageSet cHandle, unsigned long id);
CK_C_VISIBLE_PUBLIC void CkMessageSet_Subtract(HCkMessageSet cHandle, HCkMessageSet msgSet);
CK_C_VISIBLE_PUBLIC BOOL CkMessageSet_ToCommaSeparatedStr(HCkMessageSet cHandle, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkMessageSet_toCommaSeparatedStr(HCkMessageSet cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkMessageSet_ToCompactString(HCkMessageSet cHandle, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkMessageSet_toCompactString(HCkMessageSet cHandle);
#endif
