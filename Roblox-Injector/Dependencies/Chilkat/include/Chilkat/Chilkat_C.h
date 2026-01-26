
// This file is NOT generated.

#ifndef _CHILKAT_C
#define _CHILKAT_C

#if !defined(BOOL_IS_TYPEDEF) && !defined(OBJC_BOOL_DEFINED)
#ifndef BOOL
#define BOOL int
#endif
#endif
	
#ifndef TRUE
#define TRUE 1
#endif
	
#ifndef FALSE
#define FALSE 0
#endif	
	
#if !defined(WIN32) && !defined(WINCE)
#include "SystemTime.h"              
#include "FileTime.h"                
#endif                  
	
// Use typedefs so we can explicitly see the kind of object pointed
// to by "void *"
	
#if defined(CK_GO_LANG) || defined(CK_LUA_LANG)
#define HCkAi void *
#define HCkAsn void *
#define HCkAuthAws void *
#define HCkAuthAzureSAS void *
#define HCkAuthAzureStorage void *
#define HCkAuthGoogle void *
#define HCkBinData void *
#define HCkByteData void *
#define HCkBz2 void *
#define HCkBz2Progress void *
#define HCkCache void *
#define HCkCert void *
#define HCkCertChain void *
#define HCkCertStore void *
#define HCkCharset void *
#define HCkCodeSign void *
#define HCkCompression void *
#define HCkCrypt2 void *
#define HCkCrypt2Progress void *
#define HCkCsr void *
#define HCkCsv void *
#define HCkDateTime void *
#define HCkDh void *
#define HCkDhProgress void *
#define HCkDirTree void *
#define HCkDkim void *
#define HCkDkimProgress void *
#define HCkDns void *
#define HCkDsa void *
#define HCkDsaProgress void *
#define HCkDtObj void *
#define HCkEcc void *
#define HCkEdDSA void *
#define HCkEmail void *
#define HCkEmailBundle void *
#define HCkFileAccess void *
#define HCkFtp2 void *
#define HCkFtpProgress void *
#define HCkGlobal void *
#define HCkGzip void *
#define HCkHashtable void *
#define HCkHtmlToText void *
#define HCkHtmlToXml void *
#define HCkHttp void *
#define HCkHttpProgress void *
#define HCkHttpRequest void *
#define HCkHttpResponse void *
#define HCkImap void *
#define HCkImapProgress void *
#define HCkJavaKeyStore void *
#define HCkJsonArray void *
#define HCkJsonObject void *
#define HCkJwe void *
#define HCkJws void *
#define HCkJwt void *
#define HCkLog void *
#define HCkMailMan void *
#define HCkMailProgress void *
#define HCkMailboxes void *
#define HCkMessageSet void *
#define HCkMht void *
#define HCkMhtProgress void *
#define HCkMime void *
#define HCkNtlm void *
#define HCkOAuth1 void *
#define HCkOAuth2 void *
#define HCkPdf void *
#define HCkPem void *
#define HCkPfx void *
#define HCkPkcs11 void *
#define HCkPrivateKey void *
#define HCkPrng void *
#define HCkPublicKey void *
#define HCkRest void *
#define HCkRsa void *
#define HCkSCard void *
#define HCkSFtp void *
#define HCkSFtpDir void *
#define HCkSFtpFile void *
#define HCkSFtpProgress void *
#define HCkScMinidriver void *
#define HCkScp void *
#define HCkSecrets void *
#define HCkSecureString void *
#define HCkServerSentEvent void *
#define HCkSettings void *
#define HCkSocket void *
#define HCkSocketProgress void *
#define HCkSpider void *
#define HCkSpiderProgress void *
#define HCkSsh void *
#define HCkSshKey void *
#define HCkSshProgress void *
#define HCkSshTunnel void *
#define HCkStream void *
#define HCkString void *
#define HCkStringArray void *
#define HCkStringBuilder void *
#define HCkStringTable void *
#define HCkTar void *
#define HCkTarProgress void *
#define HCkTask void *
#define HCkTaskChain void *
#define HCkTrustedRoots void *
#define HCkUnixCompress void *
#define HCkUpload void *
#define HCkUrl void *
#define HCkWebSocket void *
#define HCkXml void *
#define HCkXmlCertVault void *
#define HCkXmlDSig void *
#define HCkXmlDSigGen void *
#define HCkXmp void *
#define HCkZip void *
#define HCkZipCrc void *
#define HCkZipEntry void *
#define HCkZipProgress void *


#else
typedef void *HCkAi;
typedef void *HCkAsn;
typedef void *HCkAuthAws;
typedef void *HCkAuthAzureSAS;
typedef void *HCkAuthAzureStorage;
typedef void *HCkAuthGoogle;
typedef void *HCkBinData;
typedef void *HCkByteData;
typedef void *HCkBz2;
typedef void *HCkBz2Progress;
typedef void *HCkCache;
typedef void *HCkCert;
typedef void *HCkCertChain;
typedef void *HCkCertStore;
typedef void *HCkCharset;
typedef void *HCkCodeSign;
typedef void *HCkCompression;
typedef void *HCkCrypt2;
typedef void *HCkCrypt2Progress;
typedef void *HCkCsr;
typedef void *HCkCsv;
typedef void *HCkDateTime;
typedef void *HCkDh;
typedef void *HCkDhProgress;
typedef void *HCkDirTree;
typedef void *HCkDkim;
typedef void *HCkDkimProgress;
typedef void *HCkDns;
typedef void *HCkDsa;
typedef void *HCkDsaProgress;
typedef void *HCkDtObj;
typedef void *HCkEcc;
typedef void *HCkEdDSA;
typedef void *HCkEmail;
typedef void *HCkEmailBundle;
typedef void *HCkFileAccess;
typedef void *HCkFtp2;
typedef void *HCkFtpProgress;
typedef void *HCkGlobal;
typedef void *HCkGzip;
typedef void *HCkHashtable;
typedef void *HCkHtmlToText;
typedef void *HCkHtmlToXml;
typedef void *HCkHttp;
typedef void *HCkHttpProgress;
typedef void *HCkHttpRequest;
typedef void *HCkHttpResponse;
typedef void *HCkImap;
typedef void *HCkImapProgress;
typedef void *HCkJavaKeyStore;
typedef void *HCkJsonArray;
typedef void *HCkJsonObject;
typedef void *HCkJwe;
typedef void *HCkJws;
typedef void *HCkJwt;
typedef void *HCkLog;
typedef void *HCkMailMan;
typedef void *HCkMailProgress;
typedef void *HCkMailboxes;
typedef void *HCkMessageSet;
typedef void *HCkMht;
typedef void *HCkMhtProgress;
typedef void *HCkMime;
typedef void *HCkNtlm;
typedef void *HCkOAuth1;
typedef void *HCkOAuth2;
typedef void *HCkPdf;
typedef void *HCkPem;
typedef void *HCkPfx;
typedef void *HCkPkcs11;
typedef void *HCkPrivateKey;
typedef void *HCkPrng;
typedef void *HCkPublicKey;
typedef void *HCkRest;
typedef void *HCkRsa;
typedef void *HCkSCard;
typedef void *HCkSFtp;
typedef void *HCkSFtpDir;
typedef void *HCkSFtpFile;
typedef void *HCkSFtpProgress;
typedef void *HCkScMinidriver;
typedef void *HCkScp;
typedef void *HCkSecrets;
typedef void *HCkSecureString;
typedef void *HCkServerSentEvent;
typedef void *HCkSettings;
typedef void *HCkSocket;
typedef void *HCkSocketProgress;
typedef void *HCkSpider;
typedef void *HCkSpiderProgress;
typedef void *HCkSsh;
typedef void *HCkSshKey;
typedef void *HCkSshProgress;
typedef void *HCkSshTunnel;
typedef void *HCkStream;
typedef void *HCkString;
typedef void *HCkStringArray;
typedef void *HCkStringBuilder;
typedef void *HCkStringTable;
typedef void *HCkTar;
typedef void *HCkTarProgress;
typedef void *HCkTask;
typedef void *HCkTaskChain;
typedef void *HCkTrustedRoots;
typedef void *HCkUnixCompress;
typedef void *HCkUpload;
typedef void *HCkUrl;
typedef void *HCkWebSocket;
typedef void *HCkXml;
typedef void *HCkXmlCertVault;
typedef void *HCkXmlDSig;
typedef void *HCkXmlDSigGen;
typedef void *HCkXmp;
typedef void *HCkZip;
typedef void *HCkZipCrc;
typedef void *HCkZipEntry;
typedef void *HCkZipProgress;

typedef void *HCkAiW;
typedef void *HCkAsnW;
typedef void *HCkAuthAwsW;
typedef void *HCkAuthAzureSASW;
typedef void *HCkAuthAzureStorageW;
typedef void *HCkAuthGoogleW;
typedef void *HCkBinDataW;
typedef void *HCkByteDataW;
typedef void *HCkBz2ProgressW;
typedef void *HCkBz2W;
typedef void *HCkCacheW;
typedef void *HCkCertChainW;
typedef void *HCkCertStoreW;
typedef void *HCkCertW;
typedef void *HCkCharsetW;
typedef void *HCkCodeSignW;
typedef void *HCkCompressionW;
typedef void *HCkCrypt2ProgressW;
typedef void *HCkCrypt2W;
typedef void *HCkCsrW;
typedef void *HCkCsvW;
typedef void *HCkDateTimeW;
typedef void *HCkDhProgressW;
typedef void *HCkDhW;
typedef void *HCkDirTreeW;
typedef void *HCkDkimProgressW;
typedef void *HCkDkimW;
typedef void *HCkDnsW;
typedef void *HCkDsaProgressW;
typedef void *HCkDsaW;
typedef void *HCkDtObjW;
typedef void *HCkEccW;
typedef void *HCkEdDSAW;
typedef void *HCkEmailBundleW;
typedef void *HCkEmailW;
typedef void *HCkFileAccessW;
typedef void *HCkFtp2W;
typedef void *HCkFtpProgressW;
typedef void *HCkGlobalW;
typedef void *HCkGzipW;
typedef void *HCkHashtableW;
typedef void *HCkHtmlToTextW;
typedef void *HCkHtmlToXmlW;
typedef void *HCkHttpProgressW;
typedef void *HCkHttpRequestW;
typedef void *HCkHttpResponseW;
typedef void *HCkHttpW;
typedef void *HCkImapProgressW;
typedef void *HCkImapW;
typedef void *HCkJavaKeyStoreW;
typedef void *HCkJsonArrayW;
typedef void *HCkJsonObjectW;
typedef void *HCkJweW;
typedef void *HCkJwsW;
typedef void *HCkJwtW;
typedef void *HCkLogW;
typedef void *HCkMailManW;
typedef void *HCkMailProgressW;
typedef void *HCkMailboxesW;
typedef void *HCkMessageSetW;
typedef void *HCkMhtProgressW;
typedef void *HCkMhtW;
typedef void *HCkMimeW;
typedef void *HCkNtlmW;
typedef void *HCkOAuth1W;
typedef void *HCkOAuth2W;
typedef void *HCkPdfW;
typedef void *HCkPemW;
typedef void *HCkPfxW;
typedef void *HCkPkcs11W;
typedef void *HCkPrivateKeyW;
typedef void *HCkPrngW;
typedef void *HCkPublicKeyW;
typedef void *HCkRestW;
typedef void *HCkRsaW;
typedef void *HCkSCardW;
typedef void *HCkSFtpDirW;
typedef void *HCkSFtpFileW;
typedef void *HCkSFtpProgressW;
typedef void *HCkSFtpW;
typedef void *HCkScMinidriverW;
typedef void *HCkScpW;
typedef void *HCkSecretsW;
typedef void *HCkSecureStringW;
typedef void *HCkServerSentEventW;
typedef void *HCkSettingsW;
typedef void *HCkSocketProgressW;
typedef void *HCkSocketW;
typedef void *HCkSpiderProgressW;
typedef void *HCkSpiderW;
typedef void *HCkSshKeyW;
typedef void *HCkSshProgressW;
typedef void *HCkSshTunnelW;
typedef void *HCkSshW;
typedef void *HCkStreamW;
typedef void *HCkStringArrayW;
typedef void *HCkStringBuilderW;
typedef void *HCkStringTableW;
typedef void *HCkStringW;
typedef void *HCkTarProgressW;
typedef void *HCkTarW;
typedef void *HCkTaskChainW;
typedef void *HCkTaskW;
typedef void *HCkTrustedRootsW;
typedef void *HCkUnixCompressW;
typedef void *HCkUploadW;
typedef void *HCkUrlW;
typedef void *HCkWebSocketW;
typedef void *HCkXmlCertVaultW;
typedef void *HCkXmlDSigGenW;
typedef void *HCkXmlDSigW;
typedef void *HCkXmlW;
typedef void *HCkXmpW;
typedef void *HCkZipCrcW;
typedef void *HCkZipEntryW;
typedef void *HCkZipProgressW;
typedef void *HCkZipW;
#endif

#endif
