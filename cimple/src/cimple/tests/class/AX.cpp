/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "AX.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

/*[1387]*/
extern const Meta_Reference
_AX_left;

/*[1398]*/
const Meta_Reference
_AX_left =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE,
    "left",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &X::static_meta_class,
    CIMPLE_OFF(AX,left)
};

/*[1387]*/
extern const Meta_Reference
_AX_right;

/*[1398]*/
const Meta_Reference
_AX_right =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE,
    "right",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &X::static_meta_class,
    CIMPLE_OFF(AX,right)
};

/*[2025]*/
static Meta_Feature* _AX_MFA[] =
{
    (Meta_Feature*)(void*)&_AX_left,
    (Meta_Feature*)(void*)&_AX_right,
};

/*[2072]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
};

/*[2092]*/
const Meta_Class AX::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_ASSOCIATION,
    "AX",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _AX_MFA,
    CIMPLE_ARRAY_SIZE(_AX_MFA),
    sizeof(AX),
    _locals,
    0, /* super_class */ 
    0, /* num_keys */
    0,
};

CIMPLE_NAMESPACE_END
