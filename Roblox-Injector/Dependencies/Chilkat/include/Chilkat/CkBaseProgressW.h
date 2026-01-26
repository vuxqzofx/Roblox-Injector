// CkBaseProgressW.h: interface for the CkBaseProgressW class.
//
//////////////////////////////////////////////////////////////////////

#ifndef _CKBASEPROGRESSW_H
#define _CKBASEPROGRESSW_H

#include "CkObject.h"
	
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
	
class CkTaskW;

#include "ck_inttypes.h"

#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 
// This #define is deprecated and will be removed in a future version of Chilkat.
#define CK_BASEPROGRESSW_API \
    void AbortCheck(bool *abort);\
    void PercentDone(int pctDone, bool *abort);\
    void ProgressInfo(const wchar_t *name, const wchar_t *value);\
    void TextData(const wchar_t *data);\
    void BinaryData(const unsigned char *data, unsigned int numBytes);\
    void TaskCompleted(CkTaskW &task);

class CK_VISIBLE_PUBLIC CkBaseProgressW : public CkObject 
{
    private:
	void *m_impl;

	// No copy constructor or assignment allowed..
	CkBaseProgressW(const CkBaseProgressW &);
	CkBaseProgressW &operator=(const CkBaseProgressW &);

    public:
	CkBaseProgressW();
	virtual ~CkBaseProgressW();

	// This method is for internal use only.
	void *getProgressImpl(void);

	// Called periodically to check to see if the method call should be aborted.
	// The HeartbeatMs property controls the frequency of AbortCheck callbacks.
	virtual void AbortCheck(bool *abort) 
	    {
	    bool bAborted = AbortCheck();
	    if (abort) *abort = bAborted;
	    }
	// Return true if the method call should abort; return false for no abort.
	virtual bool AbortCheck(void) 
	    {
	    return false;
	    }

	// Called to indicate the current percentage completed for a method call.
	// PercentDone callbacks only happen where it makes sense and where it's possible.
	// Not all methods will have PercentDone callbacks.
	virtual void PercentDone(int pctDone, bool *abort) 
	    {
	    bool bAborted = PercentDone(pctDone);
	    if (abort) *abort = bAborted;
	    }
	// Return true if the method call should abort; return false for no abort.
	virtual bool PercentDone(int /*pctDone*/) 
	    { 
	    return false;
	    }

	// Open-ended callback where the name indicates the type of information provided.
	// The ProgressInfo callbacks depend on the method. 
	// To see what information is provided in ProgressInfo callbacks for any particular method,
	// if any, create a callback handler to log the callbacks for testing purposes.
	// Virtually all ProgressInfo callbacks should be self-explanatory.
	virtual void ProgressInfo(const wchar_t * /*name*/, const wchar_t * /*value*/) { }

	// Called when an asynchronous task completes, is aborted, canceled, etc.
	// TaskCompleted is called from the background thread where the asynchronous method call is running.
	virtual void TaskCompleted(CkTaskW & /*task*/) { }

	// TextData and BinaryData callbacks are not used.
	// These are deprecated and will be removed in a future version of Chilkat.
	virtual void TextData(const wchar_t * /*data*/) { }
	virtual void BinaryData(const unsigned char * /*data*/, unsigned int /*numBytes*/) { }

};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


#endif
