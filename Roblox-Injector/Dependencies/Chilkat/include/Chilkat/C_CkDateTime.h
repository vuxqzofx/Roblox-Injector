// This is a generated source file for Chilkat version 11.3.0
#ifndef _C_CkDateTime_H
#define _C_CkDateTime_H
#include "chilkatDefs.h"
#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC HCkDateTime CkDateTime_Create(void);
CK_C_VISIBLE_PUBLIC HCkDateTime CkDateTime_Create2(int progLang);
CK_C_VISIBLE_PUBLIC void CkDateTime_Dispose(HCkDateTime handle);
CK_C_VISIBLE_PUBLIC void CkDateTime_getDebugLogFilePath(HCkDateTime cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkDateTime_putDebugLogFilePath(HCkDateTime cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkDateTime_debugLogFilePath(HCkDateTime cHandle);
CK_C_VISIBLE_PUBLIC int CkDateTime_getIsDst(HCkDateTime cHandle);
CK_C_VISIBLE_PUBLIC void CkDateTime_getLastErrorHtml(HCkDateTime cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkDateTime_lastErrorHtml(HCkDateTime cHandle);
CK_C_VISIBLE_PUBLIC void CkDateTime_getLastErrorText(HCkDateTime cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkDateTime_lastErrorText(HCkDateTime cHandle);
CK_C_VISIBLE_PUBLIC void CkDateTime_getLastErrorXml(HCkDateTime cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkDateTime_lastErrorXml(HCkDateTime cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_getLastMethodSuccess(HCkDateTime cHandle);
CK_C_VISIBLE_PUBLIC void CkDateTime_putLastMethodSuccess(HCkDateTime cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC int CkDateTime_getUtcOffset(HCkDateTime cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_getUtf8(HCkDateTime cHandle);
CK_C_VISIBLE_PUBLIC void CkDateTime_putUtf8(HCkDateTime cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_getVerboseLogging(HCkDateTime cHandle);
CK_C_VISIBLE_PUBLIC void CkDateTime_putVerboseLogging(HCkDateTime cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkDateTime_getVersion(HCkDateTime cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkDateTime_version(HCkDateTime cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_AddDays(HCkDateTime cHandle, int numDays);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_AddSeconds(HCkDateTime cHandle, int numSeconds);
CK_C_VISIBLE_PUBLIC void CkDateTime_DeSerialize(HCkDateTime cHandle, const char *serializedDateTime);
CK_C_VISIBLE_PUBLIC int CkDateTime_DiffSeconds(HCkDateTime cHandle, HCkDateTime dateTimeArg);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_ExpiresWithin(HCkDateTime cHandle, int n, const char *units);
CK_C_VISIBLE_PUBLIC __int64 CkDateTime_GetAsDateTimeTicks(HCkDateTime cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC unsigned long CkDateTime_GetAsDosDate(HCkDateTime cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_GetAsIso8601(HCkDateTime cHandle, const char *formatStr, BOOL bLocal, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkDateTime_getAsIso8601(HCkDateTime cHandle, const char *formatStr, BOOL bLocal);
CK_C_VISIBLE_PUBLIC double CkDateTime_GetAsOleDate(HCkDateTime cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_GetAsRfc822(HCkDateTime cHandle, BOOL bLocal, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkDateTime_getAsRfc822(HCkDateTime cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_GetAsTimestamp(HCkDateTime cHandle, BOOL bLocal, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkDateTime_getAsTimestamp(HCkDateTime cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC unsigned long CkDateTime_GetAsUnixTime(HCkDateTime cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC __int64 CkDateTime_GetAsUnixTime64(HCkDateTime cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC double CkDateTime_GetAsUnixTimeDbl(HCkDateTime cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_GetAsUnixTimeStr(HCkDateTime cHandle, BOOL bLocal, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkDateTime_getAsUnixTimeStr(HCkDateTime cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC HCkDtObj CkDateTime_GetDtObj(HCkDateTime cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_LoadTaskResult(HCkDateTime cHandle, HCkTask task);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_OlderThan(HCkDateTime cHandle, int n, const char *units);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_Serialize(HCkDateTime cHandle, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkDateTime_serialize(HCkDateTime cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_SetFromCurrentSystemTime(HCkDateTime cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_SetFromDateTimeTicks(HCkDateTime cHandle, BOOL bLocal, __int64 ticks);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_SetFromDosDate(HCkDateTime cHandle, BOOL bLocal, unsigned long t);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_SetFromDtObj(HCkDateTime cHandle, HCkDtObj dt);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_SetFromNtpServer(HCkDateTime cHandle, const char *jsonStr);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_SetFromNtpTime(HCkDateTime cHandle, int ntpSeconds);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_SetFromOleDate(HCkDateTime cHandle, BOOL bLocal, double dt);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_SetFromRfc822(HCkDateTime cHandle, const char *rfc822Str);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_SetFromTimestamp(HCkDateTime cHandle, const char *timestamp);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_SetFromUlid(HCkDateTime cHandle, BOOL bLocal, const char *ulid);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_SetFromUnixTime(HCkDateTime cHandle, BOOL bLocal, unsigned long t);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_SetFromUnixTime64(HCkDateTime cHandle, BOOL bLocal, __int64 t);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_SetFromUnixTimeDbl(HCkDateTime cHandle, BOOL bLocal, double d);
CK_C_VISIBLE_PUBLIC void CkDateTime_ToDtObj(HCkDateTime cHandle, BOOL bLocal, HCkDtObj dtObj);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_UlidGenerate(HCkDateTime cHandle, BOOL bLocal, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkDateTime_ulidGenerate(HCkDateTime cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_UlidIncrement(HCkDateTime cHandle, HCkStringBuilder ulid);
CK_C_VISIBLE_PUBLIC BOOL CkDateTime_UlidValidate(HCkDateTime cHandle, const char *ulid);
#endif
