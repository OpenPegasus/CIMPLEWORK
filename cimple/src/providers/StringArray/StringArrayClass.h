/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.0.23
//
//==============================================================================

#ifndef _cimple_StringArrayClass_h
#define _cimple_StringArrayClass_h

#include <cimple/cimple.h>

CIMPLE_NAMESPACE_BEGIN

// StringArrayClass keys:
//     Key

/*[1194]*/
class StringArrayClass : public Instance
{
public:
    // StringArrayClass features:
    Property<uint32> Key;
    Property<Array_String> Colors;
    Property<Array_uint32> sizes;

    CIMPLE_CLASS(StringArrayClass)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_StringArrayClass_h */
