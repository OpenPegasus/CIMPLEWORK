/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CIM_EnabledLogicalElement.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_8FB04575347F14F28B3F4E935D6199D7;

/*[1302]*/
extern const Meta_Property
_CIM_ManagedElement_Caption;

/*[1302]*/
extern const Meta_Property
_CIM_ManagedElement_Description;

/*[1302]*/
extern const Meta_Property
_CIM_ManagedElement_ElementName;

/*[1302]*/
extern const Meta_Property
_CIM_ManagedSystemElement_InstallDate;

/*[1302]*/
extern const Meta_Property
_CIM_ManagedSystemElement_Name;

/*[1302]*/
extern const Meta_Property
_CIM_ManagedSystemElement_OperationalStatus;

/*[1302]*/
extern const Meta_Property
_CIM_ManagedSystemElement_StatusDescriptions;

/*[1302]*/
extern const Meta_Property
_CIM_ManagedSystemElement_Status;

/*[1302]*/
extern const Meta_Property
_CIM_ManagedSystemElement_HealthState;

/*[1302]*/
extern const Meta_Property
_CIM_EnabledLogicalElement_EnabledState;

/*[274]*/
static const Meta_Value_Scalar<uint16>
_CIM_EnabledLogicalElement_EnabledState_MV =
{
    5
};

/*[1325]*/
const Meta_Property
_CIM_EnabledLogicalElement_EnabledState =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "EnabledState",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT16,
    0, /* subscript */
    CIMPLE_OFF(CIM_EnabledLogicalElement,EnabledState),
    (const Meta_Value*)(void*)&_CIM_EnabledLogicalElement_EnabledState_MV,
};

/*[1302]*/
extern const Meta_Property
_CIM_EnabledLogicalElement_OtherEnabledState;

/*[1325]*/
const Meta_Property
_CIM_EnabledLogicalElement_OtherEnabledState =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "OtherEnabledState",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_EnabledLogicalElement,OtherEnabledState),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_CIM_EnabledLogicalElement_RequestedState;

/*[274]*/
static const Meta_Value_Scalar<uint16>
_CIM_EnabledLogicalElement_RequestedState_MV =
{
    12
};

/*[1325]*/
const Meta_Property
_CIM_EnabledLogicalElement_RequestedState =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "RequestedState",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT16,
    0, /* subscript */
    CIMPLE_OFF(CIM_EnabledLogicalElement,RequestedState),
    (const Meta_Value*)(void*)&_CIM_EnabledLogicalElement_RequestedState_MV,
};

/*[1302]*/
extern const Meta_Property
_CIM_EnabledLogicalElement_EnabledDefault;

/*[274]*/
static const Meta_Value_Scalar<uint16>
_CIM_EnabledLogicalElement_EnabledDefault_MV =
{
    2
};

/*[1325]*/
const Meta_Property
_CIM_EnabledLogicalElement_EnabledDefault =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ|CIMPLE_FLAG_WRITE,
    "EnabledDefault",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT16,
    0, /* subscript */
    CIMPLE_OFF(CIM_EnabledLogicalElement,EnabledDefault),
    (const Meta_Value*)(void*)&_CIM_EnabledLogicalElement_EnabledDefault_MV,
};

/*[1302]*/
extern const Meta_Property
_CIM_EnabledLogicalElement_TimeOfLastStateChange;

/*[1325]*/
const Meta_Property
_CIM_EnabledLogicalElement_TimeOfLastStateChange =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "TimeOfLastStateChange",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    DATETIME,
    0, /* subscript */
    CIMPLE_OFF(CIM_EnabledLogicalElement,TimeOfLastStateChange),
    0, /* value */
};

/*[1516]*/
static const Meta_Property
_CIM_EnabledLogicalElement_RequestStateChange_RequestedState =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN,
    "RequestedState",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT16,
    0,
    CIMPLE_OFF(CIM_EnabledLogicalElement_RequestStateChange_method,RequestedState),
    0, /* value */
};

/*[1455]*/
static const Meta_Reference
_CIM_EnabledLogicalElement_RequestStateChange_Job =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_OUT,
    "Job",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &CIM_ConcreteJob::static_meta_class,
    CIMPLE_OFF(CIM_EnabledLogicalElement_RequestStateChange_method,Job)
};

/*[1516]*/
static const Meta_Property
_CIM_EnabledLogicalElement_RequestStateChange_TimeoutPeriod =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN,
    "TimeoutPeriod",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    DATETIME,
    0,
    CIMPLE_OFF(CIM_EnabledLogicalElement_RequestStateChange_method,TimeoutPeriod),
    0, /* value */
};

/*[1669]*/
static const Meta_Property
_CIM_EnabledLogicalElement_RequestStateChange_return_value =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_OUT,
    "return_value",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0,
    CIMPLE_OFF(CIM_EnabledLogicalElement_RequestStateChange_method,return_value),
    0, /* value */
};

/*[1645]*/
static Meta_Feature* _CIM_EnabledLogicalElement_RequestStateChange_MFA[] =
{
    (Meta_Feature*)(void*)&_CIM_EnabledLogicalElement_RequestStateChange_RequestedState,
    (Meta_Feature*)(void*)&_CIM_EnabledLogicalElement_RequestStateChange_Job,
    (Meta_Feature*)(void*)&_CIM_EnabledLogicalElement_RequestStateChange_TimeoutPeriod,
    (Meta_Feature*)(void*)&_CIM_EnabledLogicalElement_RequestStateChange_return_value
};

/*[1847]*/
const Meta_Method
CIM_EnabledLogicalElement_RequestStateChange_method::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_METHOD,
    "RequestStateChange",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIM_EnabledLogicalElement_RequestStateChange_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_EnabledLogicalElement_RequestStateChange_MFA),
    sizeof(CIM_EnabledLogicalElement_RequestStateChange_method),
    UINT32,
};

/*[2025]*/
static Meta_Feature* _CIM_EnabledLogicalElement_MFA[] =
{
    (Meta_Feature*)(void*)&_CIM_ManagedElement_Caption,
    (Meta_Feature*)(void*)&_CIM_ManagedElement_Description,
    (Meta_Feature*)(void*)&_CIM_ManagedElement_ElementName,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_InstallDate,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_Name,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_OperationalStatus,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_StatusDescriptions,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_Status,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_HealthState,
    (Meta_Feature*)(void*)&_CIM_EnabledLogicalElement_EnabledState,
    (Meta_Feature*)(void*)&_CIM_EnabledLogicalElement_OtherEnabledState,
    (Meta_Feature*)(void*)&_CIM_EnabledLogicalElement_RequestedState,
    (Meta_Feature*)(void*)&_CIM_EnabledLogicalElement_EnabledDefault,
    (Meta_Feature*)(void*)&_CIM_EnabledLogicalElement_TimeOfLastStateChange,
    (Meta_Feature*)(void*)&CIM_EnabledLogicalElement_RequestStateChange_method::static_meta_class,
};

/*[2072]*/
static const Meta_Feature_Local _locals[] =
{
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {1},
    {1},
    {1},
    {1},
    {1},
    {1},
};

/*[2092]*/
const Meta_Class CIM_EnabledLogicalElement::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_CLASS|CIMPLE_FLAG_ABSTRACT,
    "CIM_EnabledLogicalElement",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIM_EnabledLogicalElement_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_EnabledLogicalElement_MFA),
    sizeof(CIM_EnabledLogicalElement),
    _locals,
    &CIM_LogicalElement::static_meta_class,
    0, /* num_keys */
    &__meta_repository_8FB04575347F14F28B3F4E935D6199D7,
};

CIMPLE_NAMESPACE_END

