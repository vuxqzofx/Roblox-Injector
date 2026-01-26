// This C++ header is for Chilkat v11.3.0
// This source file is not generated.

#if !defined(_CKSETTINGS_H_INCLUDED_)
#define _CKSETTINGS_H_INCLUDED_

#include "chilkatDefs.h"

#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif

class CK_VISIBLE_PUBLIC CkSettings  
{
public:
	CkSettings();
	virtual ~CkSettings();

	// Call this once at the beginning of your program
	// if your program is multithreaded.
	static void initializeMultithreaded(void);

	// Call this once at the end of your program.
	// It is only necessary if you are testing for memory leaks.
	// Once called, your program should not continue to use Chilkat classes
	// because the build-once/stay resident data will have been deleted.
	static void cleanupMemory(void);

	// Get the sum of the sizes of all the process heaps.
	// Only valid/implemented on Windows..
	//static unsigned long getTotalSizeProcessHeaps(void);

	// Only valid/implemented on Windows.  Returns true if all process heaps are valid,
	// returns false if any process heaps are corrupted.
	static bool validateHeap(void);


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


#endif // !defined(_CKSETTINGS_H_INCLUDED_)
