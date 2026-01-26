// This is a generated source file for Chilkat version 11.3.0
#ifndef _C_CkPublicKey_H
#define _C_CkPublicKey_H
#include "chilkatDefs.h"
#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC HCkPublicKey CkPublicKey_Create(void);
CK_C_VISIBLE_PUBLIC HCkPublicKey CkPublicKey_Create2(int progLang);
CK_C_VISIBLE_PUBLIC void CkPublicKey_Dispose(HCkPublicKey handle);
CK_C_VISIBLE_PUBLIC void CkPublicKey_getDebugLogFilePath(HCkPublicKey cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkPublicKey_putDebugLogFilePath(HCkPublicKey cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkPublicKey_debugLogFilePath(HCkPublicKey cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_getEmpty(HCkPublicKey cHandle);
CK_C_VISIBLE_PUBLIC int CkPublicKey_getKeySize(HCkPublicKey cHandle);
CK_C_VISIBLE_PUBLIC void CkPublicKey_getKeyType(HCkPublicKey cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkPublicKey_keyType(HCkPublicKey cHandle);
CK_C_VISIBLE_PUBLIC void CkPublicKey_getLastErrorHtml(HCkPublicKey cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkPublicKey_lastErrorHtml(HCkPublicKey cHandle);
CK_C_VISIBLE_PUBLIC void CkPublicKey_getLastErrorText(HCkPublicKey cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkPublicKey_lastErrorText(HCkPublicKey cHandle);
CK_C_VISIBLE_PUBLIC void CkPublicKey_getLastErrorXml(HCkPublicKey cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkPublicKey_lastErrorXml(HCkPublicKey cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_getLastMethodSuccess(HCkPublicKey cHandle);
CK_C_VISIBLE_PUBLIC void CkPublicKey_putLastMethodSuccess(HCkPublicKey cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_getUtf8(HCkPublicKey cHandle);
CK_C_VISIBLE_PUBLIC void CkPublicKey_putUtf8(HCkPublicKey cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_getVerboseLogging(HCkPublicKey cHandle);
CK_C_VISIBLE_PUBLIC void CkPublicKey_putVerboseLogging(HCkPublicKey cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkPublicKey_getVersion(HCkPublicKey cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkPublicKey_version(HCkPublicKey cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_GetDer(HCkPublicKey cHandle, BOOL preferPkcs1, HCkByteData outBytes);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_GetDerBd(HCkPublicKey cHandle, BOOL preferPkcs1, HCkBinData bd);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_GetEncoded(HCkPublicKey cHandle, BOOL preferPkcs1, const char *encoding, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkPublicKey_getEncoded(HCkPublicKey cHandle, BOOL preferPkcs1, const char *encoding);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_GetJwk(HCkPublicKey cHandle, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkPublicKey_getJwk(HCkPublicKey cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_GetJwkThumbprint(HCkPublicKey cHandle, const char *hashAlg, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkPublicKey_getJwkThumbprint(HCkPublicKey cHandle, const char *hashAlg);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_GetPem(HCkPublicKey cHandle, BOOL preferPkcs1, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkPublicKey_getPem(HCkPublicKey cHandle, BOOL preferPkcs1);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_GetXml(HCkPublicKey cHandle, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkPublicKey_getXml(HCkPublicKey cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_LoadBase64(HCkPublicKey cHandle, const char *keyStr);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_LoadBd(HCkPublicKey cHandle, HCkBinData bd);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_LoadEcdsa(HCkPublicKey cHandle, const char *curveName, const char *Qx, const char *Qy);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_LoadEd25519(HCkPublicKey cHandle, const char *pubKey);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_LoadFromBinary(HCkPublicKey cHandle, HCkByteData keyBytes);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_LoadFromFile(HCkPublicKey cHandle, const char *path);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_LoadFromString(HCkPublicKey cHandle, const char *keyString);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_SaveDerFile(HCkPublicKey cHandle, BOOL preferPkcs1, const char *path);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_SavePemFile(HCkPublicKey cHandle, BOOL preferPkcs1, const char *path);
CK_C_VISIBLE_PUBLIC BOOL CkPublicKey_SaveXmlFile(HCkPublicKey cHandle, const char *path);
#endif
