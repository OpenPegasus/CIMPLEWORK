/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.0.23
//
//==============================================================================

#ifndef _cimple_CMPL_Derived_h
#define _cimple_CMPL_Derived_h

#include <cimple/cimple.h>
#include "CMPL_Base.h"

CIMPLE_NAMESPACE_BEGIN

// CMPL_Derived keys:
//     Key

/*[1194]*/
class CMPL_Derived : public Instance
{
public:
    // CMPL_Base features:
    Property<uint32> Key;
    Property<String> info;

    // CMPL_Derived features:
    Property<String> info2;

    CIMPLE_CLASS(CMPL_Derived)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_CMPL_Derived_h */