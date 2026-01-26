// CkSecrets.h: interface for the CkSecrets class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.3.0

#define _CkVersion 11.3.0

#ifndef _CkSecrets_H
#define _CkSecrets_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkJsonObject;
class CkBinData;
class CkStringBuilder;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkSecrets
class CK_VISIBLE_PUBLIC CkSecrets  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkSecrets(const CkSecrets &);
	CkSecrets &operator=(const CkSecrets &);

    public:
	CkSecrets(void);
	virtual ~CkSecrets(void);

	static CkSecrets *createNew(void);
	static CkSecrets *createNew2(int progLang);
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
	const char *location(void);
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
	void put_Location(const char *newVal);

	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty.
	void get_UncommonOptions(CkString &str);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty.
	const char *uncommonOptions(void);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty.
	void put_UncommonOptions(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Deletes a secret. Cloud secrets managers will typically disable the secret and
	// schedule the secret for deletion after some number of days.
	bool DeleteSecret(CkJsonObject &jsonId);

	// Deletes a secret. Cloud secrets managers will typically disable the secret and
	// schedule the secret for deletion after some number of days.
	CkTask *DeleteSecretAsync(CkJsonObject &jsonId);


	// Fetches a binary secret and returns the content in bd.
	bool GetSecretBd(CkJsonObject &jsonId, CkBinData &bd);

	// Fetches a binary secret and returns the content in bd.
	CkTask *GetSecretBdAsync(CkJsonObject &jsonId, CkBinData &bd);


	// Fetches a JSON secret and returns the content in jsonOut.
	bool GetSecretJson(CkJsonObject &jsonId, CkJsonObject &jsonOut);

	// Fetches a JSON secret and returns the content in jsonOut.
	CkTask *GetSecretJsonAsync(CkJsonObject &jsonId, CkJsonObject &jsonOut);


	// Fetches a string secret and returns the content in sb.
	bool GetSecretSb(CkJsonObject &jsonId, CkStringBuilder &sb);

	// Fetches a string secret and returns the content in sb.
	CkTask *GetSecretSbAsync(CkJsonObject &jsonId, CkStringBuilder &sb);


	// Fetches a string secret and returns the content of the secret.
	bool GetSecretStr(CkJsonObject &jsonId, CkString &outStr);

	// Fetches a string secret and returns the content of the secret.
	const char *getSecretStr(CkJsonObject &jsonId);
	// Fetches a string secret and returns the content of the secret.
	const char *secretStr(CkJsonObject &jsonId);

	// Fetches a string secret and returns the content of the secret.
	CkTask *GetSecretStrAsync(CkJsonObject &jsonId);


	// Lists secrets matching the wildcarded or exact values passed in json. The
	// results of the query are returned in jsonOut.
	bool ListSecrets(CkJsonObject &json, CkJsonObject &jsonOut);

	// Lists secrets matching the wildcarded or exact values passed in json. The
	// results of the query are returned in jsonOut.
	CkTask *ListSecretsAsync(CkJsonObject &json, CkJsonObject &jsonOut);


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
	bool SetBootstrapSecret(CkJsonObject &jsonId, CkSecrets &secretContent);


	// Creates a binary secret if it does not yet exist, or updates an existing secret.
	// The name of the secret is specified in jsonId, and the binary content of the
	// secret in secret.
	bool UpdateSecretBd(CkJsonObject &jsonId, CkBinData &secret);

	// Creates a binary secret if it does not yet exist, or updates an existing secret.
	// The name of the secret is specified in jsonId, and the binary content of the
	// secret in secret.
	CkTask *UpdateSecretBdAsync(CkJsonObject &jsonId, CkBinData &secret);


	// Creates a JSON secret if it does not yet exist, or updates an existing secret.
	// The name of the secret is specified in jsonId, and the JSON content of the secret
	// in secret.
	bool UpdateSecretJson(CkJsonObject &jsonId, CkJsonObject &secret);

	// Creates a JSON secret if it does not yet exist, or updates an existing secret.
	// The name of the secret is specified in jsonId, and the JSON content of the secret
	// in secret.
	CkTask *UpdateSecretJsonAsync(CkJsonObject &jsonId, CkJsonObject &secret);


	// Creates a string secret if it does not yet exist, or updates an existing secret.
	// The name of the secret is specified in jsonId, and the string content of the
	// secret in sb.
	bool UpdateSecretSb(CkJsonObject &jsonId, CkStringBuilder &sb);

	// Creates a string secret if it does not yet exist, or updates an existing secret.
	// The name of the secret is specified in jsonId, and the string content of the
	// secret in sb.
	CkTask *UpdateSecretSbAsync(CkJsonObject &jsonId, CkStringBuilder &sb);


	// Creates a string secret if it does not yet exist, or updates an existing secret.
	// The name of the secret is specified in jsonId, and the string content of the
	// secret in secret.
	bool UpdateSecretStr(CkJsonObject &jsonId, const char *secret);

	// Creates a string secret if it does not yet exist, or updates an existing secret.
	// The name of the secret is specified in jsonId, and the string content of the
	// secret in secret.
	CkTask *UpdateSecretStrAsync(CkJsonObject &jsonId, const char *secret);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
