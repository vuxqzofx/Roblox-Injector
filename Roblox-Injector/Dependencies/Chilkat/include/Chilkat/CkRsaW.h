// CkRsaW.h: interface for the CkRsaW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.3.0

#ifndef _CkRsaW_H
#define _CkRsaW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkWideCharBase.h"

class CkBinDataW;
class CkByteData;
class CkPrivateKeyW;
class CkPublicKeyW;
class CkCertW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkRsaW
class CK_VISIBLE_PUBLIC CkRsaW  : public CkWideCharBase
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkRsaW(const CkRsaW &);
	CkRsaW &operator=(const CkRsaW &);

    public:
	CkRsaW(void);
	virtual ~CkRsaW(void);

	

	static CkRsaW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// This property specifies the character encoding used to represent text as bytes
	// for encryption, decryption, signing, and signature validation. By default, it
	// uses the computer's ANSI charset, such as Windows-1252 for locales like the
	// United States, United Kingdom, Western Europe, Australia, and New Zealand.
	// 
	// Most applications are advised to set this property to UTF-8 . Chilkat plans to
	// change its default to UTF-8 in a future major version to align with current
	// standards. The current default of ANSI stems from a time when UTF-8 was not
	// widely adopted.
	// 
	void get_Charset(CkString &str);
	// This property specifies the character encoding used to represent text as bytes
	// for encryption, decryption, signing, and signature validation. By default, it
	// uses the computer's ANSI charset, such as Windows-1252 for locales like the
	// United States, United Kingdom, Western Europe, Australia, and New Zealand.
	// 
	// Most applications are advised to set this property to UTF-8 . Chilkat plans to
	// change its default to UTF-8 in a future major version to align with current
	// standards. The current default of ANSI stems from a time when UTF-8 was not
	// widely adopted.
	// 
	const wchar_t *charset(void);
	// This property specifies the character encoding used to represent text as bytes
	// for encryption, decryption, signing, and signature validation. By default, it
	// uses the computer's ANSI charset, such as Windows-1252 for locales like the
	// United States, United Kingdom, Western Europe, Australia, and New Zealand.
	// 
	// Most applications are advised to set this property to UTF-8 . Chilkat plans to
	// change its default to UTF-8 in a future major version to align with current
	// standards. The current default of ANSI stems from a time when UTF-8 was not
	// widely adopted.
	// 
	void put_Charset(const wchar_t *newVal);

	// This property defines the encoding for methods ending in ENC , such as
	// EncryptStringENC. Valid modes include base64 , hex , hex_lower , and more. The
	// encoding mode applies to signatures, encrypted data, and hashes used in or
	// returned by a method.
	void get_EncodingMode(CkString &str);
	// This property defines the encoding for methods ending in ENC , such as
	// EncryptStringENC. Valid modes include base64 , hex , hex_lower , and more. The
	// encoding mode applies to signatures, encrypted data, and hashes used in or
	// returned by a method.
	const wchar_t *encodingMode(void);
	// This property defines the encoding for methods ending in ENC , such as
	// EncryptStringENC. Valid modes include base64 , hex , hex_lower , and more. The
	// encoding mode applies to signatures, encrypted data, and hashes used in or
	// returned by a method.
	void put_EncodingMode(const wchar_t *newVal);

	// When creating RSA signatures, this property determines the endianness: set it to
	// true for little-endian signatures and false for big-endian signatures.
	bool get_LittleEndian(void);
	// When creating RSA signatures, this property determines the endianness: set it to
	// true for little-endian signatures and false for big-endian signatures.
	void put_LittleEndian(bool newVal);

	// If true, skips unpadding when decrypting. The default is false. This
	// property value is typically left unchanged.
	bool get_NoUnpad(void);
	// If true, skips unpadding when decrypting. The default is false. This
	// property value is typically left unchanged.
	void put_NoUnpad(bool newVal);

	// The bit length, such as 2048, of the imported or generated RSA key.
	int get_NumBits(void);

	// Selects the hash algorithm for use within OAEP padding for encryption. The valid
	// choices are sha256 , sha384 , sha512 , or sha1 .
	// 
	// The default is SHA1. You'll likely want to change this to to SHA256. The next
	// major version of Chilkat (11.0.0) will change the default to SHA256.
	// 
	void get_OaepHash(CkString &str);
	// Selects the hash algorithm for use within OAEP padding for encryption. The valid
	// choices are sha256 , sha384 , sha512 , or sha1 .
	// 
	// The default is SHA1. You'll likely want to change this to to SHA256. The next
	// major version of Chilkat (11.0.0) will change the default to SHA256.
	// 
	const wchar_t *oaepHash(void);
	// Selects the hash algorithm for use within OAEP padding for encryption. The valid
	// choices are sha256 , sha384 , sha512 , or sha1 .
	// 
	// The default is SHA1. You'll likely want to change this to to SHA256. The next
	// major version of Chilkat (11.0.0) will change the default to SHA256.
	// 
	void put_OaepHash(const wchar_t *newVal);

	// The optional RSA encryption OAEP label is a hex representation of the label
	// bytes used for encrypting with OAEP padding. Typically, this is left empty (0
	// bytes) unless there's a specific requirement to set it.
	void get_OaepLabel(CkString &str);
	// The optional RSA encryption OAEP label is a hex representation of the label
	// bytes used for encrypting with OAEP padding. Typically, this is left empty (0
	// bytes) unless there's a specific requirement to set it.
	const wchar_t *oaepLabel(void);
	// The optional RSA encryption OAEP label is a hex representation of the label
	// bytes used for encrypting with OAEP padding. Typically, this is left empty (0
	// bytes) unless there's a specific requirement to set it.
	void put_OaepLabel(const wchar_t *newVal);

	// Selects the MGF (mask generation) hash algorithm for use within OAEP padding for
	// encryption. The valid choices are sha256 , sha384 , sha512 , or sha1 .
	// 
	// Note: This property should typically be set to the same value as the OaepHash
	// property. Many software implementations are not able to handle cases where the
	// MGF hash is different than the OAEP hash.
	// 
	// The default is SHA1. You'll likely want to change this to to SHA256. The next
	// major version of Chilkat (11.0.0) will change the default to SHA256.
	// 
	void get_OaepMgfHash(CkString &str);
	// Selects the MGF (mask generation) hash algorithm for use within OAEP padding for
	// encryption. The valid choices are sha256 , sha384 , sha512 , or sha1 .
	// 
	// Note: This property should typically be set to the same value as the OaepHash
	// property. Many software implementations are not able to handle cases where the
	// MGF hash is different than the OAEP hash.
	// 
	// The default is SHA1. You'll likely want to change this to to SHA256. The next
	// major version of Chilkat (11.0.0) will change the default to SHA256.
	// 
	const wchar_t *oaepMgfHash(void);
	// Selects the MGF (mask generation) hash algorithm for use within OAEP padding for
	// encryption. The valid choices are sha256 , sha384 , sha512 , or sha1 .
	// 
	// Note: This property should typically be set to the same value as the OaepHash
	// property. Many software implementations are not able to handle cases where the
	// MGF hash is different than the OAEP hash.
	// 
	// The default is SHA1. You'll likely want to change this to to SHA256. The next
	// major version of Chilkat (11.0.0) will change the default to SHA256.
	// 
	void put_OaepMgfHash(const wchar_t *newVal);

	// This property is deprecated and applications should instead use the PkcsPadding
	// property.
	// 
	// This property controls both RSA-PSS and OAEP. When set to false, Chilkat uses
	// PKCS#1 v1.5 padding for both encryption and signature creation. When set to
	// true, Chilkat uses RSA-PSS padding for signatures, and OAEP padding for
	// encryption.
	// 
	// Note: Both OAEP and RSA-PSS incorporate random bytes in the output. Therefore,
	// the output is different each time even if all of the inputs are identical.
	// 
	// The default value of this property is false.
	// 
	// PS> Please accept our apology for not having a separate RsaPss property. This
	// oversight in design happened approximately 20 years ago. We've refrained from
	// fixing to avoid backward compatibility problems.
	// 
	bool get_OaepPadding(void);
	// This property is deprecated and applications should instead use the PkcsPadding
	// property.
	// 
	// This property controls both RSA-PSS and OAEP. When set to false, Chilkat uses
	// PKCS#1 v1.5 padding for both encryption and signature creation. When set to
	// true, Chilkat uses RSA-PSS padding for signatures, and OAEP padding for
	// encryption.
	// 
	// Note: Both OAEP and RSA-PSS incorporate random bytes in the output. Therefore,
	// the output is different each time even if all of the inputs are identical.
	// 
	// The default value of this property is false.
	// 
	// PS> Please accept our apology for not having a separate RsaPss property. This
	// oversight in design happened approximately 20 years ago. We've refrained from
	// fixing to avoid backward compatibility problems.
	// 
	void put_OaepPadding(bool newVal);

	// This property controls padding for both signing and encryption. The default
	// value is true, which is to use PKCS#1 v1.5 padding. If set to false, then PSS
	// padding is used for signatures and OAEP padding is used for encryption.
	// 
	// This property replaces the deprecated OaepPadding property. Until the
	// OaepPadding property is removed, setting this property will automatically set
	// OaepPadding to the opposite, and vice-versa. This is to maintain backward
	// compatibility until applications can switch to using this new property.
	// 
	bool get_PkcsPadding(void);
	// This property controls padding for both signing and encryption. The default
	// value is true, which is to use PKCS#1 v1.5 padding. If set to false, then PSS
	// padding is used for signatures and OAEP padding is used for encryption.
	// 
	// This property replaces the deprecated OaepPadding property. Until the
	// OaepPadding property is removed, setting this property will automatically set
	// OaepPadding to the opposite, and vice-versa. This is to maintain backward
	// compatibility until applications can switch to using this new property.
	// 
	void put_PkcsPadding(bool newVal);

	// When using RSASSA-PSS padding for signatures, you can choose the PSS salt
	// length. By default, the salt length is set to -1, which uses the length of the
	// hash function. For instance, with the SHA256 hash function, the salt length will
	// be 32 bytes. You can specify a different salt length, like 20 bytes, if needed,
	// but it's generally recommended to keep the default setting.
	int get_PssSaltLen(void);
	// When using RSASSA-PSS padding for signatures, you can choose the PSS salt
	// length. By default, the salt length is set to -1, which uses the length of the
	// hash function. For instance, with the SHA256 hash function, the salt length will
	// be 32 bytes. You can specify a different salt length, like 20 bytes, if needed,
	// but it's generally recommended to keep the default setting.
	void put_PssSaltLen(int newVal);

	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty.
	void get_UncommonOptions(CkString &str);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty.
	const wchar_t *uncommonOptions(void);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty.
	void put_UncommonOptions(const wchar_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// RSA decrypts the contents of bd. usePrivateKey should be set to true if the private
	// key is to be used for decrypting. Otherwise it should be set to false if (in
	// rare cases) the public key is to be used for decrypting.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	bool DecryptBd(CkBinDataW &bd, bool usePrivateKey);

	// Decrypts byte data using the RSA encryption algorithm. usePrivateKey should be set to
	// true if the private key is to be used for decrypting. Otherwise it should be
	// set to false if (in rare cases) the public key is to be used for decrypting.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	bool DecryptBytes(CkByteData &inData, bool usePrivateKey, CkByteData &outData);

	// Decrypts str using the RSA algorithm. str is the encoded form of the encrypted
	// binary data. The EncodingMode property defines str's encoding. Set bUsePrivateKey to
	// true to use the private key for decryption; otherwise, set it to false to
	// use the public key (in rare cases).
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	bool DecryptBytesENC(const wchar_t *str, bool bUsePrivateKey, CkByteData &outData);

	// Decrypts encBytes with the RSA algorithm. encBytes holds the encrypted binary data. The
	// Charset property specifies the byte representation for interpreting the
	// decrypted text. Set usePrivateKey to true to use the private key for decryption;
	// otherwise, set usePrivateKey to false to use the public key (used rarely). Returns the
	// decrypted string.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	bool DecryptString(CkByteData &encBytes, bool usePrivateKey, CkString &outStr);
	// Decrypts encBytes with the RSA algorithm. encBytes holds the encrypted binary data. The
	// Charset property specifies the byte representation for interpreting the
	// decrypted text. Set usePrivateKey to true to use the private key for decryption;
	// otherwise, set usePrivateKey to false to use the public key (used rarely). Returns the
	// decrypted string.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	const wchar_t *decryptString(CkByteData &encBytes, bool usePrivateKey);

	// Decrypts str with the RSA algorithm. str is the encoded form of the encrypted
	// binary data. The EncodingMode property defines str's encoding. The Charset
	// property specifies the byte representation for interpreting the decrypted text.
	// Set usePrivateKey to true to use the private key for decryption; otherwise, set usePrivateKey to
	// false to use the public key (used rarely). Returns the decrypted string.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	bool DecryptStringENC(const wchar_t *str, bool usePrivateKey, CkString &outStr);
	// Decrypts str with the RSA algorithm. str is the encoded form of the encrypted
	// binary data. The EncodingMode property defines str's encoding. The Charset
	// property specifies the byte representation for interpreting the decrypted text.
	// Set usePrivateKey to true to use the private key for decryption; otherwise, set usePrivateKey to
	// false to use the public key (used rarely). Returns the decrypted string.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	const wchar_t *decryptStringENC(const wchar_t *str, bool usePrivateKey);

	// RSA encrypts the contents of bd. Set usePrivateKey to false to use the public key for
	// encrypting; otherwise, set it to true to use the private key (in rare cases).
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	// Note: The public key's role is to make encryption accessible to anyone while
	// ensuring that only the private key holder can decrypt the messages. The public
	// key is designed to be widely distributed so anyone can use it to encrypt
	// messages intended for the owner of the private key.
	// 
	bool EncryptBd(CkBinDataW &bd, bool usePrivateKey);

	// Encrypts byte data using the RSA encryption algorithm. Set usePrivateKey to false to
	// use the public key for encrypting; otherwise, set it to true to use the
	// private key (in rare cases).
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	// Note: The public key's role is to make encryption accessible to anyone while
	// ensuring that only the private key holder can decrypt the messages. The public
	// key is designed to be widely distributed so anyone can use it to encrypt
	// messages intended for the owner of the private key.
	// 
	bool EncryptBytes(CkByteData &binaryData, bool usePrivateKey, CkByteData &outData);

	// Encrypts data using the RSA algorithm. Set bUsePrivateKey to false to use the public key
	// for encrypting; otherwise, set it to true to use the private key (in rare
	// cases). The encrypted data is returned in the format specified by the
	// EncodingMode property.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	// Note: The public key's role is to make encryption accessible to anyone while
	// ensuring that only the private key holder can decrypt the messages. The public
	// key is designed to be widely distributed so anyone can use it to encrypt
	// messages intended for the owner of the private key.
	// 
	bool EncryptBytesENC(CkByteData &data, bool bUsePrivateKey, CkString &outStr);
	// Encrypts data using the RSA algorithm. Set bUsePrivateKey to false to use the public key
	// for encrypting; otherwise, set it to true to use the private key (in rare
	// cases). The encrypted data is returned in the format specified by the
	// EncodingMode property.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	// Note: The public key's role is to make encryption accessible to anyone while
	// ensuring that only the private key holder can decrypt the messages. The public
	// key is designed to be widely distributed so anyone can use it to encrypt
	// messages intended for the owner of the private key.
	// 
	const wchar_t *encryptBytesENC(CkByteData &data, bool bUsePrivateKey);

	// Encrypts stringToEncrypt with the RSA algorithm. The Charset property specifies the byte
	// representation of the string that is encrypted. Set usePrivateKey to false to use the
	// public key for encrypting; otherwise, set it to true to use the private key
	// (in rare cases).
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	// Note: The public key's role is to make encryption accessible to anyone while
	// ensuring that only the private key holder can decrypt the messages. The public
	// key is designed to be widely distributed so anyone can use it to encrypt
	// messages intended for the owner of the private key.
	// 
	bool EncryptString(const wchar_t *stringToEncrypt, bool usePrivateKey, CkByteData &outData);

	// Encrypts str with the RSA algorithm. The Charset property specifies the byte
	// representation of the string that is encrypted. Set bUsePrivateKey to false to use the
	// public key for encrypting; otherwise, set it to true to use the private key
	// (in rare cases). The encrypted data is returned in the format specified by the
	// EncodingMode property.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	// Note: The public key's role is to make encryption accessible to anyone while
	// ensuring that only the private key holder can decrypt the messages. The public
	// key is designed to be widely distributed so anyone can use it to encrypt
	// messages intended for the owner of the private key.
	// 
	bool EncryptStringENC(const wchar_t *str, bool bUsePrivateKey, CkString &outStr);
	// Encrypts str with the RSA algorithm. The Charset property specifies the byte
	// representation of the string that is encrypted. Set bUsePrivateKey to false to use the
	// public key for encrypting; otherwise, set it to true to use the private key
	// (in rare cases). The encrypted data is returned in the format specified by the
	// EncodingMode property.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	// Note: The public key's role is to make encryption accessible to anyone while
	// ensuring that only the private key holder can decrypt the messages. The public
	// key is designed to be widely distributed so anyone can use it to encrypt
	// messages intended for the owner of the private key.
	// 
	const wchar_t *encryptStringENC(const wchar_t *str, bool bUsePrivateKey);

	// This method is deprecated and should no longer be needed because the new GenKey
	// method replaces the GenerateKey method.
	// 
	// Exports the private-key of an RSA key pair to XML format. This is typically
	// called after generating a new RSA key via the GenerateKey method.
	// 
	bool ExportPrivateKey(CkString &outStr);
	// This method is deprecated and should no longer be needed because the new GenKey
	// method replaces the GenerateKey method.
	// 
	// Exports the private-key of an RSA key pair to XML format. This is typically
	// called after generating a new RSA key via the GenerateKey method.
	// 
	const wchar_t *exportPrivateKey(void);

	// This method is deprecated and should no longer be needed because the new GenKey
	// method replaces the GenerateKey method.
	// 
	// Exports the private-key to a private key object. This is typically called after
	// generating a new RSA key via the GenerateKey method. Once the private key object
	// is obtained, it may be saved in a variety of different formats.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkPrivateKeyW *ExportPrivateKeyObj(void);

	// This method is deprecated and should no longer be needed because the new GenKey
	// method replaces the GenerateKey method.
	// 
	// Exports the public-key of an RSA key pair to XML format. This is typically
	// called after generating a new RSA key via the GenerateKey method.
	// 
	bool ExportPublicKey(CkString &outStr);
	// This method is deprecated and should no longer be needed because the new GenKey
	// method replaces the GenerateKey method.
	// 
	// Exports the public-key of an RSA key pair to XML format. This is typically
	// called after generating a new RSA key via the GenerateKey method.
	// 
	const wchar_t *exportPublicKey(void);

	// This method is deprecated and should no longer be needed because the new GenKey
	// method replaces the GenerateKey method.
	// 
	// Exports the public key to a public key object. Once the public key object is
	// obtained, it may be saved in a variety of different formats.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkPublicKeyW *ExportPublicKeyObj(void);

	// This method is deprecated. Applications should instead call GenKey .
	// 
	// Generates a new RSA public/private key pair. The number of bits can range from
	// 512 to 8192. Typical key lengths are 1024, 2048, or 4096 bits. After successful
	// generation, the public/private parts of the key can be exported to XML via the
	// ExportPrivateKey and ExportPublicKey methods.
	// 
	// Note: Generating an 8192-bit RSA key can take a considerable amount of time.
	// There are no event callbacks or progress monitoring for RSA key generation.
	// Calling this will block the thread until it returns.
	// 
	bool GenerateKey(int numBits);

	// Generates a new RSA key and stores it in privKey. numBits specifies the key length,
	// which can range from 512 to 8192 bits. Common key lengths are 1024, 2048, or
	// 4096 bits.
	// 
	// Note: Generating an 8192-bit key may take a significant amount of time. The
	// method does not support event callbacks or progress monitoring and will block
	// the thread until completion.
	// 
	bool GenKey(int numBits, CkPrivateKeyW &privKey);

	// This method is deprecated. Applications should instead call UsePrivateKey .
	// 
	// Imports a private key from XML format. After successful import, the private key
	// can be used to encrypt or decrypt. A private key (by definition) contains both
	// private and public parts. This is because the public key consist of modulus and
	// exponent. The private key consists of modulus, exponent, P, Q, DP, DQ, InverseQ,
	// and D using base64 representation:_LT_RSAKeyValue>
	//   _LT_Modulus>..._LT_/Modulus>
	//   _LT_Exponent>..._LT_/Exponent>
	//   _LT_P>..._LT_/P>
	//   _LT_Q>..._LT_/Q>
	//   _LT_DP>..._LT_/DP>
	//   _LT_DQ>..._LT_/DQ>
	//   _LT_InverseQ>..._LT_/InverseQ>
	//   _LT_D>..._LT_/D>
	// _LT_/RSAKeyValue>
	//  
	// 
	// Important: The Rsa object can contain either a private key or a public key, but
	// not both. Importing a private key overwrites the existing key regardless of
	// whether the type of key is public or private.
	// 
	bool ImportPrivateKey(const wchar_t *xmlKey);

	// This method is deprecated. Applications should instead call UsePrivateKey .
	// 
	// Imports a private key from a private key object. The imported private key is
	// used in methods that sign or decrypt.
	// 
	bool ImportPrivateKeyObj(CkPrivateKeyW &key);

	// This method is deprecated. Applications should instead call UsePublicKey .
	// 
	// Imports a public key from XML format. After successful import, the public key
	// can be used to encrypt or decrypt.
	// 
	// Note: Importing a public key overwrites the key that is currently contained in
	// this object - even if it's a private key.
	// 
	// A public key consists of modulus and exponent using base64 representation:_LT_RSAPublicKey>
	//   _LT_Modulus>..._LT_/Modulus>
	//   _LT_Exponent>..._LT_/Exponent>
	// _LT_/RSAPublicKey>
	//  
	// 
	// Important: The Rsa object can contain either a private key or a public key, but
	// not both. Importing a private key overwrites the existing key regardless of
	// whether the type of key is public or private.
	// 
	bool ImportPublicKey(const wchar_t *xmlKey);

	// This method is deprecated. Applications should instead call UsePublicKey .
	// 
	// Imports a public key from a public key object. The imported public key is used
	// in methods that encrypt data or verify signatures.
	// 
	bool ImportPublicKeyObj(CkPublicKeyW &key);

	// This method is deprecated and applications should instead call SignRawBd .
	// 
	// The Chilkat RSA functions having names beginning with OpenSsl are provided to
	// duplicate OpenSSL's rsautl functionality, which is to directly sign raw input
	// data using an RSA private key without performing additional steps like hashing
	// or ASN.1 encapsulation. These functions always use PKCS#1 v1.5 padding (because
	// rsautl always uses PKCS#1 v1.5 padding and never RSA-PSS).
	// 
	// The maximum number of bytes that can be signed in any of the OpenSsl functions
	// depends on the size of the RSA key. It is equal to the Key Size in Bytes - 11.
	// Thus for a 2048-bit key, the maximum data size = 256 - 11 = 245 bytes.
	// 
	// The bytes to be signed are passed in bd. If successful, the contents of bd
	// are replaced with the RSA signature.
	// 
	bool OpenSslSignBd(CkBinDataW &bd);

	// This method is deprecated and applications should instead call SignRawBd .
	// 
	// The Chilkat RSA functions having names beginning with OpenSsl are provided to
	// duplicate OpenSSL's rsautl functionality, which is to directly sign raw input
	// data using an RSA private key without performing additional steps like hashing
	// or ASN.1 encapsulation. These functions always use PKCS#1 v1.5 padding (because
	// rsautl always uses PKCS#1 v1.5 padding and never RSA-PSS).
	// 
	// The maximum number of bytes that can be signed in any of the OpenSsl functions
	// depends on the size of the RSA key. It is equal to the Key Size in Bytes - 11.
	// Thus for a 2048-bit key, the maximum data size = 256 - 11 = 245 bytes.
	// 
	// The bytes to be signed are passed in data. The binary RSA signature is returned.
	// 
	bool OpenSslSignBytes(CkByteData &data, CkByteData &outBytes);

	// This method is deprecated and applications should instead call SignRawBd .
	// 
	// The Chilkat RSA functions having names beginning with OpenSsl are provided to
	// duplicate OpenSSL's rsautl functionality, which is to directly sign raw input
	// data using an RSA private key without performing additional steps like hashing
	// or ASN.1 encapsulation. These functions always use PKCS#1 v1.5 padding (because
	// rsautl always uses PKCS#1 v1.5 padding and never RSA-PSS).
	// 
	// The maximum number of bytes that can be signed in any of the OpenSsl functions
	// depends on the size of the RSA key. It is equal to the Key Size in Bytes - 11.
	// Thus for a 2048-bit key, the maximum data size = 256 - 11 = 245 bytes.
	// 
	// The bytes to be signed are passed in data. Returns the signature encoded based
	// on the EncodingMode property.
	// 
	bool OpenSslSignBytesENC(CkByteData &data, CkString &outStr);
	// This method is deprecated and applications should instead call SignRawBd .
	// 
	// The Chilkat RSA functions having names beginning with OpenSsl are provided to
	// duplicate OpenSSL's rsautl functionality, which is to directly sign raw input
	// data using an RSA private key without performing additional steps like hashing
	// or ASN.1 encapsulation. These functions always use PKCS#1 v1.5 padding (because
	// rsautl always uses PKCS#1 v1.5 padding and never RSA-PSS).
	// 
	// The maximum number of bytes that can be signed in any of the OpenSsl functions
	// depends on the size of the RSA key. It is equal to the Key Size in Bytes - 11.
	// Thus for a 2048-bit key, the maximum data size = 256 - 11 = 245 bytes.
	// 
	// The bytes to be signed are passed in data. Returns the signature encoded based
	// on the EncodingMode property.
	// 
	const wchar_t *openSslSignBytesENC(CkByteData &data);

	// This method is deprecated and applications should instead call SignRawBd .
	// 
	// The Chilkat RSA functions having names beginning with OpenSsl are provided to
	// duplicate OpenSSL's rsautl functionality, which is to directly sign raw input
	// data using an RSA private key without performing additional steps like hashing
	// or ASN.1 encapsulation. These functions always use PKCS#1 v1.5 padding (because
	// rsautl always uses PKCS#1 v1.5 padding and never RSA-PSS).
	// 
	// The maximum number of bytes that can be signed in any of the OpenSsl functions
	// depends on the size of the RSA key. It is equal to the Key Size in Bytes - 11.
	// Thus for a 2048-bit key, the maximum data size = 256 - 11 = 245 bytes.
	// 
	// The string to be signed is passed in str. Returns the binary signature.
	// 
	bool OpenSslSignString(const wchar_t *str, CkByteData &outBytes);

	// This method is deprecated and applications should instead call SignRawBd .
	// 
	// The Chilkat RSA functions having names beginning with OpenSsl are provided to
	// duplicate OpenSSL's rsautl functionality, which is to directly sign raw input
	// data using an RSA private key without performing additional steps like hashing
	// or ASN.1 encapsulation. These functions always use PKCS#1 v1.5 padding (because
	// rsautl always uses PKCS#1 v1.5 padding and never RSA-PSS).
	// 
	// The maximum number of bytes that can be signed in any of the OpenSsl functions
	// depends on the size of the RSA key. It is equal to the Key Size in Bytes - 11.
	// Thus for a 2048-bit key, the maximum data size = 256 - 11 = 245 bytes.
	// 
	// The string to be signed is passed in str. Returns the signature encoded based
	// on the EncodingMode property.
	// 
	bool OpenSslSignStringENC(const wchar_t *str, CkString &outStr);
	// This method is deprecated and applications should instead call SignRawBd .
	// 
	// The Chilkat RSA functions having names beginning with OpenSsl are provided to
	// duplicate OpenSSL's rsautl functionality, which is to directly sign raw input
	// data using an RSA private key without performing additional steps like hashing
	// or ASN.1 encapsulation. These functions always use PKCS#1 v1.5 padding (because
	// rsautl always uses PKCS#1 v1.5 padding and never RSA-PSS).
	// 
	// The maximum number of bytes that can be signed in any of the OpenSsl functions
	// depends on the size of the RSA key. It is equal to the Key Size in Bytes - 11.
	// Thus for a 2048-bit key, the maximum data size = 256 - 11 = 245 bytes.
	// 
	// The string to be signed is passed in str. Returns the signature encoded based
	// on the EncodingMode property.
	// 
	const wchar_t *openSslSignStringENC(const wchar_t *str);

	// This method is deprecated and applications should instead call VerifyRawBd .
	// 
	// Duplicates OpenSSL's rsautl utility for verifying RSA signatures and recovering
	// the original data. On input, the bd contains the RSA signature that embeds the
	// original data. If successful (i.e. the signature was verified), then the bd is
	// transformed to contain just the original data.
	// 
	bool OpenSslVerifyBd(CkBinDataW &bd);

	// This method is deprecated and applications should instead call VerifyRawBd .
	// 
	// Duplicates OpenSSL's rsautl utility for verifying RSA signatures and recovering
	// the original data. Input data consists of the raw signature bytes and returns
	// the original bytes.
	// 
	bool OpenSslVerifyBytes(CkByteData &signature, CkByteData &outBytes);

	// This method is deprecated and applications should instead call VerifyRawBd .
	// 
	// Duplicates OpenSSL's rsautl utility for verifying RSA signatures and recovering
	// the original data. Input data is a signature string encoded according to the
	// EncodingMode property (base64, hex, etc.). Returns the original bytes.
	// 
	bool OpenSslVerifyBytesENC(const wchar_t *str, CkByteData &outBytes);

	// This method is deprecated and applications should instead call VerifyRawBd .
	// 
	// Duplicates OpenSSL's rsautl utility for verifying RSA signatures and recovering
	// the original data. Input data consists of the raw signature bytes and returns
	// the original string.
	// 
	bool OpenSslVerifyString(CkByteData &data, CkString &outStr);
	// This method is deprecated and applications should instead call VerifyRawBd .
	// 
	// Duplicates OpenSSL's rsautl utility for verifying RSA signatures and recovering
	// the original data. Input data consists of the raw signature bytes and returns
	// the original string.
	// 
	const wchar_t *openSslVerifyString(CkByteData &data);

	// This method is deprecated and applications should instead call VerifyRawBd .
	// 
	// Duplicates OpenSSL's rsautl utility for verifying RSA signatures and recovering
	// the original data. Input data is a signature string encoded according to the
	// EncodingMode property (base64, hex, etc.). Returns the original string.
	// 
	bool OpenSslVerifyStringENC(const wchar_t *str, CkString &outStr);
	// This method is deprecated and applications should instead call VerifyRawBd .
	// 
	// Duplicates OpenSSL's rsautl utility for verifying RSA signatures and recovering
	// the original data. Input data is a signature string encoded according to the
	// EncodingMode property (base64, hex, etc.). Returns the original string.
	// 
	const wchar_t *openSslVerifyStringENC(const wchar_t *str);

	// Provides the private or public key indirectly through a certificate. This method
	// is used when the private key is inaccessible, such as when stored on a smart
	// card, USB token, in the Windows registry (marked as non-exportable), or in the
	// Apple Keychain.
	bool SetX509Cert(CkCertW &cert, bool usePrivateKey);

	// Generates an RSA digital signature by first hashing the contents of bdData with
	// the hash algorithm specified by hashAlgorithm, which can be sha256 , sha384 , sha512 , or
	// sha1 . The resulting signature is written to bdSig.
	// 
	// Note: It is important to be aware of endianness. Make sure the LittleEndian
	// property is set according to your specific needs.
	// 
	bool SignBd(CkBinDataW &bdData, const wchar_t *hashAlgorithm, CkBinDataW &bdSig);

	// Generates an RSA digital signature by first hashing the contents of binaryData with
	// the hash algorithm specified by hashAlgorithm, which can be sha256 , sha384 , sha512 , or
	// sha1 . The function returns the binary signature.
	// 
	// Note: It is important to be aware of endianness. Make sure the LittleEndian
	// property is set according to your specific needs.
	// 
	bool SignBytes(CkByteData &binaryData, const wchar_t *hashAlgorithm, CkByteData &outData);

	// Generates an RSA digital signature by first hashing the bytes passed in binaryData
	// with the hash algorithm specified by hashAlgorithm, which can be sha256 , sha384 , sha512
	// , or sha1 . Returns the signature encoded based on the EncodingMode property.
	bool SignBytesENC(CkByteData &binaryData, const wchar_t *hashAlgorithm, CkString &outStr);
	// Generates an RSA digital signature by first hashing the bytes passed in binaryData
	// with the hash algorithm specified by hashAlgorithm, which can be sha256 , sha384 , sha512
	// , or sha1 . Returns the signature encoded based on the EncodingMode property.
	const wchar_t *signBytesENC(CkByteData &binaryData, const wchar_t *hashAlgorithm);

	// This function creates an RSA digital signature by signing the hash provided in
	// hashBytes. hashAlg specifies the hash algorithm, which can be sha256 , sha384 , sha512 ,
	// or sha1 . The function returns the signature in binary format.
	bool SignHash(CkByteData &hashBytes, const wchar_t *hashAlg, CkByteData &outBytes);

	// This function creates an RSA digital signature for the hash provided in encodedHash,
	// which should be encoded according to the EncodingMode setting (e.g., base64 if
	// EncodingMode = base64 ). hashAlg specifies the hash algorithm and can be sha256 ,
	// sha384 , sha512 , or sha1 . The function returns the signature encoded as
	// specified by EncodingMode.
	bool SignHashENC(const wchar_t *encodedHash, const wchar_t *hashAlg, CkString &outStr);
	// This function creates an RSA digital signature for the hash provided in encodedHash,
	// which should be encoded according to the EncodingMode setting (e.g., base64 if
	// EncodingMode = base64 ). hashAlg specifies the hash algorithm and can be sha256 ,
	// sha384 , sha512 , or sha1 . The function returns the signature encoded as
	// specified by EncodingMode.
	const wchar_t *signHashENC(const wchar_t *encodedHash, const wchar_t *hashAlg);

	// This is legacy low-level raw RSA that duplicates the (now deprecated) OpenSSL
	// rsautl utility. It directly signs raw data rather than signing a hash of the
	// data. PKCS#1 v1.5 padding is always used. The data to be signed is passed in
	// bd, and on return the content of bd is replaced with the RSA signed data.
	// 
	// Note: It is possible to validate and recover the original data by calling
	// VerifyRawBd .
	// 
	bool SignRawBd(CkBinDataW &bd);

	// Generates an RSA digital signature by first hashing strToBeHashed with the hash algorithm
	// specified by hashAlgorithm, which can be sha256 , sha384 , sha512 , or sha1 . The
	// function returns the binary signature.
	// 
	// Note: It is recommended to set the Charset property equal to utf-8 before
	// signing strings.
	// 
	// Note: It is important to be aware of endianness. Make sure the LittleEndian
	// property is set according to your specific needs.
	// 
	bool SignString(const wchar_t *strToBeHashed, const wchar_t *hashAlgorithm, CkByteData &outData);

	// Generates an RSA digital signature by first hashing strToBeHashed with the hash algorithm
	// specified by hashAlgorithm, which can be sha256 , sha384 , sha512 , or sha1 . Returns the
	// signature encoded based on the EncodingMode property.
	// 
	// Note: It is important to be aware of endianness. Make sure the LittleEndian
	// property is set according to your specific needs.
	// 
	// Note: It is recommended to set the Charset property equal to utf-8 before
	// signing strings.
	// 
	bool SignStringENC(const wchar_t *strToBeHashed, const wchar_t *hashAlgorithm, CkString &outStr);
	// Generates an RSA digital signature by first hashing strToBeHashed with the hash algorithm
	// specified by hashAlgorithm, which can be sha256 , sha384 , sha512 , or sha1 . Returns the
	// signature encoded based on the EncodingMode property.
	// 
	// Note: It is important to be aware of endianness. Make sure the LittleEndian
	// property is set according to your specific needs.
	// 
	// Note: It is recommended to set the Charset property equal to utf-8 before
	// signing strings.
	// 
	const wchar_t *signStringENC(const wchar_t *strToBeHashed, const wchar_t *hashAlgorithm);

	// Imports a .snk file to an XML document that can be imported via the
	// ImportPrivateKey method.
	bool SnkToXml(const wchar_t *filename, CkString &outStr);
	// Imports a .snk file to an XML document that can be imported via the
	// ImportPrivateKey method.
	const wchar_t *snkToXml(const wchar_t *filename);

	// Imports a private key from privKey to use for signing or decrypting.
	bool UsePrivateKey(CkPrivateKeyW &privKey);

	// Imports a public key from pubKey to use for encrypting or signature verification.
	bool UsePublicKey(CkPublicKeyW &pubKey);

	// Verifies the RSA signature passed in bdSig against the original data passed in
	// bdData. The original data passed in bdData is hashed using the hash algorithm passed
	// in hashAlgorithm (such as sha256 , sha384 , sha512 , or sha1 ). Returns true if the
	// signature is validated, and false if not.
	// 
	// Note: Knowing the exact hash algorithm used to create the signature is not
	// required. If the signature is not validated using the hash algorithm specified
	// in hashAlgorithm, Chilkat will automatically try validating using the other supported
	// algorithms and return success if any validate.
	// 
	bool VerifyBd(CkBinDataW &bdData, const wchar_t *hashAlgorithm, CkBinDataW &bdSig);

	// Verifies the RSA signature passed in signatureBytes against the original data passed in
	// originalData. The original data passed in originalData is hashed using the hash algorithm passed
	// in hashAlgorithm (such as sha256 , sha384 , sha512 , or sha1 ). Returns true if the
	// signature is validated, and false if not.
	// 
	// Note: Knowing the exact hash algorithm used to create the signature is not
	// required. If the signature is not validated using the hash algorithm specified
	// in hashAlgorithm, Chilkat will automatically try validating using the other supported
	// algorithms and return success if any validate.
	// 
	bool VerifyBytes(CkByteData &originalData, const wchar_t *hashAlgorithm, CkByteData &signatureBytes);

	// Verifies the encoded RSA signature passed in encodedSig against the original data
	// passed in originalData. The original data passed in originalData is hashed using the hash
	// algorithm passed in hashAlgorithm (such as sha256 , sha384 , sha512 , or sha1 ). Returns
	// true if the signature is validated, and false if not.
	// 
	// The signature passed in encodedSig should be encoded according to the EncodingMode
	// property (e.g., base64 if EncodingMode = base64 )
	// 
	// Note: Knowing the exact hash algorithm used to create the signature is not
	// required. If the signature is not validated using the hash algorithm specified
	// in hashAlgorithm, Chilkat will automatically try validating using the other supported
	// algorithms and return success if any validate.
	// 
	bool VerifyBytesENC(CkByteData &originalData, const wchar_t *hashAlgorithm, const wchar_t *encodedSig);

	// Validates an RSA signature provided in sigBytes against the hash of the original
	// data in hashBytes. Returns true if validation is successful, otherwise returns
	// false. hashAlg specifies the hash algorithm used for hashBytes, such as sha256 ,
	// sha384 , sha512 , or sha1 . Ensure the hash's size (e.g., 32 bytes for sha256,
	// 48 bytes for sha384, 64 bytes for sha512, 20 bytes for sha1) matches that of
	// hashBytes.
	bool VerifyHash(CkByteData &hashBytes, const wchar_t *hashAlg, CkByteData &sigBytes);

	// Validates an RSA signature provided in encodedSig against the hash of the original
	// data in encodedHash. Returns true if validation is successful, otherwise returns
	// false. hashAlg specifies the hash algorithm used for encodedHash, such as sha256 ,
	// sha384 , sha512 , or sha1 . Ensure the hash's size (e.g., 32 bytes for sha256,
	// 48 bytes for sha384, 64 bytes for sha512, 20 bytes for sha1) matches that of
	// encodedHash.
	// 
	// Both encodedHash and encodedSig should be encoded according to the EncodingMode property
	// (e.g., base64 if EncodingMode = base64 )
	// 
	bool VerifyHashENC(const wchar_t *encodedHash, const wchar_t *hashAlg, const wchar_t *encodedSig);

	// This is legacy low-level raw RSA that duplicates the (now deprecated) OpenSSL
	// rsautl utility. It validates signed raw data and recovers the original data. The
	// RSA signature to be verified is passed in bd, and on return the content of
	// bd is replaced with the original data.
	bool VerifyRawBd(CkBinDataW &bd);

	// Verifies the RSA signature passed in binarySig against the original data passed in
	// originalString. The original data passed in originalString is hashed using the hash algorithm passed
	// in hashAlgorithm (such as sha256 , sha384 , sha512 , or sha1 ). Returns true if the
	// signature is validated, and false if not.
	// 
	// Note: Knowing the exact hash algorithm used to create the signature is not
	// required. If the signature is not validated using the hash algorithm specified
	// in hashAlgorithm, Chilkat will automatically try validating using the other supported
	// algorithms and return success if any validate.
	// 
	bool VerifyString(const wchar_t *originalString, const wchar_t *hashAlgorithm, CkByteData &binarySig);

	// Verifies the encoded RSA signature passed in encodedSig against the original data
	// passed in originalString. The original data passed in originalString is hashed using the hash
	// algorithm passed in hashAlgorithm (such as sha256 , sha384 , sha512 , or sha1 ). Returns
	// true if the signature is validated, and false if not.
	// 
	// The signature passed in encodedSig should be encoded according to the EncodingMode
	// property (e.g., base64 if EncodingMode = base64 )
	// 
	// Note: Knowing the exact hash algorithm used to create the signature is not
	// required. If the signature is not validated using the hash algorithm specified
	// in hashAlgorithm, Chilkat will automatically try validating using the other supported
	// algorithms and return success if any validate.
	// 
	bool VerifyStringENC(const wchar_t *originalString, const wchar_t *hashAlgorithm, const wchar_t *encodedSig);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
