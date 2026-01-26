// CkCompressionW.h: interface for the CkCompressionW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.3.0

#ifndef _CkCompressionW_H
#define _CkCompressionW_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacksW.h"

class CkByteData;
class CkBinDataW;
class CkTaskW;
class CkJsonObjectW;
class CkStringBuilderW;
class CkStreamW;
class CkBaseProgressW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkCompressionW
class CK_VISIBLE_PUBLIC CkCompressionW  : public CkClassWithCallbacksW
{
	private:
	bool m_cbOwned;

	private:
	
	// Don't allow assignment or copying these objects.
	CkCompressionW(const CkCompressionW &);
	CkCompressionW &operator=(const CkCompressionW &);

    public:
	CkCompressionW(void);
	virtual ~CkCompressionW(void);

	

	static CkCompressionW *createNew(void);
	

	CkCompressionW(bool bCallbackOwned);
	static CkCompressionW *createNew(bool bCallbackOwned);

	
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
	// Specifies the compression algorithm: deflate , zlib , bzip2 , or lzw . Note that
	// ppmd is deprecated and should not be used. It was only available for 32-bit
	// systems and specifically used the J variant. Please transition to one of the
	// recommended algorithms.
	void get_Algorithm(CkString &str);
	// Specifies the compression algorithm: deflate , zlib , bzip2 , or lzw . Note that
	// ppmd is deprecated and should not be used. It was only available for 32-bit
	// systems and specifically used the J variant. Please transition to one of the
	// recommended algorithms.
	const wchar_t *algorithm(void);
	// Specifies the compression algorithm: deflate , zlib , bzip2 , or lzw . Note that
	// ppmd is deprecated and should not be used. It was only available for 32-bit
	// systems and specifically used the J variant. Please transition to one of the
	// recommended algorithms.
	void put_Algorithm(const wchar_t *newVal);

	// This property specifies the character encoding used to represent text as bytes
	// for compression and decompression. By default, it uses the computer's ANSI
	// charset, such as Windows-1252 for locales like the United States, United
	// Kingdom, Western Europe, Australia, and New Zealand.
	// 
	// Most applications are advised to set this property to UTF-8 . Chilkat plans to
	// change its default to UTF-8 in a future major version to align with current
	// standards. The current default of ANSI stems from a time when UTF-8 was not
	// widely adopted.
	// 
	void get_Charset(CkString &str);
	// This property specifies the character encoding used to represent text as bytes
	// for compression and decompression. By default, it uses the computer's ANSI
	// charset, such as Windows-1252 for locales like the United States, United
	// Kingdom, Western Europe, Australia, and New Zealand.
	// 
	// Most applications are advised to set this property to UTF-8 . Chilkat plans to
	// change its default to UTF-8 in a future major version to align with current
	// standards. The current default of ANSI stems from a time when UTF-8 was not
	// widely adopted.
	// 
	const wchar_t *charset(void);
	// This property specifies the character encoding used to represent text as bytes
	// for compression and decompression. By default, it uses the computer's ANSI
	// charset, such as Windows-1252 for locales like the United States, United
	// Kingdom, Western Europe, Australia, and New Zealand.
	// 
	// Most applications are advised to set this property to UTF-8 . Chilkat plans to
	// change its default to UTF-8 in a future major version to align with current
	// standards. The current default of ANSI stems from a time when UTF-8 was not
	// widely adopted.
	// 
	void put_Charset(const wchar_t *newVal);

	// This property allows for customization of the compression level for the deflate
	// and zlib compression algoirthms. ( zlib is just the deflate algorithm with a
	// zlib header.) A value of 0 = no compression, while 9 = maximum compression. The
	// default is 6.
	int get_DeflateLevel(void);
	// This property allows for customization of the compression level for the deflate
	// and zlib compression algoirthms. ( zlib is just the deflate algorithm with a
	// zlib header.) A value of 0 = no compression, while 9 = maximum compression. The
	// default is 6.
	void put_DeflateLevel(int newVal);

	// Controls the encoding expected by methods ending in ENC , such as
	// CompressBytesENC. Valid values are base64 , hex , url , and quoted-printable .
	// Compression methods ending in ENC return the binary compressed data as an
	// encoded string using this encoding. Decompress methods expect the input string
	// to be this encoding.
	void get_EncodingMode(CkString &str);
	// Controls the encoding expected by methods ending in ENC , such as
	// CompressBytesENC. Valid values are base64 , hex , url , and quoted-printable .
	// Compression methods ending in ENC return the binary compressed data as an
	// encoded string using this encoding. Decompress methods expect the input string
	// to be this encoding.
	const wchar_t *encodingMode(void);
	// Controls the encoding expected by methods ending in ENC , such as
	// CompressBytesENC. Valid values are base64 , hex , url , and quoted-printable .
	// Compression methods ending in ENC return the binary compressed data as an
	// encoded string using this encoding. Decompress methods expect the input string
	// to be this encoding.
	void put_EncodingMode(const wchar_t *newVal);

	// This property applies to FirstChunk and LastChunk aware compression and
	// decompression methods. It signifies that the data being compressed is the first
	// of multiple chunks.
	// 
	// The default value is true.
	// 
	// When both FirstChunk and LastChunk are set to true, it means the entire amount
	// of data to be compressed or decompressed is presented in a single call.
	// 
	bool get_FirstChunk(void);
	// This property applies to FirstChunk and LastChunk aware compression and
	// decompression methods. It signifies that the data being compressed is the first
	// of multiple chunks.
	// 
	// The default value is true.
	// 
	// When both FirstChunk and LastChunk are set to true, it means the entire amount
	// of data to be compressed or decompressed is presented in a single call.
	// 
	void put_FirstChunk(bool newVal);

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

	// This property applies to FirstChunk and LastChunk aware compression and
	// decompression methods. It signifies that the data being compressed is the last
	// of multiple chunks.
	// 
	// The default value is true.
	// 
	// When both FirstChunk and LastChunk are set to true, it means the entire amount
	// of data to be compressed or decompressed is presented in a single call.
	// 
	bool get_LastChunk(void);
	// This property applies to FirstChunk and LastChunk aware compression and
	// decompression methods. It signifies that the data being compressed is the last
	// of multiple chunks.
	// 
	// The default value is true.
	// 
	// When both FirstChunk and LastChunk are set to true, it means the entire amount
	// of data to be compressed or decompressed is presented in a single call.
	// 
	void put_LastChunk(bool newVal);

	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty.
	// 
	// Can be set to a list of the following comma separated keywords:
	//     * Crypt2CompressHdr - Duplicates the compression and decompression as
	//     implemented in the deprecated and removed Crypt2 compression functions.
	// 
	void get_UncommonOptions(CkString &str);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty.
	// 
	// Can be set to a list of the following comma separated keywords:
	//     * Crypt2CompressHdr - Duplicates the compression and decompression as
	//     implemented in the deprecated and removed Crypt2 compression functions.
	// 
	const wchar_t *uncommonOptions(void);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty.
	// 
	// Can be set to a list of the following comma separated keywords:
	//     * Crypt2CompressHdr - Duplicates the compression and decompression as
	//     implemented in the deprecated and removed Crypt2 compression functions.
	// 
	void put_UncommonOptions(const wchar_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Large amounts of binary byte data may be compressed in chunks by first calling
	// BeginCompressBytes, followed by 0 or more calls to MoreCompressedBytes, and
	// ending with a final call to EndCompressBytes. Each call returns 0 or more bytes
	// of compressed data which may be output to a compressed data stream (such as a
	// file, socket, etc.).
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	bool BeginCompressBytes(CkByteData &data, CkByteData &outData);

	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Large amounts of binary byte data may be compressed in chunks by first calling
	// BeginCompressBytes, followed by 0 or more calls to MoreCompressedBytes, and
	// ending with a final call to EndCompressBytes. Each call returns 0 or more bytes
	// of compressed data which may be output to a compressed data stream (such as a
	// file, socket, etc.).
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	bool BeginCompressBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);

	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Large amounts of binary byte data may be compressed in chunks by first calling
	// BeginCompressBytesENC, followed by 0 or more calls to MoreCompressedBytesENC,
	// and ending with a final call to EndCompressBytesENC. Each call returns 0 or more
	// characters of compressed data (encoded as a string according to the EncodingMode
	// property setting) which may be output to a compressed data stream (such as a
	// file, socket, etc.).
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	bool BeginCompressBytesENC(CkByteData &data, CkString &outStr);
	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Large amounts of binary byte data may be compressed in chunks by first calling
	// BeginCompressBytesENC, followed by 0 or more calls to MoreCompressedBytesENC,
	// and ending with a final call to EndCompressBytesENC. Each call returns 0 or more
	// characters of compressed data (encoded as a string according to the EncodingMode
	// property setting) which may be output to a compressed data stream (such as a
	// file, socket, etc.).
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	const wchar_t *beginCompressBytesENC(CkByteData &data);

	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Large amounts of string data may be compressed in chunks by first calling
	// BeginCompressString, followed by 0 or more calls to MoreCompressedString, and
	// ending with a final call to EndCompressString. Each call returns 0 or more bytes
	// of compressed data which may be output to a compressed data stream (such as a
	// file, socket, etc.).
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	bool BeginCompressString(const wchar_t *str, CkByteData &outData);

	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Large amounts of string data may be compressed in chunks by first calling
	// BeginCompressStringENC, followed by 0 or more calls to MoreCompressedStringENC,
	// and ending with a final call to EndCompressStringENC. Each call returns 0 or
	// more characters of compressed data (encoded as a string according to the
	// EncodingMode property setting) which may be output to a compressed data stream
	// (such as a file, socket, etc.).
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	bool BeginCompressStringENC(const wchar_t *str, CkString &outStr);
	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Large amounts of string data may be compressed in chunks by first calling
	// BeginCompressStringENC, followed by 0 or more calls to MoreCompressedStringENC,
	// and ending with a final call to EndCompressStringENC. Each call returns 0 or
	// more characters of compressed data (encoded as a string according to the
	// EncodingMode property setting) which may be output to a compressed data stream
	// (such as a file, socket, etc.).
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	const wchar_t *beginCompressStringENC(const wchar_t *str);

	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressBytes, followed by 0 or more calls to MoreDecompressedBytes, and
	// ending with a final call to EndDecompressBytes. Each call returns 0 or more
	// bytes of decompressed data.
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	bool BeginDecompressBytes(CkByteData &data, CkByteData &outData);

	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressBytes, followed by 0 or more calls to MoreDecompressedBytes, and
	// ending with a final call to EndDecompressBytes. Each call returns 0 or more
	// bytes of decompressed data.
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	bool BeginDecompressBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);

	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressBytesENC, followed by 0 or more calls to
	// MoreDecompressedBytesENC, and ending with a final call to EndDecompressBytesENC.
	// Each call returns 0 or more bytes of decompressed data.
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	bool BeginDecompressBytesENC(const wchar_t *str, CkByteData &outData);

	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressString, followed by 0 or more calls to MoreDecompressedString,
	// and ending with a final call to EndDecompressString. Each call returns 0 or more
	// characters of decompressed text.
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	bool BeginDecompressString(CkByteData &data, CkString &outStr);
	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressString, followed by 0 or more calls to MoreDecompressedString,
	// and ending with a final call to EndDecompressString. Each call returns 0 or more
	// characters of decompressed text.
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	const wchar_t *beginDecompressString(CkByteData &data);

	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressStringENC, followed by 0 or more calls to
	// MoreDecompressedStringENC, and ending with a final call to
	// EndDecompressStringENC. Each call returns 0 or more characters of decompressed
	// text.
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	bool BeginDecompressStringENC(const wchar_t *str, CkString &outStr);
	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// A compressed data stream may be decompressed in chunks by first calling
	// BeginDecompressStringENC, followed by 0 or more calls to
	// MoreDecompressedStringENC, and ending with a final call to
	// EndDecompressStringENC. Each call returns 0 or more characters of decompressed
	// text.
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	const wchar_t *beginDecompressStringENC(const wchar_t *str);

	// Compresses the data contained in bd. This method is not FirstChunk / LastChunk
	// aware.
	bool CompressBd(CkBinDataW &bd);

	// Creates an asynchronous task to call the CompressBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressBdAsync(CkBinDataW &bd);

	// This method compresses the data in bdIn without modifying it and appends the
	// compressed data to bdOut. It is also FirstChunk / LastChunk aware.
	bool CompressBd2(CkBinDataW &bdIn, CkBinDataW &bdOut);

	// Creates an asynchronous task to call the CompressBd2 method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressBd2Async(CkBinDataW &bdIn, CkBinDataW &bdOut);

	// Compresses byte data.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool CompressBytes(CkByteData &data, CkByteData &outData);

	// Creates an asynchronous task to call the CompressBytes method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressBytesAsync(CkByteData &data);

	// Compresses byte data.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool CompressBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);

	// Compresses bytes and returns the compressed data encoded to a string. The
	// encoding (hex, base64, etc.) is determined by the EncodingMode property setting.
	bool CompressBytesENC(CkByteData &data, CkString &outStr);
	// Compresses bytes and returns the compressed data encoded to a string. The
	// encoding (hex, base64, etc.) is determined by the EncodingMode property setting.
	const wchar_t *compressBytesENC(CkByteData &data);

	// Creates an asynchronous task to call the CompressBytesENC method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressBytesENCAsync(CkByteData &data);

	// Performs file-to-file compression and encryption. Files of any size may be
	// compressed because the file is compressed and encrypted internally in streaming
	// mode.
	bool CompressEncryptFile(CkJsonObjectW &cryptParams, const wchar_t *srcPath, const wchar_t *destPath);

	// Creates an asynchronous task to call the CompressEncryptFile method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressEncryptFileAsync(CkJsonObjectW &cryptParams, const wchar_t *srcPath, const wchar_t *destPath);

	// Performs file-to-file compression. Files of any size may be compressed because
	// the file is compressed internally in streaming mode.
	bool CompressFile(const wchar_t *srcPath, const wchar_t *destPath);

	// Creates an asynchronous task to call the CompressFile method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressFileAsync(const wchar_t *srcPath, const wchar_t *destPath);

	// Compresses the contents of sb and appends the compressed bytes to binData.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool CompressSb(CkStringBuilderW &sb, CkBinDataW &binData);

	// Creates an asynchronous task to call the CompressSb method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressSbAsync(CkStringBuilderW &sb, CkBinDataW &binData);

	// Compresses a string and appends to bd. The byte representation (character
	// encoding) of the actual bytes to be compressed is determined by the Charset
	// property. This method is FirstChunk / LastChunk aware.
	bool CompressStr(const wchar_t *str, CkBinDataW &bd);

	// Creates an asynchronous task to call the CompressStr method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressStrAsync(const wchar_t *str, CkBinDataW &bd);

	// Compresses a stream. Internally, the strm's source is read, compressed, and the
	// compressed data written to the strm's sink. It does this in streaming fashion.
	// Extremely large or even infinite streams can be compressed with stable ungrowing
	// memory usage.
	bool CompressStream(CkStreamW &strm);

	// Creates an asynchronous task to call the CompressStream method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressStreamAsync(CkStreamW &strm);

	// Compresses a string.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool CompressString(const wchar_t *str, CkByteData &outData);

	// Creates an asynchronous task to call the CompressString method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressStringAsync(const wchar_t *str);

	// Compresses a string and returns the compressed data encoded to a string. The
	// output encoding (hex, base64, etc.) is determined by the EncodingMode property
	// setting. This method is NOT FirstChunk / LastChunk aware.
	bool CompressStringENC(const wchar_t *str, CkString &outStr);
	// Compresses a string and returns the compressed data encoded to a string. The
	// output encoding (hex, base64, etc.) is determined by the EncodingMode property
	// setting. This method is NOT FirstChunk / LastChunk aware.
	const wchar_t *compressStringENC(const wchar_t *str);

	// Creates an asynchronous task to call the CompressStringENC method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressStringENCAsync(const wchar_t *str);

	// Decompresses the data contained in bd. This method is NOT FirstChunk /
	// LastChunk aware.
	bool DecompressBd(CkBinDataW &bd);

	// Creates an asynchronous task to call the DecompressBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DecompressBdAsync(CkBinDataW &bd);

	// This method decompresses the data in bdIn without modifying it and appends the
	// decompressed data to bdOut. It is also FirstChunk / LastChunk aware.
	bool DecompressBd2(CkBinDataW &bdIn, CkBinDataW &bdOut);

	// Creates an asynchronous task to call the DecompressBd2 method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DecompressBd2Async(CkBinDataW &bdIn, CkBinDataW &bdOut);

	// This method decompresses bytes.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool DecompressBytes(CkByteData &data, CkByteData &outData);

	// Creates an asynchronous task to call the DecompressBytes method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DecompressBytesAsync(CkByteData &data);

	// This method decompresses bytes.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool DecompressBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);

	// The opposite of CompressBytesENC. encodedCompressedData contains the compressed data as an
	// encoded string (hex, base64, etc) as specified by the EncodingMode property
	// setting.
	bool DecompressBytesENC(const wchar_t *encodedCompressedData, CkByteData &outData);

	// Creates an asynchronous task to call the DecompressBytesENC method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DecompressBytesENCAsync(const wchar_t *encodedCompressedData);

	// Performs file-to-file decompression (the opposite of CompressFile). Internally
	// the file is decompressed in streaming mode which allows files of any size to be
	// decompressed.
	bool DecompressFile(const wchar_t *srcPath, const wchar_t *destPath);

	// Creates an asynchronous task to call the DecompressFile method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DecompressFileAsync(const wchar_t *srcPath, const wchar_t *destPath);

	// Decompresses the contents of binData and appends the decompressed string to sb.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool DecompressSb(CkBinDataW &binData, CkStringBuilderW &sb);

	// Creates an asynchronous task to call the DecompressSb method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DecompressSbAsync(CkBinDataW &binData, CkStringBuilderW &sb);

	// Decompresses a stream. Internally, the strm's source is read, decompressed, and
	// the decompressed data written to the strm's sink. It does this in streaming
	// fashion. Extremely large or even infinite streams can be decompressed with
	// stable ungrowing memory usage.
	bool DecompressStream(CkStreamW &strm);

	// Creates an asynchronous task to call the DecompressStream method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DecompressStreamAsync(CkStreamW &strm);

	// Takes compressed bytes, decompresses, and returns the resulting string.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	bool DecompressString(CkByteData &data, CkString &outStr);
	// Takes compressed bytes, decompresses, and returns the resulting string.
	// 
	// This method is FirstChunk / LastChunk aware.
	// 
	const wchar_t *decompressString(CkByteData &data);

	// The opposite of CompressStringENC. encodedCompressedData contains the compressed data as an
	// encoded string (hex, base64, etc) as specified by the EncodingMode property
	// setting. This method is NOT FirstChunk / LastChunk aware.
	bool DecompressStringENC(const wchar_t *encodedCompressedData, CkString &outStr);
	// The opposite of CompressStringENC. encodedCompressedData contains the compressed data as an
	// encoded string (hex, base64, etc) as specified by the EncodingMode property
	// setting. This method is NOT FirstChunk / LastChunk aware.
	const wchar_t *decompressStringENC(const wchar_t *encodedCompressedData);

	// Creates an asynchronous task to call the DecompressStringENC method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DecompressStringENCAsync(const wchar_t *encodedCompressedData);

	// Performs file-to-file decryption and decompression.
	bool DecryptDecompressFile(CkJsonObjectW &cryptParams, const wchar_t *srcPath, const wchar_t *destPath);

	// Creates an asynchronous task to call the DecryptDecompressFile method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DecryptDecompressFileAsync(CkJsonObjectW &cryptParams, const wchar_t *srcPath, const wchar_t *destPath);

	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Must be callled to finalize a compression stream. Returns any remaining
	// (buffered) compressed data.
	// 
	// (See BeginCompressBytes)
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	bool EndCompressBytes(CkByteData &outData);

	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Must be callled to finalize a compression stream. Returns any remaining
	// (buffered) compressed data.
	// 
	// (See BeginCompressBytesENC)
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	bool EndCompressBytesENC(CkString &outStr);
	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Must be callled to finalize a compression stream. Returns any remaining
	// (buffered) compressed data.
	// 
	// (See BeginCompressBytesENC)
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	const wchar_t *endCompressBytesENC(void);

	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Must be callled to finalize a compression stream. Returns any remaining
	// (buffered) compressed data.
	// 
	// (See BeginCompressString)
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	bool EndCompressString(CkByteData &outData);

	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Must be callled to finalize a compression stream. Returns any remaining
	// (buffered) compressed data.
	// 
	// (See BeginCompressStringENC)
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	bool EndCompressStringENC(CkString &outStr);
	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Must be callled to finalize a compression stream. Returns any remaining
	// (buffered) compressed data.
	// 
	// (See BeginCompressStringENC)
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	const wchar_t *endCompressStringENC(void);

	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Called to finalize the decompression stream and return any remaining (buffered)
	// decompressed data.
	// 
	// (See BeginDecompressBytes)
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	bool EndDecompressBytes(CkByteData &outData);

	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Called to finalize the decompression stream and return any remaining (buffered)
	// decompressed data.
	// 
	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// (See BeginDecompressBytesENC)
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	bool EndDecompressBytesENC(CkByteData &outData);

	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Called to finalize the decompression stream and return any remaining (buffered)
	// decompressed data.
	// 
	// (See BeginDecompressString)
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	bool EndDecompressString(CkString &outStr);
	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Called to finalize the decompression stream and return any remaining (buffered)
	// decompressed data.
	// 
	// (See BeginDecompressString)
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	const wchar_t *endDecompressString(void);

	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Called to finalize the decompression stream and return any remaining (buffered)
	// decompressed data.
	// 
	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// (See BeginDecompressStringENC)
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	bool EndDecompressStringENC(CkString &outStr);
	// The Begin* , More* , and End* methods are replaced with the FirstChunk and
	// LastChunk properties used in combination with FirstChunk/LastChunk aware
	// methods, such as CompressStr and DecompressBd2 .
	// 
	// Called to finalize the decompression stream and return any remaining (buffered)
	// decompressed data.
	// 
	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// (See BeginDecompressStringENC)
	// 
	// 
	// References:
	// 1: #FirstChunk
	// 2: #LastChunk
	// 3: #CompressStr
	// 4: #DecompressBd2
	const wchar_t *endDecompressStringENC(void);

	// Loads the caller of the task's async method.
	bool LoadTaskCaller(CkTaskW &task);

	// (See BeginCompressBytes)
	bool MoreCompressBytes(CkByteData &data, CkByteData &outData);

	// (See BeginCompressBytes2)
	bool MoreCompressBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);

	// (See BeginCompressBytesENC)
	bool MoreCompressBytesENC(CkByteData &data, CkString &outStr);
	// (See BeginCompressBytesENC)
	const wchar_t *moreCompressBytesENC(CkByteData &data);

	// (See BeginCompressString)
	bool MoreCompressString(const wchar_t *str, CkByteData &outData);

	// (See BeginCompressStringENC)
	bool MoreCompressStringENC(const wchar_t *str, CkString &outStr);
	// (See BeginCompressStringENC)
	const wchar_t *moreCompressStringENC(const wchar_t *str);

	// (See BeginDecompressBytes)
	bool MoreDecompressBytes(CkByteData &data, CkByteData &outData);

	// (See BeginDecompressBytes2)
	bool MoreDecompressBytes2(const void *pByteData, unsigned long szByteData, CkByteData &outBytes);

	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// (See BeginDecompressBytesENC)
	// 
	bool MoreDecompressBytesENC(const wchar_t *str, CkByteData &outData);

	// (See BeginDecompressString)
	bool MoreDecompressString(CkByteData &data, CkString &outStr);
	// (See BeginDecompressString)
	const wchar_t *moreDecompressString(CkByteData &data);

	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// (See BeginDecompressStringENC)
	// 
	bool MoreDecompressStringENC(const wchar_t *str, CkString &outStr);
	// The input to this method is an encoded string containing compressed data. The
	// EncodingMode property should be set prior to calling this method. The input
	// string is decoded according to the EncodingMode (hex, base64, etc.) and then
	// decompressed.
	// 
	// (See BeginDecompressStringENC)
	// 
	const wchar_t *moreDecompressStringENC(const wchar_t *str);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
