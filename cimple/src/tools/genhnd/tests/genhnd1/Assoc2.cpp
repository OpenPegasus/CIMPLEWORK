/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.0.22
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "Assoc2.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_737F1D2238421FC5AB9BC02831CC9C69;

/*[1387]*/
extern const Meta_Reference
_Assoc2_Left;

/*[1398]*/
const Meta_Reference
_Assoc2_Left =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_KEY,
    "Left",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &Class2::static_meta_class,
    CIMPLE_OFF(Assoc2,Left)
};

/*[1387]*/
extern const Meta_Reference
_Assoc2_Right;

/*[1398]*/
const Meta_Reference
_Assoc2_Right =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_KEY,
    "Right",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &Class2::static_meta_class,
    CIMPLE_OFF(Assoc2,Right)
};

/*[2025]*/
static Meta_Feature* _Assoc2_MFA[] =
{
    (Meta_Feature*)(void*)&_Assoc2_Left,
    (Meta_Feature*)(void*)&_Assoc2_Right,
};

/*[2072]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
};

/*[2092]*/
const Meta_Class Assoc2::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_ASSOCIATION,
    "Assoc2",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _Assoc2_MFA,
    CIMPLE_ARRAY_SIZE(_Assoc2_MFA),
    sizeof(Assoc2),
    _locals,
    &Assoc1::static_meta_class,
    2, /* num_keys */
    &__meta_repository_737F1D2238421FC5AB9BC02831CC9C69,
};

CIMPLE_NAMESPACE_END
