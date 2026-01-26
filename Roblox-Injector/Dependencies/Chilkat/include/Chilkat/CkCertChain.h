// CkCertChain.h: interface for the CkCertChain class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.3.0

#define _CkVersion 11.3.0

#ifndef _CkCertChain_H
#define _CkCertChain_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkCert;
class CkTrustedRoots;
class CkJsonObject;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkCertChain
class CK_VISIBLE_PUBLIC CkCertChain  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkCertChain(const CkCertChain &);
	CkCertChain &operator=(const CkCertChain &);

    public:
	CkCertChain(void);
	virtual ~CkCertChain(void);

	static CkCertChain *createNew(void);
	static CkCertChain *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The number of certificates in the chain. The end-user subscriber certificate is
	// at index 0. This is the certificate most removed from the trusted root.
	// Intermediate certificates are at indices 1 to NumCerts - 2. The trusted root (or
	// self-signed certificate) is at index NumCerts - 1.
	int get_NumCerts(void);

	// Returns the number of certificates in the chain that have expired.
	int get_NumExpiredCerts(void);

	// true if this certificate chain extends all the way to the root certificate.
	// The root certificate is either a trusted CA root or a self-signed certificate.
	// In both cases, the issuer of a root certificate is itself.
	bool get_ReachesRoot(void);

	// Can be set to a comma separated list of keywords to specify uncommon options.
	// The current uncommon options are:
	//     * PkiPathV1.ExcludeRoot Exclude the root certificate in the X509PKIPathv1
	//     method.
	void get_UncommonOptions(CkString &str);
	// Can be set to a comma separated list of keywords to specify uncommon options.
	// The current uncommon options are:
	//     * PkiPathV1.ExcludeRoot Exclude the root certificate in the X509PKIPathv1
	//     method.
	const char *uncommonOptions(void);
	// Can be set to a comma separated list of keywords to specify uncommon options.
	// The current uncommon options are:
	//     * PkiPathV1.ExcludeRoot Exclude the root certificate in the X509PKIPathv1
	//     method.
	void put_UncommonOptions(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Returns the Nth certificate of the chain into cert. The 1st certificate is at
	// index 0.
	bool CertAt(int index, CkCert &cert);


	// Returns the Nth certificate in the chain.
	// 
	// This method is deprecated. Applications should call CertAt instead.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetCert(int index);


	// Returns true if the root of the certificate chain is a certificate found in
	// trustedRoots.
	bool IsRootTrusted(CkTrustedRoots &trustedRoots);


	// Loads a certificate chain from the x5c parameter of a JWK (JSON Web Key).
	bool LoadX5C(CkJsonObject &jwk);


	// Verifies the certificate signatures to the root. Returns true if all
	// certificate signatures are valid.
	bool VerifyCertSignatures(void);


	// Returns the base64 representation of an X509PKIPathv1 containing the
	// certificates in this chain. This is typically used in an X.509 Binary Security
	// Token. It is a PKIPath that contains an ordered list of X.509 public
	// certificates packaged in a PKIPath. The X509PKIPathv1 token type may be used to
	// represent a certificate path. (This is sometimes used in XAdES signatures.)
	bool X509PKIPathv1(CkString &outStr);

	// Returns the base64 representation of an X509PKIPathv1 containing the
	// certificates in this chain. This is typically used in an X.509 Binary Security
	// Token. It is a PKIPath that contains an ordered list of X.509 public
	// certificates packaged in a PKIPath. The X509PKIPathv1 token type may be used to
	// represent a certificate path. (This is sometimes used in XAdES signatures.)
	const char *x509PKIPathv1(void);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
