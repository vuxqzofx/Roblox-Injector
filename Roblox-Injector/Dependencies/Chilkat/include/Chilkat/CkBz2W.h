// CkBz2W.h: interface for the CkBz2W class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.3.0

#ifndef _CkBz2W_H
#define _CkBz2W_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacksW.h"

class CkBinDataW;
class CkTaskW;
class CkByteData;
class CkBaseProgressW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkBz2W
class CK_VISIBLE_PUBLIC CkBz2W  : public CkClassWithCallbacksW
{
	private:
	bool m_cbOwned;

	private:
	
	// Don't allow assignment or copying these objects.
	CkBz2W(const CkBz2W &);
	CkBz2W &operator=(const CkBz2W &);

    public:
	CkBz2W(void);
	virtual ~CkBz2W(void);

	

	static CkBz2W *createNew(void);
	

	CkBz2W(bool bCallbackOwned);
	static CkBz2W *createNew(bool bCallbackOwned);

	
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
	bool CompressBd(CkBinDataW &bd);

	// Creates an asynchronous task to call the CompressBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressBdAsync(CkBinDataW &bd);

	// Compresses a file to create a BZip2 compressed file (.bz2).
	// 
	// Note: Both inFilename and toPath should be relative or absolute file paths (not just a
	// path to a directory). For example someDir1/someDir2/myFile.txt or
	// c:/someDir1/myFile.bz2 .
	// 
	bool CompressFile(const wchar_t *inFilename, const wchar_t *toPath);

	// Creates an asynchronous task to call the CompressFile method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressFileAsync(const wchar_t *inFilename, const wchar_t *toPath);

	// BZip2 compresses a file to an in-memory image of a .bz2 file.
	bool CompressFileToMem(const wchar_t *inFilename, CkByteData &outBytes);

	// Creates an asynchronous task to call the CompressFileToMem method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressFileToMemAsync(const wchar_t *inFilename);

	// Compresses in-memory data to an in-memory image of a .bz2 file.
	bool CompressMemory(CkByteData &inData, CkByteData &outBytes);

	// Creates an asynchronous task to call the CompressMemory method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressMemoryAsync(CkByteData &inData);

	// BZip2 compresses and creates a .bz2 file from in-memory data.
	bool CompressMemToFile(CkByteData &inData, const wchar_t *toPath);

	// Creates an asynchronous task to call the CompressMemToFile method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *CompressMemToFileAsync(CkByteData &inData, const wchar_t *toPath);

	// Loads the caller of the task's async method.
	bool LoadTaskCaller(CkTaskW &task);

	// BZ2 uncompress the contents of bd, which initially should contain the bytes of
	// a .bz2 file. After uncompressing, the bd contains the original uncompressed
	// content.
	bool UncompressBd(CkBinDataW &bd);

	// Creates an asynchronous task to call the UncompressBd method with the arguments
	// provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UncompressBdAsync(CkBinDataW &bd);

	// Unzips a .bz2 file.
	bool UncompressFile(const wchar_t *inFilename, const wchar_t *toPath);

	// Creates an asynchronous task to call the UncompressFile method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UncompressFileAsync(const wchar_t *inFilename, const wchar_t *toPath);

	// Unzips a .bz2 file directly to memory.
	bool UncompressFileToMem(const wchar_t *inFilename, CkByteData &outBytes);

	// Creates an asynchronous task to call the UncompressFileToMem method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UncompressFileToMemAsync(const wchar_t *inFilename);

	// Unzips from an in-memory image of a .bz2 file directly into memory.
	bool UncompressMemory(CkByteData &inData, CkByteData &outBytes);

	// Creates an asynchronous task to call the UncompressMemory method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UncompressMemoryAsync(CkByteData &inData);

	// Unzips from an in-memory image of a .bz2 file to a file.
	bool UncompressMemToFile(CkByteData &inData, const wchar_t *toPath);

	// Creates an asynchronous task to call the UncompressMemToFile method with the
	// arguments provided.
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *UncompressMemToFileAsync(CkByteData &inData, const wchar_t *toPath);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
