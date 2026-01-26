// This is a generated source file for Chilkat version 11.3.0
#ifndef _C_CkBinDataWH
#define _C_CkBinDataWH
#include "chilkatDefs.h"

#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC HCkBinDataW CkBinDataW_Create(void);
CK_C_VISIBLE_PUBLIC void CkBinDataW_Dispose(HCkBinDataW handle);
CK_C_VISIBLE_PUBLIC const unsigned char *CkBinDataW_getBinaryDataPtr(HCkBinDataW handle);
CK_C_VISIBLE_PUBLIC void CkBinDataW_getDebugLogFilePath(HCkBinDataW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkBinDataW_putDebugLogFilePath(HCkBinDataW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkBinDataW_debugLogFilePath(HCkBinDataW cHandle);
CK_C_VISIBLE_PUBLIC void CkBinDataW_getLastErrorHtml(HCkBinDataW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkBinDataW_lastErrorHtml(HCkBinDataW cHandle);
CK_C_VISIBLE_PUBLIC void CkBinDataW_getLastErrorText(HCkBinDataW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkBinDataW_lastErrorText(HCkBinDataW cHandle);
CK_C_VISIBLE_PUBLIC void CkBinDataW_getLastErrorXml(HCkBinDataW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkBinDataW_lastErrorXml(HCkBinDataW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_getLastMethodSuccess(HCkBinDataW cHandle);
CK_C_VISIBLE_PUBLIC void  CkBinDataW_putLastMethodSuccess(HCkBinDataW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC int CkBinDataW_getNumBytes(HCkBinDataW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_getVerboseLogging(HCkBinDataW cHandle);
CK_C_VISIBLE_PUBLIC void  CkBinDataW_putVerboseLogging(HCkBinDataW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkBinDataW_getVersion(HCkBinDataW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkBinDataW_version(HCkBinDataW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_AppendBd(HCkBinDataW cHandle, HCkBinDataW binData);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_AppendBinary(HCkBinDataW cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_AppendBom(HCkBinDataW cHandle, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_AppendByte(HCkBinDataW cHandle, int byteValue);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_AppendCountedString(HCkBinDataW cHandle, int numCountBytes, BOOL bigEndian, const wchar_t *str, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_AppendData(HCkBinDataW cHandle, const void *data, int numBytes);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_AppendEncoded(HCkBinDataW cHandle, const wchar_t *encData, const wchar_t *encoding);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_AppendEncodedSb(HCkBinDataW cHandle, HCkStringBuilderW sb, const wchar_t *encoding);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_AppendInt2(HCkBinDataW cHandle, int value, BOOL littleEndian);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_AppendInt4(HCkBinDataW cHandle, int value, BOOL littleEndian);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_AppendPadded(HCkBinDataW cHandle, const wchar_t *str, const wchar_t *charset, BOOL padWithSpace, int fieldLen);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_AppendSb(HCkBinDataW cHandle, HCkStringBuilderW sb, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_AppendString(HCkBinDataW cHandle, const wchar_t *str, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC void CkBinDataW_ByteSwap(HCkBinDataW cHandle, int size);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_CharsetConvert(HCkBinDataW cHandle, const wchar_t *fromCharset, const wchar_t *toCharset, BOOL allOrNone);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_Clear(HCkBinDataW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_ContentsEqual(HCkBinDataW cHandle, HCkBinDataW binData);
CK_C_VISIBLE_PUBLIC int CkBinDataW_FindString(HCkBinDataW cHandle, const wchar_t *str, int startIdx, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_GetBinary(HCkBinDataW cHandle, HCkByteData outBytes);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_GetBinaryChunk(HCkBinDataW cHandle, int offset, int numBytes, HCkByteData outBytes);
CK_C_VISIBLE_PUBLIC int CkBinDataW_GetByte(HCkBinDataW cHandle, int index);
CK_C_VISIBLE_PUBLIC const void * CkBinDataW_GetData(HCkBinDataW cHandle);
CK_C_VISIBLE_PUBLIC const void * CkBinDataW_GetDataChunk(HCkBinDataW cHandle, int offset, int numBytes);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_GetEncoded(HCkBinDataW cHandle, const wchar_t *encoding, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkBinDataW_getEncoded(HCkBinDataW cHandle, const wchar_t *encoding);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_GetEncodedChunk(HCkBinDataW cHandle, int offset, int numBytes, const wchar_t *encoding, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkBinDataW_getEncodedChunk(HCkBinDataW cHandle, int offset, int numBytes, const wchar_t *encoding);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_GetEncodedSb(HCkBinDataW cHandle, const wchar_t *encoding, HCkStringBuilderW sb);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_GetHash(HCkBinDataW cHandle, const wchar_t *algorithm, const wchar_t *encoding, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkBinDataW_getHash(HCkBinDataW cHandle, const wchar_t *algorithm, const wchar_t *encoding);
CK_C_VISIBLE_PUBLIC int CkBinDataW_GetInt2(HCkBinDataW cHandle, int index, BOOL littleEndian);
CK_C_VISIBLE_PUBLIC int CkBinDataW_GetInt4(HCkBinDataW cHandle, int index, BOOL littleEndian);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_GetString(HCkBinDataW cHandle, const wchar_t *charset, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkBinDataW_getString(HCkBinDataW cHandle, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_GetTextChunk(HCkBinDataW cHandle, int startIdx, int numBytes, const wchar_t *charset, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkBinDataW_getTextChunk(HCkBinDataW cHandle, int startIdx, int numBytes, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC unsigned long CkBinDataW_GetUInt2(HCkBinDataW cHandle, int index, BOOL littleEndian);
CK_C_VISIBLE_PUBLIC unsigned long CkBinDataW_GetUInt4(HCkBinDataW cHandle, int index, BOOL littleEndian);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_IsValidUtf8(HCkBinDataW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_LoadBinary(HCkBinDataW cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_LoadEncoded(HCkBinDataW cHandle, const wchar_t *encData, const wchar_t *encoding);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_LoadFile(HCkBinDataW cHandle, const wchar_t *path);
CK_C_VISIBLE_PUBLIC void CkBinDataW_RemoveByteVal(HCkBinDataW cHandle, int value);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_RemoveChunk(HCkBinDataW cHandle, int offset, int numBytes);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_SecureClear(HCkBinDataW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_WriteAppendFile(HCkBinDataW cHandle, const wchar_t *path);
CK_C_VISIBLE_PUBLIC BOOL CkBinDataW_WriteFile(HCkBinDataW cHandle, const wchar_t *path);
#endif
