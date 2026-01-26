// CkSecretsW.h: interface for the CkSecretsW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.3.0

#ifndef _CkSecretsW_H
#define _CkSecretsW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacksW.h"

class CkJsonObjectW;
class CkTaskW;
class CkBinDataW;
class CkStringBuilderW;
class CkBaseProgressW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkSecretsW
class CK_VISIBLE_PUBLIC CkSecretsW  : public CkClassWithCallbacksW
{
	private:
	bool m_cbOwned;

	private:
	
	// Don't allow assignment or copying these objects.
	CkSecretsW(const CkSecretsW &);
	CkSecretsW &operator=(const CkSecretsW &);

    public:
	CkSecretsW(void);
	virtual ~CkSecretsW(void);

	

	static CkSecretsW *createNew(void);
	

	CkSecretsW(bool bCallbackOwned);
	static CkSecretsW *createNew(bool bCallbackOwned);

	
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
	// The AutoSplit property is specific to local_manager secrets on Windows. The
	// Windows Credentials Manager supports a maximum of 2560 bytes per secret. If a
	// secret exceeds this size, it will be automatically compressed and split when
	// created or updated, and automatically recomposed when retrieved.
	// 
	// A secret can be split into a maximum of 10 parts.
	// 
	// The default value is true.
	// 
	bool get_AutoSplit(void);
	// The AutoSplit property is specific to local_manager secrets on Windows. The
	// Windows Credentials Manager supports a maximum of 2560 bytes per secret. If a
	// secret exceeds this size, it will be automatically compressed and split when
	// created or updated, and automatically recomposed when retrieved.
	// 
	// A secret can be split into a maximum of 10 parts.
	// 
	// The default value is true.
	// 
	void put_AutoSplit(bool newVal);

	// If set to true, then the contents of the secret will be stored compressed. The
	// default value of this property is false.
	bool get_Compression(void);
	// If set to true, then the contents of the secret will be stored compressed. The
	// default value of this property is false.
	void put_Compression(bool newVal);

	// The location of the secrets. Possible values are:
	//     * local_manager - On Windows this is the Credentials Manager. On MacOS and
	//     iOS it is the Keychain. This is not yet an option on Linux or Android.
	//     * aws_secrets_manager - AWS Secrets Manager
	//     * azure_key_vault - Azure Key Vault
	//     * ibm_cloud - IBM Cloud Secrets Manager
	//     * oracle_cloud - Oracle Cloud Secrets
	//     * doppler - Doppler Secrets
	//     * memory - In-Memory Secrets
	// 
	// The default location is the local_manager . On Linux and Android, local_manager
	// will behave the same as memory .
	// 
	void get_Location(CkString &str);
	// The location of the secrets. Possible values are:
	//     * local_manager - On Windows this is the Credentials Manager. On MacOS and
	//     iOS it is the Keychain. This is not yet an option on Linux or Android.
	//     * aws_secrets_manager - AWS Secrets Manager
	//     * azure_key_vault - Azure Key Vault
	//     * ibm_cloud - IBM Cloud Secrets Manager
	//     * oracle_cloud - Oracle Cloud Secrets
	//     * doppler - Doppler Secrets
	//     * memory - In-Memory Secrets
	// 
	// The default location is the local_manager . On Linux and Android, local_manager
	// will behave the same as memory .
	// 
	const wchar_t *location(void);
	// The location of the secrets. Possible values are:
	//     * local_manager - On Windows this is the Credentials Manager. On MacOS and
	//     iOS it is the Keychain. This is not yet an option on Linux or Android.
	//     * aws_secrets_manager - AWS Secrets Manager
	//     * azure_key_vault - Azure Key Vault
	//     * ibm_cloud - IBM Cloud Secrets Manager
	//     * oracle_cloud - Oracle Cloud Secrets
	//     * doppler - Doppler Secrets
	//     * memory - In-Memory Secrets
	// 
	// The default location is the local_manager . On Linux and Android, local_manager
	// will behave the same as memory .
	// 
	void put_Location(const wchar_t *newVal);

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
	// Deletes a secret. Cloud secrets managers will typically disable the secret and
	// schedule the secret for deletion after some number of days.
	bool DeleteSecret(CkJsonObjectW &jsonId);

	// Creates an asynchronous task to call the DeleteSecret method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DeleteSecretAsync(CkJsonObjectW &jsonId);

	// Fetches a binary secret and returns the content in bd.
	bool GetSecretBd(CkJsonObjectW &jsonId, CkBinDataW &bd);

	// Creates an asynchronous task to call the GetSecretBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *GetSecretBdAsync(CkJsonObjectW &jsonId, CkBinDataW &bd);

	// Fetches a JSON secret and returns the content in jsonOut.
	bool GetSecretJson(CkJsonObjectW &jsonId, CkJsonObjectW &jsonOut);

	// Creates an asynchronous task to call the GetSecretJson method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *GetSecretJsonAsync(CkJsonObjectW &jsonId, CkJsonObjectW &jsonOut);

	// Fetches a string secret and returns the content in sb.
	bool GetSecretSb(CkJsonObjectW &jsonId, CkStringBuilderW &sb);

	// Creates an asynchronous task to call the GetSecretSb method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *GetSecretSbAsync(CkJsonObjectW &jsonId, CkStringBuilderW &sb);

	// Fetches a string secret and returns the content of the secret.
	bool GetSecretStr(CkJsonObjectW &jsonId, CkString &outStr);
	// Fetches a string secret and returns the content of the secret.
	const wchar_t *getSecretStr(CkJsonObjectW &jsonId);
	// Fetches a string secret and returns the content of the secret.
	const wchar_t *secretStr(CkJsonObjectW &jsonId);

	// Creates an asynchronous task to call the GetSecretStr method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *GetSecretStrAsync(CkJsonObjectW &jsonId);

	// Lists secrets matching the wildcarded or exact values passed in json. The
	// results of the query are returned in jsonOut.
	bool ListSecrets(CkJsonObjectW &json, CkJsonObjectW &jsonOut);

	// Creates an asynchronous task to call the ListSecrets method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ListSecretsAsync(CkJsonObjectW &json, CkJsonObjectW &jsonOut);

	// Accessing a cloud-based secrets manager requires authentication credentials,
	// which cannot be stored in the manager itself. Instead, they must be securely
	// stored locally.
	// 
	// One solution is to store the authentication credentials as a secret in the
	// Windows Credentials Manager or Apple Keychain. These credentials serve as the
	// bootstrap secret for authenticating with the cloud-based secrets manager.
	// 
	// jsonId contains the name of the bootstrap secret. secretContent contains the bootstrap's
	// secret content.
	// 
	bool SetBootstrapSecret(CkJsonObjectW &jsonId, CkSecretsW &secretContent);

	// Creates a binary secret if it does not yet exist, or updates an existing secret.
	// The name of the secret is specified in jsonId, and the binary content of the
	// secret in secret.
	bool UpdateSecretBd(CkJsonObjectW &jsonId, CkBinDataW &secret);

	// Creates an asynchronous task to call the UpdateSecretBd method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UpdateSecretBdAsync(CkJsonObjectW &jsonId, CkBinDataW &secret);

	// Creates a JSON secret if it does not yet exist, or updates an existing secret.
	// The name of the secret is specified in jsonId, and the JSON content of the secret
	// in secret.
	bool UpdateSecretJson(CkJsonObjectW &jsonId, CkJsonObjectW &secret);

	// Creates an asynchronous task to call the UpdateSecretJson method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UpdateSecretJsonAsync(CkJsonObjectW &jsonId, CkJsonObjectW &secret);

	// Creates a string secret if it does not yet exist, or updates an existing secret.
	// The name of the secret is specified in jsonId, and the string content of the
	// secret in sb.
	bool UpdateSecretSb(CkJsonObjectW &jsonId, CkStringBuilderW &sb);

	// Creates an asynchronous task to call the UpdateSecretSb method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UpdateSecretSbAsync(CkJsonObjectW &jsonId, CkStringBuilderW &sb);

	// Creates a string secret if it does not yet exist, or updates an existing secret.
	// The name of the secret is specified in jsonId, and the string content of the
	// secret in secret.
	bool UpdateSecretStr(CkJsonObjectW &jsonId, const wchar_t *secret);

	// Creates an asynchronous task to call the UpdateSecretStr method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UpdateSecretStrAsync(CkJsonObjectW &jsonId, const wchar_t *secret);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
