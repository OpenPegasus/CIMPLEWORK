/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "MyEmbeddedClass.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_509811DF86BC16B49FF1D1DEB96FECB6;

/*[1302]*/
extern const Meta_Property
_MyEmbeddedClass_msg;

/*[1325]*/
const Meta_Property
_MyEmbeddedClass_msg =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "msg",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(MyEmbeddedClass,msg),
    0, /* value */
};

/*[2025]*/
static Meta_Feature* _MyEmbeddedClass_MFA[] =
{
    (Meta_Feature*)(void*)&_MyEmbeddedClass_msg,
};

/*[2072]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
};

/*[2092]*/
const Meta_Class MyEmbeddedClass::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_CLASS,
    "MyEmbeddedClass",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _MyEmbeddedClass_MFA,
    CIMPLE_ARRAY_SIZE(_MyEmbeddedClass_MFA),
    sizeof(MyEmbeddedClass),
    _locals,
    0, /* super_class */ 
    0, /* num_keys */
    &__meta_repository_509811DF86BC16B49FF1D1DEB96FECB6,
};

CIMPLE_NAMESPACE_END

