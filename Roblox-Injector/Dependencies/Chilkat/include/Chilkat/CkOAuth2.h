// CkOAuth2.h: interface for the CkOAuth2 class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.3.0

#define _CkVersion 11.3.0

#ifndef _CkOAuth2_H
#define _CkOAuth2_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkStringBuilder;
class CkSocket;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkOAuth2
class CK_VISIBLE_PUBLIC CkOAuth2  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkOAuth2(const CkOAuth2 &);
	CkOAuth2 &operator=(const CkOAuth2 &);

    public:
	CkOAuth2(void);
	virtual ~CkOAuth2(void);

	static CkOAuth2 *createNew(void);
	static CkOAuth2 *createNew2(int progLang);
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
	// Once the OAuth2 authorization code flow successfully completes in the background
	// thread, this property holds the access_token from the access token response. For
	// example, a Google API access token looks like this:ya29.a0AfH6SMC2z8Q1Z2X3Y ... 8M9N0O1P2Q3R4S5T6U7V8W9X0Y1Z2
	void get_AccessToken(CkString &str);
	// Once the OAuth2 authorization code flow successfully completes in the background
	// thread, this property holds the access_token from the access token response. For
	// example, a Google API access token looks like this:ya29.a0AfH6SMC2z8Q1Z2X3Y ... 8M9N0O1P2Q3R4S5T6U7V8W9X0Y1Z2
	const char *accessToken(void);
	// Once the OAuth2 authorization code flow successfully completes in the background
	// thread, this property holds the access_token from the access token response. For
	// example, a Google API access token looks like this:ya29.a0AfH6SMC2z8Q1Z2X3Y ... 8M9N0O1P2Q3R4S5T6U7V8W9X0Y1Z2
	void put_AccessToken(const char *newVal);

	// Once the OAuth2 authorization code flow successfully completes in the background
	// thread, this property holds the access_token JSON. For instance, a successful
	// X.com access token appears as follows:
	// 
	// {
	//   "token_type": "bearer",
	//   "expires_in": 7200,
	//   "access_token": "AAAAAAAAAAAAAAAAAAAAA...",
	//   "scope": "tweet.read tweet.write users.read offline.access",
	//   "refresh_token": "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"
	// }
	// 
	// padding-left: 20px;>Explanation of the Fields Field
	// Description
	// 
	// token_type
	// The type of token. Typically bearer .
	// 
	// expires_in
	// The lifetime of the access token in seconds (e.g., 7200 seconds = 2 hours).
	// 
	// access_token
	// The access token string used to authenticate API requests.
	// 
	// scope
	// The permissions granted to the access token (e.g., read/write tweets).
	// 
	// refresh_token
	// (Optional) A token used to obtain a new access token when the current one
	// expires. Often only provided if the offline.access scope was requested.
	// 
	// Note: Not all responses are JSON. A successful Facebook response is plain text
	// and looks like this:access_token=EAAZALuOC1wAwBAKH6FKnxOkjfEP ... UBZBhYD5hSVBETBx6AZD&expires=5134653
	// 
	void get_AccessTokenResponse(CkString &str);
	// Once the OAuth2 authorization code flow successfully completes in the background
	// thread, this property holds the access_token JSON. For instance, a successful
	// X.com access token appears as follows:
	// 
	// {
	//   "token_type": "bearer",
	//   "expires_in": 7200,
	//   "access_token": "AAAAAAAAAAAAAAAAAAAAA...",
	//   "scope": "tweet.read tweet.write users.read offline.access",
	//   "refresh_token": "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"
	// }
	// 
	// padding-left: 20px;>Explanation of the Fields Field
	// Description
	// 
	// token_type
	// The type of token. Typically bearer .
	// 
	// expires_in
	// The lifetime of the access token in seconds (e.g., 7200 seconds = 2 hours).
	// 
	// access_token
	// The access token string used to authenticate API requests.
	// 
	// scope
	// The permissions granted to the access token (e.g., read/write tweets).
	// 
	// refresh_token
	// (Optional) A token used to obtain a new access token when the current one
	// expires. Often only provided if the offline.access scope was requested.
	// 
	// Note: Not all responses are JSON. A successful Facebook response is plain text
	// and looks like this:access_token=EAAZALuOC1wAwBAKH6FKnxOkjfEP ... UBZBhYD5hSVBETBx6AZD&expires=5134653
	// 
	const char *accessTokenResponse(void);

	// This property should only be set if the OAuth2 provider does not allow localhost
	// or loopback (127.0.0.1) redirect URLs, or requires https:// redirect URLs.
	// 
	// The AppCallbackUrl is a URL that is an endpoint on your own web server that will
	// act as an Intermediary to redirect back to localhost. For more information, see
	// Using Your Web Server as an Intermediary for OAuth2 Redirect to localhost.
	// 
	// 
	// References:
	// 1: https://www.chilkatsoft.com/oauth2_intermediary_public_web_server.asp
	void get_AppCallbackUrl(CkString &str);
	// This property should only be set if the OAuth2 provider does not allow localhost
	// or loopback (127.0.0.1) redirect URLs, or requires https:// redirect URLs.
	// 
	// The AppCallbackUrl is a URL that is an endpoint on your own web server that will
	// act as an Intermediary to redirect back to localhost. For more information, see
	// Using Your Web Server as an Intermediary for OAuth2 Redirect to localhost.
	// 
	// 
	// References:
	// 1: https://www.chilkatsoft.com/oauth2_intermediary_public_web_server.asp
	const char *appCallbackUrl(void);
	// This property should only be set if the OAuth2 provider does not allow localhost
	// or loopback (127.0.0.1) redirect URLs, or requires https:// redirect URLs.
	// 
	// The AppCallbackUrl is a URL that is an endpoint on your own web server that will
	// act as an Intermediary to redirect back to localhost. For more information, see
	// Using Your Web Server as an Intermediary for OAuth2 Redirect to localhost.
	// 
	// 
	// References:
	// 1: https://www.chilkatsoft.com/oauth2_intermediary_public_web_server.asp
	void put_AppCallbackUrl(const char *newVal);

	// 
	// 
	// Indicates the current stage of the OAuth2 authorization flow. Possible values:
	// 
	//     * 0: Idle. No OAuth2 flow has been initiated.
	//     * 1: Awaiting Redirect. The OAuth2 background thread is waiting for the
	//     browser's redirect HTTP request.
	//     * 2: Awaiting Final Response. The OAuth2 background thread is waiting for
	//     the final access token response.
	//     * 3: Success. The OAuth2 flow completed successfully. The background thread
	//     has exited, and the JSON response is available in the AccessTokenResponse
	//     property.
	//     * 4: Access Denied. The OAuth2 flow completed, but access was denied. The
	//     background thread has exited, and the error JSON is available in the
	//     AccessTokenResponse property.
	//     * 5: Failed. The OAuth2 flow failed before completion. The background thread
	//     has exited, and error details are available in the FailureInfo property.
	int get_AuthFlowState(void);

	// You'll need to know the authorization and token endpoints for your OAuth2
	// provider. Set this property to the authorization endpoint. Some providers have
	// both sandbox and production endpoints. Here are some sample endpoints:
	// padding-left: 20px; font-size: 12px;> 1.0 encoding= utf-8 ?> Platform
	// Authorization Endpoint
	// Token Endpoint
	// 
	// Google
	// https://accounts.google.com/o/oauth2/v2/auth
	// https://www.googleapis.com/oauth2/v4/token
	// 
	// Microsoft
	// https://login.microsoftonline.com/{tenant}/oauth2/v2.0/authorize
	// https://login.microsoftonline.com/{tenant}/oauth2/v2.0/token
	// 
	// X.com
	// https://x.com/i/oauth2/authorize
	// https://api.x.com/2/oauth2/token
	// 
	// Salesforce
	// https://login.salesforce.com/services/oauth2/authorize
	// https://login.salesforce.com/services/oauth2/token
	// 
	// QuickBooks
	// https://appcenter.intuit.com/connect/oauth2
	// https://oauth.platform.intuit.com/oauth2/v1/tokens/bearer
	// 
	void get_AuthorizationEndpoint(CkString &str);
	// You'll need to know the authorization and token endpoints for your OAuth2
	// provider. Set this property to the authorization endpoint. Some providers have
	// both sandbox and production endpoints. Here are some sample endpoints:
	// padding-left: 20px; font-size: 12px;> 1.0 encoding= utf-8 ?> Platform
	// Authorization Endpoint
	// Token Endpoint
	// 
	// Google
	// https://accounts.google.com/o/oauth2/v2/auth
	// https://www.googleapis.com/oauth2/v4/token
	// 
	// Microsoft
	// https://login.microsoftonline.com/{tenant}/oauth2/v2.0/authorize
	// https://login.microsoftonline.com/{tenant}/oauth2/v2.0/token
	// 
	// X.com
	// https://x.com/i/oauth2/authorize
	// https://api.x.com/2/oauth2/token
	// 
	// Salesforce
	// https://login.salesforce.com/services/oauth2/authorize
	// https://login.salesforce.com/services/oauth2/token
	// 
	// QuickBooks
	// https://appcenter.intuit.com/connect/oauth2
	// https://oauth.platform.intuit.com/oauth2/v1/tokens/bearer
	// 
	const char *authorizationEndpoint(void);
	// You'll need to know the authorization and token endpoints for your OAuth2
	// provider. Set this property to the authorization endpoint. Some providers have
	// both sandbox and production endpoints. Here are some sample endpoints:
	// padding-left: 20px; font-size: 12px;> 1.0 encoding= utf-8 ?> Platform
	// Authorization Endpoint
	// Token Endpoint
	// 
	// Google
	// https://accounts.google.com/o/oauth2/v2/auth
	// https://www.googleapis.com/oauth2/v4/token
	// 
	// Microsoft
	// https://login.microsoftonline.com/{tenant}/oauth2/v2.0/authorize
	// https://login.microsoftonline.com/{tenant}/oauth2/v2.0/token
	// 
	// X.com
	// https://x.com/i/oauth2/authorize
	// https://api.x.com/2/oauth2/token
	// 
	// Salesforce
	// https://login.salesforce.com/services/oauth2/authorize
	// https://login.salesforce.com/services/oauth2/token
	// 
	// QuickBooks
	// https://appcenter.intuit.com/connect/oauth2
	// https://oauth.platform.intuit.com/oauth2/v1/tokens/bearer
	// 
	void put_AuthorizationEndpoint(const char *newVal);

	// Should be set to the Client ID assigned to your application when it is
	// registered with an OAuth2 authorization server. It is used to identify the
	// application making the authorization request.
	void get_ClientId(CkString &str);
	// Should be set to the Client ID assigned to your application when it is
	// registered with an OAuth2 authorization server. It is used to identify the
	// application making the authorization request.
	const char *clientId(void);
	// Should be set to the Client ID assigned to your application when it is
	// registered with an OAuth2 authorization server. It is used to identify the
	// application making the authorization request.
	void put_ClientId(const char *newVal);

	// Set this to the client secret assigned to an application when it is registered
	// with an OAuth2 authorization server.
	void get_ClientSecret(CkString &str);
	// Set this to the client secret assigned to an application when it is registered
	// with an OAuth2 authorization server.
	const char *clientSecret(void);
	// Set this to the client secret assigned to an application when it is registered
	// with an OAuth2 authorization server.
	void put_ClientSecret(const char *newVal);

	// Set this to true to enable PKCE (Proof Key for Code Exchange). The default
	// value is false.
	bool get_CodeChallenge(void);
	// Set this to true to enable PKCE (Proof Key for Code Exchange). The default
	// value is false.
	void put_CodeChallenge(bool newVal);

	// This selects the code challenge method for PKCE, and applies only when the
	// CodeChallenge property is set to true. The available options are plain and
	// S256 , with S256 as the default.
	void get_CodeChallengeMethod(CkString &str);
	// This selects the code challenge method for PKCE, and applies only when the
	// CodeChallenge property is set to true. The available options are plain and
	// S256 , with S256 as the default.
	const char *codeChallengeMethod(void);
	// This selects the code challenge method for PKCE, and applies only when the
	// CodeChallenge property is set to true. The available options are plain and
	// S256 , with S256 as the default.
	void put_CodeChallengeMethod(const char *newVal);

	// If the OAuth2 authorization fails before completion (AuthFlowState = 5), this
	// property will contain failure details. It is automatically cleared when OAuth2
	// authorization begins (when StartAuth is called).
	void get_FailureInfo(CkString &str);
	// If the OAuth2 authorization fails before completion (AuthFlowState = 5), this
	// property will contain failure details. It is automatically cleared when OAuth2
	// authorization begins (when StartAuth is called).
	const char *failureInfo(void);

	// Optional. Set this to true to send a nonce with the authorization request. The
	// length of the nonce is determined by the NonceLength property. The default value
	// is false.
	// 
	// In OAuth, the nonce is a unique, random value included in the authorization
	// request to prevent Replay Attacks:
	//     * The nonce ensures that an authorization request cannot be reused by an
	//     attacker.
	//     * It binds the authorization request to a specific instance, preventing
	//     malicious reuse.
	// 
	bool get_IncludeNonce(void);
	// Optional. Set this to true to send a nonce with the authorization request. The
	// length of the nonce is determined by the NonceLength property. The default value
	// is false.
	// 
	// In OAuth, the nonce is a unique, random value included in the authorization
	// request to prevent Replay Attacks:
	//     * The nonce ensures that an authorization request cannot be reused by an
	//     attacker.
	//     * It binds the authorization request to a specific instance, preventing
	//     malicious reuse.
	// 
	void put_IncludeNonce(bool newVal);

	// Set this to the port number to be used for receiving the redirect request from
	// the local browser. Use a port in the range 1024 to 65535 to avoid conflicts with
	// reserved system ports. Avoid well-known ports like 80, 443, 22, etc., as they
	// are used by system services.
	// 
	// Note: The chosen port number determines the redirect URL defined for your app in
	// the OAuth2 provider's developer portal. For example, if port 3017 is chosen,
	// then your redirect URL should be http://localhost:3017/ .
	// 
	// Note:
	// 
	//     * You must use http: , not https: . Because the browser and your application
	//     are running on the same machine, the redirect request is handled entirely within
	//     the operating system. It never leaves the machine, so it cannot be intercepted
	//     on the network.
	//     * The / terminating the redirect URL is critical and must be included. Do
	//     not omit it, otherwise the OAuth2 authorization will fail.
	//     * If the LocalHost property (see below) is set to 127.0.0.1 , then the
	//     redirect URL defined for your App in the OAuth2 provider's developer portal
	//     should use 127.0.0.1 instead of localhost . For example:
	//     http://127.0.0.1:3017/
	int get_ListenPort(void);
	// Set this to the port number to be used for receiving the redirect request from
	// the local browser. Use a port in the range 1024 to 65535 to avoid conflicts with
	// reserved system ports. Avoid well-known ports like 80, 443, 22, etc., as they
	// are used by system services.
	// 
	// Note: The chosen port number determines the redirect URL defined for your app in
	// the OAuth2 provider's developer portal. For example, if port 3017 is chosen,
	// then your redirect URL should be http://localhost:3017/ .
	// 
	// Note:
	// 
	//     * You must use http: , not https: . Because the browser and your application
	//     are running on the same machine, the redirect request is handled entirely within
	//     the operating system. It never leaves the machine, so it cannot be intercepted
	//     on the network.
	//     * The / terminating the redirect URL is critical and must be included. Do
	//     not omit it, otherwise the OAuth2 authorization will fail.
	//     * If the LocalHost property (see below) is set to 127.0.0.1 , then the
	//     redirect URL defined for your App in the OAuth2 provider's developer portal
	//     should use 127.0.0.1 instead of localhost . For example:
	//     http://127.0.0.1:3017/
	void put_ListenPort(int newVal);

	// This property allows for a range of listen port numbers to be used. If set to a
	// non-zero value, then Chilkat will use an unused port in the range from
	// ListenPort to ListenPortRangeEnd .
	// 
	// For example, if ListenPort=55110 and ListenPortRangeEnd=55117 , then define the
	// following redirect URL's for your app in the OAuth2 provider's developer portal:
	// 
	//     * http://localhost:55110/
	//     * http://localhost:55112/
	//     * http://localhost:55113/
	//     * http://localhost:55114/
	//     * http://localhost:55115/
	//     * http://localhost:55116/
	//     * http://localhost:55117/
	int get_ListenPortRangeEnd(void);
	// This property allows for a range of listen port numbers to be used. If set to a
	// non-zero value, then Chilkat will use an unused port in the range from
	// ListenPort to ListenPortRangeEnd .
	// 
	// For example, if ListenPort=55110 and ListenPortRangeEnd=55117 , then define the
	// following redirect URL's for your app in the OAuth2 provider's developer portal:
	// 
	//     * http://localhost:55110/
	//     * http://localhost:55112/
	//     * http://localhost:55113/
	//     * http://localhost:55114/
	//     * http://localhost:55115/
	//     * http://localhost:55116/
	//     * http://localhost:55117/
	void put_ListenPortRangeEnd(int newVal);

	// This is a read-only property that gets set when the OAuth2 authorization flow
	// completes. It contains the port number that was used when receiving the redirect
	// callback.
	int get_ListenPortSelected(void);

	// Chooses between http://localhost:{portNumber}/ or http://127.0.0.1:{portNumber}/
	// to be used for the redirect (callback) URL. The default value is localhost . An
	// application can change this property to 127.0.0.1 if desired. See the X.com
	// example linked below, which uses http://127.0.0.1:3017/ .
	void get_LocalHost(CkString &str);
	// Chooses between http://localhost:{portNumber}/ or http://127.0.0.1:{portNumber}/
	// to be used for the redirect (callback) URL. The default value is localhost . An
	// application can change this property to 127.0.0.1 if desired. See the X.com
	// example linked below, which uses http://127.0.0.1:3017/ .
	const char *localHost(void);
	// Chooses between http://localhost:{portNumber}/ or http://127.0.0.1:{portNumber}/
	// to be used for the redirect (callback) URL. The default value is localhost . An
	// application can change this property to 127.0.0.1 if desired. See the X.com
	// example linked below, which uses http://127.0.0.1:3017/ .
	void put_LocalHost(const char *newVal);

	// The nonce length, measured in bytes, is defined here. A nonce is included only
	// when the IncludeNonce property is set to true. Since the nonce is a
	// hexadecimal string, its character length is double its byte length. By default,
	// the nonce is 4 bytes long.
	int get_NonceLength(void);
	// The nonce length, measured in bytes, is defined here. A nonce is included only
	// when the IncludeNonce property is set to true. Since the nonce is a
	// hexadecimal string, its character length is double its byte length. By default,
	// the nonce is 4 bytes long.
	void put_NonceLength(int newVal);

	// Set to true if the redirect URI is to be set to urn:ietf:wg:oauth:2.0:oob and
	// the authorization code will be supplied manually and passed to
	// ExchangeCodeForToken . The default value is false.
	// 
	// This is for the Out-of-Band) flow, which is a legacy flow where the
	// authorization code is delivered to the client application through an out-of-band
	// mechanism, such as manually copying and pasting the code, rather than being
	// automatically redirected via a redirect_uri . This flow was historically used
	// for applications that couldn't securely handle redirects, such as native or
	// mobile apps, but it has largely been deprecated in favor of more secure flows
	// like PKCE (Proof Key for Code Exchange).
	// 
	bool get_Oob(void);
	// Set to true if the redirect URI is to be set to urn:ietf:wg:oauth:2.0:oob and
	// the authorization code will be supplied manually and passed to
	// ExchangeCodeForToken . The default value is false.
	// 
	// This is for the Out-of-Band) flow, which is a legacy flow where the
	// authorization code is delivered to the client application through an out-of-band
	// mechanism, such as manually copying and pasting the code, rather than being
	// automatically redirected via a redirect_uri . This flow was historically used
	// for applications that couldn't securely handle redirects, such as native or
	// mobile apps, but it has largely been deprecated in favor of more secure flows
	// like PKCE (Proof Key for Code Exchange).
	// 
	void put_Oob(bool newVal);

	// This property holds the HTML displayed in the browser when the end-user grants
	// access. By default, it includes a META refresh directing to
	// https://www.chilkatsoft.com/oauth2_allowed.html . Your application can modify
	// this HTML to show any content when access is granted. You might want to change
	// the refresh URL to a page on your company’s website or use simple HTML to
	// display custom information without redirection.
	// 
	// The default value of this property is:
	// 
	// <html>
	//   <head><meta http-equiv='refresh' content='0;url=https://www.chilkatsoft.com/oauth2_allowed.html'></head>
	//   <body>Thank you for allowing access.</body>
	// </html>
	void get_RedirectAllowHtml(CkString &str);
	// This property holds the HTML displayed in the browser when the end-user grants
	// access. By default, it includes a META refresh directing to
	// https://www.chilkatsoft.com/oauth2_allowed.html . Your application can modify
	// this HTML to show any content when access is granted. You might want to change
	// the refresh URL to a page on your company’s website or use simple HTML to
	// display custom information without redirection.
	// 
	// The default value of this property is:
	// 
	// <html>
	//   <head><meta http-equiv='refresh' content='0;url=https://www.chilkatsoft.com/oauth2_allowed.html'></head>
	//   <body>Thank you for allowing access.</body>
	// </html>
	const char *redirectAllowHtml(void);
	// This property holds the HTML displayed in the browser when the end-user grants
	// access. By default, it includes a META refresh directing to
	// https://www.chilkatsoft.com/oauth2_allowed.html . Your application can modify
	// this HTML to show any content when access is granted. You might want to change
	// the refresh URL to a page on your company’s website or use simple HTML to
	// display custom information without redirection.
	// 
	// The default value of this property is:
	// 
	// <html>
	//   <head><meta http-equiv='refresh' content='0;url=https://www.chilkatsoft.com/oauth2_allowed.html'></head>
	//   <body>Thank you for allowing access.</body>
	// </html>
	void put_RedirectAllowHtml(const char *newVal);

	// This property holds the HTML displayed in the browser when the end-user denies
	// access. By default, it includes a META refresh directing to
	// https://www.chilkatsoft.com/oauth2_denied.html . Your application can modify
	// this HTML to show any content when access is granted. You might want to change
	// the refresh URL to a page on your company’s website or use simple HTML to
	// display custom information without redirection.
	// 
	// The default value of this property is:
	// 
	// <html>
	//   <head><meta http-equiv='refresh' content='0;url=https://www.chilkatsoft.com/oauth2_denied.html'></head>
	//   <body>The app will not have access.</body>
	//   </html>
	void get_RedirectDenyHtml(CkString &str);
	// This property holds the HTML displayed in the browser when the end-user denies
	// access. By default, it includes a META refresh directing to
	// https://www.chilkatsoft.com/oauth2_denied.html . Your application can modify
	// this HTML to show any content when access is granted. You might want to change
	// the refresh URL to a page on your company’s website or use simple HTML to
	// display custom information without redirection.
	// 
	// The default value of this property is:
	// 
	// <html>
	//   <head><meta http-equiv='refresh' content='0;url=https://www.chilkatsoft.com/oauth2_denied.html'></head>
	//   <body>The app will not have access.</body>
	//   </html>
	const char *redirectDenyHtml(void);
	// This property holds the HTML displayed in the browser when the end-user denies
	// access. By default, it includes a META refresh directing to
	// https://www.chilkatsoft.com/oauth2_denied.html . Your application can modify
	// this HTML to show any content when access is granted. You might want to change
	// the refresh URL to a page on your company’s website or use simple HTML to
	// display custom information without redirection.
	// 
	// The default value of this property is:
	// 
	// <html>
	//   <head><meta http-equiv='refresh' content='0;url=https://www.chilkatsoft.com/oauth2_denied.html'></head>
	//   <body>The app will not have access.</body>
	//   </html>
	void put_RedirectDenyHtml(const char *newVal);

	// Contains the HTTP redirect request received from the local web browser. This is
	// used for debugging.
	// 
	// Here is a sample:GET /?state=lW6hdb-jSR2ntNCZ9NMzVozWaxuSpkaSLs8SZCDZsjI&code=NU1nbUN ...... FjOjE HTTP/1.1
	// Host: 127.0.0.1:3017
	// Connection: keep-alive
	// sec-ch-ua: "Not(A:Brand";v="99", "Microsoft Edge";v="133", "Chromium";v="133"
	// sec-ch-ua-mobile: ?0
	// sec-ch-ua-platform: "Windows"
	// DNT: 1
	// Upgrade-Insecure-Requests: 1
	// User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/133.0.0.0 Safari/537.36 Edg/133.0.0.0
	// Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7
	// Sec-Fetch-Site: cross-site
	// Sec-Fetch-Mode: navigate
	// Sec-Fetch-User: ?1
	// Sec-Fetch-Dest: document
	// Accept-Encoding: gzip, deflate, br, zstd
	// Accept-Language: en-US,en;q=0.9
	// 
	void get_RedirectReqReceived(CkString &str);
	// Contains the HTTP redirect request received from the local web browser. This is
	// used for debugging.
	// 
	// Here is a sample:GET /?state=lW6hdb-jSR2ntNCZ9NMzVozWaxuSpkaSLs8SZCDZsjI&code=NU1nbUN ...... FjOjE HTTP/1.1
	// Host: 127.0.0.1:3017
	// Connection: keep-alive
	// sec-ch-ua: "Not(A:Brand";v="99", "Microsoft Edge";v="133", "Chromium";v="133"
	// sec-ch-ua-mobile: ?0
	// sec-ch-ua-platform: "Windows"
	// DNT: 1
	// Upgrade-Insecure-Requests: 1
	// User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/133.0.0.0 Safari/537.36 Edg/133.0.0.0
	// Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7
	// Sec-Fetch-Site: cross-site
	// Sec-Fetch-Mode: navigate
	// Sec-Fetch-User: ?1
	// Sec-Fetch-Dest: document
	// Accept-Encoding: gzip, deflate, br, zstd
	// Accept-Language: en-US,en;q=0.9
	// 
	const char *redirectReqReceived(void);

	// Once the OAuth2 authorization code flow successfully completes in the background
	// thread, this property holds the refresh_token from the access token response.
	// For example, an X.com refresh token looks like this:NmJjUC1aX2VDZnFzaE5ObFp ..... OjE3NDAxNzM0MTcyNjI6MTowOnJ0OjE
	void get_RefreshToken(CkString &str);
	// Once the OAuth2 authorization code flow successfully completes in the background
	// thread, this property holds the refresh_token from the access token response.
	// For example, an X.com refresh token looks like this:NmJjUC1aX2VDZnFzaE5ObFp ..... OjE3NDAxNzM0MTcyNjI6MTowOnJ0OjE
	const char *refreshToken(void);
	// Once the OAuth2 authorization code flow successfully completes in the background
	// thread, this property holds the refresh_token from the access token response.
	// For example, an X.com refresh token looks like this:NmJjUC1aX2VDZnFzaE5ObFp ..... OjE3NDAxNzM0MTcyNjI6MTowOnJ0OjE
	void put_RefreshToken(const char *newVal);

	// This optional setting specifies the resource query parameter. For instance, set
	// it to https://graph.microsoft.com/ for Microsoft Graph API calls. It is also
	// needed for Microsoft Dynamics CRM OAuth authentication.
	void get_Resource(CkString &str);
	// This optional setting specifies the resource query parameter. For instance, set
	// it to https://graph.microsoft.com/ for Microsoft Graph API calls. It is also
	// needed for Microsoft Dynamics CRM OAuth authentication.
	const char *resource(void);
	// This optional setting specifies the resource query parameter. For instance, set
	// it to https://graph.microsoft.com/ for Microsoft Graph API calls. It is also
	// needed for Microsoft Dynamics CRM OAuth authentication.
	void put_Resource(const char *newVal);

	// Can be set to form_post to include a response_mode=form_post in the
	// authorization request. The default value is the empty string to omit the
	// response_mode query param.
	void get_ResponseMode(CkString &str);
	// Can be set to form_post to include a response_mode=form_post in the
	// authorization request. The default value is the empty string to omit the
	// response_mode query param.
	const char *responseMode(void);
	// Can be set to form_post to include a response_mode=form_post in the
	// authorization request. The default value is the empty string to omit the
	// response_mode query param.
	void put_ResponseMode(const char *newVal);

	// The default value is code . Can be set to id_token+code for cases where
	// response_type=id_token+code is required in the authorization request.
	void get_ResponseType(CkString &str);
	// The default value is code . Can be set to id_token+code for cases where
	// response_type=id_token+code is required in the authorization request.
	const char *responseType(void);
	// The default value is code . Can be set to id_token+code for cases where
	// response_type=id_token+code is required in the authorization request.
	void put_ResponseType(const char *newVal);

	// In OAuth2, scopes are permissions that specify what access level the client
	// application is requesting for a user's resources. Scopes are included in the
	// authorization request to ask for specific permissions. The user reviews and
	// consents to these scopes before authorization.
	// 
	// Scopes are typically formatted with a SPACE char separating each requested
	// scope. Here's an example for Google Drive:
	// 
	// openid email profile https://www.googleapis.com/auth/drive.readonly
	//     * openid : Access to basic profile information.
	//     * email : Access to the user’s email address.
	//     * profile : Access to the user's profile information.
	//     * drive.readonly : Read-only access to Google Drive files.
	void get_Scope(CkString &str);
	// In OAuth2, scopes are permissions that specify what access level the client
	// application is requesting for a user's resources. Scopes are included in the
	// authorization request to ask for specific permissions. The user reviews and
	// consents to these scopes before authorization.
	// 
	// Scopes are typically formatted with a SPACE char separating each requested
	// scope. Here's an example for Google Drive:
	// 
	// openid email profile https://www.googleapis.com/auth/drive.readonly
	//     * openid : Access to basic profile information.
	//     * email : Access to the user’s email address.
	//     * profile : Access to the user's profile information.
	//     * drive.readonly : Read-only access to Google Drive files.
	const char *scope(void);
	// In OAuth2, scopes are permissions that specify what access level the client
	// application is requesting for a user's resources. Scopes are included in the
	// authorization request to ask for specific permissions. The user reviews and
	// consents to these scopes before authorization.
	// 
	// Scopes are typically formatted with a SPACE char separating each requested
	// scope. Here's an example for Google Drive:
	// 
	// openid email profile https://www.googleapis.com/auth/drive.readonly
	//     * openid : Access to basic profile information.
	//     * email : Access to the user’s email address.
	//     * profile : Access to the user's profile information.
	//     * drive.readonly : Read-only access to Google Drive files.
	void put_Scope(const char *newVal);

	// Allows the application to explicitly set the state parameter to a value.
	// Typically this property should remain unset, and Chilkat will automatically
	// generate a random state. (The generated random state is not reflected in this
	// property. In other words, you can't get the random state that was generated by
	// reading this property.)
	// 
	// Note: The special string {listenPort} can be included in the value of this
	// property. Chilkat will replace {listenPort} with the actual listen port used.
	// This can be useful if your application is listening on range of ports and you
	// want the state param to include the chosen port.
	// 
	void get_StateParam(CkString &str);
	// Allows the application to explicitly set the state parameter to a value.
	// Typically this property should remain unset, and Chilkat will automatically
	// generate a random state. (The generated random state is not reflected in this
	// property. In other words, you can't get the random state that was generated by
	// reading this property.)
	// 
	// Note: The special string {listenPort} can be included in the value of this
	// property. Chilkat will replace {listenPort} with the actual listen port used.
	// This can be useful if your application is listening on range of ports and you
	// want the state param to include the chosen port.
	// 
	const char *stateParam(void);
	// Allows the application to explicitly set the state parameter to a value.
	// Typically this property should remain unset, and Chilkat will automatically
	// generate a random state. (The generated random state is not reflected in this
	// property. In other words, you can't get the random state that was generated by
	// reading this property.)
	// 
	// Note: The special string {listenPort} can be included in the value of this
	// property. Chilkat will replace {listenPort} with the actual listen port used.
	// This can be useful if your application is listening on range of ports and you
	// want the state param to include the chosen port.
	// 
	void put_StateParam(const char *newVal);

	// You'll need to know the authorization and token endpoints for your OAuth2
	// provider. Set this property to the token endpoint . Some providers have both
	// sandbox and production endpoints. Here are some sample endpoints:
	// padding-left: 20px; font-size: 12px;> 1.0 encoding= utf-8 ?> Platform
	// Authorization Endpoint
	// Token Endpoint
	// 
	// Google
	// https://accounts.google.com/o/oauth2/v2/auth
	// https://www.googleapis.com/oauth2/v4/token
	// 
	// Microsoft
	// https://login.microsoftonline.com/{tenant}/oauth2/v2.0/authorize
	// https://login.microsoftonline.com/{tenant}/oauth2/v2.0/token
	// 
	// X.com
	// https://x.com/i/oauth2/authorize
	// https://api.x.com/2/oauth2/token
	// 
	// Salesforce
	// https://login.salesforce.com/services/oauth2/authorize
	// https://login.salesforce.com/services/oauth2/token
	// 
	// QuickBooks
	// https://appcenter.intuit.com/connect/oauth2
	// https://oauth.platform.intuit.com/oauth2/v1/tokens/bearer
	// 
	void get_TokenEndpoint(CkString &str);
	// You'll need to know the authorization and token endpoints for your OAuth2
	// provider. Set this property to the token endpoint . Some providers have both
	// sandbox and production endpoints. Here are some sample endpoints:
	// padding-left: 20px; font-size: 12px;> 1.0 encoding= utf-8 ?> Platform
	// Authorization Endpoint
	// Token Endpoint
	// 
	// Google
	// https://accounts.google.com/o/oauth2/v2/auth
	// https://www.googleapis.com/oauth2/v4/token
	// 
	// Microsoft
	// https://login.microsoftonline.com/{tenant}/oauth2/v2.0/authorize
	// https://login.microsoftonline.com/{tenant}/oauth2/v2.0/token
	// 
	// X.com
	// https://x.com/i/oauth2/authorize
	// https://api.x.com/2/oauth2/token
	// 
	// Salesforce
	// https://login.salesforce.com/services/oauth2/authorize
	// https://login.salesforce.com/services/oauth2/token
	// 
	// QuickBooks
	// https://appcenter.intuit.com/connect/oauth2
	// https://oauth.platform.intuit.com/oauth2/v1/tokens/bearer
	// 
	const char *tokenEndpoint(void);
	// You'll need to know the authorization and token endpoints for your OAuth2
	// provider. Set this property to the token endpoint . Some providers have both
	// sandbox and production endpoints. Here are some sample endpoints:
	// padding-left: 20px; font-size: 12px;> 1.0 encoding= utf-8 ?> Platform
	// Authorization Endpoint
	// Token Endpoint
	// 
	// Google
	// https://accounts.google.com/o/oauth2/v2/auth
	// https://www.googleapis.com/oauth2/v4/token
	// 
	// Microsoft
	// https://login.microsoftonline.com/{tenant}/oauth2/v2.0/authorize
	// https://login.microsoftonline.com/{tenant}/oauth2/v2.0/token
	// 
	// X.com
	// https://x.com/i/oauth2/authorize
	// https://api.x.com/2/oauth2/token
	// 
	// Salesforce
	// https://login.salesforce.com/services/oauth2/authorize
	// https://login.salesforce.com/services/oauth2/token
	// 
	// QuickBooks
	// https://appcenter.intuit.com/connect/oauth2
	// https://oauth.platform.intuit.com/oauth2/v1/tokens/bearer
	// 
	void put_TokenEndpoint(const char *newVal);

	// Once the OAuth2 authorization code flow successfully completes in the background
	// thread, this property holds the token_type from the AccessTokenResponse .
	void get_TokenType(CkString &str);
	// Once the OAuth2 authorization code flow successfully completes in the background
	// thread, this property holds the token_type from the AccessTokenResponse .
	const char *tokenType(void);
	// Once the OAuth2 authorization code flow successfully completes in the background
	// thread, this property holds the token_type from the AccessTokenResponse .
	void put_TokenType(const char *newVal);

	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string, and should typically remain empty.
	// 
	// Can be set to a list of the following comma separated keywords:
	//     * NO_OAUTH2_SCOPE - Do not includethe scope parameter when exchanging the
	//     authorization code for an access token.
	//     * ExchangeCodeForTokenUsingJson - Introduced in v9.5.0.98. Use an HTTP POST
	//     with JSON request body for the final exchange-code-for-token HTTP request in the
	//     authorization code flow.
	//     * RefreshTokenUsingJson - Introduced in v9.5.0.98. Use an HTTP POST with
	//     JSON request body for the token refresh HTTP request.
	// 
	void get_UncommonOptions(CkString &str);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string, and should typically remain empty.
	// 
	// Can be set to a list of the following comma separated keywords:
	//     * NO_OAUTH2_SCOPE - Do not includethe scope parameter when exchanging the
	//     authorization code for an access token.
	//     * ExchangeCodeForTokenUsingJson - Introduced in v9.5.0.98. Use an HTTP POST
	//     with JSON request body for the final exchange-code-for-token HTTP request in the
	//     authorization code flow.
	//     * RefreshTokenUsingJson - Introduced in v9.5.0.98. Use an HTTP POST with
	//     JSON request body for the token refresh HTTP request.
	// 
	const char *uncommonOptions(void);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string, and should typically remain empty.
	// 
	// Can be set to a list of the following comma separated keywords:
	//     * NO_OAUTH2_SCOPE - Do not includethe scope parameter when exchanging the
	//     authorization code for an access token.
	//     * ExchangeCodeForTokenUsingJson - Introduced in v9.5.0.98. Use an HTTP POST
	//     with JSON request body for the final exchange-code-for-token HTTP request in the
	//     authorization code flow.
	//     * RefreshTokenUsingJson - Introduced in v9.5.0.98. Use an HTTP POST with
	//     JSON request body for the token refresh HTTP request.
	// 
	void put_UncommonOptions(const char *newVal);

	// When set to true, the internal POST request that exchanges the code for an
	// access token will include the client_id/client_secret in an Authorization Basic
	// ... header, using the client_id as the login and the client_secret as the
	// password. By default, this setting is false, meaning the
	// client_id/client_secret are sent as query parameters.
	bool get_UseBasicAuth(void);
	// When set to true, the internal POST request that exchanges the code for an
	// access token will include the client_id/client_secret in an Authorization Basic
	// ... header, using the client_id as the login and the client_secret as the
	// password. By default, this setting is false, meaning the
	// client_id/client_secret are sent as query parameters.
	void put_UseBasicAuth(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds a custom query parameter (name=value) to the URL returned by the StartAuth
	// method. This accommodates OAuth installations requiring custom query parameters.
	// You can call this method multiple times, adding one query parameter per call.
	bool AddAuthQueryParam(const char *name, const char *value);


	// Adds a query parameter (name=value) to the HTTP request sent by the
	// RefreshAccessToken method. You can call this method multiple times to add more
	// query parameters.
	bool AddRefreshQueryParam(const char *name, const char *value);


	// Adds a custom query parameter (name=value) to the internal request used to
	// exchange the authorization code for a token, accommodating OAuth setups that
	// require non-standard parameters. This method can be called multiple times to add
	// multiple query parameters.
	bool AddTokenQueryParam(const char *name, const char *value);


	// Stops an ongoing OAuth2 authorization flow.
	bool Cancel(void);


	// This method is specifically for the OOB (Out-of-Band) authorization flow, where
	// you manually obtain and pass the authorization code to complete the OAuth2
	// process.
	bool ExchangeCodeForToken(const char *code);

	// This method is specifically for the OOB (Out-of-Band) authorization flow, where
	// you manually obtain and pass the authorization code to complete the OAuth2
	// process.
	CkTask *ExchangeCodeForTokenAsync(const char *code);


	// Same as the AccessTokenResponse property, but returns the JSON in the sb.
	bool GetAccessTokenResponseSb(CkStringBuilder &sb);


	// Some OAuth2 providers can provide additional parameters in the redirect request
	// sent to the local listener (i.e. the Chilkat background thread). One such case
	// is for QuickBooks, It contains a realmId parameter such as the following:http://localhost:55568/?state=xxxxxxxxxxxx&code=xxxxxxxxxxxx&realmId=1234567890
	// 
	// After the OAuth2 authentication is completed, an application can call this
	// method to get any of the parameter values. For example, to get the realmId
	// value, pass realmId in paramName.
	// 
	// See the code snippet at the very bottom of the example linked below.
	// 
	bool GetRedirectRequestParam(const char *paramName, CkString &outStr);

	// Some OAuth2 providers can provide additional parameters in the redirect request
	// sent to the local listener (i.e. the Chilkat background thread). One such case
	// is for QuickBooks, It contains a realmId parameter such as the following:http://localhost:55568/?state=xxxxxxxxxxxx&code=xxxxxxxxxxxx&realmId=1234567890
	// 
	// After the OAuth2 authentication is completed, an application can call this
	// method to get any of the parameter values. For example, to get the realmId
	// value, pass realmId in paramName.
	// 
	// See the code snippet at the very bottom of the example linked below.
	// 
	const char *getRedirectRequestParam(const char *paramName);
	// Some OAuth2 providers can provide additional parameters in the redirect request
	// sent to the local listener (i.e. the Chilkat background thread). One such case
	// is for QuickBooks, It contains a realmId parameter such as the following:http://localhost:55568/?state=xxxxxxxxxxxx&code=xxxxxxxxxxxx&realmId=1234567890
	// 
	// After the OAuth2 authentication is completed, an application can call this
	// method to get any of the parameter values. For example, to get the realmId
	// value, pass realmId in paramName.
	// 
	// See the code snippet at the very bottom of the example linked below.
	// 
	const char *redirectRequestParam(const char *paramName);


	// Launches the default browser and navigated to url. If a browser window is
	// already open, the page will be displayed in a new tab. This works on Windows,
	// MacOS, and Linux.
	bool LaunchBrowser(const char *url);


	// Loads the caller of the task's async method.
	bool LoadTaskCaller(CkTask &task);


	// To obtain a new access token, this method sends a refresh token request to the
	// token endpoint. Upon success, it updates the AccessToken and RefreshToken
	// properties with new values. Note: This method requires valid values for the
	// ClientId, ClientSecret, RefreshToken, and TokenEndpoint properties.
	// 
	// For a deeper understanding, see OAuth2 Refresh Token Request Explained
	// 
	// 
	// References:
	// 1: https://www.chilkatsoft.com/oauth2_refresh_token_request.asp
	bool RefreshAccessToken(void);

	// To obtain a new access token, this method sends a refresh token request to the
	// token endpoint. Upon success, it updates the AccessToken and RefreshToken
	// properties with new values. Note: This method requires valid values for the
	// ClientId, ClientSecret, RefreshToken, and TokenEndpoint properties.
	// 
	// For a deeper understanding, see OAuth2 Refresh Token Request Explained
	// 
	// 
	// References:
	// 1: https://www.chilkatsoft.com/oauth2_refresh_token_request.asp
	CkTask *RefreshAccessTokenAsync(void);


	// Allows you to add HTTP request headers to the HTTP request sent by the
	// RefreshAccessToken method. For instance, to include the Accept: application/json
	// header, use this method with name as Accept and value as application/json . To
	// add multiple headers, call this method separately for each header. To remove a
	// header, set name to the header name and value to an empty string.
	bool SetRefreshHeader(const char *name, const char *value);


	// Convenience method to force the calling thread to sleep for a number of
	// milliseconds.
	void SleepMs(int millisec);


	// This method initiates the OAuth2 authorization code flow. Set the following
	// properties before calling this method: ClientId, ClientSecret, ListenPort,
	// Scope, AuthorizationEndpoint, and TokenEndpoint. Note that ClientSecret may not
	// be required if the OAuth2 provider supports Proof Key for Code Exchange (PKCE).
	// This method performs two actions:
	//     1. It generates and returns a URL to be opened in a browser.
	//     2. It launches a background thread that listens on the specified ListenPort
	//     for the browser's redirect request. The entire process of handling this request
	//     and completing the OAuth2 authorization flow is managed in the background thread
	//     within Chilkat.
	// 
	// The method's return value is the URL to open in a browser.
	// 
	bool StartAuth(CkString &outStr);

	// This method initiates the OAuth2 authorization code flow. Set the following
	// properties before calling this method: ClientId, ClientSecret, ListenPort,
	// Scope, AuthorizationEndpoint, and TokenEndpoint. Note that ClientSecret may not
	// be required if the OAuth2 provider supports Proof Key for Code Exchange (PKCE).
	// This method performs two actions:
	//     1. It generates and returns a URL to be opened in a browser.
	//     2. It launches a background thread that listens on the specified ListenPort
	//     for the browser's redirect request. The entire process of handling this request
	//     and completing the OAuth2 authorization flow is managed in the background thread
	//     within Chilkat.
	// 
	// The method's return value is the URL to open in a browser.
	// 
	const char *startAuth(void);

	// Calling this method is optional and only necessary if you need to use a proxy
	// (HTTP or SOCKS), an SSH tunnel, or specific socket options for the connection.
	// If you do not use this method, the connection to the token endpoint will be a
	// direct one using TLS. The method assigns the socket object for sending requests
	// to the token endpoint in the background thread. You can pass either a connected
	// or unconnected socket as sock. For SSH tunnels, sock must already be connected,
	// whereas for setting options like HTTP or SOCKS proxies, an unconnected sock is
	// sufficient.
	bool UseConnection(CkSocket &sock);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
