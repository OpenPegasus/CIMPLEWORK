/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.0.6
//
//==============================================================================

#ifndef _cimple_cmpl_test_h
#define _cimple_cmpl_test_h

#include <cimple/cimple.h>

CIMPLE_NAMESPACE_BEGIN

// cmpl_test keys:
//     id

/*[930]*/
class cmpl_test : public Instance
{
public:
    // cmpl_test features:
    Property<uint32> id;
    Property<String> info;

    CIMPLE_CLASS(cmpl_test)
};

/*[1016]*/
class cmpl_test_foo_method : public Instance
{
public:
    Property<String> arg;
    Property<uint32> return_value;
    CIMPLE_METHOD(cmpl_test_foo_method)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_cmpl_test_h */
