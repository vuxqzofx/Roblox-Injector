// CkCrypt2.h: interface for the CkCrypt2 class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.3.0

#define _CkVersion 11.3.0

#ifndef _CkCrypt2_H
#define _CkCrypt2_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkCert;
class CkBinData;
class CkByteData;
class CkTask;
class CkStringBuilder;
class CkSecureString;
class CkStream;
class CkJsonObject;
class CkCertChain;
class CkPrivateKey;
class CkHttp;
class CkXmlCertVault;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkCrypt2
class CK_VISIBLE_PUBLIC CkCrypt2  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkCrypt2(const CkCrypt2 &);
	CkCrypt2 &operator=(const CkCrypt2 &);

    public:
	CkCrypt2(void);
	virtual ~CkCrypt2(void);

	static CkCrypt2 *createNew(void);
	static CkCrypt2 *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	CkBaseProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkBaseProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Setting this property to true will abort the current method, but only for
	// those methods having an Async alternative. The property automatically resets to
	// false at the start of each method and after an abort. Both synchronous and
	// asynchronous methods can be aborted; synchronous methods require setting this
	// property from another thread.
	bool get_AbortCurrent(void);
	// Setting this property to true will abort the current method, but only for
	// those methods having an Async alternative. The property automatically resets to
	// false at the start of each method and after an abort. Both synchronous and
	// asynchronous methods can be aborted; synchronous methods require setting this
	// property from another thread.
	void put_AbortCurrent(bool newVal);

	// The BCrypt work factor determines the computational cost of BCryptHash and
	// BCryptVerify . It represents the base-2 logarithm of the number of hashing
	// rounds. For instance, a work factor of 12 corresponds to 2^12 hashing rounds.
	// This cost factor is designed to make computations challenging enough to deter
	// brute-force attacks. The work factor must be set between 4 and 31, inclusive,
	// with a default value of 10 .
	// 
	// References:
	// 1: #BCryptHash
	// 2: #BCryptVerify
	int get_BCryptWorkFactor(void);
	// The BCrypt work factor determines the computational cost of BCryptHash and
	// BCryptVerify . It represents the base-2 logarithm of the number of hashing
	// rounds. For instance, a work factor of 12 corresponds to 2^12 hashing rounds.
	// This cost factor is designed to make computations challenging enough to deter
	// brute-force attacks. The work factor must be set between 4 and 31, inclusive,
	// with a default value of 10 .
	// 
	// References:
	// 1: #BCryptHash
	// 2: #BCryptVerify
	void put_BCryptWorkFactor(int newVal);

	// This property indicates the block size in bytes for the chosen encryption
	// algorithm. For instance, if the CryptAlgorithm is set to AES , the BlockSize is
	// automatically set to 16 bytes. In contrast, the block size for the ChaCha20
	// streaming algorithm is 1 byte.
	// 
	// References:
	// 1: #CryptAlgorithm
	int get_BlockSize(void);

	// This property applies to all PKCS7 signature creation methods. When set to
	// true, it ensures the inclusion of required attributes (such as content-type ,
	// message-digest , and signing-certificate-v2 ) to qualify the signature as at
	// least a CAdES-BES signature. By default, this property is set to false.
	bool get_CadesEnabled(void);
	// This property applies to all PKCS7 signature creation methods. When set to
	// true, it ensures the inclusion of required attributes (such as content-type ,
	// message-digest , and signing-certificate-v2 ) to qualify the signature as at
	// least a CAdES-BES signature. By default, this property is set to false.
	void put_CadesEnabled(bool newVal);

	// This property is for PKCS7 CMS signatures that wish to include CAdES signature
	// policy attributes . Set it to the base64 -encoded hash of the policy document at
	// the CadesSigPolicyUri using either SHA256 or SHA1 .
	// 
	// References:
	// 1: #CadesSigPolicyUri
	void get_CadesSigPolicyHash(CkString &str);
	// This property is for PKCS7 CMS signatures that wish to include CAdES signature
	// policy attributes . Set it to the base64 -encoded hash of the policy document at
	// the CadesSigPolicyUri using either SHA256 or SHA1 .
	// 
	// References:
	// 1: #CadesSigPolicyUri
	const char *cadesSigPolicyHash(void);
	// This property is for PKCS7 CMS signatures that wish to include CAdES signature
	// policy attributes . Set it to the base64 -encoded hash of the policy document at
	// the CadesSigPolicyUri using either SHA256 or SHA1 .
	// 
	// References:
	// 1: #CadesSigPolicyUri
	void put_CadesSigPolicyHash(const char *newVal);

	// This property is for PKCS7 CMS signatures that wish to include CAdES signature
	// policy attributes . The CAdES Signature Policy ID is an object identifier ( OID
	// ) included in a CAdES signature that specifies the exact signature policy the
	// signer followed. It is the OID associated with the policy URL. An example OID
	// would look like this: 2.16.840.1.101.3.2.1.48.1
	// 
	// An application that wishes to include signature policy attributes should set all
	// three properties: CadesSigPolicyHash , CadesSigPolicyUri , and CadesSigPolicyId
	// .
	// 
	// 
	// References:
	// 1: #CadesSigPolicyHash
	// 2: #CadesSigPolicyUri
	// 3: #CadesSigPolicyId
	void get_CadesSigPolicyId(CkString &str);
	// This property is for PKCS7 CMS signatures that wish to include CAdES signature
	// policy attributes . The CAdES Signature Policy ID is an object identifier ( OID
	// ) included in a CAdES signature that specifies the exact signature policy the
	// signer followed. It is the OID associated with the policy URL. An example OID
	// would look like this: 2.16.840.1.101.3.2.1.48.1
	// 
	// An application that wishes to include signature policy attributes should set all
	// three properties: CadesSigPolicyHash , CadesSigPolicyUri , and CadesSigPolicyId
	// .
	// 
	// 
	// References:
	// 1: #CadesSigPolicyHash
	// 2: #CadesSigPolicyUri
	// 3: #CadesSigPolicyId
	const char *cadesSigPolicyId(void);
	// This property is for PKCS7 CMS signatures that wish to include CAdES signature
	// policy attributes . The CAdES Signature Policy ID is an object identifier ( OID
	// ) included in a CAdES signature that specifies the exact signature policy the
	// signer followed. It is the OID associated with the policy URL. An example OID
	// would look like this: 2.16.840.1.101.3.2.1.48.1
	// 
	// An application that wishes to include signature policy attributes should set all
	// three properties: CadesSigPolicyHash , CadesSigPolicyUri , and CadesSigPolicyId
	// .
	// 
	// 
	// References:
	// 1: #CadesSigPolicyHash
	// 2: #CadesSigPolicyUri
	// 3: #CadesSigPolicyId
	void put_CadesSigPolicyId(const char *newVal);

	// This property is for PKCS7 CMS signatures that wish to include CAdES signature
	// policy attributes . The signature policy URI in a CAdES digital signature is a
	// link that points to a document describing the rules and conditions under which
	// the signature was created. Typically the Signature Policy URI in a CAdES
	// signature points to a .der file, not a PDF or human-readable document. For
	// example: http://example.com/policies/my-policy.der
	void get_CadesSigPolicyUri(CkString &str);
	// This property is for PKCS7 CMS signatures that wish to include CAdES signature
	// policy attributes . The signature policy URI in a CAdES digital signature is a
	// link that points to a document describing the rules and conditions under which
	// the signature was created. Typically the Signature Policy URI in a CAdES
	// signature points to a .der file, not a PDF or human-readable document. For
	// example: http://example.com/policies/my-policy.der
	const char *cadesSigPolicyUri(void);
	// This property is for PKCS7 CMS signatures that wish to include CAdES signature
	// policy attributes . The signature policy URI in a CAdES digital signature is a
	// link that points to a document describing the rules and conditions under which
	// the signature was created. Typically the Signature Policy URI in a CAdES
	// signature points to a .der file, not a PDF or human-readable document. For
	// example: http://example.com/policies/my-policy.der
	void put_CadesSigPolicyUri(const char *newVal);

	// This property specifies the character encoding used to represent text as bytes
	// for encryption and hashing. By default, it uses the computer's ANSI charset,
	// such as Windows-1252 for locales like the United States, United Kingdom, Western
	// Europe, Australia, and New Zealand.
	// 
	// Most applications are advised to set this property to UTF-8 . Chilkat plans to
	// change its default to UTF-8 in a future major version to align with current
	// standards. The current default of ANSI stems from a time when UTF-8 was not
	// widely adopted.
	// 
	void get_Charset(CkString &str);
	// This property specifies the character encoding used to represent text as bytes
	// for encryption and hashing. By default, it uses the computer's ANSI charset,
	// such as Windows-1252 for locales like the United States, United Kingdom, Western
	// Europe, Australia, and New Zealand.
	// 
	// Most applications are advised to set this property to UTF-8 . Chilkat plans to
	// change its default to UTF-8 in a future major version to align with current
	// standards. The current default of ANSI stems from a time when UTF-8 was not
	// widely adopted.
	// 
	const char *charset(void);
	// This property specifies the character encoding used to represent text as bytes
	// for encryption and hashing. By default, it uses the computer's ANSI charset,
	// such as Windows-1252 for locales like the United States, United Kingdom, Western
	// Europe, Australia, and New Zealand.
	// 
	// Most applications are advised to set this property to UTF-8 . Chilkat plans to
	// change its default to UTF-8 in a future major version to align with current
	// standards. The current default of ANSI stems from a time when UTF-8 was not
	// widely adopted.
	// 
	void put_Charset(const char *newVal);

	// Sets the cipher mode for block encryption algorithms (AES, Blowfish,TwoFish,
	// DES, 3DES, RC2). Possible values are CBC (the default) , ECB , CTR , OFB , GCM ,
	// and CFB . These acronyms have the following meanings:
	// 
	//     * CBC : Cipher Block Chaining,
	//     * ECB : Electronic CookBook
	//     * CTR : Counter Mode
	//     * CFB : Cipher Feedback
	//     * OFB : Output Feedback
	//     * GCM : Galois/Counter Mode
	//     * XTS : AES-XTS (starting in Chilkat v9.5.0.91, only works with AES
	//     encryption)
	// 
	// The GCM (Galois/Counter Mode) is available with any cipher having a 16-byte
	// block size, such as AES. The CFB, OFB, CTR, and GCM modes convert block ciphers
	// into stream ciphers. In these modes of operation, the PaddingScheme property is
	// unused because no padding occurs.
	// 
	// Starting in v9.5.0.91 Chilkat supports AES-XTS mode. XTS mode additionally uses
	// a tweak key and tweak value, which are set via the XtsSetEncodedTweakKey ,
	// XtsSetEncodedTweakValue , and XtsSetDataUnitNumber . (The latter two functions
	// provide alternative means of setting the tweak value.) Chilkat fully supports
	// AES-XTS mode with ciphertext-stealing , which means it will correctly
	// encrypt/decrypt data with size not divisible by the block size (i.e. divisible
	// by 16 bytes).
	// 
	// 
	// References:
	// 1: #PaddingScheme
	// 2: #XtsSetEncodedTweakKey
	// 3: #XtsSetEncodedTweakValue
	// 4: #XtsSetDataUnitNumber
	void get_CipherMode(CkString &str);
	// Sets the cipher mode for block encryption algorithms (AES, Blowfish,TwoFish,
	// DES, 3DES, RC2). Possible values are CBC (the default) , ECB , CTR , OFB , GCM ,
	// and CFB . These acronyms have the following meanings:
	// 
	//     * CBC : Cipher Block Chaining,
	//     * ECB : Electronic CookBook
	//     * CTR : Counter Mode
	//     * CFB : Cipher Feedback
	//     * OFB : Output Feedback
	//     * GCM : Galois/Counter Mode
	//     * XTS : AES-XTS (starting in Chilkat v9.5.0.91, only works with AES
	//     encryption)
	// 
	// The GCM (Galois/Counter Mode) is available with any cipher having a 16-byte
	// block size, such as AES. The CFB, OFB, CTR, and GCM modes convert block ciphers
	// into stream ciphers. In these modes of operation, the PaddingScheme property is
	// unused because no padding occurs.
	// 
	// Starting in v9.5.0.91 Chilkat supports AES-XTS mode. XTS mode additionally uses
	// a tweak key and tweak value, which are set via the XtsSetEncodedTweakKey ,
	// XtsSetEncodedTweakValue , and XtsSetDataUnitNumber . (The latter two functions
	// provide alternative means of setting the tweak value.) Chilkat fully supports
	// AES-XTS mode with ciphertext-stealing , which means it will correctly
	// encrypt/decrypt data with size not divisible by the block size (i.e. divisible
	// by 16 bytes).
	// 
	// 
	// References:
	// 1: #PaddingScheme
	// 2: #XtsSetEncodedTweakKey
	// 3: #XtsSetEncodedTweakValue
	// 4: #XtsSetDataUnitNumber
	const char *cipherMode(void);
	// Sets the cipher mode for block encryption algorithms (AES, Blowfish,TwoFish,
	// DES, 3DES, RC2). Possible values are CBC (the default) , ECB , CTR , OFB , GCM ,
	// and CFB . These acronyms have the following meanings:
	// 
	//     * CBC : Cipher Block Chaining,
	//     * ECB : Electronic CookBook
	//     * CTR : Counter Mode
	//     * CFB : Cipher Feedback
	//     * OFB : Output Feedback
	//     * GCM : Galois/Counter Mode
	//     * XTS : AES-XTS (starting in Chilkat v9.5.0.91, only works with AES
	//     encryption)
	// 
	// The GCM (Galois/Counter Mode) is available with any cipher having a 16-byte
	// block size, such as AES. The CFB, OFB, CTR, and GCM modes convert block ciphers
	// into stream ciphers. In these modes of operation, the PaddingScheme property is
	// unused because no padding occurs.
	// 
	// Starting in v9.5.0.91 Chilkat supports AES-XTS mode. XTS mode additionally uses
	// a tweak key and tweak value, which are set via the XtsSetEncodedTweakKey ,
	// XtsSetEncodedTweakValue , and XtsSetDataUnitNumber . (The latter two functions
	// provide alternative means of setting the tweak value.) Chilkat fully supports
	// AES-XTS mode with ciphertext-stealing , which means it will correctly
	// encrypt/decrypt data with size not divisible by the block size (i.e. divisible
	// by 16 bytes).
	// 
	// 
	// References:
	// 1: #PaddingScheme
	// 2: #XtsSetEncodedTweakKey
	// 3: #XtsSetEncodedTweakValue
	// 4: #XtsSetDataUnitNumber
	void put_CipherMode(const char *newVal);

	// A JSON string to manage additional CMS (PKCS7) signature and validation options.
	// Possible options are:
	//     * boolean OmitAlgorithmIdNull : Set this JSON member to true to omit the
	//     explicit NULL within an AlgorithmIdentifier ASN.1 within the PKCS7. This should
	//     almost never be used, but helps for rare cases where a validator dislikes the
	//     explicit NULL being present.
	//     * boolean ValidateTimestampTokens : Tells Chilkat to also validate the
	//     timestamp tokens when validating a signature that includes a timestamp.
	//     * boolean ConstructedOctets : When set to true , tells Chilkat to use the
	//     ASN.1 constructed octets format for the data contained in the CMS (PKCS7)
	//     signed-data.
	//     * boolean CanonicalizeITIDA : This applies to Egypt ITIDA , which requires
	//     signed documents in a CAdES-BES CMS format, using ITIDA’s JSON canonicalization
	//     (for JSON payloads), with only the Base64‑encoded signature attached—not the
	//     original data itself. When set to true , Chilkat will automatically do the
	//     special ITIDA JSON canonicalization .
	void get_CmsOptions(CkString &str);
	// A JSON string to manage additional CMS (PKCS7) signature and validation options.
	// Possible options are:
	//     * boolean OmitAlgorithmIdNull : Set this JSON member to true to omit the
	//     explicit NULL within an AlgorithmIdentifier ASN.1 within the PKCS7. This should
	//     almost never be used, but helps for rare cases where a validator dislikes the
	//     explicit NULL being present.
	//     * boolean ValidateTimestampTokens : Tells Chilkat to also validate the
	//     timestamp tokens when validating a signature that includes a timestamp.
	//     * boolean ConstructedOctets : When set to true , tells Chilkat to use the
	//     ASN.1 constructed octets format for the data contained in the CMS (PKCS7)
	//     signed-data.
	//     * boolean CanonicalizeITIDA : This applies to Egypt ITIDA , which requires
	//     signed documents in a CAdES-BES CMS format, using ITIDA’s JSON canonicalization
	//     (for JSON payloads), with only the Base64‑encoded signature attached—not the
	//     original data itself. When set to true , Chilkat will automatically do the
	//     special ITIDA JSON canonicalization .
	const char *cmsOptions(void);
	// A JSON string to manage additional CMS (PKCS7) signature and validation options.
	// Possible options are:
	//     * boolean OmitAlgorithmIdNull : Set this JSON member to true to omit the
	//     explicit NULL within an AlgorithmIdentifier ASN.1 within the PKCS7. This should
	//     almost never be used, but helps for rare cases where a validator dislikes the
	//     explicit NULL being present.
	//     * boolean ValidateTimestampTokens : Tells Chilkat to also validate the
	//     timestamp tokens when validating a signature that includes a timestamp.
	//     * boolean ConstructedOctets : When set to true , tells Chilkat to use the
	//     ASN.1 constructed octets format for the data contained in the CMS (PKCS7)
	//     signed-data.
	//     * boolean CanonicalizeITIDA : This applies to Egypt ITIDA , which requires
	//     signed documents in a CAdES-BES CMS format, using ITIDA’s JSON canonicalization
	//     (for JSON payloads), with only the Base64‑encoded signature attached—not the
	//     original data itself. When set to true , Chilkat will automatically do the
	//     special ITIDA JSON canonicalization .
	void put_CmsOptions(const char *newVal);

	// Selects the encryption algorithm for encrypting and decrypting. Possible values
	// are: Algorithm
	// Type
	// Symmetric?
	// Key Size(s)
	// Block/Stream
	// Mode of Operation
	// Notes
	// 
	// aes
	// Block cipher
	// ✔ Yes
	// 128, 192, 256 bits
	// Block (128-bit)
	// CBC, CTR, GCM, etc.
	// Widely used, FIPS-approved
	// 
	// pki (Public-Key Encryption)
	// Asymmetric
	// ✗ No
	// 1024–4096+ bits
	// N/A
	// N/A
	// Used for key exchange, not bulk data
	// 
	// chacha20
	// Stream cipher
	// ✔ Yes
	// 256 bits
	// Stream
	// N/A
	// High speed, secure, designed for simplicity
	// 
	// des
	// Block cipher
	// ✔ Yes
	// 56 bits
	// Block (64-bit)
	// ECB, CBC, etc.
	// Deprecated, insecure
	// 
	// 3des
	// Block cipher
	// ✔ Yes
	// 112 or 168 bits
	// Block (64-bit)
	// ECB, CBC, etc.
	// Legacy use, weak by modern standards
	// 
	// rc2
	// Block cipher
	// ✔ Yes
	// 40–128 bits (variable)
	// Block (64-bit)
	// ECB, CBC, etc.
	// Obsolete, variable strength
	// 
	// blowfish2 (Blowfish)
	// Block cipher
	// ✔ Yes
	// 32–448 bits (variable)
	// Block (64-bit)
	// ECB, CBC, etc.
	// Fast, but 64-bit block size is a limitation
	// 
	// twofish
	// Block cipher
	// ✔ Yes
	// Up to 256 bits
	// Block (128-bit)
	// ECB, CBC, etc.
	// AES finalist, secure and flexible
	// 
	// pbes1
	// Key derivation
	// ✔ Yes
	// Based on underlying cipher
	// Block (varies)
	// PKCS#5 v1.5
	// Obsolete, uses DES/RC2
	// 
	// pbes2
	// Key derivation
	// ✔ Yes
	// Based on underlying cipher
	// Block (varies)
	// PKCS#5 v2.0
	// Modern, supports AES, SHA, etc.
	// 
	// arc4 (RC4)
	// Stream cipher
	// ✔ Yes
	// 40–2048 bits (variable)
	// Stream
	// N/A
	// Deprecated, insecure due to biases
	// 
	void get_CryptAlgorithm(CkString &str);
	// Selects the encryption algorithm for encrypting and decrypting. Possible values
	// are: Algorithm
	// Type
	// Symmetric?
	// Key Size(s)
	// Block/Stream
	// Mode of Operation
	// Notes
	// 
	// aes
	// Block cipher
	// ✔ Yes
	// 128, 192, 256 bits
	// Block (128-bit)
	// CBC, CTR, GCM, etc.
	// Widely used, FIPS-approved
	// 
	// pki (Public-Key Encryption)
	// Asymmetric
	// ✗ No
	// 1024–4096+ bits
	// N/A
	// N/A
	// Used for key exchange, not bulk data
	// 
	// chacha20
	// Stream cipher
	// ✔ Yes
	// 256 bits
	// Stream
	// N/A
	// High speed, secure, designed for simplicity
	// 
	// des
	// Block cipher
	// ✔ Yes
	// 56 bits
	// Block (64-bit)
	// ECB, CBC, etc.
	// Deprecated, insecure
	// 
	// 3des
	// Block cipher
	// ✔ Yes
	// 112 or 168 bits
	// Block (64-bit)
	// ECB, CBC, etc.
	// Legacy use, weak by modern standards
	// 
	// rc2
	// Block cipher
	// ✔ Yes
	// 40–128 bits (variable)
	// Block (64-bit)
	// ECB, CBC, etc.
	// Obsolete, variable strength
	// 
	// blowfish2 (Blowfish)
	// Block cipher
	// ✔ Yes
	// 32–448 bits (variable)
	// Block (64-bit)
	// ECB, CBC, etc.
	// Fast, but 64-bit block size is a limitation
	// 
	// twofish
	// Block cipher
	// ✔ Yes
	// Up to 256 bits
	// Block (128-bit)
	// ECB, CBC, etc.
	// AES finalist, secure and flexible
	// 
	// pbes1
	// Key derivation
	// ✔ Yes
	// Based on underlying cipher
	// Block (varies)
	// PKCS#5 v1.5
	// Obsolete, uses DES/RC2
	// 
	// pbes2
	// Key derivation
	// ✔ Yes
	// Based on underlying cipher
	// Block (varies)
	// PKCS#5 v2.0
	// Modern, supports AES, SHA, etc.
	// 
	// arc4 (RC4)
	// Stream cipher
	// ✔ Yes
	// 40–2048 bits (variable)
	// Stream
	// N/A
	// Deprecated, insecure due to biases
	// 
	const char *cryptAlgorithm(void);
	// Selects the encryption algorithm for encrypting and decrypting. Possible values
	// are: Algorithm
	// Type
	// Symmetric?
	// Key Size(s)
	// Block/Stream
	// Mode of Operation
	// Notes
	// 
	// aes
	// Block cipher
	// ✔ Yes
	// 128, 192, 256 bits
	// Block (128-bit)
	// CBC, CTR, GCM, etc.
	// Widely used, FIPS-approved
	// 
	// pki (Public-Key Encryption)
	// Asymmetric
	// ✗ No
	// 1024–4096+ bits
	// N/A
	// N/A
	// Used for key exchange, not bulk data
	// 
	// chacha20
	// Stream cipher
	// ✔ Yes
	// 256 bits
	// Stream
	// N/A
	// High speed, secure, designed for simplicity
	// 
	// des
	// Block cipher
	// ✔ Yes
	// 56 bits
	// Block (64-bit)
	// ECB, CBC, etc.
	// Deprecated, insecure
	// 
	// 3des
	// Block cipher
	// ✔ Yes
	// 112 or 168 bits
	// Block (64-bit)
	// ECB, CBC, etc.
	// Legacy use, weak by modern standards
	// 
	// rc2
	// Block cipher
	// ✔ Yes
	// 40–128 bits (variable)
	// Block (64-bit)
	// ECB, CBC, etc.
	// Obsolete, variable strength
	// 
	// blowfish2 (Blowfish)
	// Block cipher
	// ✔ Yes
	// 32–448 bits (variable)
	// Block (64-bit)
	// ECB, CBC, etc.
	// Fast, but 64-bit block size is a limitation
	// 
	// twofish
	// Block cipher
	// ✔ Yes
	// Up to 256 bits
	// Block (128-bit)
	// ECB, CBC, etc.
	// AES finalist, secure and flexible
	// 
	// pbes1
	// Key derivation
	// ✔ Yes
	// Based on underlying cipher
	// Block (varies)
	// PKCS#5 v1.5
	// Obsolete, uses DES/RC2
	// 
	// pbes2
	// Key derivation
	// ✔ Yes
	// Based on underlying cipher
	// Block (varies)
	// PKCS#5 v2.0
	// Modern, supports AES, SHA, etc.
	// 
	// arc4 (RC4)
	// Stream cipher
	// ✔ Yes
	// 40–2048 bits (variable)
	// Stream
	// N/A
	// Deprecated, insecure due to biases
	// 
	void put_CryptAlgorithm(const char *newVal);

	// The EncodingMode property specifies the binary encoding format (e.g., base64 ,
	// hex , base58 , base64url ) used by functions ending in "ENC" , like
	// EncryptStringENC and DecryptStringENC . For encryption functions, EncodingMode
	// determines the encoding of the output. For decryption functions, it specifies
	// the encoding of the input data.
	// 
	// A list of supported binary encodings is available at the link below.
	// 
	// The default value is base64
	// 
	// 
	// References:
	// 1: #EncryptStringENC
	// 2: #DecryptStringENC
	void get_EncodingMode(CkString &str);
	// The EncodingMode property specifies the binary encoding format (e.g., base64 ,
	// hex , base58 , base64url ) used by functions ending in "ENC" , like
	// EncryptStringENC and DecryptStringENC . For encryption functions, EncodingMode
	// determines the encoding of the output. For decryption functions, it specifies
	// the encoding of the input data.
	// 
	// A list of supported binary encodings is available at the link below.
	// 
	// The default value is base64
	// 
	// 
	// References:
	// 1: #EncryptStringENC
	// 2: #DecryptStringENC
	const char *encodingMode(void);
	// The EncodingMode property specifies the binary encoding format (e.g., base64 ,
	// hex , base58 , base64url ) used by functions ending in "ENC" , like
	// EncryptStringENC and DecryptStringENC . For encryption functions, EncodingMode
	// determines the encoding of the output. For decryption functions, it specifies
	// the encoding of the input data.
	// 
	// A list of supported binary encodings is available at the link below.
	// 
	// The default value is base64
	// 
	// 
	// References:
	// 1: #EncryptStringENC
	// 2: #DecryptStringENC
	void put_EncodingMode(const char *newVal);

	// Using the FirstChunk and LastChunk properties is the way to do streaming
	// encryption or decryption with Chilkat.
	// 
	// By default, both FirstChunk and LastChunk are set to true, indicating that the
	// data passed to the encryption or decryption method is the full amount. To
	// process data in multiple chunks, adjust these settings as follows:
	// 
	// 1. For the first chunk, set FirstChunk = true and LastChunk = false.
	// 2. For intermediate chunks, set both FirstChunk = false and LastChunk =
	// false.
	// 3. For the final chunk, set FirstChunk = false and LastChunk = true.
	// 
	// You can feed data chunks of any size, regardless of the encryption algorithm's
	// block size (e.g., 16 bytes for AES). Chilkat will handle buffering and, upon
	// receiving the final chunk, pad the output to the appropriate block size
	// according to the selected PaddingScheme .
	// 
	// 
	// References:
	// 1: #LastChunk
	// 2: #PaddingScheme
	bool get_FirstChunk(void);
	// Using the FirstChunk and LastChunk properties is the way to do streaming
	// encryption or decryption with Chilkat.
	// 
	// By default, both FirstChunk and LastChunk are set to true, indicating that the
	// data passed to the encryption or decryption method is the full amount. To
	// process data in multiple chunks, adjust these settings as follows:
	// 
	// 1. For the first chunk, set FirstChunk = true and LastChunk = false.
	// 2. For intermediate chunks, set both FirstChunk = false and LastChunk =
	// false.
	// 3. For the final chunk, set FirstChunk = false and LastChunk = true.
	// 
	// You can feed data chunks of any size, regardless of the encryption algorithm's
	// block size (e.g., 16 bytes for AES). Chilkat will handle buffering and, upon
	// receiving the final chunk, pad the output to the appropriate block size
	// according to the selected PaddingScheme .
	// 
	// 
	// References:
	// 1: #LastChunk
	// 2: #PaddingScheme
	void put_FirstChunk(bool newVal);

	// Selects the hash algorithm used by methods that create hashes. The valid choices
	// are sha256 , sha384 , sha512 , sha3-224 , sha3-256 , sha3-384 , sha3-512 , sha1
	// , md2 , md5 , haval , ripemd128 , ripemd160 , ripemd256 , or ripemd320 .
	// 
	// (Chilkat supports SHA-2 because it includes the SHA-256, SHA-384, and SHA-512
	// hash functions.)
	// 
	// The default value is sha256 .
	// 
	// Note: The HAVAL hash algorithm is affected by two other properties: HavalRounds
	// and KeyLength .
	// 
	//     * The HavalRounds may have values of 3, 4, or 5.
	//     * For HAVAL hashing, the KeyLength can be 128, 160, 192, 224, or 256.
	// 
	// References:
	// 1: #HavalRounds
	// 2: #KeyLength
	void get_HashAlgorithm(CkString &str);
	// Selects the hash algorithm used by methods that create hashes. The valid choices
	// are sha256 , sha384 , sha512 , sha3-224 , sha3-256 , sha3-384 , sha3-512 , sha1
	// , md2 , md5 , haval , ripemd128 , ripemd160 , ripemd256 , or ripemd320 .
	// 
	// (Chilkat supports SHA-2 because it includes the SHA-256, SHA-384, and SHA-512
	// hash functions.)
	// 
	// The default value is sha256 .
	// 
	// Note: The HAVAL hash algorithm is affected by two other properties: HavalRounds
	// and KeyLength .
	// 
	//     * The HavalRounds may have values of 3, 4, or 5.
	//     * For HAVAL hashing, the KeyLength can be 128, 160, 192, 224, or 256.
	// 
	// References:
	// 1: #HavalRounds
	// 2: #KeyLength
	const char *hashAlgorithm(void);
	// Selects the hash algorithm used by methods that create hashes. The valid choices
	// are sha256 , sha384 , sha512 , sha3-224 , sha3-256 , sha3-384 , sha3-512 , sha1
	// , md2 , md5 , haval , ripemd128 , ripemd160 , ripemd256 , or ripemd320 .
	// 
	// (Chilkat supports SHA-2 because it includes the SHA-256, SHA-384, and SHA-512
	// hash functions.)
	// 
	// The default value is sha256 .
	// 
	// Note: The HAVAL hash algorithm is affected by two other properties: HavalRounds
	// and KeyLength .
	// 
	//     * The HavalRounds may have values of 3, 4, or 5.
	//     * For HAVAL hashing, the KeyLength can be 128, 160, 192, 224, or 256.
	// 
	// References:
	// 1: #HavalRounds
	// 2: #KeyLength
	void put_HashAlgorithm(const char *newVal);

	// Applies to the HAVAL hash algorithm only and must be set to the integer value 3,
	// 4, or 5. The default value is 3.
	int get_HavalRounds(void);
	// Applies to the HAVAL hash algorithm only and must be set to the integer value 3,
	// 4, or 5. The default value is 3.
	void put_HavalRounds(int newVal);

	// The interval in milliseconds between each AbortCheck event callback, which
	// enables an application to abort certain method calls before they complete. By
	// default, HeartbeatMs is set to 0 , meaning no AbortCheck event callbacks will
	// trigger. Methods with event callbacks include: CkDecryptFile , CkEncryptFile ,
	// HashFile , and HashFileENC .
	// 
	// References:
	// 1: #AbortCheck
	// 2: #CkDecryptFile
	// 3: #CkEncryptFile
	// 4: #HashFile
	// 5: #HashFileENC
	int get_HeartbeatMs(void);
	// The interval in milliseconds between each AbortCheck event callback, which
	// enables an application to abort certain method calls before they complete. By
	// default, HeartbeatMs is set to 0 , meaning no AbortCheck event callbacks will
	// trigger. Methods with event callbacks include: CkDecryptFile , CkEncryptFile ,
	// HashFile , and HashFileENC .
	// 
	// References:
	// 1: #AbortCheck
	// 2: #CkDecryptFile
	// 3: #CkEncryptFile
	// 4: #HashFile
	// 5: #HashFileENC
	void put_HeartbeatMs(int newVal);

	// This applies only to creating digital signatures. By default (true), any
	// additional certificates in the authentication chain are included in the PKCS7
	// digital signature.
	bool get_IncludeCertChain(void);
	// This applies only to creating digital signatures. By default (true), any
	// additional certificates in the authentication chain are included in the PKCS7
	// digital signature.
	void put_IncludeCertChain(bool newVal);

	// The initial counter for the ChaCha20 encryption algorithm, which has a default
	// value of 0, is pre-agreed by both the encryptor and decryptor.
	int get_InitialCount(void);
	// The initial counter for the ChaCha20 encryption algorithm, which has a default
	// value of 0, is pre-agreed by both the encryptor and decryptor.
	void put_InitialCount(int newVal);

	// The iteration count in password-based encryption (PBE) establishes the
	// computational difficulty for encryption and decryption, thereby enhancing
	// resistance to exhaustive search attacks. The default iteration count is 1024 ,
	// which is considered low, so it is recommended that applications increase this
	// number when using pbes2 encryption.
	// 
	// PBES2 Iteration Count Recommendations
	// 
	// Aim for a 100–200 ms derive time on your target hardware.
	// 
	//     * Server/Desktop: 100000 – 1000000+
	//     * Mobile/Embedded: 50000 - 100000
	// 
	// Benchmark annually and increase iterations as hardware improves.
	// 
	int get_IterationCount(void);
	// The iteration count in password-based encryption (PBE) establishes the
	// computational difficulty for encryption and decryption, thereby enhancing
	// resistance to exhaustive search attacks. The default iteration count is 1024 ,
	// which is considered low, so it is recommended that applications increase this
	// number when using pbes2 encryption.
	// 
	// PBES2 Iteration Count Recommendations
	// 
	// Aim for a 100–200 ms derive time on your target hardware.
	// 
	//     * Server/Desktop: 100000 – 1000000+
	//     * Mobile/Embedded: 50000 - 100000
	// 
	// Benchmark annually and increase iterations as hardware improves.
	// 
	void put_IterationCount(int newVal);

	// The key length in bits for symmetric encryption algorithms. The default value is
	// 256 .
	int get_KeyLength(void);
	// The key length in bits for symmetric encryption algorithms. The default value is
	// 256 .
	void put_KeyLength(int newVal);

	// See the documentation for the FirstChunk property.
	// 
	// References:
	// 1: #FirstChunk
	bool get_LastChunk(void);
	// See the documentation for the FirstChunk property.
	// 
	// References:
	// 1: #FirstChunk
	void put_LastChunk(bool newVal);

	// Selects the MAC algorithm to be used for any of the Mac methods, such as
	// MacStringENC, MacBytes, etc. The default value is hmac . Possible values are
	// hmac and poly1305 .
	void get_MacAlgorithm(CkString &str);
	// Selects the MAC algorithm to be used for any of the Mac methods, such as
	// MacStringENC, MacBytes, etc. The default value is hmac . Possible values are
	// hmac and poly1305 .
	const char *macAlgorithm(void);
	// Selects the MAC algorithm to be used for any of the Mac methods, such as
	// MacStringENC, MacBytes, etc. The default value is hmac . Possible values are
	// hmac and poly1305 .
	void put_MacAlgorithm(const char *newVal);

	// This property is set upon verifying a digital signature and indicates the number
	// of signer certificates. You can retrieve each signing certificate using the
	// LastSignerCert method with an index ranging from 0 to NumSignerCerts -1.
	// 
	// References:
	// 1: #LastSignerCert
	int get_NumSignerCerts(void);

	// Selects the hash algorithm for use within OAEP padding when encrypting using pki
	// with RSAES-OAEP. The valid choices are sha1 , sha256 , sha384 , sha512 ,
	// 
	// The default value is sha256
	// 
	void get_OaepHash(CkString &str);
	// Selects the hash algorithm for use within OAEP padding when encrypting using pki
	// with RSAES-OAEP. The valid choices are sha1 , sha256 , sha384 , sha512 ,
	// 
	// The default value is sha256
	// 
	const char *oaepHash(void);
	// Selects the hash algorithm for use within OAEP padding when encrypting using pki
	// with RSAES-OAEP. The valid choices are sha1 , sha256 , sha384 , sha512 ,
	// 
	// The default value is sha256
	// 
	void put_OaepHash(const char *newVal);

	// Selects the MGF hash algorithm for use within OAEP padding when encrypting using
	// pki with RSAES-OAEP. The valid choices are sha1 , sha256 , sha384 , sha512 , The
	// default is sha256 .
	void get_OaepMgfHash(CkString &str);
	// Selects the MGF hash algorithm for use within OAEP padding when encrypting using
	// pki with RSAES-OAEP. The valid choices are sha1 , sha256 , sha384 , sha512 , The
	// default is sha256 .
	const char *oaepMgfHash(void);
	// Selects the MGF hash algorithm for use within OAEP padding when encrypting using
	// pki with RSAES-OAEP. The valid choices are sha1 , sha256 , sha384 , sha512 , The
	// default is sha256 .
	void put_OaepMgfHash(const char *newVal);

	// Selects the RSA encryption scheme when encrypting using pki (with a certificate
	// and private key). The default value is false, which selects RSAES_PKCS1-V1_5.
	// If set to true, then RSAES_OAEP is used.
	bool get_OaepPadding(void);
	// Selects the RSA encryption scheme when encrypting using pki (with a certificate
	// and private key). The default value is false, which selects RSAES_PKCS1-V1_5.
	// If set to true, then RSAES_OAEP is used.
	void put_OaepPadding(bool newVal);

	// This property defines the padding scheme Chilkat uses for adding padding to
	// input data during encryption and removing it during decryption. It is applicable
	// only to symmetric block ciphers, such as AES, Blowfish, and Twofish, which
	// require input sizes matching their exact block size. Padding ensures the last
	// block is completely filled.
	// 
	// The possible values are:
	//     1. PKCS#5/PKCS#7 (RFC 1423) default
	//     Each pad byte = number of padding bytes.
	// 
	//     Block size: 8
	//     Data: "HELLO" (5 bytes)
	//     Padding: 0x03 0x03 0x03
	//     2. FIPS 81
	//     Last byte = count; others = random.
	// 
	//     Block size: 8
	//     Data: "HELLO"
	//     Padding: 0xA4 0x2F 0x9C 0x03
	//     3. Random
	//     All pad bytes random; decryptor must know original length.
	// 
	//     Block size: 8
	//     Data: "HELLO"
	//     Padding: 0x7D 0x20 0xCB 0x81
	//     4. Null (0x00)
	//     Pad with zeros; no padding if already exact.
	// 
	//     Block size: 8
	//     Data: "HEL" (3 bytes)
	//     Padding: 0x00 0x00 0x00 0x00 0x00
	//     5. Space (0x20)
	//     Pad with spaces; no padding if already exact.
	// 
	//     Block size: 8
	//     Data: "HEL" (3 bytes)
	//     Padding: 0x20 0x20 0x20 0x20 0x20
	// 
	int get_PaddingScheme(void);
	// This property defines the padding scheme Chilkat uses for adding padding to
	// input data during encryption and removing it during decryption. It is applicable
	// only to symmetric block ciphers, such as AES, Blowfish, and Twofish, which
	// require input sizes matching their exact block size. Padding ensures the last
	// block is completely filled.
	// 
	// The possible values are:
	//     1. PKCS#5/PKCS#7 (RFC 1423) default
	//     Each pad byte = number of padding bytes.
	// 
	//     Block size: 8
	//     Data: "HELLO" (5 bytes)
	//     Padding: 0x03 0x03 0x03
	//     2. FIPS 81
	//     Last byte = count; others = random.
	// 
	//     Block size: 8
	//     Data: "HELLO"
	//     Padding: 0xA4 0x2F 0x9C 0x03
	//     3. Random
	//     All pad bytes random; decryptor must know original length.
	// 
	//     Block size: 8
	//     Data: "HELLO"
	//     Padding: 0x7D 0x20 0xCB 0x81
	//     4. Null (0x00)
	//     Pad with zeros; no padding if already exact.
	// 
	//     Block size: 8
	//     Data: "HEL" (3 bytes)
	//     Padding: 0x00 0x00 0x00 0x00 0x00
	//     5. Space (0x20)
	//     Pad with spaces; no padding if already exact.
	// 
	//     Block size: 8
	//     Data: "HEL" (3 bytes)
	//     Padding: 0x20 0x20 0x20 0x20 0x20
	// 
	void put_PaddingScheme(int newVal);

	// If the CryptAlgorithm property is set to pbes1 or pbes2 , this property defines
	// the symmetric encryption algorithm to be used for password-based encryption
	// (PBE). The default is "des" . Applications should set this property equal to
	// "aes" .
	// 
	// References:
	// 1: #CryptAlgorithm
	void get_PbesAlgorithm(CkString &str);
	// If the CryptAlgorithm property is set to pbes1 or pbes2 , this property defines
	// the symmetric encryption algorithm to be used for password-based encryption
	// (PBE). The default is "des" . Applications should set this property equal to
	// "aes" .
	// 
	// References:
	// 1: #CryptAlgorithm
	const char *pbesAlgorithm(void);
	// If the CryptAlgorithm property is set to pbes1 or pbes2 , this property defines
	// the symmetric encryption algorithm to be used for password-based encryption
	// (PBE). The default is "des" . Applications should set this property equal to
	// "aes" .
	// 
	// References:
	// 1: #CryptAlgorithm
	void put_PbesAlgorithm(const char *newVal);

	// The password to be used when the CryptAlgorithm is "pbes1" or "pbes2" .
	// 
	// References:
	// 1: #CryptAlgorithm
	void get_PbesPassword(CkString &str);
	// The password to be used when the CryptAlgorithm is "pbes1" or "pbes2" .
	// 
	// References:
	// 1: #CryptAlgorithm
	const char *pbesPassword(void);
	// The password to be used when the CryptAlgorithm is "pbes1" or "pbes2" .
	// 
	// References:
	// 1: #CryptAlgorithm
	void put_PbesPassword(const char *newVal);

	// This property determines the underlying symmetric encryption algorithm when the
	// CryptAlgorithm property is set to pki for selecting PKCS7 public-key encryption.
	// 
	// The default is aes .
	// 
	// 
	// References:
	// 1: #CryptAlgorithm
	void get_Pkcs7CryptAlg(CkString &str);
	// This property determines the underlying symmetric encryption algorithm when the
	// CryptAlgorithm property is set to pki for selecting PKCS7 public-key encryption.
	// 
	// The default is aes .
	// 
	// 
	// References:
	// 1: #CryptAlgorithm
	const char *pkcs7CryptAlg(void);
	// This property determines the underlying symmetric encryption algorithm when the
	// CryptAlgorithm property is set to pki for selecting PKCS7 public-key encryption.
	// 
	// The default is aes .
	// 
	// 
	// References:
	// 1: #CryptAlgorithm
	void put_Pkcs7CryptAlg(const char *newVal);

	// The effective key length (in bits) for the RC2 encryption algorithm. When using
	// RC2, set both the KeyLength and Rc2EffectiveKeyLength properties to values
	// between 8 and 1024, inclusive. The default setting for both is 128.
	// 
	// The default value is 128
	// 
	// RC2 is an old symmetric encryption algorithm, now considered insecure due to its
	// small key size and vulnerability to cryptanalysis. Modern algorithms like AES
	// are recommended instead.
	// 
	// 
	// References:
	// 1: #KeyLength
	int get_Rc2EffectiveKeyLength(void);
	// The effective key length (in bits) for the RC2 encryption algorithm. When using
	// RC2, set both the KeyLength and Rc2EffectiveKeyLength properties to values
	// between 8 and 1024, inclusive. The default setting for both is 128.
	// 
	// The default value is 128
	// 
	// RC2 is an old symmetric encryption algorithm, now considered insecure due to its
	// small key size and vulnerability to cryptanalysis. Modern algorithms like AES
	// are recommended instead.
	// 
	// 
	// References:
	// 1: #KeyLength
	void put_Rc2EffectiveKeyLength(int newVal);

	// This property applies when creating RSA signatures.
	// 
	// It defines the RSA signature scheme . The default is PKCS1-v1_5 . You can change
	// it to RSASSA-PSS (or pss ) to use the RSASSA-PSS signature scheme.
	// 
	//     1. PKCS#1 v1.5
	//     Older, deterministic scheme.
	//     - Simple padding.
	//     - Vulnerable to certain attacks if not used carefully.
	//     - Still widely used for compatibility.
	//     2. RSASSA-PSS
	//     Newer, probabilistic scheme (recommended by modern standards).
	//     - Adds random salt for each signature.
	//     - More secure against chosen-plaintext and padding oracle attacks.
	//     - Recommended by modern standards like PKCS#1 v2.1 and FIPS.
	// 
	void get_SigningAlg(CkString &str);
	// This property applies when creating RSA signatures.
	// 
	// It defines the RSA signature scheme . The default is PKCS1-v1_5 . You can change
	// it to RSASSA-PSS (or pss ) to use the RSASSA-PSS signature scheme.
	// 
	//     1. PKCS#1 v1.5
	//     Older, deterministic scheme.
	//     - Simple padding.
	//     - Vulnerable to certain attacks if not used carefully.
	//     - Still widely used for compatibility.
	//     2. RSASSA-PSS
	//     Newer, probabilistic scheme (recommended by modern standards).
	//     - Adds random salt for each signature.
	//     - More secure against chosen-plaintext and padding oracle attacks.
	//     - Recommended by modern standards like PKCS#1 v2.1 and FIPS.
	// 
	const char *signingAlg(void);
	// This property applies when creating RSA signatures.
	// 
	// It defines the RSA signature scheme . The default is PKCS1-v1_5 . You can change
	// it to RSASSA-PSS (or pss ) to use the RSASSA-PSS signature scheme.
	// 
	//     1. PKCS#1 v1.5
	//     Older, deterministic scheme.
	//     - Simple padding.
	//     - Vulnerable to certain attacks if not used carefully.
	//     - Still widely used for compatibility.
	//     2. RSASSA-PSS
	//     Newer, probabilistic scheme (recommended by modern standards).
	//     - Adds random salt for each signature.
	//     - More secure against chosen-plaintext and padding oracle attacks.
	//     - Recommended by modern standards like PKCS#1 v2.1 and FIPS.
	// 
	void put_SigningAlg(const char *newVal);

	// Contains JSON to specify the authenticated (signed) attributes or
	// unauthenticated (unsigned) attributes that are to be included in CMS signatures.
	// The default value is:{
	//     "contentType": true,
	//     "signingTime": true,
	//     "messageDigest": true
	// }
	void get_SigningAttributes(CkString &str);
	// Contains JSON to specify the authenticated (signed) attributes or
	// unauthenticated (unsigned) attributes that are to be included in CMS signatures.
	// The default value is:{
	//     "contentType": true,
	//     "signingTime": true,
	//     "messageDigest": true
	// }
	const char *signingAttributes(void);
	// Contains JSON to specify the authenticated (signed) attributes or
	// unauthenticated (unsigned) attributes that are to be included in CMS signatures.
	// The default value is:{
	//     "contentType": true,
	//     "signingTime": true,
	//     "messageDigest": true
	// }
	void put_SigningAttributes(const char *newVal);

	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty.
	// 
	// Can be set to a list of the following comma separated keywords:
	//     * UseConstructedOctets - Introduced in v9.5.0.83. When creating opaque CMS
	//     signatures (signatures that embed the data being signed), will use the
	//     constructed octets form of the ASN.1 that holds the data. This is to satify
	//     some validators that are brittle/fragile/picky and require a particular format,
	//     such as for the ICP-Brazil Digital Signature Standard.
	// 
	void get_UncommonOptions(CkString &str);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty.
	// 
	// Can be set to a list of the following comma separated keywords:
	//     * UseConstructedOctets - Introduced in v9.5.0.83. When creating opaque CMS
	//     signatures (signatures that embed the data being signed), will use the
	//     constructed octets form of the ASN.1 that holds the data. This is to satify
	//     some validators that are brittle/fragile/picky and require a particular format,
	//     such as for the ICP-Brazil Digital Signature Standard.
	// 
	const char *uncommonOptions(void);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty.
	// 
	// Can be set to a list of the following comma separated keywords:
	//     * UseConstructedOctets - Introduced in v9.5.0.83. When creating opaque CMS
	//     signatures (signatures that embed the data being signed), will use the
	//     constructed octets form of the ASN.1 that holds the data. This is to satify
	//     some validators that are brittle/fragile/picky and require a particular format,
	//     such as for the ICP-Brazil Digital Signature Standard.
	// 
	void put_UncommonOptions(const char *newVal);

	// When UU encoding, this is the filename to be embedded in UU encoded output. The
	// default is file.dat . When UU decoding, this is the filename found in the UU
	// encoded input.
	void get_UuFilename(CkString &str);
	// When UU encoding, this is the filename to be embedded in UU encoded output. The
	// default is file.dat . When UU decoding, this is the filename found in the UU
	// encoded input.
	const char *uuFilename(void);
	// When UU encoding, this is the filename to be embedded in UU encoded output. The
	// default is file.dat . When UU decoding, this is the filename found in the UU
	// encoded input.
	void put_UuFilename(const char *newVal);

	// When UU encoding, this is the file permissions mode to be embedded in UU encoded
	// output. The default is 644 . When UU decoding, this property is set to the mode
	// found in the UU encoded input.
	void get_UuMode(CkString &str);
	// When UU encoding, this is the file permissions mode to be embedded in UU encoded
	// output. The default is 644 . When UU decoding, this property is set to the mode
	// found in the UU encoded input.
	const char *uuMode(void);
	// When UU encoding, this is the file permissions mode to be embedded in UU encoded
	// output. The default is 644 . When UU decoding, this property is set to the mode
	// found in the UU encoded input.
	void put_UuMode(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds a certificate for public-key encryption. To enable public-key encryption
	// with digital certificates, set the CryptAlgorithm property to pki . Call
	// AddEncryptCert separately for each certificate you wish to use for encryption.
	// 
	// Any of the Encrypt* methods will do RSA public-key encryption when the
	// CryptAlgorithm is set to the keyword pki . The output is a PKCS#7 enveloped-data
	// secure container.
	// 
	// 
	// References:
	// 1: #CryptAlgorithm
	// 2: #AddEncryptCert
	void AddEncryptCert(CkCert &cert);


	// Adds a PFX file to the object's list of sources for locating certificates and
	// private keys during public-key decryption or signing. To add multiple PFX
	// sources, call this method multiple times. bd should contain the bytes of a PFX
	// file (also known as PKCS12 or .p12 ).
	// 
	// Note: Information about the certificate(s) needed for public-key decryption are
	// included in the PKCS#7 enveloped-data . Chilkat will automatically find a usable
	// certificate and private key from sources like Windows certificate stores, the
	// Apple keychain, or other sources provided by the application.
	// 
	bool AddPfxSourceBd(CkBinData &bd, const char *password);


	// Adds a PFX file to the object's list of sources for locating certificates and
	// private keys during public-key decryption or signing. To add multiple PFX
	// sources, call this method multiple times. pfxBytes should contain the bytes of a PFX
	// file (also known as PKCS12 or .p12 ).
	bool AddPfxSourceData(CkByteData &pfxBytes, const char *pfxPassword);


	// Adds a PFX file to the object's list of sources for locating certificates and
	// private keys during public-key decryption or signing. To add multiple PFX
	// sources, call this method multiple times.
	// 
	// Note: Information about the certificate(s) needed for public-key decryption are
	// included in the PKCS#7 enveloped-data . Chilkat will automatically find a usable
	// certificate and private key from sources like Windows certificate stores, the
	// Apple keychain, or other sources provided by the application.
	// 
	bool AddPfxSourceFile(const char *pfxFilePath, const char *pfxPassword);


	// Call this method once per certificate to add multiple certificates for signing .
	// If signing with a single certificate, then the SetSigningCert or SetSigningCert2
	// methods can be used instead.
	bool AddSigningCert(CkCert &cert);


	// Implements the AES Key Wrap Algorithm (RFC 3394) for unwrapping. The kek is the
	// Key Encryption Key (the AES key used to unwrap the wrappedKeyData). The arguments and
	// return value are binary encoded strings using the encoding specified by encoding
	// (which can be base64 , hex , base64url , etc.) The full list of supported
	// encodings is available at the link below.
	// 
	// The kek should be an AES key of 16 bytes , 24 bytes , or 32 bytes (i.e.
	// 128-bits, 192- bits, or 256-bits). For example, if passed as a hex string, then
	// the kek should be 32 chars in length, 48 chars, or 64 chars (because each byte
	// is represented as 2 chars in hex).
	// 
	// The wrappedKeyData contains the data to be unwrapped. The result, if decoded, is 8 bytes
	// less than the wrapped key data. For example, if a 256-bit AES key (32 bytes) is
	// wrapped, the size of the wrapped key data is 40 bytes. Unwrapping restores it to
	// the original 32 bytes.
	// 
	bool AesKeyUnwrap(const char *kek, const char *wrappedKeyData, const char *encoding, CkString &outStr);

	// Implements the AES Key Wrap Algorithm (RFC 3394) for unwrapping. The kek is the
	// Key Encryption Key (the AES key used to unwrap the wrappedKeyData). The arguments and
	// return value are binary encoded strings using the encoding specified by encoding
	// (which can be base64 , hex , base64url , etc.) The full list of supported
	// encodings is available at the link below.
	// 
	// The kek should be an AES key of 16 bytes , 24 bytes , or 32 bytes (i.e.
	// 128-bits, 192- bits, or 256-bits). For example, if passed as a hex string, then
	// the kek should be 32 chars in length, 48 chars, or 64 chars (because each byte
	// is represented as 2 chars in hex).
	// 
	// The wrappedKeyData contains the data to be unwrapped. The result, if decoded, is 8 bytes
	// less than the wrapped key data. For example, if a 256-bit AES key (32 bytes) is
	// wrapped, the size of the wrapped key data is 40 bytes. Unwrapping restores it to
	// the original 32 bytes.
	// 
	const char *aesKeyUnwrap(const char *kek, const char *wrappedKeyData, const char *encoding);

	// Implements the AES Key Wrap with Padding Algorithm (RFC 5649) for unwrapping.
	// The kek is the Key Encryption Key (the AES key used to unwrap the wrappedKeyData). The
	// arguments and return value are binary encoded strings using the encoding
	// specified by encoding (which can be base64 , hex , base64url , etc.)
	// 
	// The kek should be an AES key of 16 bytes , 24 bytes , or 32 bytes (i.e.
	// 128-bits, 192- bits, or 256-bits). For example, if passed as a hex string, then
	// the kek should be 32 chars in length, 48 chars, or 64 chars (because each byte
	// is represented as 2 chars in hex).
	// 
	// The wrappedKeyData contains the data to be unwrapped.
	// 
	// The unwrapped key is returned as an encoded string (using the encoding specified
	// in encoding).
	// 
	bool AesKeyUnwrapWithPadding(const char *kek, const char *wrappedKeyData, const char *encoding, CkString &outStr);

	// Implements the AES Key Wrap with Padding Algorithm (RFC 5649) for unwrapping.
	// The kek is the Key Encryption Key (the AES key used to unwrap the wrappedKeyData). The
	// arguments and return value are binary encoded strings using the encoding
	// specified by encoding (which can be base64 , hex , base64url , etc.)
	// 
	// The kek should be an AES key of 16 bytes , 24 bytes , or 32 bytes (i.e.
	// 128-bits, 192- bits, or 256-bits). For example, if passed as a hex string, then
	// the kek should be 32 chars in length, 48 chars, or 64 chars (because each byte
	// is represented as 2 chars in hex).
	// 
	// The wrappedKeyData contains the data to be unwrapped.
	// 
	// The unwrapped key is returned as an encoded string (using the encoding specified
	// in encoding).
	// 
	const char *aesKeyUnwrapWithPadding(const char *kek, const char *wrappedKeyData, const char *encoding);

	// Implements the AES Key Wrap Algorithm (RFC 3394). The kek is the Key Encryption
	// Key (the AES key used to encrypt the keyData). The arguments and return value are
	// binary encoded strings using the encoding specified by encoding (which can be base64
	// , hex , base64url , etc.) The full list of supported encodings is available at
	// the link below.
	// 
	// The kek should be an AES key of 16 bytes , 24 bytes , or 32 bytes (i.e.
	// 128-bits, 192- bits, or 256-bits). For example, if passed as a hex string, then
	// the kek should be 32 chars in length, 48 chars, or 64 chars (because each byte
	// is represented as 2 chars in hex).
	// 
	// The keyData contains the data to be key wrapped. It must be a multiple of 64-bits
	// in length. In other words, if the keyData is decoded to binary, it should be a
	// number of bytes that is a multiple of 8.
	// 
	// The return string, if decoded to binary bytes, is equal to the size of the key
	// data + 8 additional bytes.
	// 
	bool AesKeyWrap(const char *kek, const char *keyData, const char *encoding, CkString &outStr);

	// Implements the AES Key Wrap Algorithm (RFC 3394). The kek is the Key Encryption
	// Key (the AES key used to encrypt the keyData). The arguments and return value are
	// binary encoded strings using the encoding specified by encoding (which can be base64
	// , hex , base64url , etc.) The full list of supported encodings is available at
	// the link below.
	// 
	// The kek should be an AES key of 16 bytes , 24 bytes , or 32 bytes (i.e.
	// 128-bits, 192- bits, or 256-bits). For example, if passed as a hex string, then
	// the kek should be 32 chars in length, 48 chars, or 64 chars (because each byte
	// is represented as 2 chars in hex).
	// 
	// The keyData contains the data to be key wrapped. It must be a multiple of 64-bits
	// in length. In other words, if the keyData is decoded to binary, it should be a
	// number of bytes that is a multiple of 8.
	// 
	// The return string, if decoded to binary bytes, is equal to the size of the key
	// data + 8 additional bytes.
	// 
	const char *aesKeyWrap(const char *kek, const char *keyData, const char *encoding);

	// Implements the AES Key Wrap with Padding Algorithm (RFC 5649). The kek is the
	// Key Encryption Key (the AES key used to encrypt the keyData). The arguments and
	// return value are binary encoded strings using the encoding specified by encoding
	// (which can be base64 , hex , base64url , etc.)
	// 
	// The kek should be an AES key of 16 bytes , 24 bytes , or 32 bytes (i.e.
	// 128-bits, 192- bits, or 256-bits). For example, if passed as a hex string, then
	// the kek should be 32 chars in length, 48 chars, or 64 chars (because each byte
	// is represented as 2 chars in hex).
	// 
	// The keyData contains the data to be key wrapped.
	// 
	// Returns the wrapped key using the encoding specified in encoding.
	// 
	bool AesKeyWrapWithPadding(const char *kek, const char *keyData, const char *encoding, CkString &outStr);

	// Implements the AES Key Wrap with Padding Algorithm (RFC 5649). The kek is the
	// Key Encryption Key (the AES key used to encrypt the keyData). The arguments and
	// return value are binary encoded strings using the encoding specified by encoding
	// (which can be base64 , hex , base64url , etc.)
	// 
	// The kek should be an AES key of 16 bytes , 24 bytes , or 32 bytes (i.e.
	// 128-bits, 192- bits, or 256-bits). For example, if passed as a hex string, then
	// the kek should be 32 chars in length, 48 chars, or 64 chars (because each byte
	// is represented as 2 chars in hex).
	// 
	// The keyData contains the data to be key wrapped.
	// 
	// Returns the wrapped key using the encoding specified in encoding.
	// 
	const char *aesKeyWrapWithPadding(const char *kek, const char *keyData, const char *encoding);

	// Computes and returns a bcrypt hash of the password. The number of rounds of hashing
	// is determined by the BCryptWorkFactor property.
	// 
	// Starting in v9.5.0.76, if the password is prefixed with $2b$ then the output will
	// use the $2b version of bcrypt. For example, to create a $2b$ bcrypt has for the
	// password secret , pass in the string $2b$secret for password.
	// 
	bool BCryptHash(const char *password, CkString &outStr);

	// Computes and returns a bcrypt hash of the password. The number of rounds of hashing
	// is determined by the BCryptWorkFactor property.
	// 
	// Starting in v9.5.0.76, if the password is prefixed with $2b$ then the output will
	// use the $2b version of bcrypt. For example, to create a $2b$ bcrypt has for the
	// password secret , pass in the string $2b$secret for password.
	// 
	const char *bCryptHash(const char *password);

	// Verifies the password against a previously computed BCrypt hash. Returns true if
	// the password matches the bcryptHash. Returns false if the password does not match.
	bool BCryptVerify(const char *password, const char *bcryptHash);


	// File-to-file decryption that supports files of any size by using internal
	// streaming mode.
	bool CkDecryptFile(const char *srcFile, const char *destFile);

	// File-to-file decryption that supports files of any size by using internal
	// streaming mode.
	CkTask *CkDecryptFileAsync(const char *srcFile, const char *destFile);


	// File-to-file encryption that operates in streaming mode, allowing it to encrypt
	// files of any size.
	bool CkEncryptFile(const char *srcFile, const char *destFile);

	// File-to-file encryption that operates in streaming mode, allowing it to encrypt
	// files of any size.
	CkTask *CkEncryptFileAsync(const char *srcFile, const char *destFile);


	// Clears the internal list of digital certificates to be used for public-key
	// encryption.
	void ClearEncryptCerts(void);


	// Clears the set of certificates to be used in signing.
	void ClearSigningCerts(void);


	// Co-sign's an existing CMS signature. bdIn contains the existing CMS signature.
	// If successful, cert is the output co-signed CMS signature.
	bool CoSign(CkBinData &bdIn, CkCert &cert, CkBinData &bdOut);


	// Computes a CRC for data contained in crcAlg, which can be either crc-32 used in
	// the Zip file format, or crc8 for the CRC8 algorithm.
	unsigned long CrcBd(const char *crcAlg, CkBinData &bd);


	// Calculates a CRC for byte data in memory using the CRC algorithm specified by
	// crcAlg. Possible algorithms are:
	//     * crc-32 - This is the CRC used in the Zip file format.
	//     * crc8
	unsigned long CrcBytes(const char *crcAlg, CkByteData &byteData);


	// Calculates the CRC for a file's contents using the CRC algorithm specified by
	// crcAlg. Possible algorithms are:
	//     * crc-32 - This is the CRC used in the Zip file format.
	//     * crc8
	unsigned long CrcFile(const char *crcAlg, const char *path);

	// Calculates the CRC for a file's contents using the CRC algorithm specified by
	// crcAlg. Possible algorithms are:
	//     * crc-32 - This is the CRC used in the Zip file format.
	//     * crc8
	CkTask *CrcFileAsync(const char *crcAlg, const char *path);


	// Signs the contents of inFilePath and writes the detached PKCS7 signature ( .p7s ) to
	// sigFilePath.
	bool CreateDetachedSignature(const char *inFilePath, const char *sigFilePath);


	// Signs the contents of inFilename and writes the enveloping (i.e. opaque) PKCS7
	// signature ( .p7m ) to p7mPath.
	// 
	// In a PKCS#7/CMS signature, the signer computes a cryptographic hash (e.g.
	// SHA-256) of the data, then uses their private key to sign that hash.
	// 
	// The signature = Sign( Hash(data) )
	// 
	// This signed hash is what gets stored in the signature file. For
	// enveloping/opaque signatures, the signed data is also stored in the signature
	// file.
	// 
	// Set the HashAlgorithm property to specify the hash algorithmg. The valid options
	// are sha256 , sha1 , sha384 , and sha512 .
	// 
	bool CreateP7M(const char *inFilename, const char *p7mPath);

	// Signs the contents of inFilename and writes the enveloping (i.e. opaque) PKCS7
	// signature ( .p7m ) to p7mPath.
	// 
	// In a PKCS#7/CMS signature, the signer computes a cryptographic hash (e.g.
	// SHA-256) of the data, then uses their private key to sign that hash.
	// 
	// The signature = Sign( Hash(data) )
	// 
	// This signed hash is what gets stored in the signature file. For
	// enveloping/opaque signatures, the signed data is also stored in the signature
	// file.
	// 
	// Set the HashAlgorithm property to specify the hash algorithmg. The valid options
	// are sha256 , sha1 , sha384 , and sha512 .
	// 
	CkTask *CreateP7MAsync(const char *inFilename, const char *p7mPath);


	// Signs the contents of inFilename and writes the detached PKCS7 signature ( .p7s ) to
	// p7sPath.
	// 
	// In a PKCS#7/CMS detached signature, the signer computes a cryptographic hash
	// (e.g. SHA-256) of the data, then uses their private key to sign that hash.
	// 
	// The signature = Sign( Hash(data) )
	// 
	// This signed hash is what gets stored in the signature file.
	// 
	// Set the HashAlgorithm property to specify the hash algorithmg. The valid options
	// are sha256 , sha1 , sha384 , and sha512 .
	// 
	bool CreateP7S(const char *inFilename, const char *p7sPath);

	// Signs the contents of inFilename and writes the detached PKCS7 signature ( .p7s ) to
	// p7sPath.
	// 
	// In a PKCS#7/CMS detached signature, the signer computes a cryptographic hash
	// (e.g. SHA-256) of the data, then uses their private key to sign that hash.
	// 
	// The signature = Sign( Hash(data) )
	// 
	// This signed hash is what gets stored in the signature file.
	// 
	// Set the HashAlgorithm property to specify the hash algorithmg. The valid options
	// are sha256 , sha1 , sha384 , and sha512 .
	// 
	CkTask *CreateP7SAsync(const char *inFilename, const char *p7sPath);


	// Applications should instead call BinData.AppendEncoded to append binary encoded
	// data (such as base64) to a BinData object. The decoded binary bytes can then be
	// obtained from the BinData object.
	// 
	// Decode binary data from an encoded string. The encoding can be set to any of the
	// following strings: base64 , hex , quoted-printable , url , base32 , Q , B ,
	// url_rc1738 , url_rfc2396 , url_rfc3986 , url_oauth , uu , modBase64 , or html
	// (for HTML entity encoding).
	// 
	bool Decode(const char *str, const char *encoding, CkByteData &outData);


	// Decodes from an encoding back to the original string. The encoding can be set to any
	// of the following strings: base64 , hex , quoted-printable , url , base32 , Q , B
	// , url_rc1738 , url_rfc2396 , url_rfc3986 , url_oauth , uu , modBase64 , or html
	// (for HTML entity encoding).
	bool DecodeString(const char *inStr, const char *charset, const char *encoding, CkString &outStr);

	// Decodes from an encoding back to the original string. The encoding can be set to any
	// of the following strings: base64 , hex , quoted-printable , url , base32 , Q , B
	// , url_rc1738 , url_rfc2396 , url_rfc3986 , url_oauth , uu , modBase64 , or html
	// (for HTML entity encoding).
	const char *decodeString(const char *inStr, const char *charset, const char *encoding);

	// Decrypts the contents of bd. This method can do either symmetric key
	// decryption or CMS public key decryption (e.g., PKCS#7 EnvelopedData ).
	// 
	// Before calling this method for symmetric key decryption (e.g., AES , ChaCha20 ,
	// Blowfish , etc.), ensure the following setup:
	// 
	//     1. Define the encryption algorithm using the CryptAlgorithm property.
	//     2. Specify the encryption key length with the KeyLength property.
	//     3. Establish the cipher mode through the CipherMode property.
	//     4. Use the SetEncodedIV method to set the IV, if needed by the cipher mode.
	//     5. Set the encryption key with the SetEncodedKey method.
	//     6. Ensure the PaddingScheme property matches the encryptor's value.
	// 
	// When calling this method for public key decryption (i.e. decrypting a PKCS7 CMS
	// message ), the following setup is required:
	// 
	//     1. The CryptAlgorithm property should be set to the string "pki" .
	//     2. Optionally specify the certificate to be used for decryption by calling
	//     SetDecryptCert . If SetDecryptCert is not called, then Chilkat will
	//     automatically search certificate sources ( Windows certificate stores ,
	//     Apple keychain , etc.) for the required certificate.
	bool DecryptBd(CkBinData &bd);


	// Decrypts a byte array and returns the unencrypted byte array. The property
	// settings used when encrypting the data must match the settings when decrypting.
	// Specifically, the CryptAlgorithm, CipherMode, PaddingScheme, KeyLength, IV, and
	// SecretKey properties must match.
	bool DecryptBytes(CkByteData &data, CkByteData &outData);


	// The same as DecryptBytes except the binary data is passed via a pointer and
	// length.
	bool DecryptBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);


	// Decrypts string-encoded encrypted data and returns the unencrypted byte array.
	// Data encrypted with EncryptBytesENC can be decrypted with this method. The
	// property settings used when encrypting the data must match the settings when
	// decrypting. Specifically, the EncodingMode, CryptAlgorithm, CipherMode,
	// PaddingScheme, KeyLength, IV, and SecretKey properties must match.
	bool DecryptBytesENC(const char *str, CkByteData &outData);


	// Decrypts encoded encrypted data, and returns the decrypted data as a binary
	// encoded string. For example:
	// Input → Decode EncodingMode → Decrypt → Encode EncodingMode → Output
	// 
	// The encoding (e.g. base64 , hex , etc.) is determined by the EncodingMode
	// property.
	// 
	// This method supports symmetric key and public key decryption. For more
	// information on properties that affect decryption, such as CryptAlgorithm ,
	// CipherMode , etc., refer to the DecryptBd method documentation.
	// 
	// 
	// References:
	// 1: #EncodingMode
	// 2: #CryptAlgorithm
	// 3: #CipherMode
	// 4: #DecryptBd
	bool DecryptEncoded(const char *encodedEncryptedData, CkString &outStr);

	// Decrypts encoded encrypted data, and returns the decrypted data as a binary
	// encoded string. For example:
	// Input → Decode EncodingMode → Decrypt → Encode EncodingMode → Output
	// 
	// The encoding (e.g. base64 , hex , etc.) is determined by the EncodingMode
	// property.
	// 
	// This method supports symmetric key and public key decryption. For more
	// information on properties that affect decryption, such as CryptAlgorithm ,
	// CipherMode , etc., refer to the DecryptBd method documentation.
	// 
	// 
	// References:
	// 1: #EncodingMode
	// 2: #CryptAlgorithm
	// 3: #CipherMode
	// 4: #DecryptBd
	const char *decryptEncoded(const char *encodedEncryptedData);

	// This function is intended for use when the expected decrypted output is text. It
	// decrypts the contents of bdIn and appends the resulting string to sbOut. Ensure
	// that the Charset property, such as utf-8, matches the one used during encryption
	// to interpret the decrypted bytes correctly as characters.
	// Input → Decrypt → Interpret Bytes according to Charset → Append to StringBuilder
	// 
	// This method supports symmetric key and public key decryption. For more
	// information on properties that affect decryption, such as CryptAlgorithm ,
	// CipherMode , etc., refer to the DecryptBd method documentation.
	// 
	// 
	// References:
	// 1: #Charset
	// 2: #CryptAlgorithm
	// 3: #CipherMode
	// 4: #DecryptBd
	bool DecryptSb(CkBinData &bdIn, CkStringBuilder &sbOut);


	// This function is intended for use when the expected decrypted output is text. It
	// decrypts binary encoded encrypted bytes passed in cipherText and appends the resulting
	// string to secureStr. Ensure that the Charset property, such as utf-8, matches the one
	// used during encryption to interpret the decrypted bytes correctly as characters.
	// Input → Decode using EncodingMode → Decrypt → Interpret Bytes according to
	// Charset → Append to Secure String
	// 
	// The encoding (e.g. base64 , hex , etc.) is determined by the EncodingMode
	// property.
	// 
	// This method supports symmetric key and public key decryption. For more
	// information on properties that affect decryption, such as CryptAlgorithm ,
	// CipherMode , etc., refer to the DecryptBd method documentation.
	// 
	// 
	// References:
	// 1: #Charset
	// 2: #EncodingMode
	// 3: #CryptAlgorithm
	// 4: #CipherMode
	// 5: #DecryptBd
	bool DecryptSecureENC(const char *cipherText, CkSecureString &secureStr);


	// This method is deprecated. Applications should implement streaming decryption by
	// using the FirstChunk and LastChunk properties.
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	bool DecryptStream(CkStream &strm);

	// This method is deprecated. Applications should implement streaming decryption by
	// using the FirstChunk and LastChunk properties.
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	CkTask *DecryptStreamAsync(CkStream &strm);


	// Decrypts a previously encrypted string, using the Charset property to interpret
	// the decrypted bytes as characters.
	bool DecryptString(CkByteData &data, CkString &outStr);

	// Decrypts a previously encrypted string, using the Charset property to interpret
	// the decrypted bytes as characters.
	const char *decryptString(CkByteData &data);

	// This function is intended for use when the expected decrypted output is text. It
	// decrypts binary encoded encrypted bytes passed in str and appends the resulting
	// string to ARG2. Ensure that the Charset property, such as utf-8, matches the one
	// used during encryption to interpret the decrypted bytes correctly as characters.
	// Input → Decode using EncodingMode → Decrypt → Interpret Bytes according to
	// Charset → Output
	// 
	// The encoding (e.g. base64 , hex , etc.) is determined by the EncodingMode
	// property.
	// 
	// This method supports symmetric key and public key decryption. For more
	// information on properties that affect decryption, such as CryptAlgorithm ,
	// CipherMode , etc., refer to the DecryptBd method documentation.
	// 
	// 
	// References:
	// 1: #Charset
	// 2: #EncodingMode
	// 3: #CryptAlgorithm
	// 4: #CipherMode
	// 5: #DecryptBd
	bool DecryptStringENC(const char *str, CkString &outStr);

	// This function is intended for use when the expected decrypted output is text. It
	// decrypts binary encoded encrypted bytes passed in str and appends the resulting
	// string to ARG2. Ensure that the Charset property, such as utf-8, matches the one
	// used during encryption to interpret the decrypted bytes correctly as characters.
	// Input → Decode using EncodingMode → Decrypt → Interpret Bytes according to
	// Charset → Output
	// 
	// The encoding (e.g. base64 , hex , etc.) is determined by the EncodingMode
	// property.
	// 
	// This method supports symmetric key and public key decryption. For more
	// information on properties that affect decryption, such as CryptAlgorithm ,
	// CipherMode , etc., refer to the DecryptBd method documentation.
	// 
	// 
	// References:
	// 1: #Charset
	// 2: #EncodingMode
	// 3: #CryptAlgorithm
	// 4: #CipherMode
	// 5: #DecryptBd
	const char *decryptStringENC(const char *str);

	// Encode binary data to base64 , hex , quoted-printable , URL encoding , etc. The
	// encoding can be set to any of the binary encodings supported by Chilkat. See the web
	// page linked below.
	bool Encode(CkByteData &byteData, const char *encoding, CkString &outStr);

	// Encode binary data to base64 , hex , quoted-printable , URL encoding , etc. The
	// encoding can be set to any of the binary encodings supported by Chilkat. See the web
	// page linked below.
	const char *encode(CkByteData &byteData, const char *encoding);

	// Encode binary data to base64, hex, quoted-printable, or URL-encoding. The encoding
	// can be set to any of the following strings: base64 , hex , quoted-printable ,
	// url , base32 , Q , B , url_rc1738 , url_rfc2396 , url_rfc3986 , url_oauth , uu ,
	// modBase64 , or html (for HTML entity encoding).
	// 
	// The pByteData points to the bytes to be encoded. The szByteData specifies the number of
	// bytes to encode.
	// 
	bool EncodeBytes(const void *pByteData, unsigned long szByteData, const char *encoding, CkString &outStr);

	// Encode binary data to base64, hex, quoted-printable, or URL-encoding. The encoding
	// can be set to any of the following strings: base64 , hex , quoted-printable ,
	// url , base32 , Q , B , url_rc1738 , url_rfc2396 , url_rfc3986 , url_oauth , uu ,
	// modBase64 , or html (for HTML entity encoding).
	// 
	// The pByteData points to the bytes to be encoded. The szByteData specifies the number of
	// bytes to encode.
	// 
	const char *encodeBytes(const void *pByteData, unsigned long szByteData, const char *encoding);

	// Encodes an integer to N bytes and returns in the specified encoding. If littleEndian is
	// true, then little-endian byte ordering is used. Otherwise big-endian byte
	// order is used.
	bool EncodeInt(int value, int numBytes, bool littleEndian, const char *encoding, CkString &outStr);

	// Encodes an integer to N bytes and returns in the specified encoding. If littleEndian is
	// true, then little-endian byte ordering is used. Otherwise big-endian byte
	// order is used.
	const char *encodeInt(int value, int numBytes, bool littleEndian, const char *encoding);

	// Binary encodes a string. The toEncodingName can be set to any of the binary encodings
	// supported by Chilkat, such as base64 , hex , etc. (see the link below for the
	// full list of encodings). The charsetName, such as "utf-8" , determines the bytes that
	// are encoded.
	// 
	// The toEncodingName can also be set to the value html for HTML entity encoding.
	// 
	bool EncodeString(const char *strToEncode, const char *charsetName, const char *toEncodingName, CkString &outStr);

	// Binary encodes a string. The toEncodingName can be set to any of the binary encodings
	// supported by Chilkat, such as base64 , hex , etc. (see the link below for the
	// full list of encodings). The charsetName, such as "utf-8" , determines the bytes that
	// are encoded.
	// 
	// The toEncodingName can also be set to the value html for HTML entity encoding.
	// 
	const char *encodeString(const char *strToEncode, const char *charsetName, const char *toEncodingName);

	// Encrypts the contents of bd. This method can do either symmetric key
	// encryption or CMS public key encryption (e.g., PKCS#7 EnvelopedData ).
	// 
	// Before calling this method for symmetric key encryption (e.g., AES , ChaCha20 ,
	// Blowfish , etc.), ensure the following setup:
	// 
	//     1. Define the encryption algorithm using the CryptAlgorithm property.
	//     2. Specify the encryption key length with the KeyLength property.
	//     3. Establish the cipher mode through the CipherMode property.
	//     4. Use the SetEncodedIV method to set the IV, if needed by the cipher mode.
	//     5. Set the encryption key with the SetEncodedKey method.
	//     6. Set the PaddingScheme property if needing something different than the
	//     default.
	// 
	// When calling this method for public key encryption (i.e. creating a PKCS7 CMS
	// message ), the following setup is required:
	// 
	//     1. The CryptAlgorithm property should be set to the string "pki" .
	//     2. To specify the encryption certificate, use SetEncryptCert . For multiple
	//     certificates, call AddEncryptCert for each one.
	// 
	// References:
	// 1: #CryptAlgorithm
	// 2: #KeyLength
	// 3: #CipherMode
	// 4: #SetEncodedIV
	// 5: #SetEncodedKey
	// 6: #PaddingScheme
	// 7: #SetEncryptCert
	// 8: #AddEncryptCert
	bool EncryptBd(CkBinData &bd);


	// Encrypts a byte array. The minimal set of properties that should be set before
	// encrypting are: CryptAlgorithm, SecretKey. Other properties that control
	// encryption are: CipherMode, PaddingScheme, KeyLength, IV. When decrypting, all
	// property settings must match otherwise garbled data is returned.
	bool EncryptBytes(CkByteData &data, CkByteData &outData);


	// The same as EncryptBytes except the binary data is passed via a pointer and
	// length.
	bool EncryptBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);


	// Encrypts a byte array and returns the encrypted data as an encoded (printable)
	// string. The minimal set of properties that should be set before encrypting are:
	// CryptAlgorithm, SecretKey, EncodingMode. Other properties that control
	// encryption are: CipherMode, PaddingScheme, KeyLength, IV. When decrypting, all
	// property settings must match otherwise garbled data is returned. The encoding of
	// the string that is returned is controlled by the EncodingMode property, which
	// can be set to Base64 , QP , or Hex .
	bool EncryptBytesENC(CkByteData &data, CkString &outStr);

	// Encrypts a byte array and returns the encrypted data as an encoded (printable)
	// string. The minimal set of properties that should be set before encrypting are:
	// CryptAlgorithm, SecretKey, EncodingMode. Other properties that control
	// encryption are: CipherMode, PaddingScheme, KeyLength, IV. When decrypting, all
	// property settings must match otherwise garbled data is returned. The encoding of
	// the string that is returned is controlled by the EncodingMode property, which
	// can be set to Base64 , QP , or Hex .
	const char *encryptBytesENC(CkByteData &data);

	// Encrypts binary-encoded data and returns it as a binary-encoded string. For
	// example:
	// Input → Decode EncodingMode → Encrypt → Encode EncodingMode → Output
	// 
	// The encoding (e.g. base64 , hex , etc.) is determined by the EncodingMode
	// property.
	// 
	// This method supports symmetric key and public key decryption. For more
	// information on properties that affect decryption, such as CryptAlgorithm ,
	// CipherMode , etc., refer to the method documentation.
	// 
	// 
	// References:
	// 1: #EncodingMode
	// 2: #CryptAlgorithm
	// 3: #CipherMode
	// 4: #DecryptBd
	bool EncryptEncoded(const char *str, CkString &outStr);

	// Encrypts binary-encoded data and returns it as a binary-encoded string. For
	// example:
	// Input → Decode EncodingMode → Encrypt → Encode EncodingMode → Output
	// 
	// The encoding (e.g. base64 , hex , etc.) is determined by the EncodingMode
	// property.
	// 
	// This method supports symmetric key and public key decryption. For more
	// information on properties that affect decryption, such as CryptAlgorithm ,
	// CipherMode , etc., refer to the method documentation.
	// 
	// 
	// References:
	// 1: #EncodingMode
	// 2: #CryptAlgorithm
	// 3: #CipherMode
	// 4: #DecryptBd
	const char *encryptEncoded(const char *str);

	// Encrypts text and appends the encrypted bytes in bdOut. The Charset property,
	// such as utf-8 , determines the actual bytes that are encrypted.
	// StringBuilder → Get bytes according to Charset → Encrypt → Append to BinData
	// 
	// This method supports symmetric key and public key encryption. For more
	// information on properties that affect encryption, such as CryptAlgorithm ,
	// CipherMode , etc., refer to the EncryptBd method documentation.
	// 
	// 
	// References:
	// 1: #Charset
	// 2: #CryptAlgorithm
	// 3: #CipherMode
	// 4: #EncryptBd
	bool EncryptSb(CkStringBuilder &sbIn, CkBinData &bdOut);


	// Encrypts the secure string and returns the encrypted bytes as a binary encoded
	// string. The Charset property determines the actual bytes that are encrypted.
	// SecureString → Get bytes according to Charset → Encrypt → Encode using
	// EncodingMode → Output
	// 
	// The encoding (e.g. base64 , hex , etc.) is determined by the EncodingMode
	// property.
	// 
	// This method supports symmetric key and public key encryption. For more
	// information on properties that affect encryption, such as CryptAlgorithm ,
	// CipherMode , etc., refer to the EncryptBd method documentation.
	// 
	// 
	// References:
	// 1: #Charset
	// 2: #EncodingMode
	// 3: #CryptAlgorithm
	// 4: #CipherMode
	// 5: #EncryptBd
	bool EncryptSecureENC(CkSecureString &secureStr, CkString &outStr);

	// Encrypts the secure string and returns the encrypted bytes as a binary encoded
	// string. The Charset property determines the actual bytes that are encrypted.
	// SecureString → Get bytes according to Charset → Encrypt → Encode using
	// EncodingMode → Output
	// 
	// The encoding (e.g. base64 , hex , etc.) is determined by the EncodingMode
	// property.
	// 
	// This method supports symmetric key and public key encryption. For more
	// information on properties that affect encryption, such as CryptAlgorithm ,
	// CipherMode , etc., refer to the EncryptBd method documentation.
	// 
	// 
	// References:
	// 1: #Charset
	// 2: #EncodingMode
	// 3: #CryptAlgorithm
	// 4: #CipherMode
	// 5: #EncryptBd
	const char *encryptSecureENC(CkSecureString &secureStr);

	// This method is deprecated. Applications should implement streaming encryption or
	// decryption by using the FirstChunk and LastChunk properties.
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	bool EncryptStream(CkStream &strm);

	// This method is deprecated. Applications should implement streaming encryption or
	// decryption by using the FirstChunk and LastChunk properties.
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	CkTask *EncryptStreamAsync(CkStream &strm);


	// Encrypts a string and returns the result as bytes, with the Charset property
	// determining the specific byte encoding of what gets encrypted.
	// 
	// References:
	// 1: #Charset
	bool EncryptString(const char *str, CkByteData &outData);


	// Encrypts the str and returns the encrypted bytes as a binary encoded string.
	// The Charset property determines the actual bytes that are encrypted.
	// Input → Get bytes according to Charset → Encrypt → Encode using EncodingMode →
	// Output
	// 
	// The encoding (e.g. base64 , hex , etc.) is determined by the EncodingMode
	// property.
	// 
	// This method supports symmetric key and public key encryption. For more
	// information on properties that affect encryption, such as CryptAlgorithm ,
	// CipherMode , etc., refer to the EncryptBd method documentation.
	// 
	// 
	// References:
	// 1: #Charset
	// 2: #EncodingMode
	// 3: #CryptAlgorithm
	// 4: #CipherMode
	// 5: #EncryptBd
	bool EncryptStringENC(const char *str, CkString &outStr);

	// Encrypts the str and returns the encrypted bytes as a binary encoded string.
	// The Charset property determines the actual bytes that are encrypted.
	// Input → Get bytes according to Charset → Encrypt → Encode using EncodingMode →
	// Output
	// 
	// The encoding (e.g. base64 , hex , etc.) is determined by the EncodingMode
	// property.
	// 
	// This method supports symmetric key and public key encryption. For more
	// information on properties that affect encryption, such as CryptAlgorithm ,
	// CipherMode , etc., refer to the EncryptBd method documentation.
	// 
	// 
	// References:
	// 1: #Charset
	// 2: #EncodingMode
	// 3: #CryptAlgorithm
	// 4: #CipherMode
	// 5: #EncryptBd
	const char *encryptStringENC(const char *str);

	// This method is deprecated and should be avoided because it transforms the
	// password into a binary secret key using a transformation that is undocumented
	// and specific to this Chilkat method. PBKDF2 is a standard and more secure method
	// of generating a binary secret key from a password.
	bool GenEncodedSecretKey(const char *password, const char *encoding, CkString &outStr);

	// This method is deprecated and should be avoided because it transforms the
	// password into a binary secret key using a transformation that is undocumented
	// and specific to this Chilkat method. PBKDF2 is a standard and more secure method
	// of generating a binary secret key from a password.
	const char *genEncodedSecretKey(const char *password, const char *encoding);

	// This method is deprecated and should be avoided because it transforms the
	// password into a binary secret key using a transformation that is undocumented
	// and specific to this Chilkat method. PBKDF2 is a standard and more secure method
	// of generating a binary secret key from a password. An example using PBKDF2 is
	// shown below.
	// 
	// This method converts a string into a byte array matching the bit length of the
	// KeyLength property. For instance, if KeyLength is 128 bits, the resulting array
	// will be 16 bytes. This byte array can be assigned to the SecretKey property. For
	// decryption to work, the SecretKey must match exactly. To use password-based
	// encryption, pass the password to this method to generate an appropriate binary
	// secret key for the SecretKey property.
	// 
	// IMPORTANT : Do not use this method to decrypt data if another party has provided
	// you with the secret key. It is intended to transform a password of any length
	// into a correctly sized binary secret key.
	// 
	bool GenerateSecretKey(const char *password, CkByteData &outData);


	// Generates a random UUID string having standard UUID format, such as
	// de305d54-75b4-431b-adb2-eb6b9e546014 .
	// 
	// Note: This generates a version 4 UUID using random byte values. See RFC 4122.
	// 
	bool GenerateUuid(CkString &outStr);

	// Generates a random UUID string having standard UUID format, such as
	// de305d54-75b4-431b-adb2-eb6b9e546014 .
	// 
	// Note: This generates a version 4 UUID using random byte values. See RFC 4122.
	// 
	const char *generateUuid(void);

	// Generates numBytes random bytes and returns them as an encoded string. The encoding
	// format (e.g., base64, hex) is determined by the EncodingMode property. It
	// utilizes the Fortuna cryptographically secure random number generator,
	// auto-seeded by an OS-dependent secure entropy source.
	// 
	// References:
	// 1: #EncodingMode
	bool GenRandomBytesENC(int numBytes, CkString &outStr);

	// Generates numBytes random bytes and returns them as an encoded string. The encoding
	// format (e.g., base64, hex) is determined by the EncodingMode property. It
	// utilizes the Fortuna cryptographically secure random number generator,
	// auto-seeded by an OS-dependent secure entropy source.
	// 
	// References:
	// 1: #EncodingMode
	const char *genRandomBytesENC(int numBytes);

	// This method is deprecated. Application should instead call LastDecryptCert
	// 
	// Returns the last certificate used for public-key decryption.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetDecryptCert(void);


	// This method retrieves the authenticated additional data (AAD) set by the
	// application during the last call to SetEncodedAad . However, using this method
	// is redundant (and therefore deprecated), as the application can store and
	// retrieve the AAD independently after calling SetEncodedAad.
	// 
	// References:
	// 1: #SetEncodedAad
	bool GetEncodedAad(const char *encoding, CkString &outStr);

	// This method retrieves the authenticated additional data (AAD) set by the
	// application during the last call to SetEncodedAad . However, using this method
	// is redundant (and therefore deprecated), as the application can store and
	// retrieve the AAD independently after calling SetEncodedAad.
	// 
	// References:
	// 1: #SetEncodedAad
	const char *getEncodedAad(const char *encoding);
	// This method retrieves the authenticated additional data (AAD) set by the
	// application during the last call to SetEncodedAad . However, using this method
	// is redundant (and therefore deprecated), as the application can store and
	// retrieve the AAD independently after calling SetEncodedAad.
	// 
	// References:
	// 1: #SetEncodedAad
	const char *encodedAad(const char *encoding);


	// When encrypting in GCM mode, Chilkat generates the GCM authentication tag . The
	// application can then use this method to retrieve the tag, which should be sent
	// to the decrypting party along with the encrypted data. For further details on
	// GCM authenticated encryption, please refer to the web pages linked below.
	bool GetEncodedAuthTag(const char *encoding, CkString &outStr);

	// When encrypting in GCM mode, Chilkat generates the GCM authentication tag . The
	// application can then use this method to retrieve the tag, which should be sent
	// to the decrypting party along with the encrypted data. For further details on
	// GCM authenticated encryption, please refer to the web pages linked below.
	const char *getEncodedAuthTag(const char *encoding);
	// When encrypting in GCM mode, Chilkat generates the GCM authentication tag . The
	// application can then use this method to retrieve the tag, which should be sent
	// to the decrypting party along with the encrypted data. For further details on
	// GCM authenticated encryption, please refer to the web pages linked below.
	const char *encodedAuthTag(const char *encoding);


	// This method retrieves the IV set by the application during the last call to
	// SetEncodedIV or RandomizeIV .
	// 
	// References:
	// 1: #SetEncodedIV
	// 2: #RandomizeIV
	bool GetEncodedIV(const char *encoding, CkString &outIV);

	// This method retrieves the IV set by the application during the last call to
	// SetEncodedIV or RandomizeIV .
	// 
	// References:
	// 1: #SetEncodedIV
	// 2: #RandomizeIV
	const char *getEncodedIV(const char *encoding);
	// This method retrieves the IV set by the application during the last call to
	// SetEncodedIV or RandomizeIV .
	// 
	// References:
	// 1: #SetEncodedIV
	// 2: #RandomizeIV
	const char *encodedIV(const char *encoding);


	// This method retrieves the symmetric encryption secret key set by the application
	// during the last call to SetEncodedKey or RandomizeKey . However, using this
	// method is redundant (and therefore deprecated), as the application can store and
	// retrieve the key independently after calling SetEncodedKey.
	// 
	// References:
	// 1: #SetEncodedKey
	// 2: #RandomizeKey
	bool GetEncodedKey(const char *encoding, CkString &outKey);

	// This method retrieves the symmetric encryption secret key set by the application
	// during the last call to SetEncodedKey or RandomizeKey . However, using this
	// method is redundant (and therefore deprecated), as the application can store and
	// retrieve the key independently after calling SetEncodedKey.
	// 
	// References:
	// 1: #SetEncodedKey
	// 2: #RandomizeKey
	const char *getEncodedKey(const char *encoding);
	// This method retrieves the symmetric encryption secret key set by the application
	// during the last call to SetEncodedKey or RandomizeKey . However, using this
	// method is redundant (and therefore deprecated), as the application can store and
	// retrieve the key independently after calling SetEncodedKey.
	// 
	// References:
	// 1: #SetEncodedKey
	// 2: #RandomizeKey
	const char *encodedKey(const char *encoding);


	// This method retrieves the password-based encryption (PBE) salt set by the
	// application during the last call to SetEncodedSalt . However, using this method
	// is redundant (and therefore deprecated), as the application can store and
	// retrieve the salt independently after calling SetEncodedSalt.
	// 
	// References:
	// 1: #SetEncodedSalt
	bool GetEncodedSalt(const char *encoding, CkString &outStr);

	// This method retrieves the password-based encryption (PBE) salt set by the
	// application during the last call to SetEncodedSalt . However, using this method
	// is redundant (and therefore deprecated), as the application can store and
	// retrieve the salt independently after calling SetEncodedSalt.
	// 
	// References:
	// 1: #SetEncodedSalt
	const char *getEncodedSalt(const char *encoding);
	// This method retrieves the password-based encryption (PBE) salt set by the
	// application during the last call to SetEncodedSalt . However, using this method
	// is redundant (and therefore deprecated), as the application can store and
	// retrieve the salt independently after calling SetEncodedSalt.
	// 
	// References:
	// 1: #SetEncodedSalt
	const char *encodedSalt(const char *encoding);


	// Offers details on the last method executed. While many methods provide no
	// information, some do through GetLastJsonData. For instance, after invoking a
	// signature verification method, GetLastJsonData will return JSON detailing the
	// algorithms used.
	void GetLastJsonData(CkJsonObject &json);


	// This method retrieves the signing time of the Nth certificate in a digital
	// signature after verification. The signing time for the first certificate is at
	// index 0. The NumSignerCerts property indicates the total number of signing
	// certificates, although typically only one is used. Note: Before accessing the
	// signing time, use the HasSignatureSigningTime method to verify its availability,
	// and skip indices lacking a signing time. The signing time is returned in RFC822
	// string format .
	// 
	// References:
	// 1: #NumSignerCerts
	// 2: #HasSignatureSigningTime
	bool GetSignatureSigningTimeStr(int index, CkString &outStr);

	// This method retrieves the signing time of the Nth certificate in a digital
	// signature after verification. The signing time for the first certificate is at
	// index 0. The NumSignerCerts property indicates the total number of signing
	// certificates, although typically only one is used. Note: Before accessing the
	// signing time, use the HasSignatureSigningTime method to verify its availability,
	// and skip indices lacking a signing time. The signing time is returned in RFC822
	// string format .
	// 
	// References:
	// 1: #NumSignerCerts
	// 2: #HasSignatureSigningTime
	const char *getSignatureSigningTimeStr(int index);
	// This method retrieves the signing time of the Nth certificate in a digital
	// signature after verification. The signing time for the first certificate is at
	// index 0. The NumSignerCerts property indicates the total number of signing
	// certificates, although typically only one is used. Note: Before accessing the
	// signing time, use the HasSignatureSigningTime method to verify its availability,
	// and skip indices lacking a signing time. The signing time is returned in RFC822
	// string format .
	// 
	// References:
	// 1: #NumSignerCerts
	// 2: #HasSignatureSigningTime
	const char *signatureSigningTimeStr(int index);


	// Extracts the signed (authenticated) attributes for the Nth signer, where signerIndex is
	// typically 0, as most signatures have only one signer. Provide the binary PKCS7
	// in pkcs7Der. If successful, sbJson will hold the signed attributes in JSON format.
	// 
	// Sample JSON output:{
	//   "signedAttributes": [
	//     {
	//       "oid": "1.2.840.113549.1.9.3",
	//       "name": "Content Type"
	//     },
	//     {
	//       "oid": "1.2.840.113549.1.9.5",
	//       "name": "Signing Time"
	//     },
	//     {
	//       "oid": "1.2.840.113549.1.9.4"
	//       "name": "Message Digest"
	//     },
	//     {
	//       "oid": "1.2.840.113549.1.9.16.2.47",
	//       "name": "Signing Certificate V2"
	//     }
	//   ]
	// }
	// 
	bool GetSignedAttributes(int signerIndex, CkBinData &pkcs7Der, CkStringBuilder &sbJson);


	// This method is deprecated. Application should instead call LastSignerCert
	// 
	// Gets the Nth certificate used for signing. This method can be called after
	// verifying a digital signature to get the signer certs. The 1st certificate is at
	// index 0. The NumSignerCerts property contains the total number of signing
	// certificates. (Typically, a single certificate is used in creating a digital
	// signature.)
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetSignerCert(int index);


	// This method is deprecated. Applications can get the cert chain by calling
	// LastSignerCert to get the certificate object, and then get the certificate chain
	// from the certificate object.
	// 
	// Returns the full certificate chain for the Nth certificate used to for signing.
	// Indexing begins at 0.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkCertChain *GetSignerCertChain(int index);


	// Hashes the bytes in bd and returns the hash as a binary-encoded string. The
	// hash algorithm is determined by the HashAlgorithm property, while the encoding
	// is specified by the EncodingMode property. Encoding options include base64 , hex
	// , base64url , or others listed at the link below.
	// 
	// References:
	// 1: #HashAlgorithm
	// 2: #EncodingMode
	bool HashBdENC(CkBinData &bd, CkString &outStr);

	// Hashes the bytes in bd and returns the hash as a binary-encoded string. The
	// hash algorithm is determined by the HashAlgorithm property, while the encoding
	// is specified by the EncodingMode property. Encoding options include base64 , hex
	// , base64url , or others listed at the link below.
	// 
	// References:
	// 1: #HashAlgorithm
	// 2: #EncodingMode
	const char *hashBdENC(CkBinData &bd);

	// To hash binary data in chunks, start by hashing the first chunk using this
	// method. For additional chunks, use the HashMoreBytes method as needed. Complete
	// the process with HashFinal or HashFinalENC to obtain the hash result. The hash
	// algorithm used is determined by the HashAlgorithm property setting.
	// 
	// References:
	// 1: #HashMoreBytes
	// 2: #HashFinal
	// 3: #HashFinalENC
	// 4: #HashAlgorithm
	bool HashBeginBytes(CkByteData &data);


	// To hash binary data in chunks, start by hashing the first chunk using this
	// method. For additional chunks, use the HashMoreBytes method as needed. Complete
	// the process with HashFinal or HashFinalENC to obtain the hash result. The hash
	// algorithm used is determined by the HashAlgorithm property setting.
	// 
	// References:
	// 1: #HashMoreBytes
	// 2: #HashFinal
	// 3: #HashFinalENC
	// 4: #HashAlgorithm
	bool HashBeginBytes2(const void *pByteData, unsigned long szByteData);


	// To hash a large amount of text, start by processing the first chunk using this
	// method. For subsequent chunks, use the HashMoreString method as needed. Conclude
	// by calling HashFinalENC to obtain the final result. The hash algorithm is
	// determined by the HashAlgorithm property setting.
	// 
	// References:
	// 1: #HashMoreString
	// 2: #HashFinalENC
	// 3: #HashAlgorithm
	bool HashBeginString(const char *strData);


	// Hashes a byte array using the algorithm specified by the HashAlgorithm property.
	bool HashBytes(CkByteData &data, CkByteData &outData);


	// The same as HashBytes except the binary data is passed via a pointer and length.
	bool HashBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);


	// Hashes a byte array and returns the hash as a binary encoded string.
	// 
	// The hash algorithm is specified by the HashAlgorithm property, The encoding is
	// controlled by the EncodingMode property, which can be set to base64 , hex ,
	// base64url , or any of the encodings listed at the link below.
	// 
	bool HashBytesENC(CkByteData &data, CkString &outStr);

	// Hashes a byte array and returns the hash as a binary encoded string.
	// 
	// The hash algorithm is specified by the HashAlgorithm property, The encoding is
	// controlled by the EncodingMode property, which can be set to base64 , hex ,
	// base64url , or any of the encodings listed at the link below.
	// 
	const char *hashBytesENC(CkByteData &data);

	// Start or continue hashing data in chunks. Set firstChunk to true for the first
	// chunk, and false for subsequent chunks. Finish by calling HashFinalENC to
	// obtain the result. The hash algorithm used is determined by the HashAlgorithm
	// property.
	bool HashChunkBd(bool firstChunk, CkBinData &bd);


	// Hashes a file using the specified HashAlgorithm and returns the hash bytes. The
	// file is processed in streaming mode, allowing any file size to be hashed
	// efficiently while minimizing memory usage.
	bool HashFile(const char *path, CkByteData &outBytes);

	// Hashes a file using the specified HashAlgorithm and returns the hash bytes. The
	// file is processed in streaming mode, allowing any file size to be hashed
	// efficiently while minimizing memory usage.
	CkTask *HashFileAsync(const char *path);


	// Hashes a file and returns the hash as an encoded string.
	// 
	// The hash algorithm is specified by the HashAlgorithm property, The encoding is
	// controlled by the EncodingMode property, which can be set to base64 , hex ,
	// base64url , or any of the encodings listed at the link below.
	// 
	// Any size file is supported because the file is hashed internally in streaming
	// mode (keeping memory usage low and constant).
	// 
	bool HashFileENC(const char *path, CkString &outStr);

	// Hashes a file and returns the hash as an encoded string.
	// 
	// The hash algorithm is specified by the HashAlgorithm property, The encoding is
	// controlled by the EncodingMode property, which can be set to base64 , hex ,
	// base64url , or any of the encodings listed at the link below.
	// 
	// Any size file is supported because the file is hashed internally in streaming
	// mode (keeping memory usage low and constant).
	// 
	const char *hashFileENC(const char *path);
	// Hashes a file and returns the hash as an encoded string.
	// 
	// The hash algorithm is specified by the HashAlgorithm property, The encoding is
	// controlled by the EncodingMode property, which can be set to base64 , hex ,
	// base64url , or any of the encodings listed at the link below.
	// 
	// Any size file is supported because the file is hashed internally in streaming
	// mode (keeping memory usage low and constant).
	// 
	CkTask *HashFileENCAsync(const char *path);


	// Finalizes a multi-step hash computation and returns the hash bytes.
	bool HashFinal(CkByteData &outBytes);


	// Finalizes a multi-step hash computation and returns the hash bytes encoded
	// according to the EncodingMode property setting.
	// 
	// References:
	// 1: #EncodingMode
	bool HashFinalENC(CkString &outStr);

	// Finalizes a multi-step hash computation and returns the hash bytes encoded
	// according to the EncodingMode property setting.
	// 
	// References:
	// 1: #EncodingMode
	const char *hashFinalENC(void);

	// Adds more bytes to the hash currently under computation. (See HashBeginBytes )
	bool HashMoreBytes(CkByteData &data);


	// The same as HashMoreBytes except the binary data is passed via a pointer and
	// length.
	bool HashMoreBytes2(const void *pByteData, unsigned long szByteData);


	// Adds more text to the hash currently under computation. (See HashBeginString )
	// 
	// References:
	// 1: #HashBeginString
	bool HashMoreString(const char *strData);


	// Hashes a string using the Charset property to determine the bytes and returns
	// the hash.
	bool HashString(const char *str, CkByteData &outData);


	// Hashes the str and returns the hash as a binary encoded string. The Charset
	// property determines the actual bytes that are hashed.
	// Input → Get bytes according to Charset → Hash → Encode using EncodingMode →
	// Output
	// 
	// The encoding (e.g. base64 , hex , etc.) is determined by the EncodingMode
	// property.
	// 
	// The hash algorithm is determined by the HashAlgorithm property.
	// 
	// 
	// References:
	// 1: #Charset
	// 2: #EncodingMode
	// 3: #HashAlgorithm
	bool HashStringENC(const char *str, CkString &outStr);

	// Hashes the str and returns the hash as a binary encoded string. The Charset
	// property determines the actual bytes that are hashed.
	// Input → Get bytes according to Charset → Hash → Encode using EncodingMode →
	// Output
	// 
	// The encoding (e.g. base64 , hex , etc.) is determined by the EncodingMode
	// property.
	// 
	// The hash algorithm is determined by the HashAlgorithm property.
	// 
	// 
	// References:
	// 1: #Charset
	// 2: #EncodingMode
	// 3: #HashAlgorithm
	const char *hashStringENC(const char *str);

	// After verifying a digital signature with a signature verification method, you
	// can call this method. It returns true if the signing time for the Nth
	// certificate is available and can be accessed using the
	// GetSignatureSigningTimeStr method.
	// 
	// References:
	// 1: #GetSignatureSigningTimeStr
	bool HasSignatureSigningTime(int index);


	// Implements RFC 4226: HOTP: An HMAC-Based One-Time Password Algorithm. The
	// arguments to this method are:
	//     * secret: The shared secret in an enocded representation such as base64, hex,
	//     ascii, etc.
	//     * secretEnc: The encoding of the shared secret, such as base64
	//     * counterHex: The 8-byte counter in hexidecimal format.
	//     * numDigits: The number of decimal digits to return.
	//     * truncOffset: Normally set this to -1 for dynamic truncation. Otherwise can be set
	//     in the range 0..15.
	//     * hashAlg: Normally set to sha1 . Can be set to other hash algorithms such as
	//     sha256 , sha512 , etc.
	bool Hotp(const char *secret, const char *secretEnc, const char *counterHex, int numDigits, int truncOffset, const char *hashAlg, CkString &outStr);

	// Implements RFC 4226: HOTP: An HMAC-Based One-Time Password Algorithm. The
	// arguments to this method are:
	//     * secret: The shared secret in an enocded representation such as base64, hex,
	//     ascii, etc.
	//     * secretEnc: The encoding of the shared secret, such as base64
	//     * counterHex: The 8-byte counter in hexidecimal format.
	//     * numDigits: The number of decimal digits to return.
	//     * truncOffset: Normally set this to -1 for dynamic truncation. Otherwise can be set
	//     in the range 0..15.
	//     * hashAlg: Normally set to sha1 . Can be set to other hash algorithms such as
	//     sha256 , sha512 , etc.
	const char *hotp(const char *secret, const char *secretEnc, const char *counterHex, int numDigits, int truncOffset, const char *hashAlg);

	// Returns in cert the last certificate used for public-key decryption.
	bool LastDecryptCert(CkCert &cert);


	// This method is deprecated. Please use GetLastJsonData instead. GetLastJsonData
	// provides details about the most recently executed method. While many methods
	// don't provide additional information, some do, such as after verifying a
	// signature. In such cases, LastJsonData will return JSON with details like the
	// algorithms used in the verification process.
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *LastJsonData(void);


	// Retrieves the Nth certificate used for signing in cert, where the first
	// certificate is at index 0. Use this method after verifying a digital signature
	// to access the signer certificates. The NumSignerCerts property indicates the
	// total number of signing certificates. Usually, only one certificate is used when
	// creating a digital signature.
	// 
	// References:
	// 1: #NumSignerCerts
	bool LastSignerCert(int index, CkCert &cert);


	// Loads the caller of the task's async method.
	bool LoadTaskCaller(CkTask &task);


	// Generates a Message Authentication Code (MAC) for the bytes in bd using the
	// algorithm defined by the MacAlgorithm property. The resulting MAC is encoded
	// into a string based on the EncodingMode property (e.g., base64 or hex ). The
	// HashAlgorithm property determines the internal hash function. Before generating
	// the MAC, specify the secret key using SetMacKeyEncoded .
	// 
	// References:
	// 1: #MacAlgorithm
	// 2: #EncodingMode
	// 3: #HashAlgorithm
	// 4: #SetMacKeyEncoded
	bool MacBdENC(CkBinData &bd, CkString &outStr);

	// Generates a Message Authentication Code (MAC) for the bytes in bd using the
	// algorithm defined by the MacAlgorithm property. The resulting MAC is encoded
	// into a string based on the EncodingMode property (e.g., base64 or hex ). The
	// HashAlgorithm property determines the internal hash function. Before generating
	// the MAC, specify the secret key using SetMacKeyEncoded .
	// 
	// References:
	// 1: #MacAlgorithm
	// 2: #EncodingMode
	// 3: #HashAlgorithm
	// 4: #SetMacKeyEncoded
	const char *macBdENC(CkBinData &bd);

	// Computes a Message Authentication Code using the algorithm defined in the
	// MacAlgorithm property. The HashAlgorithm property setting determines the hash
	// algorithm used internally. (A MAC algorithm like HMAC uses a hash function such
	// as SHA-256 internally, along with a secret key, to create a secure and
	// verifiable digest.)
	bool MacBytes(CkByteData &inBytes, CkByteData &outBytes);


	// The same as MacBytes except the binary data is passed via a pointer and length.
	bool MacBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);


	// Computes a Message Authentication Code using the MAC algorithm specified in the
	// MacAlgorithm property. The result is encoded to a string using the encoding (
	// base64 , hex , etc.) specified by the EncodingMode property.
	bool MacBytesENC(CkByteData &inBytes, CkString &outStr);

	// Computes a Message Authentication Code using the MAC algorithm specified in the
	// MacAlgorithm property. The result is encoded to a string using the encoding (
	// base64 , hex , etc.) specified by the EncodingMode property.
	const char *macBytesENC(CkByteData &inBytes);

	// Computes a Message Authentication Code using the specified MacAlgorithm
	// property. The Charset property determines the actual bytes presented to the MAC
	// algorithm. The HashAlgorithm property setting determines the hash algorithm used
	// internally. (A MAC algorithm like HMAC uses a hash function such as SHA-256
	// internally, along with a secret key, to create a secure and verifiable digest.)
	bool MacString(const char *inText, CkByteData &outBytes);


	// Computes a Message Authentication Code (MAC) and returns it as a binary encoded
	// string. The MAC algorithm is defined by the MacAlgorithm property. The Charset
	// property determines the actual bytes that are hashed.
	// Input → Get bytes according to Charset → MAC → Encode using EncodingMode →
	// Output
	// 
	// The encoding (e.g. base64 , hex , etc.) is determined by the EncodingMode
	// property.
	// 
	// The hash algorithm is determined by the HashAlgorithm property. The secret key
	// must be set beforehand by calling SetMacKeyEncoded .
	// 
	// 
	// References:
	// 1: #MacAlgorithm
	// 2: #Charset
	// 3: #EncodingMode
	// 4: #HashAlgorithm
	// 5: #SetMacKeyEncoded
	bool MacStringENC(const char *inText, CkString &outStr);

	// Computes a Message Authentication Code (MAC) and returns it as a binary encoded
	// string. The MAC algorithm is defined by the MacAlgorithm property. The Charset
	// property determines the actual bytes that are hashed.
	// Input → Get bytes according to Charset → MAC → Encode using EncodingMode →
	// Output
	// 
	// The encoding (e.g. base64 , hex , etc.) is determined by the EncodingMode
	// property.
	// 
	// The hash algorithm is determined by the HashAlgorithm property. The secret key
	// must be set beforehand by calling SetMacKeyEncoded .
	// 
	// 
	// References:
	// 1: #MacAlgorithm
	// 2: #Charset
	// 3: #EncodingMode
	// 4: #HashAlgorithm
	// 5: #SetMacKeyEncoded
	const char *macStringENC(const char *inText);

	// Matches MySQL 's AES_DECRYPT function. strEncryptedHex is a hex-encoded AES-encrypted
	// string, and the return value is the original unencrypted string.
	bool MySqlAesDecrypt(const char *strEncryptedHex, const char *strPassword, CkString &outStr);

	// Matches MySQL 's AES_DECRYPT function. strEncryptedHex is a hex-encoded AES-encrypted
	// string, and the return value is the original unencrypted string.
	const char *mySqlAesDecrypt(const char *strEncryptedHex, const char *strPassword);

	// This function replicates MySQL 's AES_ENCRYPT , returning the encrypted data as
	// a hex-encoded string. In MySQL, this is done using: HEX(AES_ENCRYPT('The quick
	// brown fox jumps over the lazy dog', 'password')) .
	bool MySqlAesEncrypt(const char *strData, const char *strPassword, CkString &outStr);

	// This function replicates MySQL 's AES_ENCRYPT , returning the encrypted data as
	// a hex-encoded string. In MySQL, this is done using: HEX(AES_ENCRYPT('The quick
	// brown fox jumps over the lazy dog', 'password')) .
	const char *mySqlAesEncrypt(const char *strData, const char *strPassword);

	// Digitally signs the contents of bd. If successful, the contents of bd are
	// replaced with the PKCS#7 signed-data , which embeds the original data within the
	// signature. Ensure a certificate is set using SetSigningCert before invoking this
	// method. The HashAlgorithm property specifies the hash algorithm for creating the
	// data's hash during signing.
	// 
	// References:
	// 1: #SetSigningCert
	// 2: #HashAlgorithm
	bool OpaqueSignBd(CkBinData &bd);

	// Digitally signs the contents of bd. If successful, the contents of bd are
	// replaced with the PKCS#7 signed-data , which embeds the original data within the
	// signature. Ensure a certificate is set using SetSigningCert before invoking this
	// method. The HashAlgorithm property specifies the hash algorithm for creating the
	// data's hash during signing.
	// 
	// References:
	// 1: #SetSigningCert
	// 2: #HashAlgorithm
	CkTask *OpaqueSignBdAsync(CkBinData &bd);


	// Digitally signs a binary data and returns the signature in PKCS#7 signed-data
	// format, which embeds the original data within the signature. Ensure a
	// certificate is set using SetSigningCert before invoking this method. The
	// HashAlgorithm property specifies the hash algorithm for creating the data's hash
	// during signing.
	// 
	// References:
	// 1: #SetSigningCert
	// 2: #HashAlgorithm
	bool OpaqueSignBytes(CkByteData &data, CkByteData &outData);

	// Digitally signs a binary data and returns the signature in PKCS#7 signed-data
	// format, which embeds the original data within the signature. Ensure a
	// certificate is set using SetSigningCert before invoking this method. The
	// HashAlgorithm property specifies the hash algorithm for creating the data's hash
	// during signing.
	// 
	// References:
	// 1: #SetSigningCert
	// 2: #HashAlgorithm
	CkTask *OpaqueSignBytesAsync(CkByteData &data);


	// The same as OpaqueSignBytes except the binary data is passed via a pointer and
	// length.
	// 
	// References:
	// 1: #OpaqueSignBytes
	bool OpaqueSignBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);


	// Digitally signs a binary data and returns a PKCS#7 signed-data signature
	// binary-encoded as a string. The returned signature embeds the original data.
	// Ensure to set a certificate by calling SetSigningCert beforehand. The
	// EncodingMode property determines the output encoding such as base64 , hex ,
	// base64_mime , etc. The HashAlgorithm property specifies the hash algorithm for
	// creating the data's hash during signing.
	// 
	// References:
	// 1: #SetSigningCert
	// 2: #EncodingMode
	// 3: #HashAlgorithm
	bool OpaqueSignBytesENC(CkByteData &data, CkString &outStr);

	// Digitally signs a binary data and returns a PKCS#7 signed-data signature
	// binary-encoded as a string. The returned signature embeds the original data.
	// Ensure to set a certificate by calling SetSigningCert beforehand. The
	// EncodingMode property determines the output encoding such as base64 , hex ,
	// base64_mime , etc. The HashAlgorithm property specifies the hash algorithm for
	// creating the data's hash during signing.
	// 
	// References:
	// 1: #SetSigningCert
	// 2: #EncodingMode
	// 3: #HashAlgorithm
	const char *opaqueSignBytesENC(CkByteData &data);
	// Digitally signs a binary data and returns a PKCS#7 signed-data signature
	// binary-encoded as a string. The returned signature embeds the original data.
	// Ensure to set a certificate by calling SetSigningCert beforehand. The
	// EncodingMode property determines the output encoding such as base64 , hex ,
	// base64_mime , etc. The HashAlgorithm property specifies the hash algorithm for
	// creating the data's hash during signing.
	// 
	// References:
	// 1: #SetSigningCert
	// 2: #EncodingMode
	// 3: #HashAlgorithm
	CkTask *OpaqueSignBytesENCAsync(CkByteData &data);


	// Digitally signs a string and returns PKCS#7 signed-data . The Charset property
	// determines the actual bytes that are hashed and signed. The HashAlgorithm
	// property specifies the hash algorithm for creating the data's hash during
	// signing.
	// 
	// References:
	// 1: #Charset
	// 2: #HashAlgorithm
	bool OpaqueSignString(const char *str, CkByteData &outData);

	// Digitally signs a string and returns PKCS#7 signed-data . The Charset property
	// determines the actual bytes that are hashed and signed. The HashAlgorithm
	// property specifies the hash algorithm for creating the data's hash during
	// signing.
	// 
	// References:
	// 1: #Charset
	// 2: #HashAlgorithm
	CkTask *OpaqueSignStringAsync(const char *str);


	// Digitally signs a string and returns PKCS#7 signed-data as a binary encoded
	// string . The EncodingMode property determines the binary encoding, such as
	// base64 , hex , hex_lower , base64_mime , etc. The Charset property determines
	// the actual bytes that are hashed and signed. The HashAlgorithm property
	// specifies the hash algorithm for creating the data's hash during signing.
	// 
	// References:
	// 1: #EncodingMode
	// 2: #Charset
	// 3: #HashAlgorithm
	bool OpaqueSignStringENC(const char *str, CkString &outStr);

	// Digitally signs a string and returns PKCS#7 signed-data as a binary encoded
	// string . The EncodingMode property determines the binary encoding, such as
	// base64 , hex , hex_lower , base64_mime , etc. The Charset property determines
	// the actual bytes that are hashed and signed. The HashAlgorithm property
	// specifies the hash algorithm for creating the data's hash during signing.
	// 
	// References:
	// 1: #EncodingMode
	// 2: #Charset
	// 3: #HashAlgorithm
	const char *opaqueSignStringENC(const char *str);
	// Digitally signs a string and returns PKCS#7 signed-data as a binary encoded
	// string . The EncodingMode property determines the binary encoding, such as
	// base64 , hex , hex_lower , base64_mime , etc. The Charset property determines
	// the actual bytes that are hashed and signed. The HashAlgorithm property
	// specifies the hash algorithm for creating the data's hash during signing.
	// 
	// References:
	// 1: #EncodingMode
	// 2: #Charset
	// 3: #HashAlgorithm
	CkTask *OpaqueSignStringENCAsync(const char *str);


	// The method performs in-place verification of the PKCS#7 signed-data content of
	// bd. If the signature is successfully verified, the content of bd is replaced
	// with the original data, and the method returns true. If verification fails,
	// bd remains unchanged, and the method returns false. Afterwards, you can
	// retrieve signer certificates by using the NumSignerCerts property and the
	// LastSignerCert method.
	// 
	// References:
	// 1: #NumSignerCerts
	// 2: #LastSignerCert
	bool OpaqueVerifyBd(CkBinData &bd);


	// Verifies a PKCS#7 signed-data signature and returns the original data. If the
	// signature fails verification, the returned data will be empty. Afterwards, you
	// can retrieve signer certificates by using the NumSignerCerts property and the
	// LastSignerCert method.
	// 
	// References:
	// 1: #NumSignerCerts
	// 2: #LastSignerCert
	bool OpaqueVerifyBytes(CkByteData &p7m, CkByteData &outOriginal);


	// The same as OpaqueVerifyBytes except the binary data is passed via a pointer and
	// length.
	// 
	// References:
	// 1: #OpaqueVerifyBytes
	bool OpaqueVerifyBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);


	// Verifies a PKCS#7 signed-data signature and returns the original data. If the
	// signature fails verification, the returned data will be empty. The p7m is a
	// binary-encoded string, using the encoding set by the EncodingMode property.
	// Afterwards, you can retrieve signer certificates by using the NumSignerCerts
	// property and the LastSignerCert method.
	// 
	// References:
	// 1: #EncodingMode
	// 2: #NumSignerCerts
	// 3: #LastSignerCert
	bool OpaqueVerifyBytesENC(const char *p7m, CkByteData &outOriginal);


	// This function verifies a PKCS#7 signed-data signature and returns the original
	// text data. If the signature does not verify successfully, it returns an empty
	// string. The Charset property specifies how the original data bytes are converted
	// to characters. You can obtain signer certificates using the NumSignerCerts
	// property and the LastSignerCert method.
	// 
	// References:
	// 1: #Charset
	// 2: #NumSignerCerts
	// 3: #LastSignerCert
	bool OpaqueVerifyString(CkByteData &p7m, CkString &outOriginal);

	// This function verifies a PKCS#7 signed-data signature and returns the original
	// text data. If the signature does not verify successfully, it returns an empty
	// string. The Charset property specifies how the original data bytes are converted
	// to characters. You can obtain signer certificates using the NumSignerCerts
	// property and the LastSignerCert method.
	// 
	// References:
	// 1: #Charset
	// 2: #NumSignerCerts
	// 3: #LastSignerCert
	const char *opaqueVerifyString(CkByteData &p7m);

	// This function verifies a PKCS#7 signed-data binary-encoded signature and returns
	// the original text data. The EncodingMode property determines how p7m is decoded
	// to bytes. If the signature does not verify successfully, it returns an empty
	// string. The Charset property specifies how the original data bytes are converted
	// to characters. You can obtain signer certificates using the NumSignerCerts
	// property and the LastSignerCert method.
	// 
	// References:
	// 1: #EncodingMode
	// 2: #Charset
	// 3: #NumSignerCerts
	// 4: #LastSignerCert
	bool OpaqueVerifyStringENC(const char *p7m, CkString &outOriginal);

	// This function verifies a PKCS#7 signed-data binary-encoded signature and returns
	// the original text data. The EncodingMode property determines how p7m is decoded
	// to bytes. If the signature does not verify successfully, it returns an empty
	// string. The Charset property specifies how the original data bytes are converted
	// to characters. You can obtain signer certificates using the NumSignerCerts
	// property and the LastSignerCert method.
	// 
	// References:
	// 1: #EncodingMode
	// 2: #Charset
	// 3: #NumSignerCerts
	// 4: #LastSignerCert
	const char *opaqueVerifyStringENC(const char *p7m);

	// This function implements the PBKDF1 (Password-Based Key Derivation Function #1)
	// algorithm. Follow these guidelines to use it:
	//     1. password (the password) is first converted using the character encoding
	//     specified by charset before being processed by the key derivation function.
	//     2. hashAlg specifies the hash function to use, such as md5 , sha1 , or md2 .
	//     3. salt represents the salt, which should be random data of at least 8 bytes
	//     (64 bits). You can use the GenRandomBytesENC method to generate this.
	//     4. iterationCount sets the iteration count, which must be a minimum of 1000.
	//     5. outputKeyBitLen determines the length (in bits) of the derived key.
	//     6. encoding defines the output encoding format, such as base64 or hex , and also
	//     the expected encoding of salt (the salt).
	// 
	// The function returns the derived key.
	// 
	// Note: If charset is specified as hex or base64, the password (password) will be treated
	// as binary data encoded in that format. It will be decoded into binary form and
	// used directly as such.
	// 
	// 
	// References:
	// 1: #GenRandomBytesENC
	bool Pbkdf1(const char *password, const char *charset, const char *hashAlg, const char *salt, int iterationCount, int outputKeyBitLen, const char *encoding, CkString &outStr);

	// This function implements the PBKDF1 (Password-Based Key Derivation Function #1)
	// algorithm. Follow these guidelines to use it:
	//     1. password (the password) is first converted using the character encoding
	//     specified by charset before being processed by the key derivation function.
	//     2. hashAlg specifies the hash function to use, such as md5 , sha1 , or md2 .
	//     3. salt represents the salt, which should be random data of at least 8 bytes
	//     (64 bits). You can use the GenRandomBytesENC method to generate this.
	//     4. iterationCount sets the iteration count, which must be a minimum of 1000.
	//     5. outputKeyBitLen determines the length (in bits) of the derived key.
	//     6. encoding defines the output encoding format, such as base64 or hex , and also
	//     the expected encoding of salt (the salt).
	// 
	// The function returns the derived key.
	// 
	// Note: If charset is specified as hex or base64, the password (password) will be treated
	// as binary data encoded in that format. It will be decoded into binary form and
	// used directly as such.
	// 
	// 
	// References:
	// 1: #GenRandomBytesENC
	const char *pbkdf1(const char *password, const char *charset, const char *hashAlg, const char *salt, int iterationCount, int outputKeyBitLen, const char *encoding);

	// Implements the PBKDF2 algorithm as follows:
	//     1. Convert password to the character encoding specified by charset before using it
	//     in the key derivation function.
	//     2. hashAlg specifies the hash algorithm. Options include sha256 , sha384 ,
	//     sha512 , md5 , sha1 , md2 , or any algorithm listed in the HashAlgorithm
	//     property.
	//     3. Provide a random salt value that is at least 8 bytes (64 bits) long. Use
	//     methods like GenRandomBytesENC to generate this salt value.
	//     4. Ensure iterationCount is 1000 or greater.
	//     5. Control the length of the derived key output using outputKeyBitLen.
	//     6. Set encoding to specify the encoding format for the output and the expected
	//     encoding for salt. Options include base64 and hex .
	// 
	// The derived key is the output of this process. Internally, PBKDF2 uses a
	// pseudorandom function (PRF), specifically a keyed HMAC. The hash algorithm
	// chosen with hashAlg dictates this PRF; for example, SHA256 uses HMAC-SHA256, while
	// SHA1 uses HMAC-SHA1.
	// 
	// Note: If charset is hex or base64 , password is treated as binary data. It will be
	// decoded and used directly as a binary password. SHA256 uses HMAC-SHA256, while
	// SHA1 uses HMAC-SHA1.
	// 
	// PBKDF1 and PBKDF2 are both key derivation functions used to strengthen passwords
	// for cryptographic purposes, but PBKDF2 is the improved version.
	// 
	//     * PBKDF1: Older and limited—it can only generate small keys (up to the hash
	//     function’s output size), making it less flexible and secure.
	//     * PBKDF2: More advanced—it can generate longer keys, is more resistant to
	//     attacks, and is widely recommended for modern security needs.
	// 
	// In short, PBKDF2 is stronger and more versatile than PBKDF1 .
	// 
	// 
	// References:
	// 1: #GenRandomBytesENC
	bool Pbkdf2(const char *password, const char *charset, const char *hashAlg, const char *salt, int iterationCount, int outputKeyBitLen, const char *encoding, CkString &outStr);

	// Implements the PBKDF2 algorithm as follows:
	//     1. Convert password to the character encoding specified by charset before using it
	//     in the key derivation function.
	//     2. hashAlg specifies the hash algorithm. Options include sha256 , sha384 ,
	//     sha512 , md5 , sha1 , md2 , or any algorithm listed in the HashAlgorithm
	//     property.
	//     3. Provide a random salt value that is at least 8 bytes (64 bits) long. Use
	//     methods like GenRandomBytesENC to generate this salt value.
	//     4. Ensure iterationCount is 1000 or greater.
	//     5. Control the length of the derived key output using outputKeyBitLen.
	//     6. Set encoding to specify the encoding format for the output and the expected
	//     encoding for salt. Options include base64 and hex .
	// 
	// The derived key is the output of this process. Internally, PBKDF2 uses a
	// pseudorandom function (PRF), specifically a keyed HMAC. The hash algorithm
	// chosen with hashAlg dictates this PRF; for example, SHA256 uses HMAC-SHA256, while
	// SHA1 uses HMAC-SHA1.
	// 
	// Note: If charset is hex or base64 , password is treated as binary data. It will be
	// decoded and used directly as a binary password. SHA256 uses HMAC-SHA256, while
	// SHA1 uses HMAC-SHA1.
	// 
	// PBKDF1 and PBKDF2 are both key derivation functions used to strengthen passwords
	// for cryptographic purposes, but PBKDF2 is the improved version.
	// 
	//     * PBKDF1: Older and limited—it can only generate small keys (up to the hash
	//     function’s output size), making it less flexible and secure.
	//     * PBKDF2: More advanced—it can generate longer keys, is more resistant to
	//     attacks, and is widely recommended for modern security needs.
	// 
	// In short, PBKDF2 is stronger and more versatile than PBKDF1 .
	// 
	// 
	// References:
	// 1: #GenRandomBytesENC
	const char *pbkdf2(const char *password, const char *charset, const char *hashAlg, const char *salt, int iterationCount, int outputKeyBitLen, const char *encoding);

	// Sets the initialization vector (IV) to a random value. The CryptAlgorithm
	// property should be set prior to calling this method.
	// 
	// A random IV is used in symmetric encryption (like AES-CBC or AES-GCM) to ensure
	// that encrypting the same plaintext with the same key produces different
	// ciphertext each time. This prevents attackers from recognizing patterns in
	// encrypted data and strengthens security.
	// 
	// Why use a random IV?
	// 
	//     * It ensures semantic security (i.e. same plaintext never results in same
	//     ciphertext).
	//     * Prevents replay and pattern attacks.
	//     * Especially important in modes like CBC and GCM.
	// 
	// How is the IV sent to the decrypting party?
	// 
	// The IV is not secret, but it must be available for decryption. Common methods:
	// 
	//     * Prepended to the ciphertext (e.g., IV || ciphertext )
	//     * Sent in a separate field (e.g., JSON field, HTTP header)
	//     * Concatenated and encoded (e.g., base64 of IV + ciphertext)
	// 
	// At the receiving side, the decryptor extracts the IV and uses it with the shared
	// key to decrypt the ciphertext correctly.
	// 
	// 
	// References:
	// 1: #CryptAlgorithm
	void RandomizeIV(void);


	// Sets the secret key to a random value. This method should be replaced by calling
	// GenRandomBytesENC followed by SetEncodedKey .
	// 
	// References:
	// 1: #GenRandomBytesENC
	// 2: #SetEncodedKey
	void RandomizeKey(void);


	// This method converts between different encodings, such as from base64 to hex .
	// Each argument can be any binary encoding supported by Chilkat.
	bool ReEncode(const char *encodedData, const char *fromEncoding, const char *toEncoding, CkString &outStr);

	// This method converts between different encodings, such as from base64 to hex .
	// Each argument can be any binary encoding supported by Chilkat.
	const char *reEncode(const char *encodedData, const char *fromEncoding, const char *toEncoding);

	// Sets the digital certificate for decryption when the CryptAlgorithm property is
	// set to "pki" . This method requires that the certificate has a private key.
	// 
	// References:
	// 1: #CryptAlgorithm
	bool SetDecryptCert(CkCert &cert);


	// Sets the digital certificate and associated private key for decryption when the
	// CryptAlgorithm property is set to "pki" . The private key must be the one that
	// matches the certificate's public key.
	// 
	// References:
	// 1: #CryptAlgorithm
	bool SetDecryptCert2(CkCert &cert, CkPrivateKey &key);


	// Sets the optional authenticated additional data ( AAD ) for AES encryption in
	// GCM mode. The data is provided as a binary-encoded string using the specified
	// encoding, and any binary encoding supported by Chilkat can be used.
	// 
	// In GCM (Galois/Counter Mode) encryption, AAD (Additional Authenticated Data) is
	// optional input that is not encrypted but is authenticated along with the
	// ciphertext. It's used to verify integrity of associated data like headers or
	// metadata. If AAD is modified, decryption will fail due to authentication tag
	// mismatch.
	// 
	bool SetEncodedAad(const char *aadStr, const char *encoding);


	// In GCM mode, the authentication tag is a short value (e.g. 16 bytes) generated
	// during encryption that ensures the integrity and authenticity of both the
	// ciphertext and any AAD. It must be verified during decryption to confirm the
	// data hasn't been altered.
	// 
	// When decrypting AES-GCM, applications must call this method to provide the
	// expected authentication tag.
	// 
	// To prevent Chilkat from checking the authentication tag after decryption, you
	// can set the authentication tag to the special hex value
	// FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF (16 bytes of 0xFF).
	// 
	bool SetEncodedAuthTag(const char *authTagStr, const char *encoding);


	// Sets the initialization vector used in symmetric encrpytion ( AES , Blowfish ,
	// etc.) from a binary-encoded string using any Chilkat-supported encoding method
	// (e.g., base64 , hex ).
	// 
	// An Initialization Vector (IV) is a random or unique value used in symmetric
	// encryption to ensure that encrypting the same plaintext multiple times produces
	// different ciphertexts. It prevents pattern leakage.
	// 
	// Cipher Modes That Require an IV:
	// 
	//     * CBC (Cipher Block Chaining)
	//     * CFB (Cipher Feedback)
	//     * OFB (Output Feedback)
	//     * CTR (Counter Mode)
	//     * GCM (Galois/Counter Mode)
	// 
	// ECB (Electronic Codebook) does *not* use an IV, which makes it less secure.
	// 
	void SetEncodedIV(const char *ivStr, const char *encoding);


	// Sets the encryption key used in symmetric encryption ( AES , Blowfish , etc.)
	// from a binary-encoded string using any Chilkat-supported encoding method (e.g.,
	// base64 , hex ).
	// 
	// The key must have a byte size equal to the KeyLength property. For instance, a
	// KeyLength of 128 bits requires a 16-byte key, and a KeyLength of 256 bits
	// requires a 32-byte key.
	// 
	// 
	// References:
	// 1: #KeyLength
	void SetEncodedKey(const char *keyStr, const char *encoding);


	// Sets the pbes2 or pbes1 salt bytes from a binary-encoded string using any
	// Chilkat-supported encoding method (e.g., base64 , hex ).
	// 
	// This salt is used for encryption and decryption when the CryptAlgorithm property
	// is set to pbes1 or pbes2 . Note: This does not apply to the Pbkdf1 or Pbkdf2
	// methods, where the salt is provided as a function argument.
	// 
	// 
	// References:
	// 1: #CryptAlgorithm
	// 2: #Pbkdf1
	// 3: #Pbkdf2
	void SetEncodedSalt(const char *saltStr, const char *encoding);


	// Instructs the encryption library to use a specified digital certificate for
	// public-key encryption. To encrypt using multiple certificates, call
	// AddEncryptCert for each one. This action is equivalent to calling
	// ClearEncryptCerts before AddEncryptCert .
	// 
	// References:
	// 1: #AddEncryptCert
	// 2: #ClearEncryptCerts
	bool SetEncryptCert(CkCert &cert);


	// Sets the initialization vector (IV) for a symmetric encryption algorithm like
	// AES.
	void SetIV(const void *pByteData, unsigned long szByteData);


	// Sets the MAC key to be used for one of the Mac methods.
	bool SetMacKeyBytes(CkByteData &keyBytes);


	// Sets the MAC key from a binary-encoded string using any Chilkat-supported
	// encoding method (e.g., base64 , hex ).
	bool SetMacKeyEncoded(const char *key, const char *encoding);


	// Sets the MAC key from a string. The Charset property determines the actual bytes
	// used for the MAC key.
	// 
	// References:
	// 1: #Charset
	bool SetMacKeyString(const char *key);


	// Sets the encryption key used in symmetric encrpytion ( AES , Blowfish , etc.).
	// 
	// The key must have a byte size equal to the KeyLength property. For instance, a
	// KeyLength of 128 bits requires a 16-byte key, and a KeyLength of 256 bits
	// requires a 32-byte key.
	// 
	// 
	// References:
	// 1: #KeyLength
	void SetSecretKey(const void *pByteData, unsigned long szByteData);


	// This method, created over 15 years ago, is cryptographically insecure.
	// Applications should use PBKDF2 for generating secret keys, as demonstrated
	// below.
	// 
	// This method accepts a password string to generate a binary secret key of the
	// necessary bit length, setting the SecretKey property. It should only be used
	// when using Chilkat for both encryption and decryption, as the
	// password-to-secret-key algorithm must match to ensure compatibility.
	// 
	// There is no restriction on password length. The password is converted into a
	// binary secret key by generating an MD5 digest of the UTF-8 encoded password,
	// producing 16 bytes. If the required KeyLength exceeds 16 bytes, the MD5 digest
	// of the Base64 encoded UTF-8 password is appended, generating up to 32 bytes of
	// key material. This is then truncated to meet the necessary KeyLength. Below is
	// an example of how to replicate this computation manually.
	// 
	void SetSecretKeyViaPassword(const char *password);


	// Sets the digital certificate to be used for signing. Signing requires that the
	// certificate has a private key.
	bool SetSigningCert(CkCert &cert);


	// Sets the digital certificate and associated private key for signing. The private
	// key must be the one that matches the certificate's public key.
	bool SetSigningCert2(CkCert &cert, CkPrivateKey &privateKey);


	// If timestamp server communications are needed for signing and special Internet
	// settings like a proxy server are necessary, this method can provide an Http
	// object configured with these settings.
	void SetTsaHttpObj(CkHttp &http);


	// Assigns the digital certificate for signature verification. Typically, a PKCS7
	// (CMS) signature includes the signing certificate information, making it
	// unnecessary to call this method explicitly. This is only required in rare
	// instances.
	bool SetVerifyCert(CkCert &cert);


	// Digitally signs the content in dataToSign and returns a detached signature ( PKCS#7
	// signed-data ) as a binary-encoded string. The EncodingMode property determines
	// the binary-encoding. Possible encodings include base64 , base64_mime , hex , and
	// hex_lower . The HashAlgorithm property specifies the hash algorithm for creating
	// the data's hash during signing.
	// 
	// References:
	// 1: #EncodingMode
	// 2: #HashAlgorithm
	bool SignBdENC(CkBinData &dataToSign, CkString &outStr);

	// Digitally signs the content in dataToSign and returns a detached signature ( PKCS#7
	// signed-data ) as a binary-encoded string. The EncodingMode property determines
	// the binary-encoding. Possible encodings include base64 , base64_mime , hex , and
	// hex_lower . The HashAlgorithm property specifies the hash algorithm for creating
	// the data's hash during signing.
	// 
	// References:
	// 1: #EncodingMode
	// 2: #HashAlgorithm
	const char *signBdENC(CkBinData &dataToSign);
	// Digitally signs the content in dataToSign and returns a detached signature ( PKCS#7
	// signed-data ) as a binary-encoded string. The EncodingMode property determines
	// the binary-encoding. Possible encodings include base64 , base64_mime , hex , and
	// hex_lower . The HashAlgorithm property specifies the hash algorithm for creating
	// the data's hash during signing.
	// 
	// References:
	// 1: #EncodingMode
	// 2: #HashAlgorithm
	CkTask *SignBdENCAsync(CkBinData &dataToSign);


	// Digitally signs binary data and returns the binary detached signature ( PKCS#7
	// signed-data ). The HashAlgorithm property specifies the hash algorithm for
	// creating the data's hash during signing.
	bool SignBytes(CkByteData &data, CkByteData &outData);

	// Digitally signs binary data and returns the binary detached signature ( PKCS#7
	// signed-data ). The HashAlgorithm property specifies the hash algorithm for
	// creating the data's hash during signing.
	CkTask *SignBytesAsync(CkByteData &data);


	// The same as SignBytes except the binary data is passed via a pointer and length.
	bool SignBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);


	// Digitally signs binary data and returns a detached signature ( PKCS#7
	// signed-data ) as a binary-encoded string. The EncodingMode property determines
	// the binary-encoding. Possible encodings include base64 , base64_mime , hex , and
	// hex_lower . The HashAlgorithm property specifies the hash algorithm for creating
	// the data's hash during signing.
	bool SignBytesENC(CkByteData &data, CkString &outStr);

	// Digitally signs binary data and returns a detached signature ( PKCS#7
	// signed-data ) as a binary-encoded string. The EncodingMode property determines
	// the binary-encoding. Possible encodings include base64 , base64_mime , hex , and
	// hex_lower . The HashAlgorithm property specifies the hash algorithm for creating
	// the data's hash during signing.
	const char *signBytesENC(CkByteData &data);
	// Digitally signs binary data and returns a detached signature ( PKCS#7
	// signed-data ) as a binary-encoded string. The EncodingMode property determines
	// the binary-encoding. Possible encodings include base64 , base64_mime , hex , and
	// hex_lower . The HashAlgorithm property specifies the hash algorithm for creating
	// the data's hash during signing.
	CkTask *SignBytesENCAsync(CkByteData &data);


	// Digitally signs a pre-computed hash and returns a detached signature ( PKCS#7
	// signed-data ) as a binary-encoded string. The EncodingMode property determines
	// the binary-encoding. Possible encodings include base64 , base64_mime , hex , and
	// hex_lower
	// 
	// encodedHash is a binary-encoded hash to be signed, with its encoding format specified
	// by hashEncoding (e.g., base64 , hex ). hashAlg specifies the hash algorithm (e.g., sha256 ,
	// sha1 , sha512 ) used for encodedHash.
	// 
	// 
	// References:
	// 1: #EncodingMode
	bool SignHashENC(const char *encodedHash, const char *hashAlg, const char *hashEncoding, CkString &outStr);

	// Digitally signs a pre-computed hash and returns a detached signature ( PKCS#7
	// signed-data ) as a binary-encoded string. The EncodingMode property determines
	// the binary-encoding. Possible encodings include base64 , base64_mime , hex , and
	// hex_lower
	// 
	// encodedHash is a binary-encoded hash to be signed, with its encoding format specified
	// by hashEncoding (e.g., base64 , hex ). hashAlg specifies the hash algorithm (e.g., sha256 ,
	// sha1 , sha512 ) used for encodedHash.
	// 
	// 
	// References:
	// 1: #EncodingMode
	const char *signHashENC(const char *encodedHash, const char *hashAlg, const char *hashEncoding);
	// Digitally signs a pre-computed hash and returns a detached signature ( PKCS#7
	// signed-data ) as a binary-encoded string. The EncodingMode property determines
	// the binary-encoding. Possible encodings include base64 , base64_mime , hex , and
	// hex_lower
	// 
	// encodedHash is a binary-encoded hash to be signed, with its encoding format specified
	// by hashEncoding (e.g., base64 , hex ). hashAlg specifies the hash algorithm (e.g., sha256 ,
	// sha1 , sha512 ) used for encodedHash.
	// 
	// 
	// References:
	// 1: #EncodingMode
	CkTask *SignHashENCAsync(const char *encodedHash, const char *hashAlg, const char *hashEncoding);


	// Digitally signs the text contained in sb and returns a detached signature (
	// PKCS#7 signed-data ) as a binary-encoded string. The EncodingMode property
	// determines the binary-encoding. Possible encodings include base64 , base64_mime
	// , hex , and hex_lower . The HashAlgorithm property specifies the hash algorithm
	// for creating the data's hash during signing. The Charset property determines the
	// actual bytes that are hashed and signed.
	// 
	// References:
	// 1: #EncodingMode
	// 2: #HashAlgorithm
	// 3: #Charset
	bool SignSbENC(CkStringBuilder &sb, CkString &outStr);

	// Digitally signs the text contained in sb and returns a detached signature (
	// PKCS#7 signed-data ) as a binary-encoded string. The EncodingMode property
	// determines the binary-encoding. Possible encodings include base64 , base64_mime
	// , hex , and hex_lower . The HashAlgorithm property specifies the hash algorithm
	// for creating the data's hash during signing. The Charset property determines the
	// actual bytes that are hashed and signed.
	// 
	// References:
	// 1: #EncodingMode
	// 2: #HashAlgorithm
	// 3: #Charset
	const char *signSbENC(CkStringBuilder &sb);
	// Digitally signs the text contained in sb and returns a detached signature (
	// PKCS#7 signed-data ) as a binary-encoded string. The EncodingMode property
	// determines the binary-encoding. Possible encodings include base64 , base64_mime
	// , hex , and hex_lower . The HashAlgorithm property specifies the hash algorithm
	// for creating the data's hash during signing. The Charset property determines the
	// actual bytes that are hashed and signed.
	// 
	// References:
	// 1: #EncodingMode
	// 2: #HashAlgorithm
	// 3: #Charset
	CkTask *SignSbENCAsync(CkStringBuilder &sb);


	// Digitally signs a string and returns a the binary detached signature ( PKCS#7
	// signed-data ). The HashAlgorithm property specifies the hash algorithm for
	// creating the data's hash during signing. The Charset property determines the
	// actual bytes that are hashed and signed.
	bool SignString(const char *str, CkByteData &outData);

	// Digitally signs a string and returns a the binary detached signature ( PKCS#7
	// signed-data ). The HashAlgorithm property specifies the hash algorithm for
	// creating the data's hash during signing. The Charset property determines the
	// actual bytes that are hashed and signed.
	CkTask *SignStringAsync(const char *str);


	// Digitally signs a string and returns a detached signature ( PKCS#7 signed-data )
	// as a binary-encoded string. The EncodingMode property determines the
	// binary-encoding. Possible encodings include base64 , base64_mime , hex , and
	// hex_lower . The HashAlgorithm property specifies the hash algorithm for creating
	// the data's hash during signing. The Charset property determines the actual bytes
	// that are hashed and signed.
	// 
	// References:
	// 1: #EncodingMode
	// 2: #HashAlgorithm
	// 3: #Charset
	bool SignStringENC(const char *str, CkString &outStr);

	// Digitally signs a string and returns a detached signature ( PKCS#7 signed-data )
	// as a binary-encoded string. The EncodingMode property determines the
	// binary-encoding. Possible encodings include base64 , base64_mime , hex , and
	// hex_lower . The HashAlgorithm property specifies the hash algorithm for creating
	// the data's hash during signing. The Charset property determines the actual bytes
	// that are hashed and signed.
	// 
	// References:
	// 1: #EncodingMode
	// 2: #HashAlgorithm
	// 3: #Charset
	const char *signStringENC(const char *str);
	// Digitally signs a string and returns a detached signature ( PKCS#7 signed-data )
	// as a binary-encoded string. The EncodingMode property determines the
	// binary-encoding. Possible encodings include base64 , base64_mime , hex , and
	// hex_lower . The HashAlgorithm property specifies the hash algorithm for creating
	// the data's hash during signing. The Charset property determines the actual bytes
	// that are hashed and signed.
	// 
	// References:
	// 1: #EncodingMode
	// 2: #HashAlgorithm
	// 3: #Charset
	CkTask *SignStringENCAsync(const char *str);


	// Implements RFC 6238: TOTP: Time-Based One-Time Password Algorithm. The arguments
	// to this method are:
	//     * secret: The shared secret in an enocded representation such as base64, hex,
	//     ascii, etc.
	//     * secretEnc: The encoding of the shared secret, such as base64
	//     * t0: The Unix time to start counting time steps. It is a number in
	//     decimal string form. A Unix time is the number of seconds elapsed since midnight
	//     UTC of January 1, 1970. 0 is a typical value used for this argument.
	//     * tNow: The current Unix time in decimal string form. To use the current
	//     system date/time, pass an empty string for this argument.
	//     * tStep: The time step in seconds. A typical value is 30. Note: Both client
	//     and server must pre-agree on the secret, the t0, and the tStep.
	//     * numDigits: The number of decimal digits to return.
	//     * truncOffset: Normally set this to -1 for dynamic truncation. Otherwise can be set
	//     in the range 0..15.
	//     * hashAlg: Normally set to sha1 . Can be set to other hash algorithms such as
	//     sha256 , sha512 , etc.
	bool Totp(const char *secret, const char *secretEnc, const char *t0, const char *tNow, int tStep, int numDigits, int truncOffset, const char *hashAlg, CkString &outStr);

	// Implements RFC 6238: TOTP: Time-Based One-Time Password Algorithm. The arguments
	// to this method are:
	//     * secret: The shared secret in an enocded representation such as base64, hex,
	//     ascii, etc.
	//     * secretEnc: The encoding of the shared secret, such as base64
	//     * t0: The Unix time to start counting time steps. It is a number in
	//     decimal string form. A Unix time is the number of seconds elapsed since midnight
	//     UTC of January 1, 1970. 0 is a typical value used for this argument.
	//     * tNow: The current Unix time in decimal string form. To use the current
	//     system date/time, pass an empty string for this argument.
	//     * tStep: The time step in seconds. A typical value is 30. Note: Both client
	//     and server must pre-agree on the secret, the t0, and the tStep.
	//     * numDigits: The number of decimal digits to return.
	//     * truncOffset: Normally set this to -1 for dynamic truncation. Otherwise can be set
	//     in the range 0..15.
	//     * hashAlg: Normally set to sha1 . Can be set to other hash algorithms such as
	//     sha256 , sha512 , etc.
	const char *totp(const char *secret, const char *secretEnc, const char *t0, const char *tNow, int tStep, int numDigits, int truncOffset, const char *hashAlg);

	// Adds an XML certificate vault to the object's internal list of sources to be
	// searched for certificates and private keys when encrypting/decrypting or
	// signing/verifying. Unlike the AddPfxSourceData and AddPfxSourceFile methods,
	// only a single XML certificate vault can be used. If UseCertVault is called
	// multiple times, only the last certificate vault will be used, as each call to
	// UseCertVault will replace the certificate vault provided in previous calls.
	bool UseCertVault(CkXmlCertVault &vault);


	// Verifies a detached digital signature against the original data contained in
	// data. Returns true if the signature is verified. The encodedSig holds a
	// binary-encoded PKCS#7 signed-data detached signature. The type of binary
	// encoding, such as base64, hex, or base64_mime, is determined by the EncodingMode
	// property.
	// 
	// Afterwards, you can retrieve signer certificates by using the NumSignerCerts
	// property and the LastSignerCert method.
	// 
	// 
	// References:
	// 1: #EncodingMode
	// 2: #NumSignerCerts
	// 3: #LastSignerCert
	bool VerifyBdENC(CkBinData &data, const char *encodedSig);


	// Verifies a detached digital signature against the original binary data. Returns
	// true if the signature is verified.
	// 
	// Afterwards, you can retrieve signer certificates by using the NumSignerCerts
	// property and the LastSignerCert method.
	// 
	// 
	// References:
	// 1: #NumSignerCerts
	// 2: #LastSignerCert
	bool VerifyBytes(CkByteData &data, CkByteData &sig);


	// Verifies a detached digital signature against the original binary data. Returns
	// true if the signature is verified. The encodedSig holds a binary-encoded PKCS#7
	// signed-data detached signature. The type of binary encoding, such as base64,
	// hex, or base64_mime, is determined by the EncodingMode property.
	// 
	// Afterwards, you can retrieve signer certificates by using the NumSignerCerts
	// property and the LastSignerCert method.
	// 
	// 
	// References:
	// 1: #EncodingMode
	// 2: #NumSignerCerts
	// 3: #LastSignerCert
	bool VerifyBytesENC(CkByteData &data, const char *encodedSig);


	// This method is the same as VerifyP7S. Applications should instead call
	// VerifyP7S.
	// 
	// References:
	// 1: #VerifyP7S.
	bool VerifyDetachedSignature(const char *inFilename, const char *p7sFilename);


	// Verifies an opaque digital signature contained in a .p7m file and extracts the
	// original data to destPath. Returns true if the .p7m is validated and the original
	// data was extracted. Otherwise returns false.
	// 
	// Afterwards, you can retrieve signer certificates by using the NumSignerCerts
	// property and the LastSignerCert method.
	// 
	// 
	// References:
	// 1: #NumSignerCerts
	// 2: #LastSignerCert
	bool VerifyP7M(const char *p7mPath, const char *destPath);


	// Verifies a detached digital signature contained in a .p7s file against the
	// original data contained in originalDataPath. Returns true if the signature is verified.
	// 
	// Afterwards, you can retrieve signer certificates by using the NumSignerCerts
	// property and the LastSignerCert method.
	// 
	// 
	// References:
	// 1: #NumSignerCerts
	// 2: #LastSignerCert
	bool VerifyP7S(const char *originalDataPath, const char *p7sPath);


	// Verifies a detached digital signature against the original text contained in
	// sb. Returns true if the signature is verified. The encodedSig holds a
	// binary-encoded PKCS#7 signed-data detached signature. The type of binary
	// encoding, such as base64, hex, or base64_mime, is determined by the EncodingMode
	// property. The Charset property determines how the text in sb is converted to
	// bytes for signature validation.
	// 
	// Afterwards, you can retrieve signer certificates by using the NumSignerCerts
	// property and the LastSignerCert method.
	// 
	// 
	// References:
	// 1: #EncodingMode
	// 2: #Charset
	// 3: #NumSignerCerts
	// 4: #LastSignerCert
	bool VerifySbENC(CkStringBuilder &sb, const char *encodedSig);


	// Verifies a detached digital signature against the original text in str. Returns
	// true if the signature is verified. The sig holds a binary PKCS#7 signed-data
	// detached signature. The Charset property determines how the text in str is
	// converted to bytes for signature validation.
	// 
	// Afterwards, you can retrieve signer certificates by using the NumSignerCerts
	// property and the LastSignerCert method.
	// 
	// 
	// References:
	// 1: #Charset
	// 2: #NumSignerCerts
	// 3: #LastSignerCert
	bool VerifyString(const char *str, CkByteData &sig);


	// Verifies a detached digital signature against the original text in str. Returns
	// true if the signature is verified. The encodedSig holds a binary-encoded PKCS#7
	// signed-data detached signature. The type of binary encoding, such as base64,
	// hex, or base64_mime, is determined by the EncodingMode property. The Charset
	// property determines how the text in str is converted to bytes for signature
	// validation.
	// 
	// Afterwards, you can retrieve signer certificates by using the NumSignerCerts
	// property and the LastSignerCert method.
	// 
	// 
	// References:
	// 1: #EncodingMode
	// 2: #Charset
	// 3: #NumSignerCerts
	// 4: #LastSignerCert
	bool VerifyStringENC(const char *str, const char *encodedSig);


	// Sets the XTS-AES mode data unit number. The data unit number is a 64-bit
	// unsigned integer. It is passed in as two 32-bit unsigned integers representing
	// the high and low 32-bits.
	// 
	// Setting the data unit number is one way of setting the tweak value. The tweak
	// value is 16 bytes in length and can alternatively be set by calling
	// XtsSetEncodedTweakValue.
	// 
	// This method sets the tweak value such that the first 8 bytes are composed of the
	// little-endian 64-bit data unit number, followed by 8 zero bytes.
	// 
	// (Unfortunately, Chilkat cannot use 64-bit integers in method arguments because
	// many older programming environments, such as ActiveX, do not support it. Chilkat
	// must present an identical and uniform API across all programming languages.)
	// 
	void XtsSetDataUnitNumber(unsigned long loUint32, unsigned long hiUint32);


	// Sets the XTS-AES mode tweak key from an encoded string. The encoding argument
	// can be set to any of the following strings: base64 , hex , quoted-printable ,
	// ascii , or url . The tweak key should be equal in size to the encryption key.
	// For example, to do 256-bit AES-XTS, the encryption key is 256-bits, and the
	// tweak key is also 256-bits.
	void XtsSetEncodedTweakKey(const char *key, const char *encoding);


	// Sets the XTS-AES mode tweak value from an encoded string. The encoding argument
	// can be set to any of the following strings: base64 , hex , quoted-printable ,
	// ascii , or url .
	// 
	// The tweak value must be 16 bytes in length. An application can set the initial
	// tweak value by calling this method, or by calling XtsSetDataUnitNumber (but not
	// both).
	// 
	void XtsSetEncodedTweakValue(const char *tweak, const char *encoding);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
