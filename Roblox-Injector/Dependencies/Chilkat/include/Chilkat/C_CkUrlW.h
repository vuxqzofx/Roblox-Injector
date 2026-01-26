// This is a generated source file for Chilkat version 11.3.0
#ifndef _C_CkUrlWH
#define _C_CkUrlWH
#include "chilkatDefs.h"

#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC HCkUrlW CkUrlW_Create(void);
CK_C_VISIBLE_PUBLIC void CkUrlW_Dispose(HCkUrlW handle);
CK_C_VISIBLE_PUBLIC void CkUrlW_getDebugLogFilePath(HCkUrlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkUrlW_putDebugLogFilePath(HCkUrlW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkUrlW_debugLogFilePath(HCkUrlW cHandle);
CK_C_VISIBLE_PUBLIC void CkUrlW_getFrag(HCkUrlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkUrlW_frag(HCkUrlW cHandle);
CK_C_VISIBLE_PUBLIC void CkUrlW_getHost(HCkUrlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkUrlW_host(HCkUrlW cHandle);
CK_C_VISIBLE_PUBLIC void CkUrlW_getHostType(HCkUrlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkUrlW_hostType(HCkUrlW cHandle);
CK_C_VISIBLE_PUBLIC void CkUrlW_getLastErrorHtml(HCkUrlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkUrlW_lastErrorHtml(HCkUrlW cHandle);
CK_C_VISIBLE_PUBLIC void CkUrlW_getLastErrorText(HCkUrlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkUrlW_lastErrorText(HCkUrlW cHandle);
CK_C_VISIBLE_PUBLIC void CkUrlW_getLastErrorXml(HCkUrlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkUrlW_lastErrorXml(HCkUrlW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkUrlW_getLastMethodSuccess(HCkUrlW cHandle);
CK_C_VISIBLE_PUBLIC void  CkUrlW_putLastMethodSuccess(HCkUrlW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkUrlW_getLogin(HCkUrlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkUrlW_login(HCkUrlW cHandle);
CK_C_VISIBLE_PUBLIC void CkUrlW_getPassword(HCkUrlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkUrlW_password(HCkUrlW cHandle);
CK_C_VISIBLE_PUBLIC void CkUrlW_getPath(HCkUrlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkUrlW_path(HCkUrlW cHandle);
CK_C_VISIBLE_PUBLIC void CkUrlW_getPathWithQueryParams(HCkUrlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkUrlW_pathWithQueryParams(HCkUrlW cHandle);
CK_C_VISIBLE_PUBLIC int CkUrlW_getPort(HCkUrlW cHandle);
CK_C_VISIBLE_PUBLIC void CkUrlW_getQuery(HCkUrlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkUrlW_query(HCkUrlW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkUrlW_getSsl(HCkUrlW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkUrlW_getVerboseLogging(HCkUrlW cHandle);
CK_C_VISIBLE_PUBLIC void  CkUrlW_putVerboseLogging(HCkUrlW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkUrlW_getVersion(HCkUrlW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkUrlW_version(HCkUrlW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkUrlW_ParseUrl(HCkUrlW cHandle, const wchar_t *url);
#endif
