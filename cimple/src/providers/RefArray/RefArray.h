/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#ifndef _cimple_RefArray_h
#define _cimple_RefArray_h

#include <cimple/cimple.h>
#include "RefArrayParam.h"
#include "RefArrayParam.h"

CIMPLE_NAMESPACE_BEGIN

// RefArray keys:
//     key

/*[928]*/
class RefArray : public Instance
{
public:
    // RefArray features:
    Property<uint32> key;

    CIMPLE_CLASS(RefArray)
};

/*[1014]*/
class RefArray_SendRefArray_method : public Instance
{
public:
    Property< Array<RefArrayParam*> > arr1;
    Property< Array<RefArrayParam*> > arr2;
    Property<uint32> return_value;
    CIMPLE_METHOD(RefArray_SendRefArray_method)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_RefArray_h */
