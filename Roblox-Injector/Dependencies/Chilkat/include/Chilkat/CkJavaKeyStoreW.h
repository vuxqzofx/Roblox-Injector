// CkJavaKeyStoreW.h: interface for the CkJavaKeyStoreW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.3.0

#ifndef _CkJavaKeyStoreW_H
#define _CkJavaKeyStoreW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkWideCharBase.h"

class CkPfxW;
class CkCertW;
class CkCertChainW;
class CkPrivateKeyW;
class CkBinDataW;
class CkByteData;
class CkJsonObjectW;
class CkStringBuilderW;
class CkPemW;
class CkXmlCertVaultW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkJavaKeyStoreW
class CK_VISIBLE_PUBLIC CkJavaKeyStoreW  : public CkWideCharBase
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkJavaKeyStoreW(const CkJavaKeyStoreW &);
	CkJavaKeyStoreW &operator=(const CkJavaKeyStoreW &);

    public:
	CkJavaKeyStoreW(void);
	virtual ~CkJavaKeyStoreW(void);

	

	static CkJavaKeyStoreW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The number of private keys contained within the keystore. Each private key has
	// an alias and certificate chain associated with it.
	int get_NumPrivateKeys(void);

	// The number of secret keys (such as AES keys) contained within the keystore. Each
	// secret key can have an alias associated with it.
	int get_NumSecretKeys(void);

	// The number of trusted certificates contained within the keystore. Each
	// certificate has an alias (identifying string) associated with it.
	int get_NumTrustedCerts(void);

	// If true, then adding a private key to the JKS only succeeds if the certificate
	// chain can be completed to the root certificate. A root certificate is either a
	// trusted CA root or a self-signed certificate. If false, then incomplete
	// certificate chains are allowed. The default value is true.
	bool get_RequireCompleteChain(void);
	// If true, then adding a private key to the JKS only succeeds if the certificate
	// chain can be completed to the root certificate. A root certificate is either a
	// trusted CA root or a self-signed certificate. If false, then incomplete
	// certificate chains are allowed. The default value is true.
	void put_RequireCompleteChain(bool newVal);

	// If true, then the keystore's keyed digest is required to pass validation
	// (password required) for any of the load methods (such as LoadFile, LoadBinary,
	// or LoadEncoded). If false, then a keystore may be loaded into memory without
	// password validation (if a null or empty string is passed to the load method).
	// The default value of this property is true.
	bool get_VerifyKeyedDigest(void);
	// If true, then the keystore's keyed digest is required to pass validation
	// (password required) for any of the load methods (such as LoadFile, LoadBinary,
	// or LoadEncoded). If false, then a keystore may be loaded into memory without
	// password validation (if a null or empty string is passed to the load method).
	// The default value of this property is true.
	void put_VerifyKeyedDigest(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds the contents of a PFX or PKCS #12 (.p12) to the Java keystore object. One
	// JKS entry per private key found in the PKCS12 is added. The certs found within
	// the PCKS12 are used to build the certificate chains for each private key. (A
	// typical PFX file contains a single private key along with its associated
	// certificate, and the certificates in the chain of authentication to the root CA
	// cert.)
	// 
	// This method does not add trusted certificate entries to the JKS.
	// 
	// The specified alias is applied to the 1st private key found. If the alias is
	// empty, then the alias is obtained from the cert/PFX in the following order of
	// preference:
	//     1. Certificate's subject common name
	//     2. Certificate's subject email address
	//     3. Certificate's friendly name found in the PKCS9 attributes of the PKCS12
	//     4. Certificate's serial number
	// 
	// If multiple private keys are found in the PKCS12, then all but the first will
	// automaticallly be assigned aliases using the preference just described.
	// 
	// The UseCertVault method may be called to provide additional certificates for the
	// automatic construction of the certificate chains. If the RequireCompleteChain
	// property is set to true, then this method will fail if any certificate chain
	// is not completed to the root. The TrustedRoots class may be used to provide a
	// source for obtaining trusted CA roots if these are not already present within
	// the PKCS12.
	// 
	bool AddPfx(CkPfxW &pfx, const wchar_t *alias, const wchar_t *password);

	// Adds a private key entry to the JKS. Both the private key and certificate chain
	// are obtained from the certificate object that is passed in the 1st argument.
	// 
	// If the alias is empty, then the alias is automatically chosen based on the
	// certificate's information, in the following order of preference:
	//     1. Certificate's subject common name
	//     2. Certificate's subject email address
	//     3. Certificate's serial number
	// 
	// The UseCertVault method may be called to provide additional certificates for the
	// automatic construction of the certificate chains. If the RequireCompleteChain
	// property is set to true, then this method will fail if the certificate chain
	// is not completed to the root. The TrustedRoots class may be used to provide a
	// source for obtaining trusted CA roots.
	// 
	bool AddPrivateKey(CkCertW &cert, const wchar_t *alias, const wchar_t *password);

	// Adds a secret (symmetric) key entry to the JKS. This adds a symmetric key, which
	// is simply a number of binary bytes (such as 16 bytes for a 128-bit AES key). The
	// encodedKeyBytes provides the actual bytes of the symmetric key, in an encoded string form.
	// The encoding indicates the encoding of encodedKeyBytes (such as base64 , hex , base64url ,
	// etc.) The algorithm describes the symmetric algorithm, such as AES . The alias is the
	// password used to seal (encrypt) the key bytes.
	// 
	// Note: The algorithm describes the usage of the encodedKeyBytes. For example, if encodedKeyBytes contains
	// the 16 bytes of a 128-bit AES key, then algorithm should be set to AES . The actual
	// encryption algorithm used to seal the key within the JCEKS is
	// PBEWithMD5AndTripleDES, which is part of the JCEKS specification.
	// 
	bool AddSecretKey(const wchar_t *encodedKeyBytes, const wchar_t *encoding, const wchar_t *algorithm, const wchar_t *alias, const wchar_t *password);

	// Adds a trusted certificate to the Java keystore object.
	bool AddTrustedCert(CkCertW &cert, const wchar_t *alias);

	// Returns in certChain the certificate chain for the Nth private key in the keystore,
	// where the first private key is at index 0.
	bool CertChainAt(int index, CkCertChainW &certChain);

	// Returns in certChain the certificate chain for the specified private key alias.
	bool CertChainOf(const wchar_t *alias, bool caseSensitive, CkCertChainW &certChain);

	// Changes the password for a private key.
	bool ChangePassword(int index, const wchar_t *oldPassword, const wchar_t *newPassword);

	// Applications should instead call CertChainOf .
	// 
	// Returns the certificate chain for the specified private key alias.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkCertChainW *FindCertChain(const wchar_t *alias, bool caseSensitive);

	// Applications should instead call PrivateKeyOf .
	// 
	// Returns the private key associated with the given alias.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkPrivateKeyW *FindPrivateKey(const wchar_t *password, const wchar_t *alias, bool caseSensitive);

	// Applications should instead call TrustedCertOf .
	// 
	// Finds and returns the trusted certificate with the specified alias.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkCertW *FindTrustedCert(const wchar_t *alias, bool caseSensitive);

	// Applications should instead call CertChainAt .
	// 
	// Returns the certificate chain for the Nth private key in the keystore, where the
	// first private key is at index 0.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkCertChainW *GetCertChain(int index);

	// Applications should instead call PrivateKeyAt .
	// 
	// Returns the private key at index N in the keystore, where the first key is
	// indexed as 0.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkPrivateKeyW *GetPrivateKey(const wchar_t *password, int index);

	// Returns the Nth private key alias contained within the keystore. The 1st private
	// key is at index 0.
	bool GetPrivateKeyAlias(int index, CkString &outStr);
	// Returns the Nth private key alias contained within the keystore. The 1st private
	// key is at index 0.
	const wchar_t *getPrivateKeyAlias(int index);
	// Returns the Nth private key alias contained within the keystore. The 1st private
	// key is at index 0.
	const wchar_t *privateKeyAlias(int index);

	// Returns the Nth secret key contained within the keystore. The 1st secret key is
	// at index 0. The bytes of the secret key are returned in the specified encoding.
	// (such as hex, base64, base64url, etc.)
	bool GetSecretKey(const wchar_t *password, int index, const wchar_t *encoding, CkString &outStr);
	// Returns the Nth secret key contained within the keystore. The 1st secret key is
	// at index 0. The bytes of the secret key are returned in the specified encoding.
	// (such as hex, base64, base64url, etc.)
	const wchar_t *getSecretKey(const wchar_t *password, int index, const wchar_t *encoding);
	// Returns the Nth secret key contained within the keystore. The 1st secret key is
	// at index 0. The bytes of the secret key are returned in the specified encoding.
	// (such as hex, base64, base64url, etc.)
	const wchar_t *secretKey(const wchar_t *password, int index, const wchar_t *encoding);

	// Returns the Nth secret key alias contained within the keystore. The 1st secret
	// key is at index 0.
	bool GetSecretKeyAlias(int index, CkString &outStr);
	// Returns the Nth secret key alias contained within the keystore. The 1st secret
	// key is at index 0.
	const wchar_t *getSecretKeyAlias(int index);
	// Returns the Nth secret key alias contained within the keystore. The 1st secret
	// key is at index 0.
	const wchar_t *secretKeyAlias(int index);

	// Applications should instead call TrustedCertAt .
	// 
	// Returns the Nth trusted certificate contained within the keystore. The 1st
	// certificate is at index 0.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkCertW *GetTrustedCert(int index);

	// Returns the Nth trusted certificate alias contained within the keystore. The 1st
	// certificate is at index 0.
	bool GetTrustedCertAlias(int index, CkString &outStr);
	// Returns the Nth trusted certificate alias contained within the keystore. The 1st
	// certificate is at index 0.
	const wchar_t *getTrustedCertAlias(int index);
	// Returns the Nth trusted certificate alias contained within the keystore. The 1st
	// certificate is at index 0.
	const wchar_t *trustedCertAlias(int index);

	// Loads a Java keystore from the contents of bd.
	bool LoadBd(const wchar_t *password, CkBinDataW &bd);

	// Loads a Java keystore from in-memory byte data.
	bool LoadBinary(const wchar_t *password, CkByteData &jksData);

	// Loads a Java keystore from an encoded string (such as base64, hex, etc.)
	bool LoadEncoded(const wchar_t *password, const wchar_t *jksEncData, const wchar_t *encoding);

	// Loads a Java keystore from a file.
	bool LoadFile(const wchar_t *password, const wchar_t *path);

	// Loads the Java KeyStore from a JSON Web Key (JWK) Set.
	bool LoadJwkSet(const wchar_t *password, CkJsonObjectW &jwkSet);

	// Returns in privKey the private key at index in the keystore, where the first key is
	// at index 0.
	bool PrivateKeyAt(const wchar_t *password, int index, CkPrivateKeyW &privKey);

	// Returns in privKey the private key associated with the given alias.
	bool PrivateKeyOf(const wchar_t *password, const wchar_t *alias, bool caseSensitive, CkPrivateKeyW &privKey);

	// Removes the Nth trusted certificate or private key entry from the keystore. The
	// entryType indicates whether it is a trusted root or private key entry (1 = trusted
	// certificate entry, 2 = private key entry). The 1st entry is at index 0.
	bool RemoveEntry(int entryType, int index);

	// Sets the alias name for a trusted certificate or private key entry. The entryType
	// indicates whether it is a trusted root or private key entry (1 = trusted
	// certificate entry, 2 = private key entry). The 1st entry is at index 0.
	bool SetAlias(int entryType, int index, const wchar_t *alias);

	// Writes the key store to password. The bd is used for the keyed hash of the entire
	// JKS file. (Each private key within the file may use different passwords, and
	// these are provided when the private key is added via the AddPrivateKey method.)
	bool ToBd(const wchar_t *password, CkBinDataW &bd);

	// Writes the key store to in-memory bytes. The password is used for the keyed hash of
	// the entire JKS file. (Each private key within the file may use different
	// passwords, and these are provided when the private key is added via the
	// AddPrivateKey method.)
	bool ToBinary(const wchar_t *password, CkByteData &outBytes);

	// Writes the key store to an encoded string. The encoding can be any encoding such as
	// base64 or hex . The password is used for the keyed hash of the entire JKS file.
	// (Each private key within the file may use different passwords, and these are
	// provided when the private key is added via the AddPrivateKey method.)
	bool ToEncodedString(const wchar_t *password, const wchar_t *encoding, CkString &outStr);
	// Writes the key store to an encoded string. The encoding can be any encoding such as
	// base64 or hex . The password is used for the keyed hash of the entire JKS file.
	// (Each private key within the file may use different passwords, and these are
	// provided when the private key is added via the AddPrivateKey method.)
	const wchar_t *toEncodedString(const wchar_t *password, const wchar_t *encoding);

	// Writes the key store to a file. The password is used for the keyed hash of the
	// entire JKS file. (Each private key within the file may use different passwords,
	// and these are provided when the private key is added via the AddPrivateKey
	// method.)
	bool ToFile(const wchar_t *password, const wchar_t *path);

	// Returns the private keys in JSON JWK Set format. The JWK identifier (kid) will
	// be set from the key alias in the store.
	bool ToJwkSet(const wchar_t *password, CkStringBuilderW &sbJwkSet);

	// Applications should instead call ToPemObj .
	// 
	// Returns the Java KeyStore as a Pem object.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkPemW *ToPem(const wchar_t *password);

	// Returns the Java KeyStore as a Pem object in pemObj.
	bool ToPemObj(const wchar_t *password, CkPemW &pemObj);

	// Applications should instead call ToPfxObj .
	// 
	// Returns the Java KeyStore as a Pfx object.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkPfxW *ToPfx(const wchar_t *password);

	// Returns the Java KeyStore as a Pfx object in pfxObj.
	bool ToPfxObj(const wchar_t *password, CkPfxW &pfxObj);

	// Returns the Nth trusted certificate from the keystore in cert, with the 1st
	// certificate at index 0.
	bool TrustedCertAt(int index, CkCertW &cert);

	// Finds and returns in cert the trusted certificate with the specified alias.
	bool TrustedCertOf(const wchar_t *alias, bool caseSensitive, CkCertW &cert);

	// Adds an XML certificate vault to the object's internal list of sources to be
	// searched for certificates for help in building certificate chains to a root
	// certificate.
	bool UseCertVault(CkXmlCertVaultW &vault);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
