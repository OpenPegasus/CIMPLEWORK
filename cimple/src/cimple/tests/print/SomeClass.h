/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#ifndef _cimple_SomeClass_h
#define _cimple_SomeClass_h

#include <cimple/cimple.h>
#include "OtherClass.h"
#include "OtherClass.h"

CIMPLE_NAMESPACE_BEGIN

// SomeClass keys:

/*[928]*/
class SomeClass : public Instance
{
public:
    // SomeClass features:
    Property<String> prop1;
    Property<uint32> prop2;
    Property<boolean> prop3;
    Property<Array_String> prop4;
    Property<Array_uint32> prop5;
    Property<Array_boolean> prop6;
    OtherClass* other1;
    OtherClass* other2;

    CIMPLE_CLASS(SomeClass)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_SomeClass_h */