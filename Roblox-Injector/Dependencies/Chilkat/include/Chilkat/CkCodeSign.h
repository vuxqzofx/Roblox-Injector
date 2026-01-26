// CkCodeSign.h: interface for the CkCodeSign class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.3.0

#define _CkVersion 11.3.0

#ifndef _CkCodeSign_H
#define _CkCodeSign_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkCert;
class CkJsonObject;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkCodeSign
class CK_VISIBLE_PUBLIC CkCodeSign  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkCodeSign(const CkCodeSign &);
	CkCodeSign &operator=(const CkCodeSign &);

    public:
	CkCodeSign(void);
	virtual ~CkCodeSign(void);

	static CkCodeSign *createNew(void);
	static CkCodeSign *createNew2(int progLang);
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
	const char *uncommonOptions(void);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty.
	// 
	// Can be set to a list of the following comma separated keywords:
	//     * codesign-allow-expired-cert - Don't fail authenticode signature validation
	//     because the signing certificate is expired.
	// 
	void put_UncommonOptions(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Authenticode signs a DLL or EXE.
	bool AddSignature(const char *path, CkCert &cert, CkJsonObject &options);

	// Authenticode signs a DLL or EXE.
	CkTask *AddSignatureAsync(const char *path, CkCert &cert, CkJsonObject &options);


	// This method retrieves the signer certificate after calling VerifySignature. If
	// successful and the signer certificate is fully available, cert will contain the
	// certificate.
	bool GetSignerCert(CkCert &cert);


	// Removes the authenticode signature of a Windows executable or DLL. The path to
	// the executable/DLL is passed in path.
	bool RemoveSignature(const char *path);


	// Verifies the signature of a Windows executable or DLL. The path to the
	// executable/DLL is passed in path. Information about the signature is returned in
	// sigInfo. Returns true if the signature is verified indicating the EXE or DLL can
	// be trusted. Otherwise returns false.
	bool VerifySignature(const char *path, CkJsonObject &sigInfo);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
