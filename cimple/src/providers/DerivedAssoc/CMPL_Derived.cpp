/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.0.23
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CMPL_Derived.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_6C46002DB9F216FC876D626F34CA100C;

/*[1568]*/
extern const Meta_Property
_CMPL_Base_Key;

/*[1568]*/
extern const Meta_Property
_CMPL_Base_info;

/*[1568]*/
extern const Meta_Property
_CMPL_Derived_info2;

/*[1591]*/
const Meta_Property
_CMPL_Derived_info2 =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "info2",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CMPL_Derived,info2),
    0, /* value */
};

/*[2291]*/
static Meta_Feature* _CMPL_Derived_MFA[] =
{
    (Meta_Feature*)(void*)&_CMPL_Base_Key,
    (Meta_Feature*)(void*)&_CMPL_Base_info,
    (Meta_Feature*)(void*)&_CMPL_Derived_info2,
};

/*[2338]*/
static const Meta_Feature_Local _locals[] =
{
    {0},
    {0},
    {1},
};

/*[2358]*/
const Meta_Class CMPL_Derived::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_CLASS,
    "CMPL_Derived",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CMPL_Derived_MFA,
    CIMPLE_ARRAY_SIZE(_CMPL_Derived_MFA),
    sizeof(CMPL_Derived),
    _locals,
    &CMPL_Base::static_meta_class,
    1, /* num_keys */
    &__meta_repository_6C46002DB9F216FC876D626F34CA100C,
};

CIMPLE_NAMESPACE_END
