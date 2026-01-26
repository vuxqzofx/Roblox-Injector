// CkHttp.h: interface for the CkHttp class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.3.0

#define _CkVersion 11.3.0

#ifndef _CkHttp_H
#define _CkHttp_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkJsonObject;
class CkBinData;
class CkStringBuilder;
class CkCert;
class CkHashtable;
class CkHttpResponse;
class CkByteData;
class CkHttpRequest;
class CkStringArray;
class CkStringTable;
class CkDateTime;
class CkPrivateKey;
class CkSecureString;
class CkHttpProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkHttp
class CK_VISIBLE_PUBLIC CkHttp  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkHttp(const CkHttp &);
	CkHttp &operator=(const CkHttp &);

    public:
	CkHttp(void);
	virtual ~CkHttp(void);

	static CkHttp *createNew(void);
	static CkHttp *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	CkHttpProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkHttpProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// When set to true, causes the currently running method to abort. Methods that
	// always finish quickly (i.e.have no length file operations or network
	// communications) are not affected. If no method is running, then this property is
	// automatically reset to false when the next method is called. When the abort
	// occurs, this property is reset to false. Both synchronous and asynchronous
	// method calls can be aborted. (A synchronous method call could be aborted by
	// setting this property from a separate thread.)
	bool get_AbortCurrent(void);
	// When set to true, causes the currently running method to abort. Methods that
	// always finish quickly (i.e.have no length file operations or network
	// communications) are not affected. If no method is running, then this property is
	// automatically reset to false when the next method is called. When the abort
	// occurs, this property is reset to false. Both synchronous and asynchronous
	// method calls can be aborted. (A synchronous method call could be aborted by
	// setting this property from a separate thread.)
	void put_AbortCurrent(bool newVal);

	// This property sets the Accept header for all HTTP requests, except those sent by
	// the HttpReq and HttpSReq methods that use headers from an HttpRequest object.
	// 
	// By default, it is set to */* .
	// 
	// Setting this property is the same as calling SetRequestHeader with Accept as the
	// header field name.
	// 
	// The Accept HTTP header is sent by the client (your application) to tell the
	// server which content types (MIME types) it can handle in the response.
	// 
	// For example, the following means only a JSON response is accepted:
	// 
	// Accept: application/json
	// 
	// References:
	// 1: #HttpReq
	// 2: #HttpSReq
	// 3: #SetRequestHeader
	void get_Accept(CkString &str);
	// This property sets the Accept header for all HTTP requests, except those sent by
	// the HttpReq and HttpSReq methods that use headers from an HttpRequest object.
	// 
	// By default, it is set to */* .
	// 
	// Setting this property is the same as calling SetRequestHeader with Accept as the
	// header field name.
	// 
	// The Accept HTTP header is sent by the client (your application) to tell the
	// server which content types (MIME types) it can handle in the response.
	// 
	// For example, the following means only a JSON response is accepted:
	// 
	// Accept: application/json
	// 
	// References:
	// 1: #HttpReq
	// 2: #HttpSReq
	// 3: #SetRequestHeader
	const char *ck_accept(void);
	// This property sets the Accept header for all HTTP requests, except those sent by
	// the HttpReq and HttpSReq methods that use headers from an HttpRequest object.
	// 
	// By default, it is set to */* .
	// 
	// Setting this property is the same as calling SetRequestHeader with Accept as the
	// header field name.
	// 
	// The Accept HTTP header is sent by the client (your application) to tell the
	// server which content types (MIME types) it can handle in the response.
	// 
	// For example, the following means only a JSON response is accepted:
	// 
	// Accept: application/json
	// 
	// References:
	// 1: #HttpReq
	// 2: #HttpSReq
	// 3: #SetRequestHeader
	void put_Accept(const char *newVal);

	// This property is deprecated and applications should instead call
	// SetRequestHeader with Accept-Charset as the header field name.
	// 
	// This property sets the Accept-Charset header for all HTTP requests, except those
	// sent by the HttpReq and HttpSReq methods that use headers from an HttpRequest
	// object.
	// 
	// By default, it is set to an empty string, meaning no Accept-Charset header is
	// included.
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #HttpReq
	// 3: #HttpSReq
	void get_AcceptCharset(CkString &str);
	// This property is deprecated and applications should instead call
	// SetRequestHeader with Accept-Charset as the header field name.
	// 
	// This property sets the Accept-Charset header for all HTTP requests, except those
	// sent by the HttpReq and HttpSReq methods that use headers from an HttpRequest
	// object.
	// 
	// By default, it is set to an empty string, meaning no Accept-Charset header is
	// included.
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #HttpReq
	// 3: #HttpSReq
	const char *acceptCharset(void);
	// This property is deprecated and applications should instead call
	// SetRequestHeader with Accept-Charset as the header field name.
	// 
	// This property sets the Accept-Charset header for all HTTP requests, except those
	// sent by the HttpReq and HttpSReq methods that use headers from an HttpRequest
	// object.
	// 
	// By default, it is set to an empty string, meaning no Accept-Charset header is
	// included.
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #HttpReq
	// 3: #HttpSReq
	void put_AcceptCharset(const char *newVal);

	// This property is deprecated and applications should instead call
	// SetRequestHeader with Accept-Language as the header field name.
	// 
	// This property sets the Accept-Language header for all HTTP requests, except
	// those sent by the HttpReq and HttpSReq methods that use headers from an
	// HttpRequest object.
	// 
	// By default, it is set to an empty string, meaning no Accept-Language header is
	// included.
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #HttpReq
	// 3: #HttpSReq
	void get_AcceptLanguage(CkString &str);
	// This property is deprecated and applications should instead call
	// SetRequestHeader with Accept-Language as the header field name.
	// 
	// This property sets the Accept-Language header for all HTTP requests, except
	// those sent by the HttpReq and HttpSReq methods that use headers from an
	// HttpRequest object.
	// 
	// By default, it is set to an empty string, meaning no Accept-Language header is
	// included.
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #HttpReq
	// 3: #HttpSReq
	const char *acceptLanguage(void);
	// This property is deprecated and applications should instead call
	// SetRequestHeader with Accept-Language as the header field name.
	// 
	// This property sets the Accept-Language header for all HTTP requests, except
	// those sent by the HttpReq and HttpSReq methods that use headers from an
	// HttpRequest object.
	// 
	// By default, it is set to an empty string, meaning no Accept-Language header is
	// included.
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #HttpReq
	// 3: #HttpSReq
	void put_AcceptLanguage(const char *newVal);

	// If true then the Accept-Encoding: gzip is automatically added for all HTTP
	// requests, except those made using the HttpReq and HttpSReq methods that use
	// headers from an HttpRequest object.
	// 
	// The default value is true.
	// 
	// The Accept-Encoding HTTP header is sent by the client to tell the server which
	// compression algorithms it supports for the response body.
	// 
	// Example:
	// 
	// Accept-Encoding: gzip, deflate
	// 
	// This means the client can handle responses compressed with gzip or deflate.
	// 
	// If this property is set to false, then the Accept-Encoding header is added,
	// but the value is empty, like this:Accept-Encoding: 
	//  
	// 
	// It means the client explicitly does not accept any content codings (no
	// compression, no transformations).
	//     * An absent Accept-Encoding header means the client will accept any encoding
	//     (server chooses, often gzip ).
	//     * An empty Accept-Encoding header means only the “identity” encoding (i.e.,
	//     uncompressed) is acceptable.
	// 
	// The SetRequestHeader method can be called with Accept-Encoding as the header
	// field name to explicitly set the Accept-Encoding header. Note: Chilkat does not
	// accept Brotli responses. Do not include br in the list of encodings for this
	// header.
	// 
	// The RemoveRequestHeader can be called to explicit omit the Accept-Encoding
	// header field from HTTP requests.
	// 
	// 
	// References:
	// 1: #HttpReq
	// 2: #HttpSReq
	// 3: #SetRequestHeader
	// 4: #RemoveRequestHeader
	bool get_AllowGzip(void);
	// If true then the Accept-Encoding: gzip is automatically added for all HTTP
	// requests, except those made using the HttpReq and HttpSReq methods that use
	// headers from an HttpRequest object.
	// 
	// The default value is true.
	// 
	// The Accept-Encoding HTTP header is sent by the client to tell the server which
	// compression algorithms it supports for the response body.
	// 
	// Example:
	// 
	// Accept-Encoding: gzip, deflate
	// 
	// This means the client can handle responses compressed with gzip or deflate.
	// 
	// If this property is set to false, then the Accept-Encoding header is added,
	// but the value is empty, like this:Accept-Encoding: 
	//  
	// 
	// It means the client explicitly does not accept any content codings (no
	// compression, no transformations).
	//     * An absent Accept-Encoding header means the client will accept any encoding
	//     (server chooses, often gzip ).
	//     * An empty Accept-Encoding header means only the “identity” encoding (i.e.,
	//     uncompressed) is acceptable.
	// 
	// The SetRequestHeader method can be called with Accept-Encoding as the header
	// field name to explicitly set the Accept-Encoding header. Note: Chilkat does not
	// accept Brotli responses. Do not include br in the list of encodings for this
	// header.
	// 
	// The RemoveRequestHeader can be called to explicit omit the Accept-Encoding
	// header field from HTTP requests.
	// 
	// 
	// References:
	// 1: #HttpReq
	// 2: #HttpSReq
	// 3: #SetRequestHeader
	// 4: #RemoveRequestHeader
	void put_AllowGzip(bool newVal);

	// When set to false, MIME header folding is not applied to request headers
	// automatically. By default, this setting is true. This property exists for rare
	// instances when a server cannot properly handle folded MIME headers.
	// 
	// MIME header folding allows long header lines to be split across multiple lines
	// for readability.
	// 
	// A folded line begins with whitespace (space or tab), which signals continuation.
	// 
	// Unfolded (single line):
	// 
	// Subject: This is a very long subject line that needs to be wrapped across lines
	// 
	// Folded (wrapped for transport):
	// 
	// Subject: This is a very long subject line
	//  that needs to be wrapped across lines
	// 
	// When received, the folded version is unfolded back into a single line by
	// removing the CRLF + leading whitespace.
	// 
	bool get_AllowHeaderFolding(void);
	// When set to false, MIME header folding is not applied to request headers
	// automatically. By default, this setting is true. This property exists for rare
	// instances when a server cannot properly handle folded MIME headers.
	// 
	// MIME header folding allows long header lines to be split across multiple lines
	// for readability.
	// 
	// A folded line begins with whitespace (space or tab), which signals continuation.
	// 
	// Unfolded (single line):
	// 
	// Subject: This is a very long subject line that needs to be wrapped across lines
	// 
	// Folded (wrapped for transport):
	// 
	// Subject: This is a very long subject line
	//  that needs to be wrapped across lines
	// 
	// When received, the folded version is unfolded back into a single line by
	// removing the CRLF + leading whitespace.
	// 
	void put_AllowHeaderFolding(bool newVal);

	// This property can be set to a JSON string containing the required information to
	// add an HTTP Signature in the following format:Authorization: Signature
	//   keyId="my-key-1",
	//   algorithm="hmac-sha256",
	//   headers="(request-target) host date",
	//   signature="Base64OfSignature"
	// 
	// See the linked example below for details.
	// 
	void get_AuthSignature(CkString &str);
	// This property can be set to a JSON string containing the required information to
	// add an HTTP Signature in the following format:Authorization: Signature
	//   keyId="my-key-1",
	//   algorithm="hmac-sha256",
	//   headers="(request-target) host date",
	//   signature="Base64OfSignature"
	// 
	// See the linked example below for details.
	// 
	const char *authSignature(void);
	// This property can be set to a JSON string containing the required information to
	// add an HTTP Signature in the following format:Authorization: Signature
	//   keyId="my-key-1",
	//   algorithm="hmac-sha256",
	//   headers="(request-target) host date",
	//   signature="Base64OfSignature"
	// 
	// See the linked example below for details.
	// 
	void put_AuthSignature(const char *newVal);

	// Applications can set this property to the OAuth2 access_token value to be sent
	// in the Authorization: Bearer {access_token} header for all requests. For
	// OAuth1.0a tokens, use the OAuthToken property instead.
	// 
	// Starting from Chilkat v10.1.2 , this method can also accept a JSON string
	// containing details needed for automatic OAuth2 access token retrieval via the
	// Client Credentials flow. The JSON must include the client secret , client ID ,
	// token endpoint , and scope(s) . See the example below for guidance. This feature
	// is compatible with any OAuth2 provider that supports the client credentials
	// flow.
	// 
	// 
	// References:
	// 1: #OAuthToken
	void get_AuthToken(CkString &str);
	// Applications can set this property to the OAuth2 access_token value to be sent
	// in the Authorization: Bearer {access_token} header for all requests. For
	// OAuth1.0a tokens, use the OAuthToken property instead.
	// 
	// Starting from Chilkat v10.1.2 , this method can also accept a JSON string
	// containing details needed for automatic OAuth2 access token retrieval via the
	// Client Credentials flow. The JSON must include the client secret , client ID ,
	// token endpoint , and scope(s) . See the example below for guidance. This feature
	// is compatible with any OAuth2 provider that supports the client credentials
	// flow.
	// 
	// 
	// References:
	// 1: #OAuthToken
	const char *authToken(void);
	// Applications can set this property to the OAuth2 access_token value to be sent
	// in the Authorization: Bearer {access_token} header for all requests. For
	// OAuth1.0a tokens, use the OAuthToken property instead.
	// 
	// Starting from Chilkat v10.1.2 , this method can also accept a JSON string
	// containing details needed for automatic OAuth2 access token retrieval via the
	// Client Credentials flow. The JSON must include the client secret , client ID ,
	// token endpoint , and scope(s) . See the example below for guidance. This feature
	// is compatible with any OAuth2 provider that supports the client credentials
	// flow.
	// 
	// 
	// References:
	// 1: #OAuthToken
	void put_AuthToken(const char *newVal);

	// When set to true (the default), the Host header is automatically added to all
	// requests. The domain for the Host header is taken from the URL passed in a
	// method's arguments.
	// 
	// The Host HTTP header specifies the hostname (and optional port) of the server
	// the client is trying to reach.
	// 
	// Example:
	// 
	// Host: www.example.com
	// 
	// It’s required in HTTP/1.1 so a server can distinguish between multiple sites
	// (virtual hosts) on the same IP address.
	// 
	bool get_AutoAddHostHeader(void);
	// When set to true (the default), the Host header is automatically added to all
	// requests. The domain for the Host header is taken from the URL passed in a
	// method's arguments.
	// 
	// The Host HTTP header specifies the hostname (and optional port) of the server
	// the client is trying to reach.
	// 
	// Example:
	// 
	// Host: www.example.com
	// 
	// It’s required in HTTP/1.1 so a server can distinguish between multiple sites
	// (virtual hosts) on the same IP address.
	// 
	void put_AutoAddHostHeader(bool newVal);

	// The AWS Access Key to be used with the Amazon S3 methods listed below.
	void get_AwsAccessKey(CkString &str);
	// The AWS Access Key to be used with the Amazon S3 methods listed below.
	const char *awsAccessKey(void);
	// The AWS Access Key to be used with the Amazon S3 methods listed below.
	void put_AwsAccessKey(const char *newVal);

	// Specify the regional endpoint (domain) for Amazon S3 method calls. The default
	// is s3.amazonaws.com , but you can use any valid Amazon S3 endpoint, such as
	// s3-eu-west-1.amazonaws.com , or endpoints from other S3-API compatible services.
	void get_AwsEndpoint(CkString &str);
	// Specify the regional endpoint (domain) for Amazon S3 method calls. The default
	// is s3.amazonaws.com , but you can use any valid Amazon S3 endpoint, such as
	// s3-eu-west-1.amazonaws.com , or endpoints from other S3-API compatible services.
	const char *awsEndpoint(void);
	// Specify the regional endpoint (domain) for Amazon S3 method calls. The default
	// is s3.amazonaws.com , but you can use any valid Amazon S3 endpoint, such as
	// s3-eu-west-1.amazonaws.com , or endpoints from other S3-API compatible services.
	void put_AwsEndpoint(const char *newVal);

	// The AWS S3 region (e.g., us-east-1 , us-west-2 , eu-west-1 , eu-central-1 )
	// defaults to us-east-1 . It is relevant only when the AwsSignatureVersion
	// property is set to 4 and ignored when set to 2.
	// 
	// References:
	// 1: #AwsSignatureVersion
	void get_AwsRegion(CkString &str);
	// The AWS S3 region (e.g., us-east-1 , us-west-2 , eu-west-1 , eu-central-1 )
	// defaults to us-east-1 . It is relevant only when the AwsSignatureVersion
	// property is set to 4 and ignored when set to 2.
	// 
	// References:
	// 1: #AwsSignatureVersion
	const char *awsRegion(void);
	// The AWS S3 region (e.g., us-east-1 , us-west-2 , eu-west-1 , eu-central-1 )
	// defaults to us-east-1 . It is relevant only when the AwsSignatureVersion
	// property is set to 4 and ignored when set to 2.
	// 
	// References:
	// 1: #AwsSignatureVersion
	void put_AwsRegion(const char *newVal);

	// The AWS Secret Key to be used with the Amazon S3 methods listed below.
	void get_AwsSecretKey(CkString &str);
	// The AWS Secret Key to be used with the Amazon S3 methods listed below.
	const char *awsSecretKey(void);
	// The AWS Secret Key to be used with the Amazon S3 methods listed below.
	void put_AwsSecretKey(const char *newVal);

	// This is the AWS session token for temporary security credentials.
	// 
	// When you call AssumeRole with AWS STS, you get temporary security credentials
	// consisting of:
	// 
	//     * Access key ID
	//     * Secret access key
	//     * Session token
	// 
	// The session token is an extra credential that must be included with the access
	// key and secret key when signing requests. It proves the credentials came from
	// STS and are valid for the limited session duration.
	// 
	// In short: The AWS session token is a required component of temporary STS
	// credentials, used alongside the key pair to authenticate API calls.
	// 
	void get_AwsSessionToken(CkString &str);
	// This is the AWS session token for temporary security credentials.
	// 
	// When you call AssumeRole with AWS STS, you get temporary security credentials
	// consisting of:
	// 
	//     * Access key ID
	//     * Secret access key
	//     * Session token
	// 
	// The session token is an extra credential that must be included with the access
	// key and secret key when signing requests. It proves the credentials came from
	// STS and are valid for the limited session duration.
	// 
	// In short: The AWS session token is a required component of temporary STS
	// credentials, used alongside the key pair to authenticate API calls.
	// 
	const char *awsSessionToken(void);
	// This is the AWS session token for temporary security credentials.
	// 
	// When you call AssumeRole with AWS STS, you get temporary security credentials
	// consisting of:
	// 
	//     * Access key ID
	//     * Secret access key
	//     * Session token
	// 
	// The session token is an extra credential that must be included with the access
	// key and secret key when signing requests. It proves the credentials came from
	// STS and are valid for the limited session duration.
	// 
	// In short: The AWS session token is a required component of temporary STS
	// credentials, used alongside the key pair to authenticate API calls.
	// 
	void put_AwsSessionToken(const char *newVal);

	// This method is deprecated and will be removed in a future release of Chilkat.
	// You should use AWS Signature Version 4, as there is no current reason to use
	// Version 2. The only valid options are Versions 2 and 4, with Version 4 set as
	// the default.
	int get_AwsSignatureVersion(void);
	// This method is deprecated and will be removed in a future release of Chilkat.
	// You should use AWS Signature Version 4, as there is no current reason to use
	// Version 2. The only valid options are Versions 2 and 4, with Version 4 set as
	// the default.
	void put_AwsSignatureVersion(int newVal);

	// This property can be used to specify sub-resources to be included in the Amazon
	// S3 methods listed below. For example, set the property to acl&versionId=value to
	// request the acl for a specific version of an object.
	// 
	// In Amazon S3, sub-resources are special query parameters you can append to an S3
	// object or bucket URL to access or manage specific properties or features beyond
	// the main resource itself.
	// 
	// Examples:
	// 
	//     * Bucket sub-resources: ?logging , ?website , ?lifecycle , ?policy
	//     * Object sub-resources: ?acl , ?torrent , ?restore , ?tagging
	// 
	// So:
	// 
	//     * Resource = the bucket or object itself (e.g., mybucket/photo.jpg )
	//     * Sub-resource = a specific aspect or configuration of it, accessed with a
	//     query string (e.g., mybucket?logging or photo.jpg?acl ).
	// 
	// In short: S3 sub-resources let you operate on metadata/configuration of a bucket
	// or object, not the content itself.
	// 
	void get_AwsSubResources(CkString &str);
	// This property can be used to specify sub-resources to be included in the Amazon
	// S3 methods listed below. For example, set the property to acl&versionId=value to
	// request the acl for a specific version of an object.
	// 
	// In Amazon S3, sub-resources are special query parameters you can append to an S3
	// object or bucket URL to access or manage specific properties or features beyond
	// the main resource itself.
	// 
	// Examples:
	// 
	//     * Bucket sub-resources: ?logging , ?website , ?lifecycle , ?policy
	//     * Object sub-resources: ?acl , ?torrent , ?restore , ?tagging
	// 
	// So:
	// 
	//     * Resource = the bucket or object itself (e.g., mybucket/photo.jpg )
	//     * Sub-resource = a specific aspect or configuration of it, accessed with a
	//     query string (e.g., mybucket?logging or photo.jpg?acl ).
	// 
	// In short: S3 sub-resources let you operate on metadata/configuration of a bucket
	// or object, not the content itself.
	// 
	const char *awsSubResources(void);
	// This property can be used to specify sub-resources to be included in the Amazon
	// S3 methods listed below. For example, set the property to acl&versionId=value to
	// request the acl for a specific version of an object.
	// 
	// In Amazon S3, sub-resources are special query parameters you can append to an S3
	// object or bucket URL to access or manage specific properties or features beyond
	// the main resource itself.
	// 
	// Examples:
	// 
	//     * Bucket sub-resources: ?logging , ?website , ?lifecycle , ?policy
	//     * Object sub-resources: ?acl , ?torrent , ?restore , ?tagging
	// 
	// So:
	// 
	//     * Resource = the bucket or object itself (e.g., mybucket/photo.jpg )
	//     * Sub-resource = a specific aspect or configuration of it, accessed with a
	//     query string (e.g., mybucket?logging or photo.jpg?acl ).
	// 
	// In short: S3 sub-resources let you operate on metadata/configuration of a bucket
	// or object, not the content itself.
	// 
	void put_AwsSubResources(const char *newVal);

	// If set to a non-zero value, this limits the download bandwidth to the specified
	// maximum number of bytes per second. The default value is 0 .
	int get_BandwidthThrottleDown(void);
	// If set to a non-zero value, this limits the download bandwidth to the specified
	// maximum number of bytes per second. The default value is 0 .
	void put_BandwidthThrottleDown(int newVal);

	// If set to a non-zero value, this property limits the upload bandwidth to the
	// specified maximum number of bytes per second. The default is 0 .
	int get_BandwidthThrottleUp(void);
	// If set to a non-zero value, this property limits the upload bandwidth to the
	// specified maximum number of bytes per second. The default is 0 .
	void put_BandwidthThrottleUp(int newVal);

	// To enable HTTP basic authentication, set this property to true. The default
	// value is false.
	// 
	// Then basic authentication is enabled, Chilkat uses the Login and Password
	// properties to include the Authorization: Basic {base64} header in all requests.
	// 
	// HTTP Basic Authentication is a simple authentication scheme where the client
	// sends a username and password encoded in Base64 in the Authorization header.
	// 
	// Example:
	// 
	// Authorization: Basic dXNlcjpwYXNzd29yZA==
	// 
	// Here dXNlcjpwYXNzd29yZA== is the Base64 of user:password .
	// 
	// 
	// References:
	// 1: #Login
	// 2: #Password
	bool get_BasicAuth(void);
	// To enable HTTP basic authentication, set this property to true. The default
	// value is false.
	// 
	// Then basic authentication is enabled, Chilkat uses the Login and Password
	// properties to include the Authorization: Basic {base64} header in all requests.
	// 
	// HTTP Basic Authentication is a simple authentication scheme where the client
	// sends a username and password encoded in Base64 in the Authorization header.
	// 
	// Example:
	// 
	// Authorization: Basic dXNlcjpwYXNzd29yZA==
	// 
	// Here dXNlcjpwYXNzd29yZA== is the Base64 of user:password .
	// 
	// 
	// References:
	// 1: #Login
	// 2: #Password
	void put_BasicAuth(bool newVal);

	// 
	// 
	// A computer can have multiple network interfaces (e.g., Ethernet, Wi-Fi, VPN,
	// virtual adapters). Each interface can have one or more IP addresses (IPv4 and/or
	// IPv6).
	// 
	// If multiple IPs exist (say, 192.168.1.10 on Wi-Fi and 10.0.0.5 on Ethernet), the
	// application can bind explicitly to either one, determining which interface and
	// address the socket will use for communication.
	// 
	// This property can be set to explicitly bind the communications socket to an IP
	// address.
	// 
	// The default value is the empty string, which means the application does not bind
	// to a specific local IP before connecting and the OS network stack automatically
	// picks the default source IP.
	// 
	void get_ClientIpAddress(CkString &str);
	// 
	// 
	// A computer can have multiple network interfaces (e.g., Ethernet, Wi-Fi, VPN,
	// virtual adapters). Each interface can have one or more IP addresses (IPv4 and/or
	// IPv6).
	// 
	// If multiple IPs exist (say, 192.168.1.10 on Wi-Fi and 10.0.0.5 on Ethernet), the
	// application can bind explicitly to either one, determining which interface and
	// address the socket will use for communication.
	// 
	// This property can be set to explicitly bind the communications socket to an IP
	// address.
	// 
	// The default value is the empty string, which means the application does not bind
	// to a specific local IP before connecting and the OS network stack automatically
	// picks the default source IP.
	// 
	const char *clientIpAddress(void);
	// 
	// 
	// A computer can have multiple network interfaces (e.g., Ethernet, Wi-Fi, VPN,
	// virtual adapters). Each interface can have one or more IP addresses (IPv4 and/or
	// IPv6).
	// 
	// If multiple IPs exist (say, 192.168.1.10 on Wi-Fi and 10.0.0.5 on Ethernet), the
	// application can bind explicitly to either one, determining which interface and
	// address the socket will use for communication.
	// 
	// This property can be set to explicitly bind the communications socket to an IP
	// address.
	// 
	// The default value is the empty string, which means the application does not bind
	// to a specific local IP before connecting and the OS network stack automatically
	// picks the default source IP.
	// 
	void put_ClientIpAddress(const char *newVal);

	// This property will be set to the status of the last HTTP connection made (or
	// failed to be made) by any HTTP method.
	// 
	// Possible values are:0 = success
	// 
	// Normal (non-TLS) sockets:
	// 1 = empty hostname
	// 2 = DNS lookup failed
	// 3 = DNS timeout
	// 4 = Aborted by application.
	// 5 = Internal failure.
	// 6 = Connect Timed Out
	// 7 = Connect Rejected (or failed for some other reason)
	// 50 = HTTP proxy authentication failure.
	// 98 = Async operation in progress.
	// 99 = Product is not unlocked.
	// 
	// SSL/TLS:
	// 100 = TLS internal error.
	// 101 = Failed to send client hello.
	// 102 = Unexpected handshake message.
	// 103 = Failed to read server hello.
	// 104 = No server certificate.
	// 105 = Unexpected TLS protocol version.
	// 106 = Server certificate verify failed (the server certificate is expired or the cert's signature verification failed).
	// 107 = Unacceptable TLS protocol version.
	// 108 = App-defined server certificate requirements failure.
	// 109 = Failed to read handshake messages.
	// 110 = Failed to send client certificate handshake message.
	// 111 = Failed to send client key exchange handshake message.
	// 112 = Client certificate's private key not accessible.
	// 113 = Failed to send client cert verify handshake message.
	// 114 = Failed to send change cipher spec handshake message.
	// 115 = Failed to send finished handshake message.
	// 116 = Server's Finished message is invalid.
	// 125 = Peer tried to connect using older SSL 2.0 protocol version.
	// 126 = TLS Pin Set Mismatch.
	// 127 = TLS 1.3 handshake error.
	// 
	int get_ConnectFailReason(void);

	// This property is deprecated and applications should instead call
	// SetRequestHeader with Connection as the header field name.
	// 
	// This property sets the Connection header for all HTTP requests, except those
	// sent by the HttpReq and HttpSReq methods that use headers from an HttpRequest
	// object.
	// 
	// By default, it is set to an empty string, meaning no Connection header is
	// included.
	// 
	// The Connection HTTP header tells the server what to do with the network
	// connection after the request/response.
	// 
	//     * Connection: keep-alive → keep the TCP connection open for reuse.
	//     * Connection: close → close the connection after the response.
	// 
	// In short: It controls whether the client wants to reuse or close the TCP
	// connection.
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #HttpReq
	// 3: #HttpSReq
	void get_Connection(CkString &str);
	// This property is deprecated and applications should instead call
	// SetRequestHeader with Connection as the header field name.
	// 
	// This property sets the Connection header for all HTTP requests, except those
	// sent by the HttpReq and HttpSReq methods that use headers from an HttpRequest
	// object.
	// 
	// By default, it is set to an empty string, meaning no Connection header is
	// included.
	// 
	// The Connection HTTP header tells the server what to do with the network
	// connection after the request/response.
	// 
	//     * Connection: keep-alive → keep the TCP connection open for reuse.
	//     * Connection: close → close the connection after the response.
	// 
	// In short: It controls whether the client wants to reuse or close the TCP
	// connection.
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #HttpReq
	// 3: #HttpSReq
	const char *connection(void);
	// This property is deprecated and applications should instead call
	// SetRequestHeader with Connection as the header field name.
	// 
	// This property sets the Connection header for all HTTP requests, except those
	// sent by the HttpReq and HttpSReq methods that use headers from an HttpRequest
	// object.
	// 
	// By default, it is set to an empty string, meaning no Connection header is
	// included.
	// 
	// The Connection HTTP header tells the server what to do with the network
	// connection after the request/response.
	// 
	//     * Connection: keep-alive → keep the TCP connection open for reuse.
	//     * Connection: close → close the connection after the response.
	// 
	// In short: It controls whether the client wants to reuse or close the TCP
	// connection.
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #HttpReq
	// 3: #HttpSReq
	void put_Connection(const char *newVal);

	// Determines the maximum time, in seconds, to wait for an HTTP server to accept a
	// TCP connection before timing out. The default value is 30 seconds.
	// 
	// Note: A TLS connection always starts with a normal TCP connection (e.g., client
	// connects to server on port 443). Once TCP is established, the client and server
	// perform a TLS handshake: they exchange cryptographic messages to authenticate,
	// agree on encryption keys, and set up a secure channel.
	// 
	// The ReadTimeout property applies to TLS handshake communications. When
	// establishing a TLS connection, the ConnectTimeout governs the initial TCP
	// connection, followed by the ReadTimeout .
	// 
	// 
	// References:
	// 1: #ReadTimeout
	int get_ConnectTimeout(void);
	// Determines the maximum time, in seconds, to wait for an HTTP server to accept a
	// TCP connection before timing out. The default value is 30 seconds.
	// 
	// Note: A TLS connection always starts with a normal TCP connection (e.g., client
	// connects to server on port 443). Once TCP is established, the client and server
	// perform a TLS handshake: they exchange cryptographic messages to authenticate,
	// agree on encryption keys, and set up a secure channel.
	// 
	// The ReadTimeout property applies to TLS handshake communications. When
	// establishing a TLS connection, the ConnectTimeout governs the initial TCP
	// connection, followed by the ReadTimeout .
	// 
	// 
	// References:
	// 1: #ReadTimeout
	void put_ConnectTimeout(int newVal);

	// Designates a directory path for automatic cookie storage (such as
	// "c:/myCookieDir" or "/Users/example/myCookieDir" ) when the SaveCookies property
	// is set to true. Cookies are saved in XML files, with one file per domain.
	// Alternatively, set the value to memory to cache cookies in memory.
	// 
	// The default value is the empty string, which means cookies are not saved
	// regardless of the SaveCookies setting.
	// 
	// 
	// References:
	// 1: #SaveCookies
	void get_CookieDir(CkString &str);
	// Designates a directory path for automatic cookie storage (such as
	// "c:/myCookieDir" or "/Users/example/myCookieDir" ) when the SaveCookies property
	// is set to true. Cookies are saved in XML files, with one file per domain.
	// Alternatively, set the value to memory to cache cookies in memory.
	// 
	// The default value is the empty string, which means cookies are not saved
	// regardless of the SaveCookies setting.
	// 
	// 
	// References:
	// 1: #SaveCookies
	const char *cookieDir(void);
	// Designates a directory path for automatic cookie storage (such as
	// "c:/myCookieDir" or "/Users/example/myCookieDir" ) when the SaveCookies property
	// is set to true. Cookies are saved in XML files, with one file per domain.
	// Alternatively, set the value to memory to cache cookies in memory.
	// 
	// The default value is the empty string, which means cookies are not saved
	// regardless of the SaveCookies setting.
	// 
	// 
	// References:
	// 1: #SaveCookies
	void put_CookieDir(const char *newVal);

	// Sets the default freshness period (in minutes) for cached documents when the
	// FreshnessAlgorithm property is set to 0. The default value is 10080 (1 week).
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #FreshnessAlgorithm
	// 2: #NumCacheRoots
	// 3: #NumCacheLevels
	// 4: #AddCacheRoot
	// 5: #FetchFromCache
	// 6: #UpdateCache
	// 7: #MinFreshPeriod
	// 8: #MaxFreshPeriod
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	int get_DefaultFreshPeriod(void);
	// Sets the default freshness period (in minutes) for cached documents when the
	// FreshnessAlgorithm property is set to 0. The default value is 10080 (1 week).
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #FreshnessAlgorithm
	// 2: #NumCacheRoots
	// 3: #NumCacheLevels
	// 4: #AddCacheRoot
	// 5: #FetchFromCache
	// 6: #UpdateCache
	// 7: #MinFreshPeriod
	// 8: #MaxFreshPeriod
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	void put_DefaultFreshPeriod(int newVal);

	// Setting this property to true causes the HTTP component to use digest
	// authentication. The default value is false.
	// 
	// HTTP Digest Authentication is a challenge–response mechanism where the server
	// sends a nonce (a unique random value) to the client. The client must hash the
	// username, password, nonce, and request details (method, URI) into a digest using
	// MD5 (or similar). The server performs the same calculation to verify.
	// 
	// Unlike Basic Auth, the password is never sent in clear text—only the hash is
	// transmitted—making it more secure against eavesdropping.
	// 
	bool get_DigestAuth(void);
	// Setting this property to true causes the HTTP component to use digest
	// authentication. The default value is false.
	// 
	// HTTP Digest Authentication is a challenge–response mechanism where the server
	// sends a nonce (a unique random value) to the client. The client must hash the
	// username, password, nonce, and request details (method, URI) into a digest using
	// MD5 (or similar). The server performs the same calculation to verify.
	// 
	// Unlike Basic Auth, the password is never sent in clear text—only the hash is
	// transmitted—making it more secure against eavesdropping.
	// 
	void put_DigestAuth(bool newVal);

	// Set to true to enable fetching pages from cache whenever possible. The default
	// value is false. Only HTTP GET requests are cached. HTTP responses containing
	// Set-Cookie headers are never cached. A page is retrieved from the disk cache if
	// it exists and is deemed fresh by the FreshnessAlgorithm property. If the cached
	// page is stale, the HTTP component will send a revalidate request and update the
	// cache based on the response.
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #FreshnessAlgorithm
	// 2: #NumCacheRoots
	// 3: #NumCacheLevels
	// 4: #AddCacheRoot
	// 5: #FetchFromCache
	// 6: #UpdateCache
	// 7: #MinFreshPeriod
	// 8: #MaxFreshPeriod
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	bool get_FetchFromCache(void);
	// Set to true to enable fetching pages from cache whenever possible. The default
	// value is false. Only HTTP GET requests are cached. HTTP responses containing
	// Set-Cookie headers are never cached. A page is retrieved from the disk cache if
	// it exists and is deemed fresh by the FreshnessAlgorithm property. If the cached
	// page is stale, the HTTP component will send a revalidate request and update the
	// cache based on the response.
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #FreshnessAlgorithm
	// 2: #NumCacheRoots
	// 3: #NumCacheLevels
	// 4: #AddCacheRoot
	// 5: #FetchFromCache
	// 6: #UpdateCache
	// 7: #MinFreshPeriod
	// 8: #MaxFreshPeriod
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	void put_FetchFromCache(bool newVal);

	// If the WasRedirected property indicates an HTTP GET was redirected, and the
	// FollowRedirects property is set to true, this property will hold the final
	// redirect URL. This property will also contain the redirect URL for 301/302
	// responses, even if FollowRedirects is not true.
	// 
	// References:
	// 1: #WasRedirected
	// 2: #FollowRedirects
	void get_FinalRedirectUrl(CkString &str);
	// If the WasRedirected property indicates an HTTP GET was redirected, and the
	// FollowRedirects property is set to true, this property will hold the final
	// redirect URL. This property will also contain the redirect URL for 301/302
	// responses, even if FollowRedirects is not true.
	// 
	// References:
	// 1: #WasRedirected
	// 2: #FollowRedirects
	const char *finalRedirectUrl(void);

	// When set to true, 301 , 302 , 303 , 307 , and 308 redirects are automatically
	// followed. The default setting is true.
	// 
	// To determine if a redirect occurred, check the WasRedirected property. The final
	// URL after redirection is available in the FinalRedirectUrl property.
	// 
	// 
	// References:
	// 1: #WasRedirected
	// 2: #FinalRedirectUrl
	bool get_FollowRedirects(void);
	// When set to true, 301 , 302 , 303 , 307 , and 308 redirects are automatically
	// followed. The default setting is true.
	// 
	// To determine if a redirect occurred, check the WasRedirected property. The final
	// URL after redirection is available in the FinalRedirectUrl property.
	// 
	// 
	// References:
	// 1: #WasRedirected
	// 2: #FinalRedirectUrl
	void put_FollowRedirects(bool newVal);

	// To determine the freshness of a cached HTTP GET response, the freshness
	// algorithm is employed. By default, it uses the LM-factor algorithm, which is
	// activated when the FreshnessAlgorithm is set to 1 . The LMFactor property,
	// ranging from 1 to 100, specifies the percentage of the time since the last
	// modification date of the HTML page that the page remains fresh. For instance, if
	// the LMFactor is 50 and the page was last modified 10 days ago, it will expire
	// after 5 days (50% of 10 days). This applies only to HTTP responses without
	// explicit expiration information. If the FreshnessAlgorithm is set to 0 , a
	// constant expiry period, defined by the DefaultFreshPeriod property, is applied.
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #FreshnessAlgorithm
	// 2: #LMFactor
	// 3: #DefaultFreshPeriod
	// 4: #NumCacheRoots
	// 5: #NumCacheLevels
	// 6: #AddCacheRoot
	// 7: #FetchFromCache
	// 8: #UpdateCache
	// 9: #MinFreshPeriod
	// 10: #MaxFreshPeriod
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	int get_FreshnessAlgorithm(void);
	// To determine the freshness of a cached HTTP GET response, the freshness
	// algorithm is employed. By default, it uses the LM-factor algorithm, which is
	// activated when the FreshnessAlgorithm is set to 1 . The LMFactor property,
	// ranging from 1 to 100, specifies the percentage of the time since the last
	// modification date of the HTML page that the page remains fresh. For instance, if
	// the LMFactor is 50 and the page was last modified 10 days ago, it will expire
	// after 5 days (50% of 10 days). This applies only to HTTP responses without
	// explicit expiration information. If the FreshnessAlgorithm is set to 0 , a
	// constant expiry period, defined by the DefaultFreshPeriod property, is applied.
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #FreshnessAlgorithm
	// 2: #LMFactor
	// 3: #DefaultFreshPeriod
	// 4: #NumCacheRoots
	// 5: #NumCacheLevels
	// 6: #AddCacheRoot
	// 7: #FetchFromCache
	// 8: #UpdateCache
	// 9: #MinFreshPeriod
	// 10: #MaxFreshPeriod
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	void put_FreshnessAlgorithm(int newVal);

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

	// If an HTTP response includes the Cache-Control: must-revalidate header, it
	// indicates that the server requires the client to revalidate the page with the
	// server rather than serving it directly from the cache. However, if this property
	// is set to true, the page will be served directly from the cache without
	// revalidation until it expires. The defautl value of this property is false.
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #NumCacheRoots
	// 2: #NumCacheLevels
	// 3: #AddCacheRoot
	// 4: #FetchFromCache
	// 5: #UpdateCache
	// 6: #MinFreshPeriod
	// 7: #MaxFreshPeriod
	// 8: #FreshnessAlgorithm
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	bool get_IgnoreMustRevalidate(void);
	// If an HTTP response includes the Cache-Control: must-revalidate header, it
	// indicates that the server requires the client to revalidate the page with the
	// server rather than serving it directly from the cache. However, if this property
	// is set to true, the page will be served directly from the cache without
	// revalidation until it expires. The defautl value of this property is false.
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #NumCacheRoots
	// 2: #NumCacheLevels
	// 3: #AddCacheRoot
	// 4: #FetchFromCache
	// 5: #UpdateCache
	// 6: #MinFreshPeriod
	// 7: #MaxFreshPeriod
	// 8: #FreshnessAlgorithm
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	void put_IgnoreMustRevalidate(bool newVal);

	// Some HTTP responses include headers indicating the page should not be cached.
	// Chilkat HTTP will follow these instructions unless this property is set to
	// true. The default value of this property is false.
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #NumCacheRoots
	// 2: #NumCacheLevels
	// 3: #AddCacheRoot
	// 4: #FetchFromCache
	// 5: #UpdateCache
	// 6: #MinFreshPeriod
	// 7: #MaxFreshPeriod
	// 8: #FreshnessAlgorithm
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	bool get_IgnoreNoCache(void);
	// Some HTTP responses include headers indicating the page should not be cached.
	// Chilkat HTTP will follow these instructions unless this property is set to
	// true. The default value of this property is false.
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #NumCacheRoots
	// 2: #NumCacheLevels
	// 3: #AddCacheRoot
	// 4: #FetchFromCache
	// 5: #UpdateCache
	// 6: #MinFreshPeriod
	// 7: #MaxFreshPeriod
	// 8: #FreshnessAlgorithm
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	void put_IgnoreNoCache(bool newVal);

	// If set to true, the response body, if it is text, is stored in the
	// LastResponseBody property for methods not returning an HttpResponse object. By
	// default, this property is false.
	// 
	// Note: Many methods provide an HttpResponse object as their final output
	// argument.
	// 
	// 
	// References:
	// 1: #LastResponseBody
	bool get_KeepResponseBody(void);
	// If set to true, the response body, if it is text, is stored in the
	// LastResponseBody property for methods not returning an HttpResponse object. By
	// default, this property is false.
	// 
	// Note: Many methods provide an HttpResponse object as their final output
	// argument.
	// 
	// 
	// References:
	// 1: #LastResponseBody
	void put_KeepResponseBody(bool newVal);

	// The Content-Type header value from the most recent HTTP response received.
	void get_LastContentType(CkString &str);
	// The Content-Type header value from the most recent HTTP response received.
	const char *lastContentType(void);

	// true if the last GET was fetched from cache.
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #NumCacheRoots
	// 2: #NumCacheLevels
	// 3: #AddCacheRoot
	// 4: #FetchFromCache
	// 5: #UpdateCache
	// 6: #MinFreshPeriod
	// 7: #MaxFreshPeriod
	// 8: #FreshnessAlgorithm
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	bool get_LastFromCache(void);

	// Contains the text of the last HTTP header sent by any method.
	// 
	// An HTTP request begins with a start line (called the *status line*), which
	// contains the protocol version, status code, and reason phrase (e.g., HTTP/1.1
	// 200 OK ).
	// 
	// After that comes the header section, made up of key–value pairs (like
	// Content-Type: text/html ).
	// 
	// This property contains both the start line and the header section. For example:
	// 
	// POST /echo_request_body.asp HTTP/1.1
	// Host: chilkatsoft.com
	// Accept: */*
	// Accept-Encoding: gzip
	// Content-Type: application/json
	// Content-Length: 26
	void get_LastHeader(CkString &str);
	// Contains the text of the last HTTP header sent by any method.
	// 
	// An HTTP request begins with a start line (called the *status line*), which
	// contains the protocol version, status code, and reason phrase (e.g., HTTP/1.1
	// 200 OK ).
	// 
	// After that comes the header section, made up of key–value pairs (like
	// Content-Type: text/html ).
	// 
	// This property contains both the start line and the header section. For example:
	// 
	// POST /echo_request_body.asp HTTP/1.1
	// Host: chilkatsoft.com
	// Accept: */*
	// Accept-Encoding: gzip
	// Content-Type: application/json
	// Content-Length: 26
	const char *lastHeader(void);

	// The Last-Modified header value from the most recent HTTP response received.
	void get_LastModDate(CkString &str);
	// The Last-Modified header value from the most recent HTTP response received.
	const char *lastModDate(void);

	// The response body from the last HTTP request is saved in this property only if
	// the KeepResponseBody property is set to TRUE. This applies to methods that don't
	// return an HttpResponse object.
	// 
	// References:
	// 1: #KeepResponseBody
	void get_LastResponseBody(CkString &str);
	// The response body from the last HTTP request is saved in this property only if
	// the KeepResponseBody property is set to TRUE. This applies to methods that don't
	// return an HttpResponse object.
	// 
	// References:
	// 1: #KeepResponseBody
	const char *lastResponseBody(void);

	// Returns the most recent full response header for methods that do not use an
	// HttpResponse object. For example:Content-Type: application/json
	// Last-Modified: Sun, 20 Aug 2023 11:36:27 GMT
	// Accept-Ranges: bytes
	// ETag: "34c27f8e5ad3d91:0"
	// Server: Microsoft-IIS/10.0
	// X-Powered-By: ASP.NET
	// Date: Sat, 30 Aug 2025 14:35:55 GMT
	// Content-Length: 22
	void get_LastResponseHeader(CkString &str);
	// Returns the most recent full response header for methods that do not use an
	// HttpResponse object. For example:Content-Type: application/json
	// Last-Modified: Sun, 20 Aug 2023 11:36:27 GMT
	// Accept-Ranges: bytes
	// ETag: "34c27f8e5ad3d91:0"
	// Server: Microsoft-IIS/10.0
	// X-Powered-By: ASP.NET
	// Date: Sat, 30 Aug 2025 14:35:55 GMT
	// Content-Length: 22
	const char *lastResponseHeader(void);

	// Contains the most recent response status code for methods that don't utilize an
	// HttpResponse object.
	int get_LastStatus(void);

	// Contains the latest response status text for methods that don't use an
	// HttpResponse object. The response status text appears after the status code in
	// the first line of an HTTP response. For example, in the HTTP response below, the
	// status text is OK :HTTP/1.1 200 OK
	// Content-Type: application/json
	// Last-Modified: Sun, 20 Aug 2023 11:36:27 GMT
	// Accept-Ranges: bytes
	// ETag: "34c27f8e5ad3d91:0"
	// Server: Microsoft-IIS/10.0
	// X-Powered-By: ASP.NET
	// Date: Sat, 30 Aug 2025 14:35:55 GMT
	// Content-Length: 22
	// 
	// { "hello": "world" }
	void get_LastStatusText(CkString &str);
	// Contains the latest response status text for methods that don't use an
	// HttpResponse object. The response status text appears after the status code in
	// the first line of an HTTP response. For example, in the HTTP response below, the
	// status text is OK :HTTP/1.1 200 OK
	// Content-Type: application/json
	// Last-Modified: Sun, 20 Aug 2023 11:36:27 GMT
	// Accept-Ranges: bytes
	// ETag: "34c27f8e5ad3d91:0"
	// Server: Microsoft-IIS/10.0
	// X-Powered-By: ASP.NET
	// Date: Sat, 30 Aug 2025 14:35:55 GMT
	// Content-Length: 22
	// 
	// { "hello": "world" }
	const char *lastStatusText(void);

	// The LMFactor is an integer between 1 and 100 that specifies the percentage of
	// time from an HTTP page's last-modified date to be used as the freshness period.
	// The default is 25. For instance, if a page's last-modified date is 4 weeks ago
	// and LMFactor is set to 25, the page will remain fresh in the cache for 1 week
	// (25% of 4 weeks).
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #NumCacheRoots
	// 2: #NumCacheLevels
	// 3: #AddCacheRoot
	// 4: #FetchFromCache
	// 5: #UpdateCache
	// 6: #MinFreshPeriod
	// 7: #MaxFreshPeriod
	// 8: #FreshnessAlgorithm
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	int get_LMFactor(void);
	// The LMFactor is an integer between 1 and 100 that specifies the percentage of
	// time from an HTTP page's last-modified date to be used as the freshness period.
	// The default is 25. For instance, if a page's last-modified date is 4 weeks ago
	// and LMFactor is set to 25, the page will remain fresh in the cache for 1 week
	// (25% of 4 weeks).
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #NumCacheRoots
	// 2: #NumCacheLevels
	// 3: #AddCacheRoot
	// 4: #FetchFromCache
	// 5: #UpdateCache
	// 6: #MinFreshPeriod
	// 7: #MaxFreshPeriod
	// 8: #FreshnessAlgorithm
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	void put_LMFactor(int newVal);

	// This is the login string to be used with HTTP basic , digest , or NTLM
	// authentication.
	void get_Login(CkString &str);
	// This is the login string to be used with HTTP basic , digest , or NTLM
	// authentication.
	const char *login(void);
	// This is the login string to be used with HTTP basic , digest , or NTLM
	// authentication.
	void put_Login(const char *newVal);

	// The optional domain name to be used with NTLM authentication.
	// 
	// In NTLM HTTP authentication, the login domain is the Windows domain that
	// contains the user account.
	// 
	// The client sends it in the NTLM messages (e.g., DOMAIN\Username ) so the server
	// knows which domain controller to contact to verify the credentials. If no domain
	// is given, the server may fall back to checking local machine accounts.
	// 
	void get_LoginDomain(CkString &str);
	// The optional domain name to be used with NTLM authentication.
	// 
	// In NTLM HTTP authentication, the login domain is the Windows domain that
	// contains the user account.
	// 
	// The client sends it in the NTLM messages (e.g., DOMAIN\Username ) so the server
	// knows which domain controller to contact to verify the credentials. If no domain
	// is given, the server may fall back to checking local machine accounts.
	// 
	const char *loginDomain(void);
	// The optional domain name to be used with NTLM authentication.
	// 
	// In NTLM HTTP authentication, the login domain is the Windows domain that
	// contains the user account.
	// 
	// The client sends it in the NTLM messages (e.g., DOMAIN\Username ) so the server
	// knows which domain controller to contact to verify the credentials. If no domain
	// is given, the server may fall back to checking local machine accounts.
	// 
	void put_LoginDomain(const char *newVal);

	// This class automatically manages simultaneous open HTTP connections. If the
	// maximum number of connections is reached, the least recently active connection
	// is automatically closed. The default value is 10 .
	// 
	// An HTTP connection can remain open if the client and server use persistent
	// connections (e.g., Connection: keep-alive in HTTP/1.1).
	// 
	// This allows multiple requests and responses to be sent over the same TLS
	// connection instead of opening a new one each time.
	// 
	// Reasons:
	// 
	//     * Reduces latency (no repeated TLS handshakes).
	//     * Improves efficiency for sending many requests.
	// 
	// Also see: CloseAllConnections
	// 
	// 
	// References:
	// 1: #CloseAllConnections
	int get_MaxConnections(void);
	// This class automatically manages simultaneous open HTTP connections. If the
	// maximum number of connections is reached, the least recently active connection
	// is automatically closed. The default value is 10 .
	// 
	// An HTTP connection can remain open if the client and server use persistent
	// connections (e.g., Connection: keep-alive in HTTP/1.1).
	// 
	// This allows multiple requests and responses to be sent over the same TLS
	// connection instead of opening a new one each time.
	// 
	// Reasons:
	// 
	//     * Reduces latency (no repeated TLS handshakes).
	//     * Improves efficiency for sending many requests.
	// 
	// Also see: CloseAllConnections
	// 
	// 
	// References:
	// 1: #CloseAllConnections
	void put_MaxConnections(int newVal);

	// Sets a time limit for how long a document can remain fresh in the cache,
	// measured in minutes, with a default value of 525,600 minutes (equivalent to 1
	// year).
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #NumCacheRoots
	// 2: #NumCacheLevels
	// 3: #AddCacheRoot
	// 4: #FetchFromCache
	// 5: #UpdateCache
	// 6: #MinFreshPeriod
	// 7: #MaxFreshPeriod
	// 8: #FreshnessAlgorithm
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	int get_MaxFreshPeriod(void);
	// Sets a time limit for how long a document can remain fresh in the cache,
	// measured in minutes, with a default value of 525,600 minutes (equivalent to 1
	// year).
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #NumCacheRoots
	// 2: #NumCacheLevels
	// 3: #AddCacheRoot
	// 4: #FetchFromCache
	// 5: #UpdateCache
	// 6: #MinFreshPeriod
	// 7: #MaxFreshPeriod
	// 8: #FreshnessAlgorithm
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	void put_MaxFreshPeriod(int newVal);

	// Specify the maximum HTTP response size the program will accept. The default
	// value of 0 means there is no size limit . This safeguard helps prevent receiving
	// excessively large responses that could hang or crash the application.
	unsigned long get_MaxResponseSize(void);
	// Specify the maximum HTTP response size the program will accept. The default
	// value of 0 means there is no size limit . This safeguard helps prevent receiving
	// excessively large responses that could hang or crash the application.
	void put_MaxResponseSize(unsigned long newVal);

	// Limit the length of URLs (including URL parameters) in HTTP requests by setting
	// this property. The default value is 2000 characters.
	int get_MaxUrlLen(void);
	// Limit the length of URLs (including URL parameters) in HTTP requests by setting
	// this property. The default value is 2000 characters.
	void put_MaxUrlLen(int newVal);

	// If set to true, then the appropriate headers to mimic Mozilla/FireFox are
	// automatically added to requests sent via the QuickGet and QuickGetStr methods.
	bool get_MimicFireFox(void);
	// If set to true, then the appropriate headers to mimic Mozilla/FireFox are
	// automatically added to requests sent via the QuickGet and QuickGetStr methods.
	void put_MimicFireFox(bool newVal);

	// If set to true, then the appropriate headers to mimic Internet Explorer are
	// automatically added to requests sent via the QuickGet and QuickGetStr methods.
	bool get_MimicIE(void);
	// If set to true, then the appropriate headers to mimic Internet Explorer are
	// automatically added to requests sent via the QuickGet and QuickGetStr methods.
	void put_MimicIE(bool newVal);

	// Sets the minimum time a document stays fresh in the cache, with a default of 30
	// minutes.
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #NumCacheRoots
	// 2: #NumCacheLevels
	// 3: #AddCacheRoot
	// 4: #FetchFromCache
	// 5: #UpdateCache
	// 6: #MinFreshPeriod
	// 7: #MaxFreshPeriod
	// 8: #FreshnessAlgorithm
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	int get_MinFreshPeriod(void);
	// Sets the minimum time a document stays fresh in the cache, with a default of 30
	// minutes.
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #NumCacheRoots
	// 2: #NumCacheLevels
	// 3: #AddCacheRoot
	// 4: #FetchFromCache
	// 5: #UpdateCache
	// 6: #MinFreshPeriod
	// 7: #MaxFreshPeriod
	// 8: #FreshnessAlgorithm
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	void put_MinFreshPeriod(int newVal);

	// Set this property equal to true for Negotiate authentication.
	// 
	// Note: The NegotiateAuth property is only available for the Microsoft Windows
	// operating system.
	// 
	bool get_NegotiateAuth(void);
	// Set this property equal to true for Negotiate authentication.
	// 
	// Note: The NegotiateAuth property is only available for the Microsoft Windows
	// operating system.
	// 
	void put_NegotiateAuth(bool newVal);

	// Setting this property to true causes the HTTP component to use NTLM
	// authentication (also known as IWA -- or Integrated Windows Authentication) when
	// authentication with an HTTP server. The default value is false.
	bool get_NtlmAuth(void);
	// Setting this property to true causes the HTTP component to use NTLM
	// authentication (also known as IWA -- or Integrated Windows Authentication) when
	// authentication with an HTTP server. The default value is false.
	void put_NtlmAuth(bool newVal);

	// This setting determines the directory levels used under each cache root. The
	// default value is 0, meaning cached HTML pages are stored directly in the cache
	// root directory.
	//     * Level 0: Cached pages are stored in the cache root directory.
	//     * Level 1: Cached pages go into one of 255 subdirectories (0 to 255) under
	//     the cache root.
	//     * Level 2: Two levels of subdirectories (0-255/0-255) are created under each
	//     cache root.
	// 
	// The HTTP class automatically creates these subdirectories as needed. Multiple
	// directory levels help prevent issues caused by having too many files in a single
	// directory.
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #NumCacheRoots
	// 2: #NumCacheLevels
	// 3: #AddCacheRoot
	// 4: #FetchFromCache
	// 5: #UpdateCache
	// 6: #MinFreshPeriod
	// 7: #MaxFreshPeriod
	// 8: #FreshnessAlgorithm
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	int get_NumCacheLevels(void);
	// This setting determines the directory levels used under each cache root. The
	// default value is 0, meaning cached HTML pages are stored directly in the cache
	// root directory.
	//     * Level 0: Cached pages are stored in the cache root directory.
	//     * Level 1: Cached pages go into one of 255 subdirectories (0 to 255) under
	//     the cache root.
	//     * Level 2: Two levels of subdirectories (0-255/0-255) are created under each
	//     cache root.
	// 
	// The HTTP class automatically creates these subdirectories as needed. Multiple
	// directory levels help prevent issues caused by having too many files in a single
	// directory.
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #NumCacheRoots
	// 2: #NumCacheLevels
	// 3: #AddCacheRoot
	// 4: #FetchFromCache
	// 5: #UpdateCache
	// 6: #MinFreshPeriod
	// 7: #MaxFreshPeriod
	// 8: #FreshnessAlgorithm
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	void put_NumCacheLevels(int newVal);

	// Specifies the number of established cache roots used by the HTTP cache to
	// distribute the disk cache across multiple directories. Each cache root is an
	// absolute directory path, set using the AddCacheRoot method.
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #AddCacheRoot
	// 2: #NumCacheRoots
	// 3: #NumCacheLevels
	// 4: #FetchFromCache
	// 5: #UpdateCache
	// 6: #MinFreshPeriod
	// 7: #MaxFreshPeriod
	// 8: #FreshnessAlgorithm
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	int get_NumCacheRoots(void);

	// If true then causes an OAuth Authorization header to be added to any request
	// sent by the HTTP object. For example:Authorization: OAuth realm="http://sp.example.com/",
	//                 oauth_consumer_key="0685bd9184jfhq22",
	//                 oauth_token="ad180jjd733klru7",
	//                 oauth_signature_method="HMAC-SHA1",
	//                 oauth_signature="wOJIO9A2W5mFwDgiDvZbTSMK%2FPY%3D",
	//                 oauth_timestamp="137131200",
	//                 oauth_nonce="4572616e48616d6d65724c61686176",
	//                 oauth_version="1.0"
	// The information used to compute the OAuth Authorization header is obtained from
	// the other OAuth* properties, such as OAuthConsumerKey, OAuthConsumerSecret,
	// OAuthRealm, etc.
	bool get_OAuth1(void);
	// If true then causes an OAuth Authorization header to be added to any request
	// sent by the HTTP object. For example:Authorization: OAuth realm="http://sp.example.com/",
	//                 oauth_consumer_key="0685bd9184jfhq22",
	//                 oauth_token="ad180jjd733klru7",
	//                 oauth_signature_method="HMAC-SHA1",
	//                 oauth_signature="wOJIO9A2W5mFwDgiDvZbTSMK%2FPY%3D",
	//                 oauth_timestamp="137131200",
	//                 oauth_nonce="4572616e48616d6d65724c61686176",
	//                 oauth_version="1.0"
	// The information used to compute the OAuth Authorization header is obtained from
	// the other OAuth* properties, such as OAuthConsumerKey, OAuthConsumerSecret,
	// OAuthRealm, etc.
	void put_OAuth1(bool newVal);

	// When set to true, the oauth_body_hash , which contains the SHA-256 hash of the
	// HTTP request body, is automatically included in the OAuth1.0a Authorization
	// header .
	// 
	// For example:Authorization: OAuth oauth_consumer_key="***", 
	//   oauth_nonce="A2E91C3B53E0BD7FBF71F441336679E358DDCEEE",
	//   oauth_body_hash="a5kPTsDwUwmBjC0voNlAAvM6YoaRS5X7sTO49jl3/h8=",
	//   oauth_timestamp="1756324932",
	//   oauth_signature_method="RSA-SHA256",
	//   oauth_version="1.0",
	//   oauth_signature="****"
	//  
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	bool get_OAuthBodyHash(void);
	// When set to true, the oauth_body_hash , which contains the SHA-256 hash of the
	// HTTP request body, is automatically included in the OAuth1.0a Authorization
	// header .
	// 
	// For example:Authorization: OAuth oauth_consumer_key="***", 
	//   oauth_nonce="A2E91C3B53E0BD7FBF71F441336679E358DDCEEE",
	//   oauth_body_hash="a5kPTsDwUwmBjC0voNlAAvM6YoaRS5X7sTO49jl3/h8=",
	//   oauth_timestamp="1756324932",
	//   oauth_signature_method="RSA-SHA256",
	//   oauth_version="1.0",
	//   oauth_signature="****"
	//  
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	void put_OAuthBodyHash(bool newVal);

	// The OAuth 1.0a callback URL. Defaults to oob .
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	void get_OAuthCallback(CkString &str);
	// The OAuth 1.0a callback URL. Defaults to oob .
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	const char *oAuthCallback(void);
	// The OAuth 1.0a callback URL. Defaults to oob .
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	void put_OAuthCallback(const char *newVal);

	// The OAuth1.0a consumer key to be used in the oauth_consumer_key parameter of the
	// Authorization header.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	void get_OAuthConsumerKey(CkString &str);
	// The OAuth1.0a consumer key to be used in the oauth_consumer_key parameter of the
	// Authorization header.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	const char *oAuthConsumerKey(void);
	// The OAuth1.0a consumer key to be used in the oauth_consumer_key parameter of the
	// Authorization header.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	void put_OAuthConsumerKey(const char *newVal);

	// The consumer secret to be used in computing the contents of the OAuth1.0a
	// Authorization header.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	void get_OAuthConsumerSecret(CkString &str);
	// The consumer secret to be used in computing the contents of the OAuth1.0a
	// Authorization header.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	const char *oAuthConsumerSecret(void);
	// The consumer secret to be used in computing the contents of the OAuth1.0a
	// Authorization header.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	void put_OAuthConsumerSecret(const char *newVal);

	// The OAuth1.0a realm to be used in the Authorization header.
	// 
	// The OAuth 1.0a realm parameter is an optional, descriptive string in the
	// Authorization header that indicates the protected resources’ scope. It is not
	// required, not included in the signature, and rarely used in real-world APIs.
	// Most modern OAuth 1.0a integrations ignore it completely.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	void get_OAuthRealm(CkString &str);
	// The OAuth1.0a realm to be used in the Authorization header.
	// 
	// The OAuth 1.0a realm parameter is an optional, descriptive string in the
	// Authorization header that indicates the protected resources’ scope. It is not
	// required, not included in the signature, and rarely used in real-world APIs.
	// Most modern OAuth 1.0a integrations ignore it completely.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	const char *oAuthRealm(void);
	// The OAuth1.0a realm to be used in the Authorization header.
	// 
	// The OAuth 1.0a realm parameter is an optional, descriptive string in the
	// Authorization header that indicates the protected resources’ scope. It is not
	// required, not included in the signature, and rarely used in real-world APIs.
	// Most modern OAuth 1.0a integrations ignore it completely.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	void put_OAuthRealm(const char *newVal);

	// Specify the oauth_signature_method parameter in the OAuth 1.0a Authorization
	// header . The default method is HMAC-SHA1 , but it can be set to HMAC-SHA256 ,
	// RSA-SHA1 , or RSA-SHA256 . For RSA methods, provide an RSA private key using the
	// SetOAuthRsaKey method.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// Note that RSA-SHA256 is supported from Chilkat v9.5.0.56 onwards.
	// 
	// 
	// References:
	// 1: #SetOAuthRsaKey
	// 2: #OAuth1
	void get_OAuthSigMethod(CkString &str);
	// Specify the oauth_signature_method parameter in the OAuth 1.0a Authorization
	// header . The default method is HMAC-SHA1 , but it can be set to HMAC-SHA256 ,
	// RSA-SHA1 , or RSA-SHA256 . For RSA methods, provide an RSA private key using the
	// SetOAuthRsaKey method.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// Note that RSA-SHA256 is supported from Chilkat v9.5.0.56 onwards.
	// 
	// 
	// References:
	// 1: #SetOAuthRsaKey
	// 2: #OAuth1
	const char *oAuthSigMethod(void);
	// Specify the oauth_signature_method parameter in the OAuth 1.0a Authorization
	// header . The default method is HMAC-SHA1 , but it can be set to HMAC-SHA256 ,
	// RSA-SHA1 , or RSA-SHA256 . For RSA methods, provide an RSA private key using the
	// SetOAuthRsaKey method.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// Note that RSA-SHA256 is supported from Chilkat v9.5.0.56 onwards.
	// 
	// 
	// References:
	// 1: #SetOAuthRsaKey
	// 2: #OAuth1
	void put_OAuthSigMethod(const char *newVal);

	// The value to be used for the oauth_token parameter in the OAuth1.0a
	// Authorization header.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	void get_OAuthToken(CkString &str);
	// The value to be used for the oauth_token parameter in the OAuth1.0a
	// Authorization header.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	const char *oAuthToken(void);
	// The value to be used for the oauth_token parameter in the OAuth1.0a
	// Authorization header.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	void put_OAuthToken(const char *newVal);

	// The OAuth1.0a token secret to be used in computing the Authorization header.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	void get_OAuthTokenSecret(CkString &str);
	// The OAuth1.0a token secret to be used in computing the Authorization header.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	const char *oAuthTokenSecret(void);
	// The OAuth1.0a token secret to be used in computing the Authorization header.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	void put_OAuthTokenSecret(const char *newVal);

	// The value to be used for the verifier to be used in the oauth_verifier parameter
	// of the OAuth1.0a Authorization header.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	void get_OAuthVerifier(CkString &str);
	// The value to be used for the verifier to be used in the oauth_verifier parameter
	// of the OAuth1.0a Authorization header.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	const char *oAuthVerifier(void);
	// The value to be used for the verifier to be used in the oauth_verifier parameter
	// of the OAuth1.0a Authorization header.
	// 
	// This property is only used when the OAuth1 property equals true.
	// 
	// 
	// References:
	// 1: #OAuth1
	void put_OAuthVerifier(const char *newVal);

	// The HTTP password for pages requiring a login/password. Chilkat HTTP can do
	// Basic, Digest, and NTLM HTTP authentication. (NTLM is also known as SPA (or
	// Windows Integrated Authentication). To use Basic authentication, the BasicAuth
	// property must be set equal to true. It is not necessary to set the NtlmAuth or
	// DigestAuth properties beforehand if NTLM or Digest authentication is needed.
	// However, it is most efficient to pre-set these properties when the type of
	// authentication is known in advance.
	// 
	// Note: When the Login and Password properties are set, and the type of
	// authentication is specified by setting one of the following properties equal to
	// true (BasicAuth, DigestAuth, NtlmAuth), Chilkat will automatically add the
	// Authorization: ... header in the correct format.
	// 
	void get_Password(CkString &str);
	// The HTTP password for pages requiring a login/password. Chilkat HTTP can do
	// Basic, Digest, and NTLM HTTP authentication. (NTLM is also known as SPA (or
	// Windows Integrated Authentication). To use Basic authentication, the BasicAuth
	// property must be set equal to true. It is not necessary to set the NtlmAuth or
	// DigestAuth properties beforehand if NTLM or Digest authentication is needed.
	// However, it is most efficient to pre-set these properties when the type of
	// authentication is known in advance.
	// 
	// Note: When the Login and Password properties are set, and the type of
	// authentication is specified by setting one of the following properties equal to
	// true (BasicAuth, DigestAuth, NtlmAuth), Chilkat will automatically add the
	// Authorization: ... header in the correct format.
	// 
	const char *password(void);
	// The HTTP password for pages requiring a login/password. Chilkat HTTP can do
	// Basic, Digest, and NTLM HTTP authentication. (NTLM is also known as SPA (or
	// Windows Integrated Authentication). To use Basic authentication, the BasicAuth
	// property must be set equal to true. It is not necessary to set the NtlmAuth or
	// DigestAuth properties beforehand if NTLM or Digest authentication is needed.
	// However, it is most efficient to pre-set these properties when the type of
	// authentication is known in advance.
	// 
	// Note: When the Login and Password properties are set, and the type of
	// authentication is specified by setting one of the following properties equal to
	// true (BasicAuth, DigestAuth, NtlmAuth), Chilkat will automatically add the
	// Authorization: ... header in the correct format.
	// 
	void put_Password(const char *newVal);

	// This property is only valid in programming environment and languages that allow
	// for event callbacks.
	// 
	// Sets the value to be defined as 100% complete for the purpose of PercentDone
	// event callbacks. The defaut value of 100 means that at most 100 event
	// PercentDone callbacks will occur in a method that (1) is event enabled and (2)
	// is such that it is possible to measure progress as a percentage completed. This
	// property may be set to larger numbers to get more fine-grained PercentDone
	// callbacks. For example, setting this property equal to 1000 will provide
	// callbacks with .1 percent granularity. For example, a value of 453 would
	// indicate 45.3% competed. This property is clamped to a minimum value of 10, and
	// a maximum value of 100000.
	// 
	int get_PercentDoneScale(void);
	// This property is only valid in programming environment and languages that allow
	// for event callbacks.
	// 
	// Sets the value to be defined as 100% complete for the purpose of PercentDone
	// event callbacks. The defaut value of 100 means that at most 100 event
	// PercentDone callbacks will occur in a method that (1) is event enabled and (2)
	// is such that it is possible to measure progress as a percentage completed. This
	// property may be set to larger numbers to get more fine-grained PercentDone
	// callbacks. For example, setting this property equal to 1000 will provide
	// callbacks with .1 percent granularity. For example, a value of 453 would
	// indicate 45.3% competed. This property is clamped to a minimum value of 10, and
	// a maximum value of 100000.
	// 
	void put_PercentDoneScale(int newVal);

	// If true, then use IPv6 over IPv4 when both are supported for a particular
	// domain. The default value of this property is false, which will choose IPv4
	// over IPv6.
	bool get_PreferIpv6(void);
	// If true, then use IPv6 over IPv4 when both are supported for a particular
	// domain. The default value of this property is false, which will choose IPv4
	// over IPv6.
	void put_PreferIpv6(bool newVal);

	// Set this to basic if you know in advance that Basic authentication is to be used
	// for the HTTP proxy. Otherwise leave this property unset. Note: It is not
	// necessary to set this property. The HTTP component will automatically handle
	// proxy authentication for any of the supported authentication methods: NTLM,
	// Digest, or Basic. Setting this property equal to basic prevents the 407 response
	// which is automatically handled internal to Chilkat and never seen by your
	// application.
	// 
	// Note: If NTLM authentication does not succeed, set the Global.DefaultNtlmVersion
	// property equal to 1 and then retry.
	// 
	void get_ProxyAuthMethod(CkString &str);
	// Set this to basic if you know in advance that Basic authentication is to be used
	// for the HTTP proxy. Otherwise leave this property unset. Note: It is not
	// necessary to set this property. The HTTP component will automatically handle
	// proxy authentication for any of the supported authentication methods: NTLM,
	// Digest, or Basic. Setting this property equal to basic prevents the 407 response
	// which is automatically handled internal to Chilkat and never seen by your
	// application.
	// 
	// Note: If NTLM authentication does not succeed, set the Global.DefaultNtlmVersion
	// property equal to 1 and then retry.
	// 
	const char *proxyAuthMethod(void);
	// Set this to basic if you know in advance that Basic authentication is to be used
	// for the HTTP proxy. Otherwise leave this property unset. Note: It is not
	// necessary to set this property. The HTTP component will automatically handle
	// proxy authentication for any of the supported authentication methods: NTLM,
	// Digest, or Basic. Setting this property equal to basic prevents the 407 response
	// which is automatically handled internal to Chilkat and never seen by your
	// application.
	// 
	// Note: If NTLM authentication does not succeed, set the Global.DefaultNtlmVersion
	// property equal to 1 and then retry.
	// 
	void put_ProxyAuthMethod(const char *newVal);

	// Set to true if the proxy server expects a direct TLS connection. (This is
	// where the initial connection to the HTTP proxy server is TLS. See Squid Direct
	// TLS Connection. The default value of this property is false.
	// 
	// References:
	// 1: https://wiki.squid-cache.org/Features/HTTPS
	bool get_ProxyDirectTls(void);
	// Set to true if the proxy server expects a direct TLS connection. (This is
	// where the initial connection to the HTTP proxy server is TLS. See Squid Direct
	// TLS Connection. The default value of this property is false.
	// 
	// References:
	// 1: https://wiki.squid-cache.org/Features/HTTPS
	void put_ProxyDirectTls(bool newVal);

	// The domain name of a proxy host if an HTTP proxy is used. This can also be set
	// to an IP address.
	void get_ProxyDomain(CkString &str);
	// The domain name of a proxy host if an HTTP proxy is used. This can also be set
	// to an IP address.
	const char *proxyDomain(void);
	// The domain name of a proxy host if an HTTP proxy is used. This can also be set
	// to an IP address.
	void put_ProxyDomain(const char *newVal);

	// If an HTTP proxy is used and it requires authentication, this property specifies
	// the HTTP proxy login.
	void get_ProxyLogin(CkString &str);
	// If an HTTP proxy is used and it requires authentication, this property specifies
	// the HTTP proxy login.
	const char *proxyLogin(void);
	// If an HTTP proxy is used and it requires authentication, this property specifies
	// the HTTP proxy login.
	void put_ProxyLogin(const char *newVal);

	// The NTLM authentication domain (optional) if NTLM authentication is used.
	void get_ProxyLoginDomain(CkString &str);
	// The NTLM authentication domain (optional) if NTLM authentication is used.
	const char *proxyLoginDomain(void);
	// The NTLM authentication domain (optional) if NTLM authentication is used.
	void put_ProxyLoginDomain(const char *newVal);

	// If an HTTP proxy is used and it requires authentication, this property specifies
	// the HTTP proxy password.
	void get_ProxyPassword(CkString &str);
	// If an HTTP proxy is used and it requires authentication, this property specifies
	// the HTTP proxy password.
	const char *proxyPassword(void);
	// If an HTTP proxy is used and it requires authentication, this property specifies
	// the HTTP proxy password.
	void put_ProxyPassword(const char *newVal);

	// The port number of a proxy server if an HTTP proxy is used.
	int get_ProxyPort(void);
	// The port number of a proxy server if an HTTP proxy is used.
	void put_ProxyPort(int newVal);

	// The amount of time in seconds to wait before timing out when reading from an
	// HTTP server. The ReadTimeout is the amount of time that needs to elapse while no
	// additional data is forthcoming. During a long download, if the data stream halts
	// for more than this amount, it will timeout. Otherwise, there is no limit on the
	// length of time for the entire download.
	// 
	// The default value is 60 seconds. Note: Prior to v9.5.0.76, the default was 20
	// seconds.
	// 
	int get_ReadTimeout(void);
	// The amount of time in seconds to wait before timing out when reading from an
	// HTTP server. The ReadTimeout is the amount of time that needs to elapse while no
	// additional data is forthcoming. During a long download, if the data stream halts
	// for more than this amount, it will timeout. Otherwise, there is no limit on the
	// length of time for the entire download.
	// 
	// The default value is 60 seconds. Note: Prior to v9.5.0.76, the default was 20
	// seconds.
	// 
	void put_ReadTimeout(int newVal);

	// Indicates whether the last HTTPS connection received a TLS CertificateRequest
	// handshake message indicating that the server may require a client certificate.
	bool get_ReceivedCertReq(void);

	// Indicates the HTTP verb, such as GET, POST, PUT, etc. to be used for a redirect
	// when the FollowRedirects property is set to true. The default value of this
	// property is GET . This will produce the same behavior as a web browser (such as
	// FireFox). If this property is set to the empty string, then it will cause the
	// same verb as the original HTTP request to be used.
	// 
	// Note: Prior to version 9.5.0.44, the default value of this property was the
	// empty string.
	// 
	void get_RedirectVerb(CkString &str);
	// Indicates the HTTP verb, such as GET, POST, PUT, etc. to be used for a redirect
	// when the FollowRedirects property is set to true. The default value of this
	// property is GET . This will produce the same behavior as a web browser (such as
	// FireFox). If this property is set to the empty string, then it will cause the
	// same verb as the original HTTP request to be used.
	// 
	// Note: Prior to version 9.5.0.44, the default value of this property was the
	// empty string.
	// 
	const char *redirectVerb(void);
	// Indicates the HTTP verb, such as GET, POST, PUT, etc. to be used for a redirect
	// when the FollowRedirects property is set to true. The default value of this
	// property is GET . This will produce the same behavior as a web browser (such as
	// FireFox). If this property is set to the empty string, then it will cause the
	// same verb as the original HTTP request to be used.
	// 
	// Note: Prior to version 9.5.0.44, the default value of this property was the
	// empty string.
	// 
	void put_RedirectVerb(const char *newVal);

	// This property is deprecated and applications should instead call
	// SetRequestHeader with Referer as the header field name.
	// 
	// This property sets the Referer header for all HTTP requests, except those sent
	// by the HttpReq and HttpSReq methods that use headers from an HttpRequest object.
	// 
	// By default, it is set to an empty string, meaning no Referer header is included.
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #HttpReq
	// 3: #HttpSReq
	void get_Referer(CkString &str);
	// This property is deprecated and applications should instead call
	// SetRequestHeader with Referer as the header field name.
	// 
	// This property sets the Referer header for all HTTP requests, except those sent
	// by the HttpReq and HttpSReq methods that use headers from an HttpRequest object.
	// 
	// By default, it is set to an empty string, meaning no Referer header is included.
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #HttpReq
	// 3: #HttpSReq
	const char *referer(void);
	// This property is deprecated and applications should instead call
	// SetRequestHeader with Referer as the header field name.
	// 
	// This property sets the Referer header for all HTTP requests, except those sent
	// by the HttpReq and HttpSReq methods that use headers from an HttpRequest object.
	// 
	// By default, it is set to an empty string, meaning no Referer header is included.
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #HttpReq
	// 3: #HttpSReq
	void put_Referer(const char *newVal);

	// If set, then any HTTP response to any POST or GET, including downloads, will be
	// rejected if the content-type in the response header does not match this setting.
	// If the content-type does not match, only the header of the HTTP response is
	// read, the connection to the HTTP server is closed, and the remainder of the
	// response is never read.
	// 
	// This property is empty (zero-length string) by default.
	// 
	// Some typical content-types are text/html , text/xml , image/gif , image/jpeg ,
	// application/zip , application/msword , application/pdf , etc.
	// 
	void get_RequiredContentType(CkString &str);
	// If set, then any HTTP response to any POST or GET, including downloads, will be
	// rejected if the content-type in the response header does not match this setting.
	// If the content-type does not match, only the header of the HTTP response is
	// read, the connection to the HTTP server is closed, and the remainder of the
	// response is never read.
	// 
	// This property is empty (zero-length string) by default.
	// 
	// Some typical content-types are text/html , text/xml , image/gif , image/jpeg ,
	// application/zip , application/msword , application/pdf , etc.
	// 
	const char *requiredContentType(void);
	// If set, then any HTTP response to any POST or GET, including downloads, will be
	// rejected if the content-type in the response header does not match this setting.
	// If the content-type does not match, only the header of the HTTP response is
	// read, the connection to the HTTP server is closed, and the remainder of the
	// response is never read.
	// 
	// This property is empty (zero-length string) by default.
	// 
	// Some typical content-types are text/html , text/xml , image/gif , image/jpeg ,
	// application/zip , application/msword , application/pdf , etc.
	// 
	void put_RequiredContentType(const char *newVal);

	// If true, then the hostname/domain in the URL must match at least one of the
	// entries in the server certificate's SAN. A SAN (Subject Alternative Name) field
	// in an SSL/TLS certificate contains a list of additional domain names,
	// subdomains, IP addresses, or other identifiers that the certificate is valid
	// for.
	// 
	// In actuality, it is the SNI hostname in the TLS handshake that must match a SAN
	// entry. By default, Chilkat uses the hostname from the URL as the SNI hostname.
	// An application can explicitly set the SNI hostname via the SniHostname property,
	// which would be typical if connecting via an IP address. See the example below.
	// 
	// The default value is false.
	// 
	bool get_RequireHostnameMatch(void);
	// If true, then the hostname/domain in the URL must match at least one of the
	// entries in the server certificate's SAN. A SAN (Subject Alternative Name) field
	// in an SSL/TLS certificate contains a list of additional domain names,
	// subdomains, IP addresses, or other identifiers that the certificate is valid
	// for.
	// 
	// In actuality, it is the SNI hostname in the TLS handshake that must match a SAN
	// entry. By default, Chilkat uses the hostname from the URL as the SNI hostname.
	// An application can explicitly set the SNI hostname via the SniHostname property,
	// which would be typical if connecting via an IP address. See the example below.
	// 
	// The default value is false.
	// 
	void put_RequireHostnameMatch(bool newVal);

	// If true, then the HTTP client will verify the server's SSL certificate. The
	// certificate is expired, or if the cert's signature is invalid, the connection is
	// not allowed. The default value of this property is false.
	bool get_RequireSslCertVerify(void);
	// If true, then the HTTP client will verify the server's SSL certificate. The
	// certificate is expired, or if the cert's signature is invalid, the connection is
	// not allowed. The default value of this property is false.
	void put_RequireSslCertVerify(bool newVal);

	// If this property is true, cookies are automatically persisted to XML files in
	// the directory specified by the CookiesDir property (or in memory if CookieDir =
	// memory ). Both CookiesDir and SaveCookies must be set for cookies to be
	// persisted.
	bool get_SaveCookies(void);
	// If this property is true, cookies are automatically persisted to XML files in
	// the directory specified by the CookiesDir property (or in memory if CookieDir =
	// memory ). Both CookiesDir and SaveCookies must be set for cookies to be
	// persisted.
	void put_SaveCookies(bool newVal);

	// The buffer size to be used with the underlying TCP/IP socket for sending. The
	// default value is 65535.
	int get_SendBufferSize(void);
	// The buffer size to be used with the underlying TCP/IP socket for sending. The
	// default value is 65535.
	void put_SendBufferSize(int newVal);

	// If true, then cookies previously persisted to the CookiesDir are automatically
	// added to all HTTP requests. Only cookies matching the domain and path are added.
	bool get_SendCookies(void);
	// If true, then cookies previously persisted to the CookiesDir are automatically
	// added to all HTTP requests. Only cookies matching the domain and path are added.
	void put_SendCookies(bool newVal);

	// Enables file-based session logging. If set to a filename (or relative/absolute
	// filepath), then the exact HTTP requests and responses are logged to a file. The
	// file is created if it does not already exist, otherwise it is appended.
	void get_SessionLogFilename(CkString &str);
	// Enables file-based session logging. If set to a filename (or relative/absolute
	// filepath), then the exact HTTP requests and responses are logged to a file. The
	// file is created if it does not already exist, otherwise it is appended.
	const char *sessionLogFilename(void);
	// Enables file-based session logging. If set to a filename (or relative/absolute
	// filepath), then the exact HTTP requests and responses are logged to a file. The
	// file is created if it does not already exist, otherwise it is appended.
	void put_SessionLogFilename(const char *newVal);

	// Sets the SNI hostname for the TLS ClientHello. This property is usually
	// necessary only when the domain is specified by an IP address and an SNI hostname
	// is required. By default Chilkat uses the hostname in the URL for the SNI
	// hostname in the TLS ClientHello extension automatically.
	void get_SniHostname(CkString &str);
	// Sets the SNI hostname for the TLS ClientHello. This property is usually
	// necessary only when the domain is specified by an IP address and an SNI hostname
	// is required. By default Chilkat uses the hostname in the URL for the SNI
	// hostname in the TLS ClientHello extension automatically.
	const char *sniHostname(void);
	// Sets the SNI hostname for the TLS ClientHello. This property is usually
	// necessary only when the domain is specified by an IP address and an SNI hostname
	// is required. By default Chilkat uses the hostname in the URL for the SNI
	// hostname in the TLS ClientHello extension automatically.
	void put_SniHostname(const char *newVal);

	// The SOCKS4/SOCKS5 hostname or IPv4 address (in dotted decimal notation). This
	// property is only used if the SocksVersion property is set to 4 or 5).
	void get_SocksHostname(CkString &str);
	// The SOCKS4/SOCKS5 hostname or IPv4 address (in dotted decimal notation). This
	// property is only used if the SocksVersion property is set to 4 or 5).
	const char *socksHostname(void);
	// The SOCKS4/SOCKS5 hostname or IPv4 address (in dotted decimal notation). This
	// property is only used if the SocksVersion property is set to 4 or 5).
	void put_SocksHostname(const char *newVal);

	// The SOCKS5 password (if required). The SOCKS4 protocol does not include the use
	// of a password, so this does not apply to SOCKS4.
	void get_SocksPassword(CkString &str);
	// The SOCKS5 password (if required). The SOCKS4 protocol does not include the use
	// of a password, so this does not apply to SOCKS4.
	const char *socksPassword(void);
	// The SOCKS5 password (if required). The SOCKS4 protocol does not include the use
	// of a password, so this does not apply to SOCKS4.
	void put_SocksPassword(const char *newVal);

	// The SOCKS4/SOCKS5 proxy port. The default value is 1080. This property only
	// applies if a SOCKS proxy is used (if the SocksVersion property is set to 4 or
	// 5).
	int get_SocksPort(void);
	// The SOCKS4/SOCKS5 proxy port. The default value is 1080. This property only
	// applies if a SOCKS proxy is used (if the SocksVersion property is set to 4 or
	// 5).
	void put_SocksPort(int newVal);

	// The SOCKS4/SOCKS5 proxy username. This property is only used if the SocksVersion
	// property is set to 4 or 5).
	void get_SocksUsername(CkString &str);
	// The SOCKS4/SOCKS5 proxy username. This property is only used if the SocksVersion
	// property is set to 4 or 5).
	const char *socksUsername(void);
	// The SOCKS4/SOCKS5 proxy username. This property is only used if the SocksVersion
	// property is set to 4 or 5).
	void put_SocksUsername(const char *newVal);

	// SocksVersion May be set to one of the following integer values:
	// 
	// 0 - No SOCKS proxy is used. This is the default.
	// 4 - Connect via a SOCKS4 proxy.
	// 5 - Connect via a SOCKS5 proxy.
	// 
	int get_SocksVersion(void);
	// SocksVersion May be set to one of the following integer values:
	// 
	// 0 - No SOCKS proxy is used. This is the default.
	// 4 - Connect via a SOCKS4 proxy.
	// 5 - Connect via a SOCKS5 proxy.
	// 
	void put_SocksVersion(int newVal);

	// Sets the receive buffer size socket option. Normally, this property should be
	// left unchanged. The default value is 4194304.
	// 
	// This property can be increased if download performance seems slow. It is
	// recommended to be a multiple of 4096.
	// 
	int get_SoRcvBuf(void);
	// Sets the receive buffer size socket option. Normally, this property should be
	// left unchanged. The default value is 4194304.
	// 
	// This property can be increased if download performance seems slow. It is
	// recommended to be a multiple of 4096.
	// 
	void put_SoRcvBuf(int newVal);

	// Sets the send buffer size socket option. Normally, this property should be left
	// unchanged. The default value is 262144.
	// 
	// This property can be increased if upload performance seems slow. It is
	// recommended to be a multiple of 4096. Testing with sizes such as 512K and 1MB is
	// reasonable.
	// 
	int get_SoSndBuf(void);
	// Sets the send buffer size socket option. Normally, this property should be left
	// unchanged. The default value is 262144.
	// 
	// This property can be increased if upload performance seems slow. It is
	// recommended to be a multiple of 4096. Testing with sizes such as 512K and 1MB is
	// reasonable.
	// 
	void put_SoSndBuf(int newVal);

	// Provides a means for setting a list of ciphers that are allowed for SSL/TLS
	// connections. The default (empty string) indicates that all implemented ciphers
	// are possible. The TLS ciphers supported in Chilkat v9.5.0.55 and later are:TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256
	// TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256
	// TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256
	// TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA
	// TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256
	// TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA
	// TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384
	// TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384
	// TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384
	// TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA
	// TLS_DHE_RSA_WITH_AES_256_CBC_SHA256
	// TLS_DHE_RSA_WITH_AES_256_GCM_SHA384
	// TLS_DHE_RSA_WITH_AES_256_CBC_SHA
	// TLS_RSA_WITH_AES_256_CBC_SHA256
	// TLS_RSA_WITH_AES_256_GCM_SHA384
	// TLS_RSA_WITH_AES_256_CBC_SHA
	// TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256
	// TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256
	// TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256
	// TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA
	// TLS_DHE_RSA_WITH_AES_128_CBC_SHA256
	// TLS_DHE_RSA_WITH_AES_128_GCM_SHA256
	// TLS_DHE_RSA_WITH_AES_128_CBC_SHA
	// TLS_RSA_WITH_AES_128_CBC_SHA256
	// TLS_RSA_WITH_AES_128_GCM_SHA256
	// TLS_RSA_WITH_AES_128_CBC_SHA
	// TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA
	// TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA
	// TLS_RSA_WITH_3DES_EDE_CBC_SHA
	// TLS_ECDHE_RSA_WITH_RC4_128_SHA
	// TLS_RSA_WITH_RC4_128_SHA
	// TLS_RSA_WITH_RC4_128_MD5
	// TLS_DHE_RSA_WITH_DES_CBC_SHA
	// TLS_RSA_WITH_DES_CBC_SHA
	// To restrict SSL/TLS connections to one or more specific ciphers, set this
	// property to a comma-separated list of ciphers such as
	// TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384, TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384 .
	// The order should be in terms of preference, with the preferred algorithms listed
	// first. (Note that the client cannot specifically choose the algorithm is picked
	// because it is the server that chooses. The client simply provides the server
	// with a list from which to choose.)
	// 
	// The property can also disallow connections with servers having certificates with
	// RSA keys less than a certain size. By default, server certificates having RSA
	// keys of 512 bits or greater are allowed. Add the keyword rsa1024 to disallow
	// connections with servers having keys smaller than 1024 bits. Add the keyword
	// rsa2048 to disallow connections with servers having keys smaller than 2048 bits.
	// 
	// Note: Prior to Chilkat v9.5.0.55, it was not possible to explicitly list allowed
	// cipher suites. The deprecated means for indicating allowed ciphers was both
	// incomplete and unprecise. For example, the following keywords could be listed to
	// allow matching ciphers: aes256-cbc , aes128-cbc , 3des-cbc , and rc4 . These
	// keywords will still be recognized, but programs should be updated to explicitly
	// list the allowed ciphers.
	// 
	// secure-renegotiation: Starting in Chilkat v9.5.0.55, the keyword
	// secure-renegotiation may be added to require that all renegotions be done
	// securely (as per RFC 5746).
	// 
	// best-practices: Starting in Chilkat v9.5.0.55, this property may be set to the
	// single keyword best-practices . This will allow ciphers based on the current
	// best practices. As new versions of Chilkat are released, the best practices may
	// change. Changes will be noted here. The current best practices are:
	// 
	//     * If the server uses an RSA key, it must be 1024 bits or greater.
	//     * All renegotations must be secure renegotiations.
	//     * All ciphers using RC4, DES, or 3DES are disallowed.
	// 
	// Example: The following string would restrict to 2 specific cipher suites,
	// require RSA keys to be 1024 bits or greater, and require secure renegotiations:
	// TLS_DHE_RSA_WITH_AES_256_CBC_SHA256, TLS_RSA_WITH_AES_256_CBC_SHA, rsa1024,
	// secure-renegotiation
	// 
	void get_SslAllowedCiphers(CkString &str);
	// Provides a means for setting a list of ciphers that are allowed for SSL/TLS
	// connections. The default (empty string) indicates that all implemented ciphers
	// are possible. The TLS ciphers supported in Chilkat v9.5.0.55 and later are:TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256
	// TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256
	// TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256
	// TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA
	// TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256
	// TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA
	// TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384
	// TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384
	// TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384
	// TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA
	// TLS_DHE_RSA_WITH_AES_256_CBC_SHA256
	// TLS_DHE_RSA_WITH_AES_256_GCM_SHA384
	// TLS_DHE_RSA_WITH_AES_256_CBC_SHA
	// TLS_RSA_WITH_AES_256_CBC_SHA256
	// TLS_RSA_WITH_AES_256_GCM_SHA384
	// TLS_RSA_WITH_AES_256_CBC_SHA
	// TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256
	// TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256
	// TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256
	// TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA
	// TLS_DHE_RSA_WITH_AES_128_CBC_SHA256
	// TLS_DHE_RSA_WITH_AES_128_GCM_SHA256
	// TLS_DHE_RSA_WITH_AES_128_CBC_SHA
	// TLS_RSA_WITH_AES_128_CBC_SHA256
	// TLS_RSA_WITH_AES_128_GCM_SHA256
	// TLS_RSA_WITH_AES_128_CBC_SHA
	// TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA
	// TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA
	// TLS_RSA_WITH_3DES_EDE_CBC_SHA
	// TLS_ECDHE_RSA_WITH_RC4_128_SHA
	// TLS_RSA_WITH_RC4_128_SHA
	// TLS_RSA_WITH_RC4_128_MD5
	// TLS_DHE_RSA_WITH_DES_CBC_SHA
	// TLS_RSA_WITH_DES_CBC_SHA
	// To restrict SSL/TLS connections to one or more specific ciphers, set this
	// property to a comma-separated list of ciphers such as
	// TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384, TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384 .
	// The order should be in terms of preference, with the preferred algorithms listed
	// first. (Note that the client cannot specifically choose the algorithm is picked
	// because it is the server that chooses. The client simply provides the server
	// with a list from which to choose.)
	// 
	// The property can also disallow connections with servers having certificates with
	// RSA keys less than a certain size. By default, server certificates having RSA
	// keys of 512 bits or greater are allowed. Add the keyword rsa1024 to disallow
	// connections with servers having keys smaller than 1024 bits. Add the keyword
	// rsa2048 to disallow connections with servers having keys smaller than 2048 bits.
	// 
	// Note: Prior to Chilkat v9.5.0.55, it was not possible to explicitly list allowed
	// cipher suites. The deprecated means for indicating allowed ciphers was both
	// incomplete and unprecise. For example, the following keywords could be listed to
	// allow matching ciphers: aes256-cbc , aes128-cbc , 3des-cbc , and rc4 . These
	// keywords will still be recognized, but programs should be updated to explicitly
	// list the allowed ciphers.
	// 
	// secure-renegotiation: Starting in Chilkat v9.5.0.55, the keyword
	// secure-renegotiation may be added to require that all renegotions be done
	// securely (as per RFC 5746).
	// 
	// best-practices: Starting in Chilkat v9.5.0.55, this property may be set to the
	// single keyword best-practices . This will allow ciphers based on the current
	// best practices. As new versions of Chilkat are released, the best practices may
	// change. Changes will be noted here. The current best practices are:
	// 
	//     * If the server uses an RSA key, it must be 1024 bits or greater.
	//     * All renegotations must be secure renegotiations.
	//     * All ciphers using RC4, DES, or 3DES are disallowed.
	// 
	// Example: The following string would restrict to 2 specific cipher suites,
	// require RSA keys to be 1024 bits or greater, and require secure renegotiations:
	// TLS_DHE_RSA_WITH_AES_256_CBC_SHA256, TLS_RSA_WITH_AES_256_CBC_SHA, rsa1024,
	// secure-renegotiation
	// 
	const char *sslAllowedCiphers(void);
	// Provides a means for setting a list of ciphers that are allowed for SSL/TLS
	// connections. The default (empty string) indicates that all implemented ciphers
	// are possible. The TLS ciphers supported in Chilkat v9.5.0.55 and later are:TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256
	// TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256
	// TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256
	// TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA
	// TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256
	// TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA
	// TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384
	// TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384
	// TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384
	// TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA
	// TLS_DHE_RSA_WITH_AES_256_CBC_SHA256
	// TLS_DHE_RSA_WITH_AES_256_GCM_SHA384
	// TLS_DHE_RSA_WITH_AES_256_CBC_SHA
	// TLS_RSA_WITH_AES_256_CBC_SHA256
	// TLS_RSA_WITH_AES_256_GCM_SHA384
	// TLS_RSA_WITH_AES_256_CBC_SHA
	// TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256
	// TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256
	// TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256
	// TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA
	// TLS_DHE_RSA_WITH_AES_128_CBC_SHA256
	// TLS_DHE_RSA_WITH_AES_128_GCM_SHA256
	// TLS_DHE_RSA_WITH_AES_128_CBC_SHA
	// TLS_RSA_WITH_AES_128_CBC_SHA256
	// TLS_RSA_WITH_AES_128_GCM_SHA256
	// TLS_RSA_WITH_AES_128_CBC_SHA
	// TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA
	// TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA
	// TLS_RSA_WITH_3DES_EDE_CBC_SHA
	// TLS_ECDHE_RSA_WITH_RC4_128_SHA
	// TLS_RSA_WITH_RC4_128_SHA
	// TLS_RSA_WITH_RC4_128_MD5
	// TLS_DHE_RSA_WITH_DES_CBC_SHA
	// TLS_RSA_WITH_DES_CBC_SHA
	// To restrict SSL/TLS connections to one or more specific ciphers, set this
	// property to a comma-separated list of ciphers such as
	// TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384, TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384 .
	// The order should be in terms of preference, with the preferred algorithms listed
	// first. (Note that the client cannot specifically choose the algorithm is picked
	// because it is the server that chooses. The client simply provides the server
	// with a list from which to choose.)
	// 
	// The property can also disallow connections with servers having certificates with
	// RSA keys less than a certain size. By default, server certificates having RSA
	// keys of 512 bits or greater are allowed. Add the keyword rsa1024 to disallow
	// connections with servers having keys smaller than 1024 bits. Add the keyword
	// rsa2048 to disallow connections with servers having keys smaller than 2048 bits.
	// 
	// Note: Prior to Chilkat v9.5.0.55, it was not possible to explicitly list allowed
	// cipher suites. The deprecated means for indicating allowed ciphers was both
	// incomplete and unprecise. For example, the following keywords could be listed to
	// allow matching ciphers: aes256-cbc , aes128-cbc , 3des-cbc , and rc4 . These
	// keywords will still be recognized, but programs should be updated to explicitly
	// list the allowed ciphers.
	// 
	// secure-renegotiation: Starting in Chilkat v9.5.0.55, the keyword
	// secure-renegotiation may be added to require that all renegotions be done
	// securely (as per RFC 5746).
	// 
	// best-practices: Starting in Chilkat v9.5.0.55, this property may be set to the
	// single keyword best-practices . This will allow ciphers based on the current
	// best practices. As new versions of Chilkat are released, the best practices may
	// change. Changes will be noted here. The current best practices are:
	// 
	//     * If the server uses an RSA key, it must be 1024 bits or greater.
	//     * All renegotations must be secure renegotiations.
	//     * All ciphers using RC4, DES, or 3DES are disallowed.
	// 
	// Example: The following string would restrict to 2 specific cipher suites,
	// require RSA keys to be 1024 bits or greater, and require secure renegotiations:
	// TLS_DHE_RSA_WITH_AES_256_CBC_SHA256, TLS_RSA_WITH_AES_256_CBC_SHA, rsa1024,
	// secure-renegotiation
	// 
	void put_SslAllowedCiphers(const char *newVal);

	// Selects the SSL/TLS protocol version to be used for connections. Possible values
	// are:
	// 
	//     default
	//     TLS 1.3
	//     TLS 1.2
	//     TLS 1.1
	//     TLS 1.0
	//     SSL 3.0
	//     TLS 1.3 or higher
	//     TLS 1.2 or higher
	//     TLS 1.1 or higher
	//     TLS 1.0 or higher
	//      
	// 
	// The default value is default which allows for the protocol to be selected
	// dynamically at runtime based on the requirements of the server. Choosing an
	// exact protocol will cause the connection to fail unless that exact protocol is
	// negotiated. It is better to choose X or higher than an exact protocol. The
	// default is effectively SSL 3.0 or higher .
	void get_SslProtocol(CkString &str);
	// Selects the SSL/TLS protocol version to be used for connections. Possible values
	// are:
	// 
	//     default
	//     TLS 1.3
	//     TLS 1.2
	//     TLS 1.1
	//     TLS 1.0
	//     SSL 3.0
	//     TLS 1.3 or higher
	//     TLS 1.2 or higher
	//     TLS 1.1 or higher
	//     TLS 1.0 or higher
	//      
	// 
	// The default value is default which allows for the protocol to be selected
	// dynamically at runtime based on the requirements of the server. Choosing an
	// exact protocol will cause the connection to fail unless that exact protocol is
	// negotiated. It is better to choose X or higher than an exact protocol. The
	// default is effectively SSL 3.0 or higher .
	const char *sslProtocol(void);
	// Selects the SSL/TLS protocol version to be used for connections. Possible values
	// are:
	// 
	//     default
	//     TLS 1.3
	//     TLS 1.2
	//     TLS 1.1
	//     TLS 1.0
	//     SSL 3.0
	//     TLS 1.3 or higher
	//     TLS 1.2 or higher
	//     TLS 1.1 or higher
	//     TLS 1.0 or higher
	//      
	// 
	// The default value is default which allows for the protocol to be selected
	// dynamically at runtime based on the requirements of the server. Choosing an
	// exact protocol will cause the connection to fail unless that exact protocol is
	// negotiated. It is better to choose X or higher than an exact protocol. The
	// default is effectively SSL 3.0 or higher .
	void put_SslProtocol(const char *newVal);

	// Allows for the HTTP response body to be streamed directly into a file. If this
	// property is set, then any method returning an HTTP response object will stream
	// the response body directly to the file path specified. The HTTP response object
	// will still contain the response header. (This property is useful when the HTTP
	// response is too large to fit into memory.)
	void get_StreamResponseBodyPath(CkString &str);
	// Allows for the HTTP response body to be streamed directly into a file. If this
	// property is set, then any method returning an HTTP response object will stream
	// the response body directly to the file path specified. The HTTP response object
	// will still contain the response header. (This property is useful when the HTTP
	// response is too large to fit into memory.)
	const char *streamResponseBodyPath(void);
	// Allows for the HTTP response body to be streamed directly into a file. If this
	// property is set, then any method returning an HTTP response object will stream
	// the response body directly to the file path specified. The HTTP response object
	// will still contain the response header. (This property is useful when the HTTP
	// response is too large to fit into memory.)
	void put_StreamResponseBodyPath(const char *newVal);

	// Contains the current or last negotiated TLS cipher suite. If no TLS connection
	// has yet to be established, or if a connection as attempted and failed, then this
	// will be empty. A sample cipher suite string looks like this:
	// TLS_DHE_RSA_WITH_AES_256_CBC_SHA256.
	void get_TlsCipherSuite(CkString &str);
	// Contains the current or last negotiated TLS cipher suite. If no TLS connection
	// has yet to be established, or if a connection as attempted and failed, then this
	// will be empty. A sample cipher suite string looks like this:
	// TLS_DHE_RSA_WITH_AES_256_CBC_SHA256.
	const char *tlsCipherSuite(void);

	// Specifies a set of pins for Public Key Pinning for TLS connections. This
	// property lists the expected SPKI fingerprints for the server certificates. If
	// the server's certificate (sent during the TLS handshake) does not match any of
	// the SPKI fingerprints, then the TLS handshake is aborted and the connection
	// fails. The format of this string property is as follows:hash_algorithm, encoding, SPKI_fingerprint_1, SPKI_fingerprint_2, ...
	// For example, the following string specifies a single sha256 base64-encoded SPKI
	// fingerprint:"sha256, base64, lKg1SIqyhPSK19tlPbjl8s02yChsVTDklQpkMCHvsTE="
	// This example specifies two SPKI fingerprints:"sha256, base64, 4t37LpnGmrMEAG8HEz9yIrnvJV2euVRwCLb9EH5WZyI=, 68b0G5iqMvWVWvUCjMuhLEyekM5729PadtnU5tdXZKs="
	// Any of the following hash algorithms are allowed:.sha1, sha256, sha384, sha512,
	// md2, md5, haval, ripemd128, ripemd160,ripemd256, or ripemd320.
	// 
	// The following encodings are allowed: base64, hex, and any of the encodings
	// indicated in the link below.
	// 
	void get_TlsPinSet(CkString &str);
	// Specifies a set of pins for Public Key Pinning for TLS connections. This
	// property lists the expected SPKI fingerprints for the server certificates. If
	// the server's certificate (sent during the TLS handshake) does not match any of
	// the SPKI fingerprints, then the TLS handshake is aborted and the connection
	// fails. The format of this string property is as follows:hash_algorithm, encoding, SPKI_fingerprint_1, SPKI_fingerprint_2, ...
	// For example, the following string specifies a single sha256 base64-encoded SPKI
	// fingerprint:"sha256, base64, lKg1SIqyhPSK19tlPbjl8s02yChsVTDklQpkMCHvsTE="
	// This example specifies two SPKI fingerprints:"sha256, base64, 4t37LpnGmrMEAG8HEz9yIrnvJV2euVRwCLb9EH5WZyI=, 68b0G5iqMvWVWvUCjMuhLEyekM5729PadtnU5tdXZKs="
	// Any of the following hash algorithms are allowed:.sha1, sha256, sha384, sha512,
	// md2, md5, haval, ripemd128, ripemd160,ripemd256, or ripemd320.
	// 
	// The following encodings are allowed: base64, hex, and any of the encodings
	// indicated in the link below.
	// 
	const char *tlsPinSet(void);
	// Specifies a set of pins for Public Key Pinning for TLS connections. This
	// property lists the expected SPKI fingerprints for the server certificates. If
	// the server's certificate (sent during the TLS handshake) does not match any of
	// the SPKI fingerprints, then the TLS handshake is aborted and the connection
	// fails. The format of this string property is as follows:hash_algorithm, encoding, SPKI_fingerprint_1, SPKI_fingerprint_2, ...
	// For example, the following string specifies a single sha256 base64-encoded SPKI
	// fingerprint:"sha256, base64, lKg1SIqyhPSK19tlPbjl8s02yChsVTDklQpkMCHvsTE="
	// This example specifies two SPKI fingerprints:"sha256, base64, 4t37LpnGmrMEAG8HEz9yIrnvJV2euVRwCLb9EH5WZyI=, 68b0G5iqMvWVWvUCjMuhLEyekM5729PadtnU5tdXZKs="
	// Any of the following hash algorithms are allowed:.sha1, sha256, sha384, sha512,
	// md2, md5, haval, ripemd128, ripemd160,ripemd256, or ripemd320.
	// 
	// The following encodings are allowed: base64, hex, and any of the encodings
	// indicated in the link below.
	// 
	void put_TlsPinSet(const char *newVal);

	// Contains the current or last negotiated TLS protocol version. If no TLS
	// connection has yet to be established, or if a connection as attempted and
	// failed, then this will be empty. Possible values are SSL 3.0 , TLS 1.0 , TLS 1.1
	// , TLS 1.2 , and TLS 1.3 .
	void get_TlsVersion(CkString &str);
	// Contains the current or last negotiated TLS protocol version. If no TLS
	// connection has yet to be established, or if a connection as attempted and
	// failed, then this will be empty. Possible values are SSL 3.0 , TLS 1.0 , TLS 1.1
	// , TLS 1.2 , and TLS 1.3 .
	const char *tlsVersion(void);

	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty. Can be set to a
	// list of the following comma separated keywords:
	//     * QuickDisconnect - Introduced in v9.5.0.77. In the call to
	//     CloseAllConnections, do not disconnect cleanly. Instead just disconnect as
	//     quickly as possible.
	//     * ProtectFromVpn - Introduced in v9.5.0.80. On Android systems, will bypass
	//     any VPN that may be installed or active.
	//     * TlsNoClientRootCert - Introduced in v9.5.0.82. Will exclude root CA certs
	//     from being included in the client certificate chain that is sent to the server
	//     for client-side authentication. This must be set prior to calling
	//     SetSslClientCert.
	//     * AllowEmptyHeaders - Introduced in v9.5.0.82. If present, an empty value
	//     string passed to SetHeaderField will cause the header to be added with an empty
	//     value. Otherwise, for historical purposes and backward compatibility, the header
	//     field is removed when an empty value string is passed.
	//     * AnsiLogin - Introduced in v9.5.0.87. For HTTP basic authentication, the
	//     login and password is sent using the utf-8 byte representation. Some servers
	//     expect the ANSI byte representation (typically Windows-1252). Use this keyword
	//     to send the login/password using ANSI.
	void get_UncommonOptions(CkString &str);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty. Can be set to a
	// list of the following comma separated keywords:
	//     * QuickDisconnect - Introduced in v9.5.0.77. In the call to
	//     CloseAllConnections, do not disconnect cleanly. Instead just disconnect as
	//     quickly as possible.
	//     * ProtectFromVpn - Introduced in v9.5.0.80. On Android systems, will bypass
	//     any VPN that may be installed or active.
	//     * TlsNoClientRootCert - Introduced in v9.5.0.82. Will exclude root CA certs
	//     from being included in the client certificate chain that is sent to the server
	//     for client-side authentication. This must be set prior to calling
	//     SetSslClientCert.
	//     * AllowEmptyHeaders - Introduced in v9.5.0.82. If present, an empty value
	//     string passed to SetHeaderField will cause the header to be added with an empty
	//     value. Otherwise, for historical purposes and backward compatibility, the header
	//     field is removed when an empty value string is passed.
	//     * AnsiLogin - Introduced in v9.5.0.87. For HTTP basic authentication, the
	//     login and password is sent using the utf-8 byte representation. Some servers
	//     expect the ANSI byte representation (typically Windows-1252). Use this keyword
	//     to send the login/password using ANSI.
	const char *uncommonOptions(void);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty. Can be set to a
	// list of the following comma separated keywords:
	//     * QuickDisconnect - Introduced in v9.5.0.77. In the call to
	//     CloseAllConnections, do not disconnect cleanly. Instead just disconnect as
	//     quickly as possible.
	//     * ProtectFromVpn - Introduced in v9.5.0.80. On Android systems, will bypass
	//     any VPN that may be installed or active.
	//     * TlsNoClientRootCert - Introduced in v9.5.0.82. Will exclude root CA certs
	//     from being included in the client certificate chain that is sent to the server
	//     for client-side authentication. This must be set prior to calling
	//     SetSslClientCert.
	//     * AllowEmptyHeaders - Introduced in v9.5.0.82. If present, an empty value
	//     string passed to SetHeaderField will cause the header to be added with an empty
	//     value. Otherwise, for historical purposes and backward compatibility, the header
	//     field is removed when an empty value string is passed.
	//     * AnsiLogin - Introduced in v9.5.0.87. For HTTP basic authentication, the
	//     login and password is sent using the utf-8 byte representation. Some servers
	//     expect the ANSI byte representation (typically Windows-1252). Use this keyword
	//     to send the login/password using ANSI.
	void put_UncommonOptions(const char *newVal);

	// Set this property to true to automatically updated with HTTP GET request
	// responses. Only HTTP GET requests are cached. HTTP responses containing
	// Set-Cookie headers are never cached. The default value is false.
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #NumCacheRoots
	// 2: #NumCacheLevels
	// 3: #AddCacheRoot
	// 4: #FetchFromCache
	// 5: #UpdateCache
	// 6: #MinFreshPeriod
	// 7: #MaxFreshPeriod
	// 8: #FreshnessAlgorithm
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	bool get_UpdateCache(void);
	// Set this property to true to automatically updated with HTTP GET request
	// responses. Only HTTP GET requests are cached. HTTP responses containing
	// Set-Cookie headers are never cached. The default value is false.
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #NumCacheRoots
	// 2: #NumCacheLevels
	// 3: #AddCacheRoot
	// 4: #FetchFromCache
	// 5: #UpdateCache
	// 6: #MinFreshPeriod
	// 7: #MaxFreshPeriod
	// 8: #FreshnessAlgorithm
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	void put_UpdateCache(bool newVal);

	// If true, the proxy address/port used by Internet Explorer will also be used by
	// Chilkat HTTP. Note: This property only pays attention to the proxy address and
	// port, and does not pay attention to additional information such as IE proxy
	// server exceptions.
	bool get_UseIEProxy(void);
	// If true, the proxy address/port used by Internet Explorer will also be used by
	// Chilkat HTTP. Note: This property only pays attention to the proxy address and
	// port, and does not pay attention to additional information such as IE proxy
	// server exceptions.
	void put_UseIEProxy(bool newVal);

	// This property sets the User-Agent header for all HTTP requests, except those
	// sent by the HttpReq and HttpSReq methods that use headers from an HttpRequest
	// object.
	// 
	// By default, it is set to an empty string, meaning no User-Agent header is
	// included.
	// 
	// Setting this property is the same as calling SetRequestHeader with User-Agent as
	// the header field name.
	// 
	// The User-Agent HTTP header is sent by the client to identify the software making
	// the request (browser, app, library, bot, etc.).
	// 
	// Example:
	// 
	// MyApp/1.1
	// 
	// Note: Some web servers reject requests that do not include a User-Agent .
	// 
	// 
	// References:
	// 1: #HttpReq
	// 2: #HttpSReq
	// 3: #SetRequestHeader
	void get_UserAgent(CkString &str);
	// This property sets the User-Agent header for all HTTP requests, except those
	// sent by the HttpReq and HttpSReq methods that use headers from an HttpRequest
	// object.
	// 
	// By default, it is set to an empty string, meaning no User-Agent header is
	// included.
	// 
	// Setting this property is the same as calling SetRequestHeader with User-Agent as
	// the header field name.
	// 
	// The User-Agent HTTP header is sent by the client to identify the software making
	// the request (browser, app, library, bot, etc.).
	// 
	// Example:
	// 
	// MyApp/1.1
	// 
	// Note: Some web servers reject requests that do not include a User-Agent .
	// 
	// 
	// References:
	// 1: #HttpReq
	// 2: #HttpSReq
	// 3: #SetRequestHeader
	const char *userAgent(void);
	// This property sets the User-Agent header for all HTTP requests, except those
	// sent by the HttpReq and HttpSReq methods that use headers from an HttpRequest
	// object.
	// 
	// By default, it is set to an empty string, meaning no User-Agent header is
	// included.
	// 
	// Setting this property is the same as calling SetRequestHeader with User-Agent as
	// the header field name.
	// 
	// The User-Agent HTTP header is sent by the client to identify the software making
	// the request (browser, app, library, bot, etc.).
	// 
	// Example:
	// 
	// MyApp/1.1
	// 
	// Note: Some web servers reject requests that do not include a User-Agent .
	// 
	// 
	// References:
	// 1: #HttpReq
	// 2: #HttpSReq
	// 3: #SetRequestHeader
	void put_UserAgent(const char *newVal);

	// This shows whether the last HTTP request automatically followed a redirect. For
	// more information on redirection, see the FollowRedirects and FinalRedirectUrl
	// properties.
	// 
	// References:
	// 1: #FollowRedirects
	// 2: #FinalRedirectUrl
	bool get_WasRedirected(void);



	// ----------------------
	// Methods
	// ----------------------
	// Disk caching operates similarly to browser caching of web pages, but it focuses
	// on downloading web pages rather than handling HTTP requests to a REST API.
	// 
	// To activate disk caching, invoke the method at least once. Use the AddCacheRoot
	// method and provide a file path (e.g., D:\MyHttpCache\ ) to set the root
	// directory. To distribute the cache over multiple directories, call AddCacheRoot
	// multiple times with different directory paths.
	// 
	// HTTP GET web page caching properties and methods include: NumCacheRoots ,
	// NumCacheLevels , AddCacheRoot , FetchFromCache , UpdateCache , MinFreshPeriod ,
	// MaxFreshPeriod , FreshnessAlgorithm , DefaultFreshPeriod , LMFactor ,
	// IgnoreMustRevalidate , IgnoreNoCache , and LastFromCache .
	// 
	// 
	// References:
	// 1: #NumCacheRoots
	// 2: #NumCacheLevels
	// 3: #AddCacheRoot
	// 4: #FetchFromCache
	// 5: #UpdateCache
	// 6: #MinFreshPeriod
	// 7: #MaxFreshPeriod
	// 8: #FreshnessAlgorithm
	// 9: #DefaultFreshPeriod
	// 10: #LMFactor
	// 11: #IgnoreMustRevalidate
	// 12: #IgnoreNoCache
	// 13: #LastFromCache
	void AddCacheRoot(const char *dir);


	// Removes all headers set by the SetRequestHeader method.
	// 
	// References:
	// 1: #SetRequestHeader
	void ClearHeaders(void);


	// Clears all in-memory cookies accumulated while the SaveCookies property was set
	// to true and the CookieDir was set to memory .
	// 
	// References:
	// 1: #SaveCookies
	// 2: #CookieDir
	void ClearInMemoryCookies(void);


	// Removes all URL variable values previously set by SetUrlVar .
	// 
	// References:
	// 1: #SetUrlVar
	void ClearUrlVars(void);


	// Closes all remaining open HTTP connections.
	// 
	// An HTTP object can hold up to 10 connections. If a server response lacks a
	// Connection: Close header, the connection stays open and may be reused for
	// subsequent requests to the same host. Connections are identified by their IP
	// address or domain name as specified in the URL. Once the limit of 10 connections
	// is reached, the least recently used connection will be closed to open a new one.
	// 
	// Also see: MaxConnections .
	// 
	// 
	// References:
	// 1: #MaxConnections
	bool CloseAllConnections(void);

	// Closes all remaining open HTTP connections.
	// 
	// An HTTP object can hold up to 10 connections. If a server response lacks a
	// Connection: Close header, the connection stays open and may be reused for
	// subsequent requests to the same host. Connections are identified by their IP
	// address or domain name as specified in the URL. Once the limit of 10 connections
	// is reached, the least recently used connection will be closed to open a new one.
	// 
	// Also see: MaxConnections .
	// 
	// 
	// References:
	// 1: #MaxConnections
	CkTask *CloseAllConnectionsAsync(void);


	// Generates an OCSP request for one or more certificates using JSON (requestDetails) that
	// specifies the request details. Refer to the examples in the provided links for
	// guidance on constructing the JSON. Note: After creating the OCSP request, send
	// it to the server using HttpBd with a POST request and a Content-Type of
	// application/ocsp-request . Use ParseOcspReply to analyze the OCSP response.
	// 
	// References:
	// 1: #HttpBd
	// 2: #ParseOcspReply
	bool CreateOcspRequest(CkJsonObject &requestDetails, CkBinData &ocspRequest);


	// Creates an RFC 3161 time-stamp request and returns the binary request token in
	// timestampToken. The hashAlg can be sha1 , sha256 , sha384 , sha512 , or md5 , The hashVal is the
	// base64 hash of the data to be timestamped. The optional reqPolicyOid is the requested
	// policy OID in a format such as 1.3.6.1.4.1.47272.1.2 . The addNonce indicates
	// whether to auto-generate and include a nonce in the request. It may be true or
	// false. The reqTsaCert determines whether or not to request the TSA's certificate
	// (true = Yes, false = No).
	// 
	// Note: After creating the timestamp request, send it to the server using HttpBd
	// with a POST request and a Content-Type of application/timestamp-query . Use
	// VerifyTimestampReply to analyze and verify the timestamp reply. See the examples
	// linked below.
	// 
	// 
	// References:
	// 1: #HttpBd
	// 2: #VerifyTimestampReply
	bool CreateTimestampRequest(const char *hashAlg, const char *hashVal, const char *reqPolicyOid, bool addNonce, bool reqTsaCert, CkBinData &timestampToken);


	// This function clears the Chilkat in-memory DNS cache, which stores
	// hostname-to-IP address mappings to avoid repeated DNS lookups.
	// 
	// Note:
	// 
	//     * The DNS cache is shared across all Chilkat objects, so clearing it will
	//     impact all such objects.
	//     * Chilkat's DNS caching respects the TTL (time to live) of DNS records. If
	//     the TTL has expired since the initial lookup, Chilkat will perform a new DNS
	//     query and update the cache with the latest IP address.
	void DnsCacheClear(void);


	// Downloads the content at the specified url and saves to a local file at localFilePath.
	// 
	// The download succeeds if the HTTP response status code is in the 200s. If
	// unsuccessful, no output file is created. If the KeepResponseBody property is set
	// to true, the server's error response will be available in the LastResponseBody
	// property.
	// 
	// The response status code will be available in the LastStatus property.
	// 
	// 
	// References:
	// 1: #KeepResponseBody
	// 2: #LastResponseBody
	// 3: #LastStatus
	bool Download(const char *url, const char *localFilePath);

	// Downloads the content at the specified url and saves to a local file at localFilePath.
	// 
	// The download succeeds if the HTTP response status code is in the 200s. If
	// unsuccessful, no output file is created. If the KeepResponseBody property is set
	// to true, the server's error response will be available in the LastResponseBody
	// property.
	// 
	// The response status code will be available in the LastStatus property.
	// 
	// 
	// References:
	// 1: #KeepResponseBody
	// 2: #LastResponseBody
	// 3: #LastStatus
	CkTask *DownloadAsync(const char *url, const char *localFilePath);


	// Downloads the content at the specified url and appends to the local file at
	// appendToPath. The file is created if it does not yet exist.
	// 
	// The download succeeds if the HTTP status code is in the 200s. If unsuccessful,
	// no output file is created. If the KeepResponseBody property is set to true,
	// the server's error response will be available in the LastResponseBody property.
	// 
	// The response status code will be available in the LastStatus property.
	// 
	// 
	// References:
	// 1: #KeepResponseBody
	// 2: #LastResponseBody
	// 3: #LastStatus
	bool DownloadAppend(const char *url, const char *appendToPath);

	// Downloads the content at the specified url and appends to the local file at
	// appendToPath. The file is created if it does not yet exist.
	// 
	// The download succeeds if the HTTP status code is in the 200s. If unsuccessful,
	// no output file is created. If the KeepResponseBody property is set to true,
	// the server's error response will be available in the LastResponseBody property.
	// 
	// The response status code will be available in the LastStatus property.
	// 
	// 
	// References:
	// 1: #KeepResponseBody
	// 2: #LastResponseBody
	// 3: #LastStatus
	CkTask *DownloadAppendAsync(const char *url, const char *appendToPath);


	// Downloads content from url to binData, clearing binData beforehand. binData will only
	// contain the downloaded bytes if the operation is successful.
	// 
	// The download succeeds if the HTTP status code is in the 200s. If unsuccessful,
	// nothing is written to binData. If the KeepResponseBody property is set to true,
	// the server's error response will be available in the LastResponseBody property.
	// 
	// The response status code will be available in the LastStatus property.
	// 
	// 
	// References:
	// 1: #KeepResponseBody
	// 2: #LastResponseBody
	// 3: #LastStatus
	bool DownloadBd(const char *url, CkBinData &binData);

	// Downloads content from url to binData, clearing binData beforehand. binData will only
	// contain the downloaded bytes if the operation is successful.
	// 
	// The download succeeds if the HTTP status code is in the 200s. If unsuccessful,
	// nothing is written to binData. If the KeepResponseBody property is set to true,
	// the server's error response will be available in the LastResponseBody property.
	// 
	// The response status code will be available in the LastStatus property.
	// 
	// 
	// References:
	// 1: #KeepResponseBody
	// 2: #LastResponseBody
	// 3: #LastStatus
	CkTask *DownloadBdAsync(const char *url, CkBinData &binData);


	// Fetches the content at url and returns the encoded hash using the specified
	// algorithm (hashAlgorithm: sha1 , sha256 , sha384 , sha512 , md2 , md5 , haval , ripemd128
	// , ripemd160 , ripemd256 , or ripemd320 ), and returns the hash encoded in the
	// specified encoding (encoding: Base64 , modBase64 , Base32 , UU , QP for
	// quoted-printable, URL for URL-encoding, Hex , Q , B , url_oath , url_rfc1738 ,
	// url_rfc2396 , or url_rfc3986 ).
	bool DownloadHash(const char *url, const char *hashAlgorithm, const char *encoding, CkString &outStr);

	// Fetches the content at url and returns the encoded hash using the specified
	// algorithm (hashAlgorithm: sha1 , sha256 , sha384 , sha512 , md2 , md5 , haval , ripemd128
	// , ripemd160 , ripemd256 , or ripemd320 ), and returns the hash encoded in the
	// specified encoding (encoding: Base64 , modBase64 , Base32 , UU , QP for
	// quoted-printable, URL for URL-encoding, Hex , Q , B , url_oath , url_rfc1738 ,
	// url_rfc2396 , or url_rfc3986 ).
	const char *downloadHash(const char *url, const char *hashAlgorithm, const char *encoding);
	// Fetches the content at url and returns the encoded hash using the specified
	// algorithm (hashAlgorithm: sha1 , sha256 , sha384 , sha512 , md2 , md5 , haval , ripemd128
	// , ripemd160 , ripemd256 , or ripemd320 ), and returns the hash encoded in the
	// specified encoding (encoding: Base64 , modBase64 , Base32 , UU , QP for
	// quoted-printable, URL for URL-encoding, Hex , Q , B , url_oath , url_rfc1738 ,
	// url_rfc2396 , or url_rfc3986 ).
	CkTask *DownloadHashAsync(const char *url, const char *hashAlgorithm, const char *encoding);


	// Downloads the content at the url into a Chilkat StringBuilder object. The charset
	// tells Chilkat how to interpret the bytes received. The sb is appended with the
	// downloaded text data.
	bool DownloadSb(const char *url, const char *charset, CkStringBuilder &sb);

	// Downloads the content at the url into a Chilkat StringBuilder object. The charset
	// tells Chilkat how to interpret the bytes received. The sb is appended with the
	// downloaded text data.
	CkTask *DownloadSbAsync(const char *url, const char *charset, CkStringBuilder &sb);


	// This is a convenience method for extracting the META refresh URL from HTML. For
	// example, if the htmlContent contains a META refresh tag, such as:_LT_meta http-equiv="refresh" content="5;URL='https://example.com/'"_GT_
	// Then the return value of this method would be https://example.com/ .
	bool ExtractMetaRefreshUrl(const char *htmlContent, CkString &outStr);

	// This is a convenience method for extracting the META refresh URL from HTML. For
	// example, if the htmlContent contains a META refresh tag, such as:_LT_meta http-equiv="refresh" content="5;URL='https://example.com/'"_GT_
	// Then the return value of this method would be https://example.com/ .
	const char *extractMetaRefreshUrl(const char *htmlContent);

	// Obtains a Google API OAuth2 access token for a service account. The iss is your
	// service account email address ending in gserviceaccount.com . The scope should be
	// set to https://mail.google.com/ for GMail. The subEmail is your company email
	// address, e.g. bob@yourcompany.com . numSec is the number of seconds the access
	// token will remain valid.
	bool G_SvcOauthAccessToken(const char *iss, const char *scope, const char *subEmail, int numSec, CkCert &cert, CkString &outStr);

	// Obtains a Google API OAuth2 access token for a service account. The iss is your
	// service account email address ending in gserviceaccount.com . The scope should be
	// set to https://mail.google.com/ for GMail. The subEmail is your company email
	// address, e.g. bob@yourcompany.com . numSec is the number of seconds the access
	// token will remain valid.
	const char *g_SvcOauthAccessToken(const char *iss, const char *scope, const char *subEmail, int numSec, CkCert &cert);
	// Obtains a Google API OAuth2 access token for a service account. The iss is your
	// service account email address ending in gserviceaccount.com . The scope should be
	// set to https://mail.google.com/ for GMail. The subEmail is your company email
	// address, e.g. bob@yourcompany.com . numSec is the number of seconds the access
	// token will remain valid.
	CkTask *G_SvcOauthAccessTokenAsync(const char *iss, const char *scope, const char *subEmail, int numSec, CkCert &cert);


	// This method is similar to G_SvcOauthAccessToken , but offers greater
	// customization. The first three arguments of G_SvcOauthAccessToken are replaced
	// with claimParams to allow for future expansion with name-value parameters. See the
	// example below.
	bool G_SvcOauthAccessToken2(CkHashtable &claimParams, int numSec, CkCert &cert, CkString &outStr);

	// This method is similar to G_SvcOauthAccessToken , but offers greater
	// customization. The first three arguments of G_SvcOauthAccessToken are replaced
	// with claimParams to allow for future expansion with name-value parameters. See the
	// example below.
	const char *g_SvcOauthAccessToken2(CkHashtable &claimParams, int numSec, CkCert &cert);
	// This method is similar to G_SvcOauthAccessToken , but offers greater
	// customization. The first three arguments of G_SvcOauthAccessToken are replaced
	// with claimParams to allow for future expansion with name-value parameters. See the
	// example below.
	CkTask *G_SvcOauthAccessToken2Async(CkHashtable &claimParams, int numSec, CkCert &cert);


	// Returns the current date and time in GMT (UTC) as a string formatted according
	// to RFC 2616: Day, DD Mon YYYY HH:MM:SS GMT . For example, Thu, 21 Aug 2025
	// 11:17:31 GMT .
	bool GenTimeStamp(CkString &outStr);

	// Returns the current date and time in GMT (UTC) as a string formatted according
	// to RFC 2616: Day, DD Mon YYYY HH:MM:SS GMT . For example, Thu, 21 Aug 2025
	// 11:17:31 GMT .
	const char *genTimeStamp(void);

	// Returns the Nth cache root, with indexing starting at 0. Cache roots are
	// established by calling AddCacheRoot one or more times. The number of established
	// cache roots is in the NumCacheRoots property.
	// 
	// References:
	// 1: #AddCacheRoot
	// 2: #NumCacheRoots
	bool GetCacheRoot(int index, CkString &outStr);

	// Returns the Nth cache root, with indexing starting at 0. Cache roots are
	// established by calling AddCacheRoot one or more times. The number of established
	// cache roots is in the NumCacheRoots property.
	// 
	// References:
	// 1: #AddCacheRoot
	// 2: #NumCacheRoots
	const char *getCacheRoot(int index);
	// Returns the Nth cache root, with indexing starting at 0. Cache roots are
	// established by calling AddCacheRoot one or more times. The number of established
	// cache roots is in the NumCacheRoots property.
	// 
	// References:
	// 1: #AddCacheRoot
	// 2: #NumCacheRoots
	const char *cacheRoot(int index);


	// Returns cookies in XML format for a specified domain. Cookies are saved only if
	// the SaveCookies property is set to true. If the CookieDir property is set to
	// memory, cookies are stored in-memory.
	// 
	// References:
	// 1: #SaveCookies
	// 2: #CookieDir
	bool GetCookieXml(const char *domain, CkString &outStr);

	// Returns cookies in XML format for a specified domain. Cookies are saved only if
	// the SaveCookies property is set to true. If the CookieDir property is set to
	// memory, cookies are stored in-memory.
	// 
	// References:
	// 1: #SaveCookies
	// 2: #CookieDir
	const char *getCookieXml(const char *domain);
	// Returns cookies in XML format for a specified domain. Cookies are saved only if
	// the SaveCookies property is set to true. If the CookieDir property is set to
	// memory, cookies are stored in-memory.
	// 
	// References:
	// 1: #SaveCookies
	// 2: #CookieDir
	const char *cookieXml(const char *domain);


	// Utility method to extract the domain name from a URL. For instance, passing in
	// https://chilkatsoft.com/refdoc/csharp.asp will return chilkatsoft.com .
	bool GetDomain(const char *url, CkString &outStr);

	// Utility method to extract the domain name from a URL. For instance, passing in
	// https://chilkatsoft.com/refdoc/csharp.asp will return chilkatsoft.com .
	const char *getDomain(const char *url);
	// Utility method to extract the domain name from a URL. For instance, passing in
	// https://chilkatsoft.com/refdoc/csharp.asp will return chilkatsoft.com .
	const char *domain(const char *url);


	// Applications should instead call HttpNoBody .
	// 
	// Sends an HTTP HEAD request for a URL and returns a response object. (Note: HEAD
	// requests will never automatically follow redirects.)
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkHttpResponse *GetHead(const char *url);

	// Applications should instead call HttpNoBody .
	// 
	// Sends an HTTP HEAD request for a URL and returns a response object. (Note: HEAD
	// requests will never automatically follow redirects.)
	// 
	CkTask *GetHeadAsync(const char *url);


	// Offers details about the most recent method called on this object instance,
	// although some methods may not supply any information.
	void GetLastJsonData(CkJsonObject &json);


	// Returns the value of a header field previously set by calling SetRequestHeader .
	// 
	// References:
	// 1: #SetRequestHeader
	bool GetRequestHeader(const char *name, CkString &outStr);

	// Returns the value of a header field previously set by calling SetRequestHeader .
	// 
	// References:
	// 1: #SetRequestHeader
	const char *getRequestHeader(const char *name);
	// Returns the value of a header field previously set by calling SetRequestHeader .
	// 
	// References:
	// 1: #SetRequestHeader
	const char *requestHeader(const char *name);


	// Establishes an SSL/TLS connection with a web server to acquire its SSL
	// certificate without retrieving any data, then disconnects.
	bool GetServerCert(const char *domain, int port, CkCert &cert);

	// Establishes an SSL/TLS connection with a web server to acquire its SSL
	// certificate without retrieving any data, then disconnects.
	CkTask *GetServerCertAsync(const char *domain, int port, CkCert &cert);


	// Applications should instead call GetServerCert .
	// 
	// Initiates an SSL/TLS connection with a web server to obtain its SSL certificate
	// (public key only). No data is retrieved from the web server; the method only
	// connects, retrieves the certificate information, and then disconnects.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkCert *GetServerSslCert(const char *domain, int port);

	// Applications should instead call GetServerCert .
	// 
	// Initiates an SSL/TLS connection with a web server to obtain its SSL certificate
	// (public key only). No data is retrieved from the web server; the method only
	// connects, retrieves the certificate information, and then disconnects.
	// 
	CkTask *GetServerSslCertAsync(const char *domain, int port);


	// Returns the path part of a URL. For example, the path part of
	// https://example.com/folder/page?lang=en&sort=asc#section2 is /folder/page .
	bool GetUrlPath(const char *url, CkString &outStr);

	// Returns the path part of a URL. For example, the path part of
	// https://example.com/folder/page?lang=en&sort=asc#section2 is /folder/page .
	const char *getUrlPath(const char *url);
	// Returns the path part of a URL. For example, the path part of
	// https://example.com/folder/page?lang=en&sort=asc#section2 is /folder/page .
	const char *urlPath(const char *url);


	// Returns true if the header field specified by name is included in all HTTP
	// requests, except those sent by the HttpReq or HttpSReq methods.
	// 
	// References:
	// 1: #HttpReq
	// 2: #HttpSReq
	bool HasRequestHeader(const char *name);


	// Sends an HTTP request to url using the specified HTTP verb (e.g., POST , PUT ,
	// PATCH ). The body of the request is defined by bd, and the Content-Type header
	// is set by contentType, with possible values like application/octet-stream ,
	// application/pdf , image/jpeg , or application/zip . The HTTP response is
	// returned in response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	bool HttpBd(const char *verb, const char *url, CkBinData &bd, const char *contentType, CkHttpResponse &response);

	// Sends an HTTP request to url using the specified HTTP verb (e.g., POST , PUT ,
	// PATCH ). The body of the request is defined by bd, and the Content-Type header
	// is set by contentType, with possible values like application/octet-stream ,
	// application/pdf , image/jpeg , or application/zip . The HTTP response is
	// returned in response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	CkTask *HttpBdAsync(const char *verb, const char *url, CkBinData &bd, const char *contentType, CkHttpResponse &response);


	// Sends an HTTP request to url using the specified HTTP verb (e.g., POST , PUT ,
	// PATCH ). The body of the request is defined by byteData, and the Content-Type header
	// is set by contentType, with possible values like application/octet-stream ,
	// application/pdf , image/jpeg , or application/zip . The HTTP response is
	// returned in response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	bool HttpBinary(const char *verb, const char *url, CkByteData &byteData, const char *contentType, CkHttpResponse &response);

	// Sends an HTTP request to url using the specified HTTP verb (e.g., POST , PUT ,
	// PATCH ). The body of the request is defined by byteData, and the Content-Type header
	// is set by contentType, with possible values like application/octet-stream ,
	// application/pdf , image/jpeg , or application/zip . The HTTP response is
	// returned in response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	CkTask *HttpBinaryAsync(const char *verb, const char *url, CkByteData &byteData, const char *contentType, CkHttpResponse &response);


	// Sends an HTTP request to url using the specified HTTP verb (e.g., POST , PUT ,
	// PATCH ). The body of the request is streamed directly from localFilePath, and the
	// Content-Type header is set by contentType, with possible values like
	// application/octet-stream , application/pdf , image/jpeg , or application/zip .
	// The HTTP response is returned in response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	bool HttpFile(const char *verb, const char *url, const char *localFilePath, const char *contentType, CkHttpResponse &response);

	// Sends an HTTP request to url using the specified HTTP verb (e.g., POST , PUT ,
	// PATCH ). The body of the request is streamed directly from localFilePath, and the
	// Content-Type header is set by contentType, with possible values like
	// application/octet-stream , application/pdf , image/jpeg , or application/zip .
	// The HTTP response is returned in response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	CkTask *HttpFileAsync(const char *verb, const char *url, const char *localFilePath, const char *contentType, CkHttpResponse &response);


	// Sends an HTTP request to url using the specified method in verb (e.g., POST,
	// PUT, PATCH). The request body contains the JSON from json, with the content type
	// set by contentType, such as application/json or application/jsonrequest. The HTTP
	// response is returned in response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	bool HttpJson(const char *verb, const char *url, CkJsonObject &json, const char *contentType, CkHttpResponse &response);

	// Sends an HTTP request to url using the specified method in verb (e.g., POST,
	// PUT, PATCH). The request body contains the JSON from json, with the content type
	// set by contentType, such as application/json or application/jsonrequest. The HTTP
	// response is returned in response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	CkTask *HttpJsonAsync(const char *verb, const char *url, CkJsonObject &json, const char *contentType, CkHttpResponse &response);


	// Sends an HTTP request to url using the specified HTTP verb. The request body is
	// empty. Verbs like GET , HEAD , and DELETE usually do not include a body. No
	// Content-Type header is included because there is no content in the body of the
	// request. The HTTP response is returned in response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	bool HttpNoBody(const char *verb, const char *url, CkHttpResponse &response);

	// Sends an HTTP request to url using the specified HTTP verb. The request body is
	// empty. Verbs like GET , HEAD , and DELETE usually do not include a body. No
	// Content-Type header is included because there is no content in the body of the
	// request. The HTTP response is returned in response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	CkTask *HttpNoBodyAsync(const char *verb, const char *url, CkHttpResponse &response);


	// Sends an HTTP verb request to url with query parameters from json. The request
	// has an empty body, and therefore, no Content-Type header is included. Typically,
	// verbs such as GET , HEAD , and DELETE do not require a body. Applications
	// generally call this method with url, while passing query parameters separately
	// in json. See the example below. The HTTP response is returned in response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	bool HttpParams(const char *verb, const char *url, CkJsonObject &json, CkHttpResponse &response);

	// Sends an HTTP verb request to url with query parameters from json. The request
	// has an empty body, and therefore, no Content-Type header is included. Typically,
	// verbs such as GET , HEAD , and DELETE do not require a body. Applications
	// generally call this method with url, while passing query parameters separately
	// in json. See the example below. The HTTP response is returned in response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	CkTask *HttpParamsAsync(const char *verb, const char *url, CkJsonObject &json, CkHttpResponse &response);


	// Sends an HTTP request to url where the content of the request is defined by
	// request. The path and query part of target is taken from the url instead of the
	// path property within request.scheme   host       path             query    
	// ┌────┐  ┌─────────┐┌──────────────┐ ┌────────┐ 
	// https://example.com/docs/index.html?search=test
	// 
	// The HTTP response is returned in response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	bool HttpReq(const char *url, CkHttpRequest &request, CkHttpResponse &response);

	// Sends an HTTP request to url where the content of the request is defined by
	// request. The path and query part of target is taken from the url instead of the
	// path property within request.scheme   host       path             query    
	// ┌────┐  ┌─────────┐┌──────────────┐ ┌────────┐ 
	// https://example.com/docs/index.html?search=test
	// 
	// The HTTP response is returned in response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	CkTask *HttpReqAsync(const char *url, CkHttpRequest &request, CkHttpResponse &response);


	// Sends an HTTP request to url using the specified verb (e.g., POST , PUT , PATCH
	// ). The request body contains the text passed in sb, and the content type is
	// specified by contentType (e.g., text/xml , application/json ). The charset defines the
	// text encoding, such as utf-8 or iso-8859-1 . The HTTP response is returned in
	// response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	bool HttpSb(const char *verb, const char *url, CkStringBuilder &sb, const char *charset, const char *contentType, CkHttpResponse &response);

	// Sends an HTTP request to url using the specified verb (e.g., POST , PUT , PATCH
	// ). The request body contains the text passed in sb, and the content type is
	// specified by contentType (e.g., text/xml , application/json ). The charset defines the
	// text encoding, such as utf-8 or iso-8859-1 . The HTTP response is returned in
	// response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	CkTask *HttpSbAsync(const char *verb, const char *url, CkStringBuilder &sb, const char *charset, const char *contentType, CkHttpResponse &response);


	// Sends an HTTP request to web server at domain:port using TLS if ssl equals
	// true. The content of the request, including the path part of the URL, query
	// params, additional headers, and request body is defined by request.
	// 
	// Note: The domain should include only the domain (host), not the complete URL. The
	// path and query params are defined in the request object.
	// 
	// scheme   host       path             query    
	// ┌────┐  ┌─────────┐┌──────────────┐ ┌────────┐ 
	// https://example.com/docs/index.html?search=test
	// 
	// response contains the HTTP response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	bool HttpSReq(const char *domain, int port, bool ssl, CkHttpRequest &request, CkHttpResponse &response);

	// Sends an HTTP request to web server at domain:port using TLS if ssl equals
	// true. The content of the request, including the path part of the URL, query
	// params, additional headers, and request body is defined by request.
	// 
	// Note: The domain should include only the domain (host), not the complete URL. The
	// path and query params are defined in the request object.
	// 
	// scheme   host       path             query    
	// ┌────┐  ┌─────────┐┌──────────────┐ ┌────────┐ 
	// https://example.com/docs/index.html?search=test
	// 
	// response contains the HTTP response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	CkTask *HttpSReqAsync(const char *domain, int port, bool ssl, CkHttpRequest &request, CkHttpResponse &response);


	// Sends an HTTP request to url using the specified verb (e.g., POST , PUT , PATCH
	// ). The request body contains the text passed in bodyStr, and the content type is
	// specified by contentType (e.g., text/xml , application/json ). The charset defines the
	// text encoding, such as utf-8 or iso-8859-1 . The HTTP response is returned in
	// response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	bool HttpStr(const char *verb, const char *url, const char *bodyStr, const char *charset, const char *contentType, CkHttpResponse &response);

	// Sends an HTTP request to url using the specified verb (e.g., POST , PUT , PATCH
	// ). The request body contains the text passed in bodyStr, and the content type is
	// specified by contentType (e.g., text/xml , application/json ). The charset defines the
	// text encoding, such as utf-8 or iso-8859-1 . The HTTP response is returned in
	// response.
	// 
	// This method returns false for HTTP response status codes of 400 or higher, but
	// the response object is still provided in response. If response's status code is 0 , it
	// indicates no response was received due to a communication error or another
	// issue. In such cases, check the LastErrorText property for details.
	// 
	CkTask *HttpStrAsync(const char *verb, const char *url, const char *bodyStr, const char *charset, const char *contentType, CkHttpResponse &response);


	// This method is deprecated. Call GetLastJsonData instead.
	// 
	// Provides information about what transpired in the last method called on this
	// object instance. For many methods, there is no information. However, for some
	// methods, details about what occurred can be obtained by getting the LastJsonData
	// right after the method call returns.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *LastJsonData(void);


	// Loads the caller of the task's async method.
	bool LoadTaskCaller(CkTask &task);


	// Gets the server certificate at a domain:port and then sends an OCSP request to
	// the certificate's OCSP URL to determine if the certificate has been revoked.
	// Returns the OCSP status, which has one of the following values:
	//     * -1: Unable to check. See the contents of the LastErrorText property for
	//     more informaiton.
	//     * 0: Good
	//     * 1: Revoked
	//     * 2: Unknown
	int OcspCheck(const char *domain, int port);

	// Gets the server certificate at a domain:port and then sends an OCSP request to
	// the certificate's OCSP URL to determine if the certificate has been revoked.
	// Returns the OCSP status, which has one of the following values:
	//     * -1: Unable to check. See the contents of the LastErrorText property for
	//     more informaiton.
	//     * 0: Good
	//     * 1: Revoked
	//     * 2: Unknown
	CkTask *OcspCheckAsync(const char *domain, int port);


	// Parses an OCSP reply. Returns the following possible integer values:
	//     * -1: The ocspReply does not contain a valid OCSP reply.
	//     * 0: Successful - Response has valid confirmations..
	//     * 1: Malformed request - Illegal confirmation request.
	//     * 2: Internal error - Internal error in issuer.
	//     * 3: Try later - Try again later.
	//     * 4: Not used - This value is never returned.
	//     * 5: Sig required - Must sign the request.
	//     * 6: Unauthorized - Request unauthorized.
	// 
	// The binaryOCSP reply is provided in ocspReply. The replyData is populated with data parsed
	// from ocspReply.
	// 
	// OCSP requests are created by calling CreateOcspRequest .
	// 
	// 
	// References:
	// 1: #CreateOcspRequest
	int ParseOcspReply(CkBinData &ocspReply, CkJsonObject &replyData);


	// Sends an HTTP request to the url. The verb can be POST , PUT , PATCH , etc. The
	// body of the HTTP request contains the bytes passed in byteData. The contentType is a
	// content type such as image/gif , application/pdf , etc. If md5 is true, then
	// a Content-MD5 header is added with the base64 MD5 hash of the byteData. Servers
	// aware of the Content-MD5 header will perform a message integrity check to ensure
	// that the data has not been corrupted. If gzip is true, the byteData is compressed
	// using the gzip algorithm. The HTTP request body will contain the GZIP compressed
	// data, and a Content-Encoding: gzip header is automatically added to indicate
	// that the request data needs to be ungzipped when received (at the server).
	// The caller is responsible for deleting the object returned by this method.
	CkHttpResponse *PBinary(const char *verb, const char *url, CkByteData &byteData, const char *contentType, bool md5, bool gzip);

	// Sends an HTTP request to the url. The verb can be POST , PUT , PATCH , etc. The
	// body of the HTTP request contains the bytes passed in byteData. The contentType is a
	// content type such as image/gif , application/pdf , etc. If md5 is true, then
	// a Content-MD5 header is added with the base64 MD5 hash of the byteData. Servers
	// aware of the Content-MD5 header will perform a message integrity check to ensure
	// that the data has not been corrupted. If gzip is true, the byteData is compressed
	// using the gzip algorithm. The HTTP request body will contain the GZIP compressed
	// data, and a Content-Encoding: gzip header is automatically added to indicate
	// that the request data needs to be ungzipped when received (at the server).
	CkTask *PBinaryAsync(const char *verb, const char *url, CkByteData &byteData, const char *contentType, bool md5, bool gzip);


	// Applications should instead call HttpBd .
	// 
	// The same as PBinary, but the data to be uploaded is passed in data.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkHttpResponse *PBinaryBd(const char *verb, const char *url, CkBinData &data, const char *contentType, bool md5, bool gzip);

	// Applications should instead call HttpBd .
	// 
	// The same as PBinary, but the data to be uploaded is passed in data.
	// 
	CkTask *PBinaryBdAsync(const char *verb, const char *url, CkBinData &data, const char *contentType, bool md5, bool gzip);


	// Applications should instead call HttpFile .
	// 
	// Sends an HTTP/HTTPS request to the url. The verb can be POST , PUT , PATCH ,
	// etc. The url can begin with http:// or https:// depending if TLS is desired.
	// The body of the HTTP request is streamed directly from the localFilePath. The contentType is a
	// content type such as image/gif , application/pdf , text/xml , etc. If md5 is
	// true, then a Content-MD5 header is added with the base64 MD5 hash of the localFilePath.
	// Servers aware of the Content-MD5 header will perform a message integrity check
	// to ensure that the data has not been corrupted. If gzip is true, the localFilePath is
	// compressed using the gzip algorithm. The HTTP request body will contain the GZIP
	// compressed data, and a Content-Encoding: gzip header is automatically added to
	// indicate that the request data needs to be ungzipped when received (at the
	// server).
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkHttpResponse *PFile(const char *verb, const char *url, const char *localFilePath, const char *contentType, bool md5, bool gzip);

	// Applications should instead call HttpFile .
	// 
	// Sends an HTTP/HTTPS request to the url. The verb can be POST , PUT , PATCH ,
	// etc. The url can begin with http:// or https:// depending if TLS is desired.
	// The body of the HTTP request is streamed directly from the localFilePath. The contentType is a
	// content type such as image/gif , application/pdf , text/xml , etc. If md5 is
	// true, then a Content-MD5 header is added with the base64 MD5 hash of the localFilePath.
	// Servers aware of the Content-MD5 header will perform a message integrity check
	// to ensure that the data has not been corrupted. If gzip is true, the localFilePath is
	// compressed using the gzip algorithm. The HTTP request body will contain the GZIP
	// compressed data, and a Content-Encoding: gzip header is automatically added to
	// indicate that the request data needs to be ungzipped when received (at the
	// server).
	// 
	CkTask *PFileAsync(const char *verb, const char *url, const char *localFilePath, const char *contentType, bool md5, bool gzip);


	// Sends an HTTP POST request to the url. The body of the HTTP request contains
	// the bytes passed in byteData. The contentType is a content type such as image/gif ,
	// application/pdf , etc. If md5 is true, then a Content-MD5 header is added
	// with the base64 MD5 hash of the byteData. Servers aware of the Content-MD5 header
	// will perform a message integrity check to ensure that the data has not been
	// corrupted. If gzip is true, the byteData is compressed using the gzip algorithm.
	// The HTTP request body will contain the GZIP compressed data, and a
	// Content-Encoding: gzip header is automatically added to indicate that the
	// request data needs to be ungzipped when received (at the server).
	// 
	// Returns the text body of the HTTP response if the HTTP response has a success
	// status code. Otherwise the method is considered to have failed. If more details
	// of the HTTP response are required, call PBinary instead (which returns the HTTP
	// response object).
	// 
	// Note: The HTTP response code is available in the LastStatus property. Other
	// properties having information include LastResponseHeader, LastResponseBody,
	// LastModDate, LastContentType, etc.
	// 
	bool PostBinary(const char *url, CkByteData &byteData, const char *contentType, bool md5, bool gzip, CkString &outStr);

	// Sends an HTTP POST request to the url. The body of the HTTP request contains
	// the bytes passed in byteData. The contentType is a content type such as image/gif ,
	// application/pdf , etc. If md5 is true, then a Content-MD5 header is added
	// with the base64 MD5 hash of the byteData. Servers aware of the Content-MD5 header
	// will perform a message integrity check to ensure that the data has not been
	// corrupted. If gzip is true, the byteData is compressed using the gzip algorithm.
	// The HTTP request body will contain the GZIP compressed data, and a
	// Content-Encoding: gzip header is automatically added to indicate that the
	// request data needs to be ungzipped when received (at the server).
	// 
	// Returns the text body of the HTTP response if the HTTP response has a success
	// status code. Otherwise the method is considered to have failed. If more details
	// of the HTTP response are required, call PBinary instead (which returns the HTTP
	// response object).
	// 
	// Note: The HTTP response code is available in the LastStatus property. Other
	// properties having information include LastResponseHeader, LastResponseBody,
	// LastModDate, LastContentType, etc.
	// 
	const char *postBinary(const char *url, CkByteData &byteData, const char *contentType, bool md5, bool gzip);
	// Sends an HTTP POST request to the url. The body of the HTTP request contains
	// the bytes passed in byteData. The contentType is a content type such as image/gif ,
	// application/pdf , etc. If md5 is true, then a Content-MD5 header is added
	// with the base64 MD5 hash of the byteData. Servers aware of the Content-MD5 header
	// will perform a message integrity check to ensure that the data has not been
	// corrupted. If gzip is true, the byteData is compressed using the gzip algorithm.
	// The HTTP request body will contain the GZIP compressed data, and a
	// Content-Encoding: gzip header is automatically added to indicate that the
	// request data needs to be ungzipped when received (at the server).
	// 
	// Returns the text body of the HTTP response if the HTTP response has a success
	// status code. Otherwise the method is considered to have failed. If more details
	// of the HTTP response are required, call PBinary instead (which returns the HTTP
	// response object).
	// 
	// Note: The HTTP response code is available in the LastStatus property. Other
	// properties having information include LastResponseHeader, LastResponseBody,
	// LastModDate, LastContentType, etc.
	// 
	CkTask *PostBinaryAsync(const char *url, CkByteData &byteData, const char *contentType, bool md5, bool gzip);


	// Applications should instead call HttpStr .
	// 
	// A simplified way of sending a JSON POST and receiving the JSON response. The
	// HTTP response is returned in an HTTP response object. The content type of the
	// HTTP request is application/json . To send a JSON POST using a different
	// content-type, call the PostJson2 method where the content type can be explicitly
	// specified.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkHttpResponse *PostJson(const char *url, const char *jsonText);

	// Applications should instead call HttpStr .
	// 
	// A simplified way of sending a JSON POST and receiving the JSON response. The
	// HTTP response is returned in an HTTP response object. The content type of the
	// HTTP request is application/json . To send a JSON POST using a different
	// content-type, call the PostJson2 method where the content type can be explicitly
	// specified.
	// 
	CkTask *PostJsonAsync(const char *url, const char *jsonText);


	// Applications should instead call HttpStr .
	// 
	// The same as PostJson,except it allows for the content type to be explicitly
	// provided. The PostJson method automatically uses application/jsonrequest . If
	// the application needs for the content type to be application/json , or some
	// other content type, then PostJson2 provides the means.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkHttpResponse *PostJson2(const char *url, const char *contentType, const char *jsonText);

	// Applications should instead call HttpStr .
	// 
	// The same as PostJson,except it allows for the content type to be explicitly
	// provided. The PostJson method automatically uses application/jsonrequest . If
	// the application needs for the content type to be application/json , or some
	// other content type, then PostJson2 provides the means.
	// 
	CkTask *PostJson2Async(const char *url, const char *contentType, const char *jsonText);


	// Applications should instead call HttpJson .
	// 
	// The same as PostJson2,except a JSON object is passed in for the request body.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkHttpResponse *PostJson3(const char *url, const char *contentType, CkJsonObject &json);

	// Applications should instead call HttpJson .
	// 
	// The same as PostJson2,except a JSON object is passed in for the request body.
	// 
	CkTask *PostJson3Async(const char *url, const char *contentType, CkJsonObject &json);


	// Sends a simple URL encoded POST. The form parameters are sent in the body of the
	// HTTP request in x-www-form-urlencoded format. The content-type is
	// application/x-www-form-urlencoded .
	// The caller is responsible for deleting the object returned by this method.
	CkHttpResponse *PostUrlEncoded(const char *url, CkHttpRequest &req);

	// Sends a simple URL encoded POST. The form parameters are sent in the body of the
	// HTTP request in x-www-form-urlencoded format. The content-type is
	// application/x-www-form-urlencoded .
	CkTask *PostUrlEncodedAsync(const char *url, CkHttpRequest &req);


	// Applications should instead call HttpStr .
	// 
	// A simplified way of posting XML content to a web server. This method is good for
	// making SOAP calls using HTTP POST. The xmlCharset should match the character encoding
	// used in the xmlContent, which is typically utf-8 . The HTTP response is returned in an
	// HTTP response object.
	// 
	// Important: This method sends the POST with a Content-Type header value of
	// application/xml . In rare cases, a server might require the Content-Type header
	// to be text/xml . To use text/xml instead of the default application/xml , call
	// SetRequestHeader( Content-Type , text/xml ) prior to calling this method.
	// 
	// To use HTTPS simply pass an endpointUrl beginning with https:// instead of http:// .
	// This applies to any Chilkat method where a URL is passed as an argument.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkHttpResponse *PostXml(const char *endpointUrl, const char *xmlContent, const char *xmlCharset);

	// Applications should instead call HttpStr .
	// 
	// A simplified way of posting XML content to a web server. This method is good for
	// making SOAP calls using HTTP POST. The xmlCharset should match the character encoding
	// used in the xmlContent, which is typically utf-8 . The HTTP response is returned in an
	// HTTP response object.
	// 
	// Important: This method sends the POST with a Content-Type header value of
	// application/xml . In rare cases, a server might require the Content-Type header
	// to be text/xml . To use text/xml instead of the default application/xml , call
	// SetRequestHeader( Content-Type , text/xml ) prior to calling this method.
	// 
	// To use HTTPS simply pass an endpointUrl beginning with https:// instead of http:// .
	// This applies to any Chilkat method where a URL is passed as an argument.
	// 
	CkTask *PostXmlAsync(const char *endpointUrl, const char *xmlContent, const char *xmlCharset);


	// Applications should instead call HttpStr .
	// 
	// Sends an HTTP request to the url. The verb can be POST , PUT , PATCH , etc. The
	// body of the HTTP request contains the text passed in textData. The contentType is a content
	// type such as text/xml , application/json , etc. If md5 is true, then a
	// Content-MD5 header is added with the base64 MD5 hash of the textData. Servers aware
	// of the Content-MD5 header will perform a message integrity check to ensure that
	// the data has not been corrupted. If gzip is true, the contentType is compressed using
	// the gzip algorithm. The HTTP request body will contain the GZIP compressed data,
	// and a Content-Encoding: gzip header is automatically added to indicate that the
	// request data needs to be ungzipped when received (at the server).
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkHttpResponse *PText(const char *verb, const char *url, const char *textData, const char *charset, const char *contentType, bool md5, bool gzip);

	// Applications should instead call HttpStr .
	// 
	// Sends an HTTP request to the url. The verb can be POST , PUT , PATCH , etc. The
	// body of the HTTP request contains the text passed in textData. The contentType is a content
	// type such as text/xml , application/json , etc. If md5 is true, then a
	// Content-MD5 header is added with the base64 MD5 hash of the textData. Servers aware
	// of the Content-MD5 header will perform a message integrity check to ensure that
	// the data has not been corrupted. If gzip is true, the contentType is compressed using
	// the gzip algorithm. The HTTP request body will contain the GZIP compressed data,
	// and a Content-Encoding: gzip header is automatically added to indicate that the
	// request data needs to be ungzipped when received (at the server).
	// 
	CkTask *PTextAsync(const char *verb, const char *url, const char *textData, const char *charset, const char *contentType, bool md5, bool gzip);


	// Applications should instead call HttpSb .
	// 
	// The same as PText, but the data to be uploaded is passed in textData.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkHttpResponse *PTextSb(const char *verb, const char *url, CkStringBuilder &textData, const char *charset, const char *contentType, bool md5, bool gzip);

	// Applications should instead call HttpSb .
	// 
	// The same as PText, but the data to be uploaded is passed in textData.
	// 
	CkTask *PTextSbAsync(const char *verb, const char *url, CkStringBuilder &textData, const char *charset, const char *contentType, bool md5, bool gzip);


	// Sends an HTTP PUT request to the url. The body of the HTTP request is byteData. The
	// contentType is a content type such as image/gif , application/pdf , etc. If md5 is
	// true, then a Content-MD5 header is added with the base64 MD5 hash of the byteData.
	// Servers aware of the Content-MD5 header will perform a message integrity check
	// to ensure that the data has not been corrupted. If gzip is true, the byteData is
	// compressed using the gzip algorithm. The HTTP request body will contain the GZIP
	// compressed data, and a Content-Encoding: gzip header is automatically added to
	// indicate that the request data needs to be ungzipped when received (at the
	// server).
	// 
	// Returns the text body of the HTTP response if the HTTP response has a success
	// status code. Otherwise the method is considered to have failed. If more details
	// of the HTTP response are required, call PBinary instead (which returns the HTTP
	// response object).
	// 
	bool PutBinary(const char *url, CkByteData &byteData, const char *contentType, bool md5, bool gzip, CkString &outStr);

	// Sends an HTTP PUT request to the url. The body of the HTTP request is byteData. The
	// contentType is a content type such as image/gif , application/pdf , etc. If md5 is
	// true, then a Content-MD5 header is added with the base64 MD5 hash of the byteData.
	// Servers aware of the Content-MD5 header will perform a message integrity check
	// to ensure that the data has not been corrupted. If gzip is true, the byteData is
	// compressed using the gzip algorithm. The HTTP request body will contain the GZIP
	// compressed data, and a Content-Encoding: gzip header is automatically added to
	// indicate that the request data needs to be ungzipped when received (at the
	// server).
	// 
	// Returns the text body of the HTTP response if the HTTP response has a success
	// status code. Otherwise the method is considered to have failed. If more details
	// of the HTTP response are required, call PBinary instead (which returns the HTTP
	// response object).
	// 
	const char *putBinary(const char *url, CkByteData &byteData, const char *contentType, bool md5, bool gzip);
	// Sends an HTTP PUT request to the url. The body of the HTTP request is byteData. The
	// contentType is a content type such as image/gif , application/pdf , etc. If md5 is
	// true, then a Content-MD5 header is added with the base64 MD5 hash of the byteData.
	// Servers aware of the Content-MD5 header will perform a message integrity check
	// to ensure that the data has not been corrupted. If gzip is true, the byteData is
	// compressed using the gzip algorithm. The HTTP request body will contain the GZIP
	// compressed data, and a Content-Encoding: gzip header is automatically added to
	// indicate that the request data needs to be ungzipped when received (at the
	// server).
	// 
	// Returns the text body of the HTTP response if the HTTP response has a success
	// status code. Otherwise the method is considered to have failed. If more details
	// of the HTTP response are required, call PBinary instead (which returns the HTTP
	// response object).
	// 
	CkTask *PutBinaryAsync(const char *url, CkByteData &byteData, const char *contentType, bool md5, bool gzip);


	// Sends an HTTP PUT request to the url. The body of the HTTP request is textData. The
	// charset should be set to a charset name such as iso-8859-1 , windows-1252 ,
	// Shift_JIS , utf-8 , etc. The string ansi may also be used as a charset name. The
	// contentType is a content type such as text/plain , text/xml , etc. If md5 is true,
	// then a Content-MD5 header is added with the base64 MD5 hash of the textData. Servers
	// aware of the Content-MD5 header will perform a message integrity check to ensure
	// that the data has not been corrupted. If gzip is true, the textData is compressed
	// using the gzip algorithm. The HTTP request body will contain the GZIP compressed
	// data, and a Content-Encoding: gzip header is automatically added to indicate
	// that the request data needs to be ungzipped when received (at the server).
	// 
	// Returns the text body of the HTTP response if the HTTP response has a success
	// status code. Otherwise the method is considered to have failed. If more details
	// of the HTTP response are required, call PText instead (which returns the HTTP
	// response object).
	// 
	bool PutText(const char *url, const char *textData, const char *charset, const char *contentType, bool md5, bool gzip, CkString &outStr);

	// Sends an HTTP PUT request to the url. The body of the HTTP request is textData. The
	// charset should be set to a charset name such as iso-8859-1 , windows-1252 ,
	// Shift_JIS , utf-8 , etc. The string ansi may also be used as a charset name. The
	// contentType is a content type such as text/plain , text/xml , etc. If md5 is true,
	// then a Content-MD5 header is added with the base64 MD5 hash of the textData. Servers
	// aware of the Content-MD5 header will perform a message integrity check to ensure
	// that the data has not been corrupted. If gzip is true, the textData is compressed
	// using the gzip algorithm. The HTTP request body will contain the GZIP compressed
	// data, and a Content-Encoding: gzip header is automatically added to indicate
	// that the request data needs to be ungzipped when received (at the server).
	// 
	// Returns the text body of the HTTP response if the HTTP response has a success
	// status code. Otherwise the method is considered to have failed. If more details
	// of the HTTP response are required, call PText instead (which returns the HTTP
	// response object).
	// 
	const char *putText(const char *url, const char *textData, const char *charset, const char *contentType, bool md5, bool gzip);
	// Sends an HTTP PUT request to the url. The body of the HTTP request is textData. The
	// charset should be set to a charset name such as iso-8859-1 , windows-1252 ,
	// Shift_JIS , utf-8 , etc. The string ansi may also be used as a charset name. The
	// contentType is a content type such as text/plain , text/xml , etc. If md5 is true,
	// then a Content-MD5 header is added with the base64 MD5 hash of the textData. Servers
	// aware of the Content-MD5 header will perform a message integrity check to ensure
	// that the data has not been corrupted. If gzip is true, the textData is compressed
	// using the gzip algorithm. The HTTP request body will contain the GZIP compressed
	// data, and a Content-Encoding: gzip header is automatically added to indicate
	// that the request data needs to be ungzipped when received (at the server).
	// 
	// Returns the text body of the HTTP response if the HTTP response has a success
	// status code. Otherwise the method is considered to have failed. If more details
	// of the HTTP response are required, call PText instead (which returns the HTTP
	// response object).
	// 
	CkTask *PutTextAsync(const char *url, const char *textData, const char *charset, const char *contentType, bool md5, bool gzip);


	// This function sends an HTTP DELETE request to a specified URL and returns the
	// response body as a string.
	// 
	// The HTTP response code is stored in the LastStatus property, while additional
	// response details are available in properties such as LastResponseHeader ,
	// LastResponseBody , LastModDate , and LastContentType .
	// 
	// 
	// References:
	// 1: #LastStatus
	// 2: #LastResponseHeader
	// 3: #LastResponseBody
	// 4: #LastModDate
	// 5: #LastContentType
	bool QuickDeleteStr(const char *url, CkString &outStr);

	// This function sends an HTTP DELETE request to a specified URL and returns the
	// response body as a string.
	// 
	// The HTTP response code is stored in the LastStatus property, while additional
	// response details are available in properties such as LastResponseHeader ,
	// LastResponseBody , LastModDate , and LastContentType .
	// 
	// 
	// References:
	// 1: #LastStatus
	// 2: #LastResponseHeader
	// 3: #LastResponseBody
	// 4: #LastModDate
	// 5: #LastContentType
	const char *quickDeleteStr(const char *url);
	// This function sends an HTTP DELETE request to a specified URL and returns the
	// response body as a string.
	// 
	// The HTTP response code is stored in the LastStatus property, while additional
	// response details are available in properties such as LastResponseHeader ,
	// LastResponseBody , LastModDate , and LastContentType .
	// 
	// 
	// References:
	// 1: #LastStatus
	// 2: #LastResponseHeader
	// 3: #LastResponseBody
	// 4: #LastModDate
	// 5: #LastContentType
	CkTask *QuickDeleteStrAsync(const char *url);


	// This function sends an HTTP GET request to a specified URL, which can include
	// query parameters, and returns the binary response body.
	// 
	// The HTTP response code is stored in the LastStatus property. Additional response
	// details can be found in properties like LastResponseHeader , LastModDate , and
	// LastContentType .
	// 
	// A response code of 400 or higher indicates a failure. If the error response is
	// text-based and the KeepResponseBody property is true, it will be available in
	// the LastResponseBody property.
	// 
	// 
	// References:
	// 1: #LastStatus
	// 2: #LastResponseHeader
	// 3: #LastModDate
	// 4: #LastContentType
	// 5: #KeepResponseBody
	// 6: #LastResponseBody
	bool QuickGet(const char *url, CkByteData &outData);

	// This function sends an HTTP GET request to a specified URL, which can include
	// query parameters, and returns the binary response body.
	// 
	// The HTTP response code is stored in the LastStatus property. Additional response
	// details can be found in properties like LastResponseHeader , LastModDate , and
	// LastContentType .
	// 
	// A response code of 400 or higher indicates a failure. If the error response is
	// text-based and the KeepResponseBody property is true, it will be available in
	// the LastResponseBody property.
	// 
	// 
	// References:
	// 1: #LastStatus
	// 2: #LastResponseHeader
	// 3: #LastModDate
	// 4: #LastContentType
	// 5: #KeepResponseBody
	// 6: #LastResponseBody
	CkTask *QuickGetAsync(const char *url);


	// This function sends an HTTP GET request to a specified URL, which can include
	// query parameters, and returns the binary response body in binData.
	// 
	// The HTTP response code is stored in the LastStatus property. Additional response
	// details can be found in properties like LastResponseHeader , LastModDate , and
	// LastContentType .
	// 
	// A response code of 400 or higher indicates a failure. If the error response is
	// text-based and the KeepResponseBody property is true, it will be available in
	// the LastResponseBody property.
	// 
	// 
	// References:
	// 1: #LastStatus
	// 2: #LastResponseHeader
	// 3: #LastModDate
	// 4: #LastContentType
	// 5: #KeepResponseBody
	// 6: #LastResponseBody
	bool QuickGetBd(const char *url, CkBinData &binData);

	// This function sends an HTTP GET request to a specified URL, which can include
	// query parameters, and returns the binary response body in binData.
	// 
	// The HTTP response code is stored in the LastStatus property. Additional response
	// details can be found in properties like LastResponseHeader , LastModDate , and
	// LastContentType .
	// 
	// A response code of 400 or higher indicates a failure. If the error response is
	// text-based and the KeepResponseBody property is true, it will be available in
	// the LastResponseBody property.
	// 
	// 
	// References:
	// 1: #LastStatus
	// 2: #LastResponseHeader
	// 3: #LastModDate
	// 4: #LastContentType
	// 5: #KeepResponseBody
	// 6: #LastResponseBody
	CkTask *QuickGetBdAsync(const char *url, CkBinData &binData);


	// Applications should instead call HttpNoBody .
	// 
	// Sends an HTTP GET request for a URL and returns the response object. If the
	// SendCookies property is true, matching cookies previously persisted to the
	// CookiesDir are automatically included in the request. If the FetchFromCache
	// property is true, the page could be fetched directly from cache.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkHttpResponse *QuickGetObj(const char *url);

	// Applications should instead call HttpNoBody .
	// 
	// Sends an HTTP GET request for a URL and returns the response object. If the
	// SendCookies property is true, matching cookies previously persisted to the
	// CookiesDir are automatically included in the request. If the FetchFromCache
	// property is true, the page could be fetched directly from cache.
	// 
	CkTask *QuickGetObjAsync(const char *url);


	// This function sends an HTTP GET request to a specified URL, which can include
	// query parameters, and returns the text response body in sbContent. The existing
	// content of sbContent, if any, is cleared and replaced with the downloaded content.
	// 
	// The response status code is stored in the LastStatus property. Additional
	// response details can be found in properties like LastResponseHeader ,
	// LastModDate , and LastContentType .
	// 
	// If the response status code is >= 400, then this method returns false, but the
	// body of the HTTP response is still returned in sbContent. This allows for the
	// application to examine the response body for cases where an error is returned,
	// but the expected content is not received.
	// 
	// 
	// References:
	// 1: #LastStatus
	// 2: #LastResponseHeader
	// 3: #LastModDate
	// 4: #LastContentType
	bool QuickGetSb(const char *url, CkStringBuilder &sbContent);

	// This function sends an HTTP GET request to a specified URL, which can include
	// query parameters, and returns the text response body in sbContent. The existing
	// content of sbContent, if any, is cleared and replaced with the downloaded content.
	// 
	// The response status code is stored in the LastStatus property. Additional
	// response details can be found in properties like LastResponseHeader ,
	// LastModDate , and LastContentType .
	// 
	// If the response status code is >= 400, then this method returns false, but the
	// body of the HTTP response is still returned in sbContent. This allows for the
	// application to examine the response body for cases where an error is returned,
	// but the expected content is not received.
	// 
	// 
	// References:
	// 1: #LastStatus
	// 2: #LastResponseHeader
	// 3: #LastModDate
	// 4: #LastContentType
	CkTask *QuickGetSbAsync(const char *url, CkStringBuilder &sbContent);


	// This function sends an HTTP GET request to a specified URL, which can include
	// query parameters, and returns the text response body.
	// 
	// The response status code is stored in the LastStatus property. Additional
	// response details can be found in properties like LastResponseHeader ,
	// LastModDate , and LastContentType .
	// 
	// A response code of 400 or higher indicates a failure. If the error response is
	// text-based and the KeepResponseBody property is true, it will be available in
	// the LastResponseBody property.
	// 
	// 
	// References:
	// 1: #LastStatus
	// 2: #LastResponseHeader
	// 3: #LastModDate
	// 4: #LastContentType
	// 5: #KeepResponseBody
	// 6: #LastResponseBody
	bool QuickGetStr(const char *url, CkString &outStr);

	// This function sends an HTTP GET request to a specified URL, which can include
	// query parameters, and returns the text response body.
	// 
	// The response status code is stored in the LastStatus property. Additional
	// response details can be found in properties like LastResponseHeader ,
	// LastModDate , and LastContentType .
	// 
	// A response code of 400 or higher indicates a failure. If the error response is
	// text-based and the KeepResponseBody property is true, it will be available in
	// the LastResponseBody property.
	// 
	// 
	// References:
	// 1: #LastStatus
	// 2: #LastResponseHeader
	// 3: #LastModDate
	// 4: #LastContentType
	// 5: #KeepResponseBody
	// 6: #LastResponseBody
	const char *quickGetStr(const char *url);
	// This function sends an HTTP GET request to a specified URL, which can include
	// query parameters, and returns the text response body.
	// 
	// The response status code is stored in the LastStatus property. Additional
	// response details can be found in properties like LastResponseHeader ,
	// LastModDate , and LastContentType .
	// 
	// A response code of 400 or higher indicates a failure. If the error response is
	// text-based and the KeepResponseBody property is true, it will be available in
	// the LastResponseBody property.
	// 
	// 
	// References:
	// 1: #LastStatus
	// 2: #LastResponseHeader
	// 3: #LastModDate
	// 4: #LastContentType
	// 5: #KeepResponseBody
	// 6: #LastResponseBody
	CkTask *QuickGetStrAsync(const char *url);


	// Same as QuickGetStr , but uses the HTTP PUT method instead of the GET method.
	// 
	// Note: The HTTP response code is available in the LastStatus property. Other
	// properties having information include LastResponseHeader , LastResponseBody ,
	// LastModDate , LastContentType , etc.
	// 
	bool QuickPutStr(const char *url, CkString &outStr);

	// Same as QuickGetStr , but uses the HTTP PUT method instead of the GET method.
	// 
	// Note: The HTTP response code is available in the LastStatus property. Other
	// properties having information include LastResponseHeader , LastResponseBody ,
	// LastModDate , LastContentType , etc.
	// 
	const char *quickPutStr(const char *url);
	// Same as QuickGetStr , but uses the HTTP PUT method instead of the GET method.
	// 
	// Note: The HTTP response code is available in the LastStatus property. Other
	// properties having information include LastResponseHeader , LastResponseBody ,
	// LastModDate , LastContentType , etc.
	// 
	CkTask *QuickPutStrAsync(const char *url);


	// Applications should instead call HttpNoBody .
	// 
	// Sends an HTTP request with no body for a URL and returns the response object.
	// The verb is typically GET or DELETE .
	// 
	// If the SendCookies property is true, matching cookies previously persisted to
	// the CookiesDir are automatically included in the request. If the FetchFromCache
	// property is true, the page could be fetched directly from cache.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkHttpResponse *QuickRequest(const char *verb, const char *url);

	// Applications should instead call HttpNoBody .
	// 
	// Sends an HTTP request with no body for a URL and returns the response object.
	// The verb is typically GET or DELETE .
	// 
	// If the SendCookies property is true, matching cookies previously persisted to
	// the CookiesDir are automatically included in the request. If the FetchFromCache
	// property is true, the page could be fetched directly from cache.
	// 
	CkTask *QuickRequestAsync(const char *verb, const char *url);


	// Applications should instead call HttpParams .
	// 
	// This is the same as the QuickRequest method, except query params can be provided
	// as non-URL-encoded name/value members in the json.
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkHttpResponse *QuickRequestParams(const char *verb, const char *url, CkJsonObject &json);

	// Applications should instead call HttpParams .
	// 
	// This is the same as the QuickRequest method, except query params can be provided
	// as non-URL-encoded name/value members in the json.
	// 
	CkTask *QuickRequestParamsAsync(const char *verb, const char *url, CkJsonObject &json);


	// Eliminates a header field from being included in all HTTP requests, except for
	// those sent by the HttpReq and HttpSReq methods, which rely on header fields
	// provided in an HttpRequest object via method arguments.
	// 
	// References:
	// 1: #HttpReq
	// 2: #HttpSReq
	void RemoveRequestHeader(const char *name);


	// Builds the GET request that would be sent if a method such as QuickGetStr was
	// called. Instead of sending the request, it returns the HTTP request that would
	// have been sent.
	// 
	// References:
	// 1: #QuickGetStr
	bool RenderGet(const char *url, CkString &outStr);

	// Builds the GET request that would be sent if a method such as QuickGetStr was
	// called. Instead of sending the request, it returns the HTTP request that would
	// have been sent.
	// 
	// References:
	// 1: #QuickGetStr
	const char *renderGet(const char *url);

	// Resumes downloading content from url and saves it to a partially completed
	// local file at targetFilename. If the file at targetFilename doesn't exist or is empty, this method
	// functions the same as Download .
	// 
	// The download succeeds if the HTTP response status code is in the 200s. If
	// unsuccessful, no output file is created. If the KeepResponseBody property is set
	// to true, the server's error response will be available in the LastResponseBody
	// property.
	// 
	// The response status code will be available in the LastStatus property.
	// 
	// 
	// References:
	// 1: #Download
	// 2: #KeepResponseBody
	// 3: #LastResponseBody
	// 4: #LastStatus
	bool ResumeDownload(const char *url, const char *targetFilename);

	// Resumes downloading content from url and saves it to a partially completed
	// local file at targetFilename. If the file at targetFilename doesn't exist or is empty, this method
	// functions the same as Download .
	// 
	// The download succeeds if the HTTP response status code is in the 200s. If
	// unsuccessful, no output file is created. If the KeepResponseBody property is set
	// to true, the server's error response will be available in the LastResponseBody
	// property.
	// 
	// The response status code will be available in the LastStatus property.
	// 
	// 
	// References:
	// 1: #Download
	// 2: #KeepResponseBody
	// 3: #LastResponseBody
	// 4: #LastStatus
	CkTask *ResumeDownloadAsync(const char *url, const char *targetFilename);


	// Resumes a download from where it left off, determined by the number of bytes in
	// binData. This method can be called multiple times until the download is complete.
	// 
	// The download succeeds if the HTTP response status code is in the 200s. If
	// unsuccessful, no output file is created. If the KeepResponseBody property is set
	// to true, the server's error response will be available in the LastResponseBody
	// property.
	// 
	// The response status code will be available in the LastStatus property.
	// 
	// 
	// References:
	// 1: #KeepResponseBody
	// 2: #LastResponseBody
	// 3: #LastStatus
	bool ResumeDownloadBd(const char *url, CkBinData &binData);

	// Resumes a download from where it left off, determined by the number of bytes in
	// binData. This method can be called multiple times until the download is complete.
	// 
	// The download succeeds if the HTTP response status code is in the 200s. If
	// unsuccessful, no output file is created. If the KeepResponseBody property is set
	// to true, the server's error response will be available in the LastResponseBody
	// property.
	// 
	// The response status code will be available in the LastStatus property.
	// 
	// 
	// References:
	// 1: #KeepResponseBody
	// 2: #LastResponseBody
	// 3: #LastStatus
	CkTask *ResumeDownloadBdAsync(const char *url, CkBinData &binData);


	// Creates a new Amazon S3 bucket.
	// 
	// Note: You can add x-amz-* headers, including metadata, to any S3 request by
	// using SetRequestHeader for each header. This applies to all S3 methods, even if
	// not explicitly mentioned.
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	bool S3_CreateBucket(const char *bucketPath);

	// Creates a new Amazon S3 bucket.
	// 
	// Note: You can add x-amz-* headers, including metadata, to any S3 request by
	// using SetRequestHeader for each header. This applies to all S3 methods, even if
	// not explicitly mentioned.
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	CkTask *S3_CreateBucketAsync(const char *bucketPath);


	// Deletes an Amazon S3 bucket.
	// 
	// Note: Ensure the AwsEndpoint property is set to the correct region if the bucket
	// is outside us-east-1 , for example, eu-central-1 . For S3-compatible services
	// like Wasabi , always set the AwsEndpoint , such as s3.wasabisys.com or
	// s3.eu-central-1.wasabisys.com .
	// 
	// 
	// References:
	// 1: #AwsEndpoint
	bool S3_DeleteBucket(const char *bucketPath);

	// Deletes an Amazon S3 bucket.
	// 
	// Note: Ensure the AwsEndpoint property is set to the correct region if the bucket
	// is outside us-east-1 , for example, eu-central-1 . For S3-compatible services
	// like Wasabi , always set the AwsEndpoint , such as s3.wasabisys.com or
	// s3.eu-central-1.wasabisys.com .
	// 
	// 
	// References:
	// 1: #AwsEndpoint
	CkTask *S3_DeleteBucketAsync(const char *bucketPath);


	// Applications should instead call S3_DeleteObjects .
	// 
	// Deletes multiple objects from a bucket using a single HTTP request. The objectNames
	// contains the names (also known as keys ) of the objects to be deleted. To delete
	// a specific version of an object, append a versionId attribute to the object
	// name. For example: SampleDocument.txt; VersionId=
	// OYcLXagmS.WaD..oyH4KRguB95_YhLs7
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkHttpResponse *S3_DeleteMultipleObjects(const char *bucketName, CkStringArray &objectNames);

	// Applications should instead call S3_DeleteObjects .
	// 
	// Deletes multiple objects from a bucket using a single HTTP request. The objectNames
	// contains the names (also known as keys ) of the objects to be deleted. To delete
	// a specific version of an object, append a versionId attribute to the object
	// name. For example: SampleDocument.txt; VersionId=
	// OYcLXagmS.WaD..oyH4KRguB95_YhLs7
	// 
	CkTask *S3_DeleteMultipleObjectsAsync(const char *bucketName, CkStringArray &objectNames);


	// Deletes a remote file (object) on the Amazon S3 service.
	bool S3_DeleteObject(const char *bucketPath, const char *objectName);

	// Deletes a remote file (object) on the Amazon S3 service.
	CkTask *S3_DeleteObjectAsync(const char *bucketPath, const char *objectName);


	// Deletes several objects from a bucket with a single request. objectNames includes the
	// object names (or keys ) to be deleted. To delete a specific object version, add
	// a versionId to the object name, like this: SampleDocument.txt;
	// VersionId=OYcLXagmS.WaD..oyH4KRguB95_YhLs7 . If successful, jsonResponse will contain
	// the JSON response.
	bool S3_DeleteObjects(const char *bucketName, CkStringTable &objectNames, CkJsonObject &jsonResponse);

	// Deletes several objects from a bucket with a single request. objectNames includes the
	// object names (or keys ) to be deleted. To delete a specific object version, add
	// a versionId to the object name, like this: SampleDocument.txt;
	// VersionId=OYcLXagmS.WaD..oyH4KRguB95_YhLs7 . If successful, jsonResponse will contain
	// the JSON response.
	CkTask *S3_DeleteObjectsAsync(const char *bucketName, CkStringTable &objectNames, CkJsonObject &jsonResponse);


	// Downloads a file from the Amazon S3 service into bd.
	bool S3_DownloadBd(const char *bucketPath, const char *objectName, CkBinData &bd);

	// Downloads a file from the Amazon S3 service into bd.
	CkTask *S3_DownloadBdAsync(const char *bucketPath, const char *objectName, CkBinData &bd);


	// Downloads a file from the Amazon S3 service and returns the binary data.
	bool S3_DownloadBytes(const char *bucketPath, const char *objectName, CkByteData &outBytes);

	// Downloads a file from the Amazon S3 service and returns the binary data.
	CkTask *S3_DownloadBytesAsync(const char *bucketPath, const char *objectName);


	// Downloads a file from the Amazon S3 service.
	// 
	// Note: Ensure the AwsEndpoint property is set to the correct region if the bucket
	// is outside us-east-1 , for example, eu-central-1 . For S3-compatible services
	// like Wasabi , always set the AwsEndpoint , such as s3.wasabisys.com or
	// s3.eu-central-1.wasabisys.com .
	// 
	// 
	// References:
	// 1: #AwsEndpoint
	bool S3_DownloadFile(const char *bucketPath, const char *objectName, const char *localFilePath);

	// Downloads a file from the Amazon S3 service.
	// 
	// Note: Ensure the AwsEndpoint property is set to the correct region if the bucket
	// is outside us-east-1 , for example, eu-central-1 . For S3-compatible services
	// like Wasabi , always set the AwsEndpoint , such as s3.wasabisys.com or
	// s3.eu-central-1.wasabisys.com .
	// 
	// 
	// References:
	// 1: #AwsEndpoint
	CkTask *S3_DownloadFileAsync(const char *bucketPath, const char *objectName, const char *localFilePath);


	// Downloads a text file (object) from the Amazon S3 service and returns the
	// content as a string. The charset specifies the character encoding, such as utf-8 ,
	// of the remote text object.
	// 
	// Note: Ensure the AwsEndpoint property is set to the correct region if the bucket
	// is outside us-east-1 , for example, eu-central-1 . For S3-compatible services
	// like Wasabi , always set the AwsEndpoint , such as s3.wasabisys.com or
	// s3.eu-central-1.wasabisys.com .
	// 
	// 
	// References:
	// 1: #AwsEndpoint
	bool S3_DownloadString(const char *bucketPath, const char *objectName, const char *charset, CkString &outStr);

	// Downloads a text file (object) from the Amazon S3 service and returns the
	// content as a string. The charset specifies the character encoding, such as utf-8 ,
	// of the remote text object.
	// 
	// Note: Ensure the AwsEndpoint property is set to the correct region if the bucket
	// is outside us-east-1 , for example, eu-central-1 . For S3-compatible services
	// like Wasabi , always set the AwsEndpoint , such as s3.wasabisys.com or
	// s3.eu-central-1.wasabisys.com .
	// 
	// 
	// References:
	// 1: #AwsEndpoint
	const char *s3_DownloadString(const char *bucketPath, const char *objectName, const char *charset);
	// Downloads a text file (object) from the Amazon S3 service and returns the
	// content as a string. The charset specifies the character encoding, such as utf-8 ,
	// of the remote text object.
	// 
	// Note: Ensure the AwsEndpoint property is set to the correct region if the bucket
	// is outside us-east-1 , for example, eu-central-1 . For S3-compatible services
	// like Wasabi , always set the AwsEndpoint , such as s3.wasabisys.com or
	// s3.eu-central-1.wasabisys.com .
	// 
	// 
	// References:
	// 1: #AwsEndpoint
	CkTask *S3_DownloadStringAsync(const char *bucketPath, const char *objectName, const char *charset);


	// Checks the existence of a remote file, returning:
	//     * 1 if the file exists
	//     * 0 if the file does not exist
	//     * -1 if the check failed
	//     * 2 if in asynchronous mode, indicating the background task started
	//     successfully
	// 
	// Note: Ensure the AwsEndpoint property is set to the correct region if the bucket
	// is outside us-east-1 , for example, eu-central-1 . For S3-compatible services
	// like Wasabi , always set the AwsEndpoint , such as s3.wasabisys.com or
	// s3.eu-central-1.wasabisys.com .
	// 
	// 
	// References:
	// 1: #AwsEndpoint
	int S3_FileExists(const char *bucketPath, const char *objectName);

	// Checks the existence of a remote file, returning:
	//     * 1 if the file exists
	//     * 0 if the file does not exist
	//     * -1 if the check failed
	//     * 2 if in asynchronous mode, indicating the background task started
	//     successfully
	// 
	// Note: Ensure the AwsEndpoint property is set to the correct region if the bucket
	// is outside us-east-1 , for example, eu-central-1 . For S3-compatible services
	// like Wasabi , always set the AwsEndpoint , such as s3.wasabisys.com or
	// s3.eu-central-1.wasabisys.com .
	// 
	// 
	// References:
	// 1: #AwsEndpoint
	CkTask *S3_FileExistsAsync(const char *bucketPath, const char *objectName);


	// This method creates a temporary pre-signed URL for Amazon S3 using AWS Signature
	// V2 . Ensure that valid values are set for AwsSecretKey and AwsAccessKey before
	// calling this method.
	// 
	// Note: This method only generates URLs for HTTP GET requests, suitable for
	// pasting into a browser address bar. It does not support generating URLs for
	// other request types such as POST, PUT, or DELETE.
	// 
	// 
	// References:
	// 1: #AwsSecretKey
	// 2: #AwsAccessKey
	bool S3_GenerateUrl(const char *bucket, const char *path, CkDateTime &expire, CkString &outStr);

	// This method creates a temporary pre-signed URL for Amazon S3 using AWS Signature
	// V2 . Ensure that valid values are set for AwsSecretKey and AwsAccessKey before
	// calling this method.
	// 
	// Note: This method only generates URLs for HTTP GET requests, suitable for
	// pasting into a browser address bar. It does not support generating URLs for
	// other request types such as POST, PUT, or DELETE.
	// 
	// 
	// References:
	// 1: #AwsSecretKey
	// 2: #AwsAccessKey
	const char *s3_GenerateUrl(const char *bucket, const char *path, CkDateTime &expire);

	// This method generates a temporary pre-signed URL for Amazon S3 using AWS
	// Signature V4 . Before calling this method, ensure that the AwsSecretKey ,
	// AwsAccessKey , and AwsRegion properties are set to valid values. If your
	// endpoint differs from s3.amazonaws.com, set the AwsEndpoint property
	// accordingly.
	// 
	// awsService specifies the AWS service name, such as s3. If useHttps is true, the URL will
	// start with https:// ; otherwise, it will start with http:// .
	// 
	// Note: This method only generates URLs for HTTP GET requests, which can be used
	// in a browser address bar. It does not support generating URLs for other request
	// types, such as POST, PUT, or DELETE.
	// 
	// A pre-signed URL has this format:https:////?X-Amz-Algorithm=AWS4-HMAC-SHA256
	// &X-Amz-Credential=////aws4_request
	// &X-Amz-Date=&X-Amz-Expires=&X-Amz-SignedHeaders=host
	// &X-Amz-Signature=
	// 
	// 
	// References:
	// 1: #AwsSecretKey
	// 2: #AwsAccessKey
	// 3: #AwsRegion
	// 4: #AwsEndpoint
	bool S3_GenerateUrlV4(bool useHttps, const char *bucketName, const char *path, int numSecondsValid, const char *awsService, CkString &outStr);

	// This method generates a temporary pre-signed URL for Amazon S3 using AWS
	// Signature V4 . Before calling this method, ensure that the AwsSecretKey ,
	// AwsAccessKey , and AwsRegion properties are set to valid values. If your
	// endpoint differs from s3.amazonaws.com, set the AwsEndpoint property
	// accordingly.
	// 
	// awsService specifies the AWS service name, such as s3. If useHttps is true, the URL will
	// start with https:// ; otherwise, it will start with http:// .
	// 
	// Note: This method only generates URLs for HTTP GET requests, which can be used
	// in a browser address bar. It does not support generating URLs for other request
	// types, such as POST, PUT, or DELETE.
	// 
	// A pre-signed URL has this format:https:////?X-Amz-Algorithm=AWS4-HMAC-SHA256
	// &X-Amz-Credential=////aws4_request
	// &X-Amz-Date=&X-Amz-Expires=&X-Amz-SignedHeaders=host
	// &X-Amz-Signature=
	// 
	// 
	// References:
	// 1: #AwsSecretKey
	// 2: #AwsAccessKey
	// 3: #AwsRegion
	// 4: #AwsEndpoint
	const char *s3_GenerateUrlV4(bool useHttps, const char *bucketName, const char *path, int numSecondsValid, const char *awsService);

	// This method generates a temporary pre-signed URL for Amazon S3. Before calling
	// this method, ensure the following properties are set to valid values:
	// AwsSecretKey , AwsAccessKey , and AwsRegion . If the endpoint differs from
	// s3.amazonaws.com , set the AwsEndpoint property accordingly.
	// 
	// httpVerb is the HTTP verb (e.g., GET , PUT , POST , DELETE ). awsService is the name of
	// the AWS service (e.g., s3 , s3-accelerate ). If useHttps is true, the returned URL
	// will start with https:// ; otherwise, it will start with http:// .
	// 
	// The generated URL has this format:https:////?X-Amz-Algorithm=AWS4-HMAC-SHA256
	// &X-Amz-Credential=////aws4_request
	// &X-Amz-Date=&X-Amz-Expires=&X-Amz-SignedHeaders=host
	// &X-Amz-Signature=
	// 
	// 
	// References:
	// 1: #AwsSecretKey
	// 2: #AwsAccessKey
	// 3: #AwsRegion
	// 4: #AwsEndpoint
	bool S3_GenPresignedUrl(const char *httpVerb, bool useHttps, const char *bucketName, const char *path, int numSecondsValid, const char *awsService, CkString &outStr);

	// This method generates a temporary pre-signed URL for Amazon S3. Before calling
	// this method, ensure the following properties are set to valid values:
	// AwsSecretKey , AwsAccessKey , and AwsRegion . If the endpoint differs from
	// s3.amazonaws.com , set the AwsEndpoint property accordingly.
	// 
	// httpVerb is the HTTP verb (e.g., GET , PUT , POST , DELETE ). awsService is the name of
	// the AWS service (e.g., s3 , s3-accelerate ). If useHttps is true, the returned URL
	// will start with https:// ; otherwise, it will start with http:// .
	// 
	// The generated URL has this format:https:////?X-Amz-Algorithm=AWS4-HMAC-SHA256
	// &X-Amz-Credential=////aws4_request
	// &X-Amz-Date=&X-Amz-Expires=&X-Amz-SignedHeaders=host
	// &X-Amz-Signature=
	// 
	// 
	// References:
	// 1: #AwsSecretKey
	// 2: #AwsAccessKey
	// 3: #AwsRegion
	// 4: #AwsEndpoint
	const char *s3_GenPresignedUrl(const char *httpVerb, bool useHttps, const char *bucketName, const char *path, int numSecondsValid, const char *awsService);

	// Retrieve an XML-formatted list of objects in an Amazon S3 bucket, similar to a
	// directory listing.
	// 
	// bucketPath can include URL-encoded parameters. For example, to list objects in a
	// bucket named ChilkatABC with a max-keys value of 2000 and a marker of xyz , pass
	// the following string as bucketPath to the S3_ListBucketObjects method:
	// ChilkatABC?max-keys=2000&marker=xyz
	// 
	// This method recognizes all parameters listed in the AWS documentation for bucket
	// object listing: delimiter , marker , max-keys , and prefix . For further
	// details, refer to Amazon's AWS online documentation.
	// 
	bool S3_ListBucketObjects(const char *bucketPath, CkString &outStr);

	// Retrieve an XML-formatted list of objects in an Amazon S3 bucket, similar to a
	// directory listing.
	// 
	// bucketPath can include URL-encoded parameters. For example, to list objects in a
	// bucket named ChilkatABC with a max-keys value of 2000 and a marker of xyz , pass
	// the following string as bucketPath to the S3_ListBucketObjects method:
	// ChilkatABC?max-keys=2000&marker=xyz
	// 
	// This method recognizes all parameters listed in the AWS documentation for bucket
	// object listing: delimiter , marker , max-keys , and prefix . For further
	// details, refer to Amazon's AWS online documentation.
	// 
	const char *s3_ListBucketObjects(const char *bucketPath);
	// Retrieve an XML-formatted list of objects in an Amazon S3 bucket, similar to a
	// directory listing.
	// 
	// bucketPath can include URL-encoded parameters. For example, to list objects in a
	// bucket named ChilkatABC with a max-keys value of 2000 and a marker of xyz , pass
	// the following string as bucketPath to the S3_ListBucketObjects method:
	// ChilkatABC?max-keys=2000&marker=xyz
	// 
	// This method recognizes all parameters listed in the AWS documentation for bucket
	// object listing: delimiter , marker , max-keys , and prefix . For further
	// details, refer to Amazon's AWS online documentation.
	// 
	CkTask *S3_ListBucketObjectsAsync(const char *bucketPath);


	// Retrieves the XML listing of the buckets for an Amazon S3 account.
	bool S3_ListBuckets(CkString &outStr);

	// Retrieves the XML listing of the buckets for an Amazon S3 account.
	const char *s3_ListBuckets(void);
	// Retrieves the XML listing of the buckets for an Amazon S3 account.
	CkTask *S3_ListBucketsAsync(void);


	// Uploads the contents of bd as a file to the Amazon S3 service.
	// 
	// Note: x-amz-* headers, including metadata, can be added to any S3 request by
	// adding each header with a call to SetRequestHeader . This applies to all S3
	// methods, even if not explicitly stated.
	// 
	// Note: Ensure the AwsEndpoint property is set to the correct region if the bucket
	// is outside us-east-1 , for example, eu-central-1 . For S3-compatible services
	// like Wasabi , always set the AwsEndpoint , such as s3.wasabisys.com or
	// s3.eu-central-1.wasabisys.com .
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #AwsEndpoint
	bool S3_UploadBd(CkBinData &bd, const char *contentType, const char *bucketPath, const char *objectName);

	// Uploads the contents of bd as a file to the Amazon S3 service.
	// 
	// Note: x-amz-* headers, including metadata, can be added to any S3 request by
	// adding each header with a call to SetRequestHeader . This applies to all S3
	// methods, even if not explicitly stated.
	// 
	// Note: Ensure the AwsEndpoint property is set to the correct region if the bucket
	// is outside us-east-1 , for example, eu-central-1 . For S3-compatible services
	// like Wasabi , always set the AwsEndpoint , such as s3.wasabisys.com or
	// s3.eu-central-1.wasabisys.com .
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #AwsEndpoint
	CkTask *S3_UploadBdAsync(CkBinData &bd, const char *contentType, const char *bucketPath, const char *objectName);


	// Uploads the contents of contentBytes as a file to the Amazon S3 service.
	// 
	// Note: x-amz-* headers, including metadata, can be added to any S3 request by
	// adding each header with a call to SetRequestHeader . This applies to all S3
	// methods, even if not explicitly stated.
	// 
	// Note: Ensure the AwsEndpoint property is set to the correct region if the bucket
	// is outside us-east-1 , for example, eu-central-1 . For S3-compatible services
	// like Wasabi , always set the AwsEndpoint , such as s3.wasabisys.com or
	// s3.eu-central-1.wasabisys.com .
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #AwsEndpoint
	bool S3_UploadBytes(CkByteData &contentBytes, const char *contentType, const char *bucketPath, const char *objectName);

	// Uploads the contents of contentBytes as a file to the Amazon S3 service.
	// 
	// Note: x-amz-* headers, including metadata, can be added to any S3 request by
	// adding each header with a call to SetRequestHeader . This applies to all S3
	// methods, even if not explicitly stated.
	// 
	// Note: Ensure the AwsEndpoint property is set to the correct region if the bucket
	// is outside us-east-1 , for example, eu-central-1 . For S3-compatible services
	// like Wasabi , always set the AwsEndpoint , such as s3.wasabisys.com or
	// s3.eu-central-1.wasabisys.com .
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #AwsEndpoint
	CkTask *S3_UploadBytesAsync(CkByteData &contentBytes, const char *contentType, const char *bucketPath, const char *objectName);


	// Uploads a file to the Amazon S3 service.
	// 
	// Note: x-amz-* headers, including metadata, can be added to any S3 request by
	// adding each header with a call to SetRequestHeader . This applies to all S3
	// methods, even if not explicitly stated.
	// 
	// Note: Ensure the AwsEndpoint property is set to the correct region if the bucket
	// is outside us-east-1 , for example, eu-central-1 . For S3-compatible services
	// like Wasabi , always set the AwsEndpoint , such as s3.wasabisys.com or
	// s3.eu-central-1.wasabisys.com .
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #AwsEndpoint
	bool S3_UploadFile(const char *localFilePath, const char *contentType, const char *bucketPath, const char *objectName);

	// Uploads a file to the Amazon S3 service.
	// 
	// Note: x-amz-* headers, including metadata, can be added to any S3 request by
	// adding each header with a call to SetRequestHeader . This applies to all S3
	// methods, even if not explicitly stated.
	// 
	// Note: Ensure the AwsEndpoint property is set to the correct region if the bucket
	// is outside us-east-1 , for example, eu-central-1 . For S3-compatible services
	// like Wasabi , always set the AwsEndpoint , such as s3.wasabisys.com or
	// s3.eu-central-1.wasabisys.com .
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #AwsEndpoint
	CkTask *S3_UploadFileAsync(const char *localFilePath, const char *contentType, const char *bucketPath, const char *objectName);


	// Uploads the content of objectContent as a file to Amazon S3. charset specifies the string's
	// character encoding (byte representation).
	// 
	// Note: x-amz-* headers, including metadata, can be added to any S3 request by
	// adding each header with a call to SetRequestHeader . This applies to all S3
	// methods, even if not explicitly stated.
	// 
	// Note: Ensure the AwsEndpoint property is set to the correct region if the bucket
	// is outside us-east-1 , for example, eu-central-1 . For S3-compatible services
	// like Wasabi , always set the AwsEndpoint , such as s3.wasabisys.com or
	// s3.eu-central-1.wasabisys.com .
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #AwsEndpoint
	bool S3_UploadString(const char *objectContent, const char *charset, const char *contentType, const char *bucketPath, const char *objectName);

	// Uploads the content of objectContent as a file to Amazon S3. charset specifies the string's
	// character encoding (byte representation).
	// 
	// Note: x-amz-* headers, including metadata, can be added to any S3 request by
	// adding each header with a call to SetRequestHeader . This applies to all S3
	// methods, even if not explicitly stated.
	// 
	// Note: Ensure the AwsEndpoint property is set to the correct region if the bucket
	// is outside us-east-1 , for example, eu-central-1 . For S3-compatible services
	// like Wasabi , always set the AwsEndpoint , such as s3.wasabisys.com or
	// s3.eu-central-1.wasabisys.com .
	// 
	// 
	// References:
	// 1: #SetRequestHeader
	// 2: #AwsEndpoint
	CkTask *S3_UploadStringAsync(const char *objectContent, const char *charset, const char *contentType, const char *bucketPath, const char *objectName);


	// Sets the private key to be used with some forms of authentication. For example,
	// this is used automatically add the Authorization header (Signature) for Amazon
	// Pay requests.
	bool SetAuthPrivateKey(const char *publicKeyId, CkPrivateKey &privKey);


	// Sets the AuthToken property. The sb contains the OAuth2 access token to be
	// used.
	// 
	// References:
	// 1: #AuthToken
	bool SetAuthTokenSb(CkStringBuilder &sb);


	// This method restores cookies for a specified domain. It requires that the
	// cookies, previously obtained using the GetCookieXml method, are stored in a
	// persistent storage like a database or file. An application can then restore
	// these cookies using this method.
	// 
	// References:
	// 1: #GetCookieXml
	bool SetCookieXml(const char *domain, const char *cookieXml);


	// Sets the RSA key to be used with OAuth 1.0a authentication when the
	// OAuthSigMethod is RSA-SHA256 or RSA-SHA1 .
	// 
	// References:
	// 1: #OAuthSigMethod
	bool SetOAuthRsaKey(CkPrivateKey &privKey);


	// Adds a header field to be included in all HTTP requests, except for those sent
	// by the HttpReq and HttpSReq methods, which rely on header fields provided in an
	// HttpRequest object via method arguments. If the header field already exists, it
	// is replaced.
	// 
	// Use the RemoveRequestHeader method to delete a specific header. Setting a header
	// field to an empty string will also remove it, unless the AllowEmptyHeaders
	// option in UncommonOptions is used.
	// 
	// Avoid setting the Authorization header manually. Instead, use the appropriate
	// authorization properties such as Password , AuthToken , AuthSignature ,
	// BasicAuth , DigestAuth , NtlmAuth , OAuth1 , OAuthToken , etc.
	// 
	// To add cookies, use the Cookie header field format: Cookie: name1=value1;
	// name2=value2; name3=value3 .
	// 
	// Do not manually set the Content-Length header. Chilkat will automatically
	// calculate and include Content-Length when sending the HTTP request.
	// 
	// 
	// References:
	// 1: #HttpReq
	// 2: #HttpSReq
	// 3: #RemoveRequestHeader
	// 4: #UncommonOptions
	// 5: #Password
	// 6: #AuthToken
	// 7: #AuthSignature
	// 8: #BasicAuth
	// 9: #DigestAuth
	// 10: #NtlmAuth
	// 11: #OAuth1
	// 12: #OAuthToken
	void SetRequestHeader(const char *headerFieldName, const char *headerFieldValue);


	// Equivalent to setting the Password property but offers a more secure method by
	// using a secure string object.
	// 
	// References:
	// 1: #Password
	bool SetSecurePassword(CkSecureString &password);


	// Enforces a requirement on the server's certificate. The reqName can be one of the
	// following:
	//     * SubjectDN
	//     * SubjectCN
	//     * IssuerDN
	//     * IssuerCN
	//     * SAN
	// 
	// The reqName specifies the part of the certificate, and the reqValue is the value that
	// it must match exactly or with a wildcard (*), for example "*.example.com" . If
	// the server's certificate does not match, the SSL / TLS connection is aborted.
	// 
	void SetSslCertRequirement(const char *reqName, const char *reqValue);


	// Facilitates the use of a client-side certificate for a TLS connection, enabling
	// mutual authentication. In a standard TLS connection, the server alone presents a
	// certificate during the handshake to verify its identity. With mutual TLS (mTLS),
	// the client also presents a trusted certificate, allowing the server to
	// authenticate the client's identity. This process enhances security by adding a
	// layer of verification beyond just usernames, passwords, or tokens.
	bool SetSslClientCert(CkCert &cert);


	// This is identical to the SetSslClientCert method, but it allows the certificate
	// with a private key to be in PEM format.
	// 
	// References:
	// 1: #SetSslClientCert
	bool SetSslClientCertPem(const char *pemDataOrPath, const char *pemPassword);


	// This is identical to the SetSslClientCert method, but enables you to provide a
	// certificate with private key directly from a .pfx or .p12 file.
	// 
	// References:
	// 1: #SetSslClientCert
	bool SetSslClientCertPfx(const char *pfxPath, const char *pfxPassword);


	// Sets a variable's value for URL substitutions used in any method. Variables are
	// formatted as {$varName} in URLs, such as:
	// https://graph.microsoft.com/v1.0/users/{$id} .
	// 
	// Call ClearUrlVars to unset all URL variables.
	// 
	// 
	// References:
	// 1: #ClearUrlVars
	bool SetUrlVar(const char *name, const char *value);


	// This method authenticates with SharePoint Online and if successful, sets a
	// cookie which is used for all following SharePoint HTTP requests. Before using
	// this method, ensure you configure the CookieDir property to either memory or a
	// specific directory path to store the authentication cookie, which will then be
	// automatically used for subsequent HTTP requests.
	// 
	// Using this method automatically sets the SaveCookies and SendCookies properties
	// to true, as these settings are necessary for SharePoint Online authentication.
	// 
	// To use the method, provide the following arguments:
	//     * siteUrl: The URL, e.g., https://yourdomain.sharepoint.com/
	//     * username: An email address, e.g., username@yourdomain.com
	//     * password: The Sharepoint password.
	//     * extraInfo: Can be an empty JSON object. Reserved for additional information if
	//     needed in the future.
	// 
	// 
	// References:
	// 1: #CookieDir
	// 2: #SaveCookies
	// 3: #SendCookies
	bool SharePointOnlineAuth(const char *siteUrl, const char *username, CkSecureString &password, CkJsonObject &extraInfo);

	// This method authenticates with SharePoint Online and if successful, sets a
	// cookie which is used for all following SharePoint HTTP requests. Before using
	// this method, ensure you configure the CookieDir property to either memory or a
	// specific directory path to store the authentication cookie, which will then be
	// automatically used for subsequent HTTP requests.
	// 
	// Using this method automatically sets the SaveCookies and SendCookies properties
	// to true, as these settings are necessary for SharePoint Online authentication.
	// 
	// To use the method, provide the following arguments:
	//     * siteUrl: The URL, e.g., https://yourdomain.sharepoint.com/
	//     * username: An email address, e.g., username@yourdomain.com
	//     * password: The Sharepoint password.
	//     * extraInfo: Can be an empty JSON object. Reserved for additional information if
	//     needed in the future.
	// 
	// 
	// References:
	// 1: #CookieDir
	// 2: #SaveCookies
	// 3: #SendCookies
	CkTask *SharePointOnlineAuthAsync(const char *siteUrl, const char *username, CkSecureString &password, CkJsonObject &extraInfo);


	// This method makes the calling process sleep for a specified number of
	// milliseconds.
	void SleepMs(int millisec);


	// Applications should instead call HttpSReq .
	// 
	// Sends an explicit HttpRequest to an HTTP server and returns an HttpResponse
	// object. The HttpResponse object provides full access to the response including
	// all headers and the response body. This method may be used to send POST
	// requests, as well as GET, HEAD, file uploads, and XMLHTTP. To send via HTTPS
	// (i.e. TLS), set the ssl property = true. Otherwise set it to false.
	// 
	// NOTE: The 1st argument of this method is a domain, not a URL. For example, DO
	// NOT pass https://www.somedomain.com/ in the 1st argument. Instead, pass
	// www.somedomain.com .
	// 
	// The Parts of a URL
	// 
	// http://example.com:8042/over/there?name=ferret#nose
	// \__/   \______________/\_________/ \________/ \__/
	//  |           |            |            |        |
	// scheme   domain+port     path        query   fragment
	// The caller is responsible for deleting the object returned by this method.
	CkHttpResponse *SynchronousRequest(const char *domain, int port, bool ssl, CkHttpRequest &req);

	// Applications should instead call HttpSReq .
	// 
	// Sends an explicit HttpRequest to an HTTP server and returns an HttpResponse
	// object. The HttpResponse object provides full access to the response including
	// all headers and the response body. This method may be used to send POST
	// requests, as well as GET, HEAD, file uploads, and XMLHTTP. To send via HTTPS
	// (i.e. TLS), set the ssl property = true. Otherwise set it to false.
	// 
	// NOTE: The 1st argument of this method is a domain, not a URL. For example, DO
	// NOT pass https://www.somedomain.com/ in the 1st argument. Instead, pass
	// www.somedomain.com .
	// 
	// The Parts of a URL
	// 
	// http://example.com:8042/over/there?name=ferret#nose
	// \__/   \______________/\_________/ \________/ \__/
	//  |           |            |            |        |
	// scheme   domain+port     path        query   fragment
	CkTask *SynchronousRequestAsync(const char *domain, int port, bool ssl, CkHttpRequest &req);


	// URL decodes a string.
	bool UrlDecode(const char *str, CkString &outStr);

	// URL decodes a string.
	const char *urlDecode(const char *str);

	// URL encodes a string.
	bool UrlEncode(const char *str, CkString &outStr);

	// URL encodes a string.
	const char *urlEncode(const char *str);

	// Verifies a timestamp reply received from a timestamp authority (TSA). Returns
	// the following possible integer values:
	//     * -1: The timestampReply does not contain a valid timestamp reply.
	//     * -2: The timestampReply is a valid timestamp reply, but failed verification using the
	//     public key of the tsaCert.
	//     * 0: Granted and verified.
	//     * 1: Granted and verified, with mods (see RFC 3161)
	//     * 2: Rejected.
	//     * 3: Waiting.
	//     * 4: Revocation Warning
	//     * 5: Revocation Notification
	// 
	// If the timestamp reply (timestampReply) is known to be from a trusted source, then the
	// tsaCert may be empty. If tsaCert is empty (never loaded with a certificate), then the
	// verification will use the certificate embedded in the timestamp reply.
	// 
	// The CreateTimestampRequest method is used to create a timestamp request.
	// 
	// 
	// References:
	// 1: #CreateTimestampRequest
	int VerifyTimestampReply(CkBinData &timestampReply, CkCert &tsaCert);


	// Makes an XML RPC call to a URL endpoint. The XML string is passed in an HTTP
	// POST, and the XML response is returned.
	bool XmlRpc(const char *urlEndpoint, const char *xmlIn, CkString &outStr);

	// Makes an XML RPC call to a URL endpoint. The XML string is passed in an HTTP
	// POST, and the XML response is returned.
	const char *xmlRpc(const char *urlEndpoint, const char *xmlIn);
	// Makes an XML RPC call to a URL endpoint. The XML string is passed in an HTTP
	// POST, and the XML response is returned.
	CkTask *XmlRpcAsync(const char *urlEndpoint, const char *xmlIn);


	// Same as XmlRpc, but uses the HTTP PUT method instead of the POST method.
	bool XmlRpcPut(const char *urlEndpoint, const char *xmlIn, CkString &outStr);

	// Same as XmlRpc, but uses the HTTP PUT method instead of the POST method.
	const char *xmlRpcPut(const char *urlEndpoint, const char *xmlIn);
	// Same as XmlRpc, but uses the HTTP PUT method instead of the POST method.
	CkTask *XmlRpcPutAsync(const char *urlEndpoint, const char *xmlIn);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
