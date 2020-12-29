/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.0.5
//
//==============================================================================

#ifndef _cimple_CIMPLE_ExceptionLink_h
#define _cimple_CIMPLE_ExceptionLink_h

#include <cimple/cimple.h>
#include "CIMPLE_Exception.h"
#include "CIMPLE_Exception.h"

CIMPLE_NAMESPACE_BEGIN

// CIMPLE_ExceptionLink keys:

/*[930]*/
class CIMPLE_ExceptionLink : public Instance
{
public:
    // CIMPLE_ExceptionLink features:
    CIMPLE_Exception* left;
    CIMPLE_Exception* right;

    CIMPLE_CLASS(CIMPLE_ExceptionLink)
};

/*[1016]*/
class CIMPLE_ExceptionLink_setException_method : public Instance
{
public:
    Property<uint32> Exception;
    Property<boolean> getInstanceDefault;
    Property<boolean> associatorsDefault;
    Property<uint32> return_value;
    CIMPLE_METHOD(CIMPLE_ExceptionLink_setException_method)
};

/*[1016]*/
class CIMPLE_ExceptionLink_testException_method : public Instance
{
public:
    Property<uint32> return_value;
    CIMPLE_METHOD(CIMPLE_ExceptionLink_testException_method)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIMPLE_ExceptionLink_h */