/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "Class2.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_BF07919D97D812EA85A754AAA084E729;

/*[1302]*/
extern const Meta_Property
_Class2_key;

/*[1325]*/
const Meta_Property
_Class2_key =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "key",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(Class2,key),
    0, /* value */
};

/*[2025]*/
static Meta_Feature* _Class2_MFA[] =
{
    (Meta_Feature*)(void*)&_Class2_key,
};

/*[2072]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
};

/*[2092]*/
const Meta_Class Class2::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_CLASS,
    "Class2",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _Class2_MFA,
    CIMPLE_ARRAY_SIZE(_Class2_MFA),
    sizeof(Class2),
    _locals,
    0, /* super_class */ 
    1, /* num_keys */
    &__meta_repository_BF07919D97D812EA85A754AAA084E729,
};

CIMPLE_NAMESPACE_END
