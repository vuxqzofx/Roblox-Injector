// This is a generated source file for Chilkat version 11.3.0
#ifndef _C_CkDateTimeWH
#define _C_CkDateTimeWH
#include "chilkatDefs.h"

#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC HCkDateTimeW CkDateTimeW_Create(void);
CK_C_VISIBLE_PUBLIC void CkDateTimeW_Dispose(HCkDateTimeW handle);
CK_C_VISIBLE_PUBLIC void CkDateTimeW_getDebugLogFilePath(HCkDateTimeW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkDateTimeW_putDebugLogFilePath(HCkDateTimeW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkDateTimeW_debugLogFilePath(HCkDateTimeW cHandle);
CK_C_VISIBLE_PUBLIC int CkDateTimeW_getIsDst(HCkDateTimeW cHandle);
CK_C_VISIBLE_PUBLIC void CkDateTimeW_getLastErrorHtml(HCkDateTimeW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkDateTimeW_lastErrorHtml(HCkDateTimeW cHandle);
CK_C_VISIBLE_PUBLIC void CkDateTimeW_getLastErrorText(HCkDateTimeW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkDateTimeW_lastErrorText(HCkDateTimeW cHandle);
CK_C_VISIBLE_PUBLIC void CkDateTimeW_getLastErrorXml(HCkDateTimeW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkDateTimeW_lastErrorXml(HCkDateTimeW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_getLastMethodSuccess(HCkDateTimeW cHandle);
CK_C_VISIBLE_PUBLIC void  CkDateTimeW_putLastMethodSuccess(HCkDateTimeW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC int CkDateTimeW_getUtcOffset(HCkDateTimeW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_getVerboseLogging(HCkDateTimeW cHandle);
CK_C_VISIBLE_PUBLIC void  CkDateTimeW_putVerboseLogging(HCkDateTimeW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkDateTimeW_getVersion(HCkDateTimeW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkDateTimeW_version(HCkDateTimeW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_AddDays(HCkDateTimeW cHandle, int numDays);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_AddSeconds(HCkDateTimeW cHandle, int numSeconds);
CK_C_VISIBLE_PUBLIC void CkDateTimeW_DeSerialize(HCkDateTimeW cHandle, const wchar_t *serializedDateTime);
CK_C_VISIBLE_PUBLIC int CkDateTimeW_DiffSeconds(HCkDateTimeW cHandle, HCkDateTimeW dateTimeArg);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_ExpiresWithin(HCkDateTimeW cHandle, int n, const wchar_t *units);
CK_C_VISIBLE_PUBLIC __int64 CkDateTimeW_GetAsDateTimeTicks(HCkDateTimeW cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC unsigned long CkDateTimeW_GetAsDosDate(HCkDateTimeW cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_GetAsIso8601(HCkDateTimeW cHandle, const wchar_t *formatStr, BOOL bLocal, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkDateTimeW_getAsIso8601(HCkDateTimeW cHandle, const wchar_t *formatStr, BOOL bLocal);
CK_C_VISIBLE_PUBLIC double CkDateTimeW_GetAsOleDate(HCkDateTimeW cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_GetAsRfc822(HCkDateTimeW cHandle, BOOL bLocal, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkDateTimeW_getAsRfc822(HCkDateTimeW cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_GetAsTimestamp(HCkDateTimeW cHandle, BOOL bLocal, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkDateTimeW_getAsTimestamp(HCkDateTimeW cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC unsigned long CkDateTimeW_GetAsUnixTime(HCkDateTimeW cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC __int64 CkDateTimeW_GetAsUnixTime64(HCkDateTimeW cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC double CkDateTimeW_GetAsUnixTimeDbl(HCkDateTimeW cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_GetAsUnixTimeStr(HCkDateTimeW cHandle, BOOL bLocal, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkDateTimeW_getAsUnixTimeStr(HCkDateTimeW cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC HCkDtObjW CkDateTimeW_GetDtObj(HCkDateTimeW cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_LoadTaskResult(HCkDateTimeW cHandle, HCkTaskW task);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_OlderThan(HCkDateTimeW cHandle, int n, const wchar_t *units);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_Serialize(HCkDateTimeW cHandle, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkDateTimeW_serialize(HCkDateTimeW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_SetFromCurrentSystemTime(HCkDateTimeW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_SetFromDateTimeTicks(HCkDateTimeW cHandle, BOOL bLocal, __int64 ticks);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_SetFromDosDate(HCkDateTimeW cHandle, BOOL bLocal, unsigned long t);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_SetFromDtObj(HCkDateTimeW cHandle, HCkDtObjW dt);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_SetFromNtpServer(HCkDateTimeW cHandle, const wchar_t *jsonStr);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_SetFromNtpTime(HCkDateTimeW cHandle, int ntpSeconds);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_SetFromOleDate(HCkDateTimeW cHandle, BOOL bLocal, double dt);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_SetFromRfc822(HCkDateTimeW cHandle, const wchar_t *rfc822Str);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_SetFromTimestamp(HCkDateTimeW cHandle, const wchar_t *timestamp);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_SetFromUlid(HCkDateTimeW cHandle, BOOL bLocal, const wchar_t *ulid);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_SetFromUnixTime(HCkDateTimeW cHandle, BOOL bLocal, unsigned long t);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_SetFromUnixTime64(HCkDateTimeW cHandle, BOOL bLocal, __int64 t);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_SetFromUnixTimeDbl(HCkDateTimeW cHandle, BOOL bLocal, double d);
CK_C_VISIBLE_PUBLIC void CkDateTimeW_ToDtObj(HCkDateTimeW cHandle, BOOL bLocal, HCkDtObjW dtObj);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_UlidGenerate(HCkDateTimeW cHandle, BOOL bLocal, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkDateTimeW_ulidGenerate(HCkDateTimeW cHandle, BOOL bLocal);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_UlidIncrement(HCkDateTimeW cHandle, HCkStringBuilderW ulid);
CK_C_VISIBLE_PUBLIC BOOL CkDateTimeW_UlidValidate(HCkDateTimeW cHandle, const wchar_t *ulid);
#endif
