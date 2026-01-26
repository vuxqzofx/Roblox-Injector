// CkBz2.h: interface for the CkBz2 class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.3.0

#define _CkVersion 11.3.0

#ifndef _CkBz2_H
#define _CkBz2_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkBinData;
class CkByteData;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkBz2
class CK_VISIBLE_PUBLIC CkBz2  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkBz2(const CkBz2 &);
	CkBz2 &operator=(const CkBz2 &);

    public:
	CkBz2(void);
	virtual ~CkBz2(void);

	static CkBz2 *createNew(void);
	static CkBz2 *createNew2(int progLang);
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



	// ----------------------
	// Methods
	// ----------------------
	// BZ2 compress the contents of bd. After compression, the bd contains the
	// binary content of a .bz2 file, which is slightly different than simple BZIP2
	// compressed data because a .bz2 file contains:
	//     1. Header
	//     2. Compressed blocks
	//     3. End-of-stream trailer
	bool CompressBd(CkBinData &bd);

	// BZ2 compress the contents of bd. After compression, the bd contains the
	// binary content of a .bz2 file, which is slightly different than simple BZIP2
	// compressed data because a .bz2 file contains:
	//     1. Header
	//     2. Compressed blocks
	//     3. End-of-stream trailer
	CkTask *CompressBdAsync(CkBinData &bd);


	// Compresses a file to create a BZip2 compressed file (.bz2).
	// 
	// Note: Both inFilename and toPath should be relative or absolute file paths (not just a
	// path to a directory). For example someDir1/someDir2/myFile.txt or
	// c:/someDir1/myFile.bz2 .
	// 
	bool CompressFile(const char *inFilename, const char *toPath);

	// Compresses a file to create a BZip2 compressed file (.bz2).
	// 
	// Note: Both inFilename and toPath should be relative or absolute file paths (not just a
	// path to a directory). For example someDir1/someDir2/myFile.txt or
	// c:/someDir1/myFile.bz2 .
	// 
	CkTask *CompressFileAsync(const char *inFilename, const char *toPath);


	// BZip2 compresses a file to an in-memory image of a .bz2 file.
	bool CompressFileToMem(const char *inFilename, CkByteData &outBytes);

	// BZip2 compresses a file to an in-memory image of a .bz2 file.
	CkTask *CompressFileToMemAsync(const char *inFilename);


	// Compresses in-memory data to an in-memory image of a .bz2 file.
	bool CompressMemory(CkByteData &inData, CkByteData &outBytes);

	// Compresses in-memory data to an in-memory image of a .bz2 file.
	CkTask *CompressMemoryAsync(CkByteData &inData);


	// BZip2 compresses and creates a .bz2 file from in-memory data.
	bool CompressMemToFile(CkByteData &inData, const char *toPath);

	// BZip2 compresses and creates a .bz2 file from in-memory data.
	CkTask *CompressMemToFileAsync(CkByteData &inData, const char *toPath);


	// Loads the caller of the task's async method.
	bool LoadTaskCaller(CkTask &task);


	// BZ2 uncompress the contents of bd, which initially should contain the bytes of
	// a .bz2 file. After uncompressing, the bd contains the original uncompressed
	// content.
	bool UncompressBd(CkBinData &bd);

	// BZ2 uncompress the contents of bd, which initially should contain the bytes of
	// a .bz2 file. After uncompressing, the bd contains the original uncompressed
	// content.
	CkTask *UncompressBdAsync(CkBinData &bd);


	// Unzips a .bz2 file.
	bool UncompressFile(const char *inFilename, const char *toPath);

	// Unzips a .bz2 file.
	CkTask *UncompressFileAsync(const char *inFilename, const char *toPath);


	// Unzips a .bz2 file directly to memory.
	bool UncompressFileToMem(const char *inFilename, CkByteData &outBytes);

	// Unzips a .bz2 file directly to memory.
	CkTask *UncompressFileToMemAsync(const char *inFilename);


	// Unzips from an in-memory image of a .bz2 file directly into memory.
	bool UncompressMemory(CkByteData &inData, CkByteData &outBytes);

	// Unzips from an in-memory image of a .bz2 file directly into memory.
	CkTask *UncompressMemoryAsync(CkByteData &inData);


	// Unzips from an in-memory image of a .bz2 file to a file.
	bool UncompressMemToFile(CkByteData &inData, const char *toPath);

	// Unzips from an in-memory image of a .bz2 file to a file.
	CkTask *UncompressMemToFileAsync(CkByteData &inData, const char *toPath);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
