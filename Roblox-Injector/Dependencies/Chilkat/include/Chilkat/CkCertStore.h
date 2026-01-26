// CkCertStore.h: interface for the CkCertStore class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.3.0

#define _CkVersion 11.3.0

#ifndef _CkCertStore_H
#define _CkCertStore_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkCert;
class CkJsonObject;
class CkBinData;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkCertStore
class CK_VISIBLE_PUBLIC CkCertStore  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkCertStore(const CkCertStore &);
	CkCertStore &operator=(const CkCertStore &);

    public:
	CkCertStore(void);
	virtual ~CkCertStore(void);

	static CkCertStore *createNew(void);
	static CkCertStore *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Applies only when running on a Microsoft Windows operating system. If true,
	// then any method that returns a certificate will not try to also access the
	// associated private key, assuming one exists. This is useful if the certificate
	// was installed with high-security such that a private key access would trigger
	// the Windows OS to display a security warning dialog. The default value of this
	// property is false.
	bool get_AvoidWindowsPkAccess(void);
	// Applies only when running on a Microsoft Windows operating system. If true,
	// then any method that returns a certificate will not try to also access the
	// associated private key, assuming one exists. This is useful if the certificate
	// was installed with high-security such that a private key access would trigger
	// the Windows OS to display a security warning dialog. The default value of this
	// property is false.
	void put_AvoidWindowsPkAccess(bool newVal);

	// The number of certificates held in the certificate store.
	int get_NumCertificates(void);

	// Can be set to the PIN value for a certificate / private key stored on a smart
	// card.
	void get_SmartCardPin(CkString &str);
	// Can be set to the PIN value for a certificate / private key stored on a smart
	// card.
	const char *smartCardPin(void);
	// Can be set to the PIN value for a certificate / private key stored on a smart
	// card.
	void put_SmartCardPin(const char *newVal);

	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string, and should typically remain empty.
	void get_UncommonOptions(CkString &str);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string, and should typically remain empty.
	const char *uncommonOptions(void);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string, and should typically remain empty.
	void put_UncommonOptions(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// On Windows, this updates or adds cert to the open Windows certificate store.
	// Note: This imports the certificate without the private key. The
	// Chilkat.Pfx.ImportToWindows method must be called to import a certificate with a
	// private key.
	// 
	// Beginning with Chilkat v10.0.0, on macOS and iOS, this adds the certificate,
	// including any private keys and intermediate CA certificates, to the Apple
	// Keychain.
	// 
	bool AddCertificate(CkCert &cert);


	// This method closes any open certificate stores, removes all certificates from
	// the object, and sets the NumCertificates property back to 0.
	bool CloseCertStore(void);


	// This method, available only on Microsoft Windows, creates a new file-based
	// certificate store. You can save certificates to this store by using the
	// AddCertificate function.
	// 
	// Internally, the Microsoft function CertOpenStore is called with the provider
	// type CERT_STORE_PROV_FILE and the flag CERT_STORE_CREATE_NEW_FLAG, to create a
	// new, empty certificate store that is backed by a file.
	// 
	bool CreateFileStore(const char *filename);


	// This method, available only on Microsoft Windows, creates an in-memory
	// certificate store. Certificates may be added by calling AddCertificate.
	// 
	// Internally, the Microsoft function CertOpenStore is called with the provider
	// type CERT_STORE_PROV_MEMORY to create a new in-memory certificate store. This
	// store acts as a temporary container for managing certificates during runtime.
	// The store exists only in memory and is not backed by a file or persistent
	// storage. Certificates can be added, retrieved, or removed, but the store is lost
	// when the application ends unless explicitly saved elsewhere.
	// 
	bool CreateMemoryStore(void);


	// This method, available only on Microsoft Windows, creates a new registry-based
	// certificate store. You can save certificates to this store by using the
	// AddCertificate function.
	// 
	// Internally, the Microsoft function CertOpenStore is called with the provider
	// type CERT_STORE_PROV_REG and a registry key to create a new, empty certificate
	// store in the Windows registry.
	// 
	// regRoot can be the string CurrentUser or LocalMachine . regPath is a registry key path
	// such as Software/MyApplication/Certificates .
	// 
	bool CreateRegistryStore(const char *regRoot, const char *regPath);


	// Searches for a certificate using criteria from json and stores the result in
	// cert. If multiple criteria are provided, it searches each one sequentially and
	// returns the first match.
	// 
	// See the examples below for details.
	// 
	bool FindCert(CkJsonObject &json, CkCert &cert);


	// Loads the Nth certificate into cert. The first certificate is at index 0.
	bool GetCert(int index, CkCert &cert);


	// Loads the certificates contained within a PEM formatted file.
	bool LoadPemFile(const char *pemPath);


	// Loads the certificates contained within an in-memory PEM formatted string.
	bool LoadPemStr(const char *pemString);


	// Loads the PFX/P12 bytes contained in bd. password is the password to the PFX.
	bool LoadPfxBd(CkBinData &bd, const char *password);


	// Loads a PFX file. Once loaded, the certificates within the PFX may be searched
	// via the Find* methods. It is also possible to iterate from 0 to
	// NumCertficates-1, calling GetCertificate for each index, to retrieve each
	// certificate within the PFX.
	// 
	// Note: This method does not import certificates into the Windows certificate
	// stores. The purpose of this method is to load a .pfx/.p12 into this object so
	// that other API methods can be called to explore or search the contents of the
	// PFX. The Chilkat Pfx class also provides similar functionality.
	// 
	bool LoadPfxFile(const char *pfxFilename, const char *password);


	// On Windows, this method opens the Current-User\Personal certificate store in the
	// registry. Set readOnly to true to open the store in read-only mode, which allows
	// you to fetch certificates without adding or removing them. This prevents
	// permission denied errors that require read-write access.
	// 
	// Starting in version 10.0.0, this method opens the Apple Keychain on MacOS and
	// iOS systems. The readOnly is ignored.
	// 
	// After opening the store, you can search for certificates using the Find*
	// methods. Alternatively, you can iterate through the certificates by indexing
	// from 0 to NumCertificates-1, using GetCertificate to access each one.
	// 
	bool OpenCurrentUserStore(bool readOnly);


	// (This method only available on Microsoft Windows operating systems.)
	// Opens a file-based certificate store.
	// 
	// Once loaded, the certificates within the store may be searched via the Find*
	// methods. An application may also iterate from 0 to NumCertficates-1 and call
	// GetCertificate to access each certificate by index.
	// 
	bool OpenFileStore(const char *filename, bool readOnly);


	// (This method is only available on Microsoft Windows operating systems.)
	// Opens the registry-based Local-Computer\Personal certificate store. Set readOnly =
	// true if only fetching certificates and not updating the certificate store
	// (i.e. certificates will not be added or removed). Setting readOnly = true causes
	// the certificate store to be opened read-only, and will prevent permission denied
	// errors caused by the need for read-write permission.
	// 
	// Once loaded, the certificates within the store may be searched via the Find*
	// methods. An application may also iterate from 0 to NumCertficates-1 and call
	// GetCertificate to access each certificate by index.
	// 
	bool OpenLocalSystemStore(bool readOnly);


	// (This method only available on Microsoft Windows operating systems.)
	// Opens an arbitrary registry-based certificate store. regRoot must be CurrentUser or
	// LocalMachine . regPath is a registry path such as
	// Software/MyApplication/Certificates .
	// 
	// Setting readOnly = true causes the certificate store to be opened read-only, and
	// will prevent permission denied errors caused by the need for read-write
	// permission.
	// 
	// Once loaded, the certificates within the store may be searched via the Find*
	// methods. An application may also iterate from 0 to NumCertficates-1 and call
	// GetCertificate to access each certificate by index.
	// 
	bool OpenRegistryStore(const char *regRoot, const char *regPath, bool readOnly);


	// This function identifies connected HSM devices such as smart cards and USB
	// tokens, and loads the certificates from each device. It has been significantly
	// enhanced in Chilkat v10.1.2 and is compatible with Windows, MacOS, iOS, and
	// Linux. (Android is not yet supported.)
	// 
	// Note: The csp is no longer used and is ignored. Applications should pass an
	// empty string.
	// 
	// Note: If multiple HSM devices are connected, avoid setting the SmartCardPin
	// property unless all devices share the same PIN. Otherwise, Chilkat will attempt
	// to use that PIN for each device, which could cause issues.
	// 
	bool OpenSmartcard(const char *csp);


	// (This method only available on Microsoft Windows operating systems.)
	// Opens a Microsoft Windows certificate store. storeLocation must be CurrentUser or
	// LocalMachine . storeName is the name of the certificate store to open. It may be any
	// of the following:
	//     * AddressBook: Certificate store for other users.
	//     * AuthRoot: Certificate store for third-party certification authorities
	//     (CAs).
	//     * CertificationAuthority: Certificate store for intermediate certification
	//     authorities (CAs).
	//     * Disallowed: Certificate store for revoked certificates.
	//     * My: Certificate store for personal certificates.
	//     * Root: Certificate store for trusted root certification authorities (CAs).
	//     * TrustedPeople: Certificate store for directly trusted people and
	//     resources.
	//     * TrustedPublisher: Certificate store for directly trusted publishers.
	// 
	// Setting readOnly = true causes the certificate store to be opened read-only, and
	// will prevent permission denied errors caused by the need for read-write
	// permission.
	// 
	// Once loaded, the certificates within the store may be searched via the Find*
	// methods. An application may also iterate from 0 to NumCertficates-1 and call
	// GetCertificate to access each certificate by index.
	// 
	bool OpenWindowsStore(const char *storeLocation, const char *storeName, bool readOnly);


	// (This method only available on Microsoft Windows operating systems.)
	// Removes the passed certificate from the store. The certificate object passed as
	// the argument can no longer be used once removed.
	bool RemoveCertificate(CkCert &cert);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
