/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "X.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

/*[1302]*/
extern const Meta_Property
_X_x;

/*[1325]*/
const Meta_Property
_X_x =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "x",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(X,x),
    0, /* value */
};

/*[2025]*/
static Meta_Feature* _X_MFA[] =
{
    (Meta_Feature*)(void*)&_X_x,
};

/*[2072]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
};

/*[2092]*/
const Meta_Class X::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_CLASS,
    "X",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _X_MFA,
    CIMPLE_ARRAY_SIZE(_X_MFA),
    sizeof(X),
    _locals,
    0, /* super_class */ 
    0, /* num_keys */
    0,
};

CIMPLE_NAMESPACE_END

