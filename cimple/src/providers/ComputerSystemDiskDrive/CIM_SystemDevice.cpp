/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CIM_SystemDevice.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_0002700C188810708CC2460F00D0696A;

/*[1387]*/
extern const Meta_Reference
_CIM_SystemDevice_GroupComponent;

/*[1398]*/
const Meta_Reference
_CIM_SystemDevice_GroupComponent =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_KEY|CIMPLE_FLAG_AGGREGATE,
    "GroupComponent",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &CIM_System::static_meta_class,
    CIMPLE_OFF(CIM_SystemDevice,GroupComponent)
};

/*[1387]*/
extern const Meta_Reference
_CIM_SystemDevice_PartComponent;

/*[1398]*/
const Meta_Reference
_CIM_SystemDevice_PartComponent =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_KEY|CIMPLE_FLAG_WEAK,
    "PartComponent",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &CIM_LogicalDevice::static_meta_class,
    CIMPLE_OFF(CIM_SystemDevice,PartComponent)
};

/*[2025]*/
static Meta_Feature* _CIM_SystemDevice_MFA[] =
{
    (Meta_Feature*)(void*)&_CIM_SystemDevice_GroupComponent,
    (Meta_Feature*)(void*)&_CIM_SystemDevice_PartComponent,
};

/*[2072]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
};

/*[2092]*/
const Meta_Class CIM_SystemDevice::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_ASSOCIATION|CIMPLE_FLAG_AGGREGATION,
    "CIM_SystemDevice",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIM_SystemDevice_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_SystemDevice_MFA),
    sizeof(CIM_SystemDevice),
    _locals,
    &CIM_SystemComponent::static_meta_class,
    2, /* num_keys */
    &__meta_repository_0002700C188810708CC2460F00D0696A,
};

CIMPLE_NAMESPACE_END

