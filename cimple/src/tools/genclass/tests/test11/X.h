/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#ifndef _cimple_X_h
#define _cimple_X_h

#include <cimple/cimple.h>
#include "A.h"
#include "B.h"
#include "C.h"

CIMPLE_NAMESPACE_BEGIN

// X keys:

/*[928]*/
class X : public Instance
{
public:
    // X features:
    A* a;

    CIMPLE_CLASS(X)
};

/*[1014]*/
class X_foo1_method : public Instance
{
public:
    B* return_value;
    CIMPLE_METHOD(X_foo1_method)
};

/*[1014]*/
class X_foo2_method : public Instance
{
public:
    C* c;
    Property<String> return_value;
    CIMPLE_METHOD(X_foo2_method)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_X_h */
