/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#ifndef _cimple_BUG31_C_h
#define _cimple_BUG31_C_h

#include <cimple/cimple.h>
#include "BUG31_A.h"
#include "BUG31_A.h"

CIMPLE_NAMESPACE_BEGIN

// BUG31_C keys:
//     key

/*[928]*/
class BUG31_C : public Instance
{
public:
    // BUG31_C features:
    Property<uint32> key;

    CIMPLE_CLASS(BUG31_C)
};

/*[1014]*/
class BUG31_C_meth_method : public Instance
{
public:
    BUG31_A* r;
    BUG31_A* s;
    Property<uint32> return_value;
    CIMPLE_METHOD(BUG31_C_meth_method)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_BUG31_C_h */
