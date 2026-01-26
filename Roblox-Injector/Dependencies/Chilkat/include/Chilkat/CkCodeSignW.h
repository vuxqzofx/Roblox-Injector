// CkCodeSignW.h: interface for the CkCodeSignW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.3.0

#ifndef _CkCodeSignW_H
#define _CkCodeSignW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacksW.h"

class CkCertW;
class CkJsonObjectW;
class CkTaskW;
class CkBaseProgressW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkCodeSignW
class CK_VISIBLE_PUBLIC CkCodeSignW  : public CkClassWithCallbacksW
{
	private:
	bool m_cbOwned;

	private:
	
	// Don't allow assignment or copying these objects.
	CkCodeSignW(const CkCodeSignW &);
	CkCodeSignW &operator=(const CkCodeSignW &);

    public:
	CkCodeSignW(void);
	virtual ~CkCodeSignW(void);

	

	static CkCodeSignW *createNew(void);
	

	CkCodeSignW(bool bCallbackOwned);
	static CkCodeSignW *createNew(bool bCallbackOwned);

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkBaseProgressW *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkBaseProgressW *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The interval in milliseconds between each AbortCheck event callback, which
	// enables an application to abort certain method calls before they complete. By
	// default, HeartbeatMs is set to 0 , meaning no AbortCheck event callbacks will
	// trigger.
	// 
	// References:
	// 1: #AbortCheck
	int get_HeartbeatMs(void);
	// The interval in milliseconds between each AbortCheck event callback, which
	// enables an application to abort certain method calls before they complete. By
	// default, HeartbeatMs is set to 0 , meaning no AbortCheck event callbacks will
	// trigger.
	// 
	// References:
	// 1: #AbortCheck
	void put_HeartbeatMs(int newVal);

	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty.
	// 
	// Can be set to a list of the following comma separated keywords:
	//     * codesign-allow-expired-cert - Don't fail authenticode signature validation
	//     because the signing certificate is expired.
	// 
	void get_UncommonOptions(CkString &str);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty.
	// 
	// Can be set to a list of the following comma separated keywords:
	//     * codesign-allow-expired-cert - Don't fail authenticode signature validation
	//     because the signing certificate is expired.
	// 
	const wchar_t *uncommonOptions(void);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty.
	// 
	// Can be set to a list of the following comma separated keywords:
	//     * codesign-allow-expired-cert - Don't fail authenticode signature validation
	//     because the signing certificate is expired.
	// 
	void put_UncommonOptions(const wchar_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Authenticode signs a DLL or EXE.
	bool AddSignature(const wchar_t *path, CkCertW &cert, CkJsonObjectW &options);

	// Creates an asynchronous task to call the AddSignature method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *AddSignatureAsync(const wchar_t *path, CkCertW &cert, CkJsonObjectW &options);

	// This method retrieves the signer certificate after calling VerifySignature. If
	// successful and the signer certificate is fully available, cert will contain the
	// certificate.
	bool GetSignerCert(CkCertW &cert);

	// Removes the authenticode signature of a Windows executable or DLL. The path to
	// the executable/DLL is passed in path.
	bool RemoveSignature(const wchar_t *path);

	// Verifies the signature of a Windows executable or DLL. The path to the
	// executable/DLL is passed in path. Information about the signature is returned in
	// sigInfo. Returns true if the signature is verified indicating the EXE or DLL can
	// be trusted. Otherwise returns false.
	bool VerifySignature(const wchar_t *path, CkJsonObjectW &sigInfo);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
