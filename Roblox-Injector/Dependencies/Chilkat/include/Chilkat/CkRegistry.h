
//
// This is NOT a generated or documented Chilkat class.
// This is NOT a generated or documented Chilkat class.
// This is NOT a generated or documented Chilkat class.
// This is NOT a generated or documented Chilkat class.
// This is NOT a generated or documented Chilkat class.
// This is NOT a generated or documented Chilkat class.
//

#ifndef _CkRegistry_H
#define _CkRegistry_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

// CLASS: CkRegistry
class CK_VISIBLE_PUBLIC CkRegistry  : public CkMultiByteBase
{
    private:
	
	// Don't allow assignment or copying these objects.
	CkRegistry(const CkRegistry &);
	CkRegistry &operator=(const CkRegistry &);

    public:
	CkRegistry(void);
	virtual ~CkRegistry(void);

	static CkRegistry *createNew(void);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
	// BEGIN PUBLIC INTERFACE
        bool SetProductInfo(const char *company,
            const char *productName,
            const char *valueName,
            const char *value);

        bool GetProductInfo(const char *company,
            const char *productName,
            const char *valueName,
            CkString &value);

	const char *getProductInfo(const char *company,
            const char *productName,
            const char *valueName);

        bool SetProductKeyInfo(const char *company,
            const char *productName,
            const char *keyName,
            const char *valueName,
            const char *value);

        bool GetProductKeyInfo(const char *company,
            const char *productName,
            const char *keyName,
            const char *valueName,
            CkString &value);

	const char *getProductKeyInfo(const char *company,
            const char *productName,
            const char *keyName,
            const char *valueName);


	// END PUBLIC INTERFACE


};

	
#endif
