/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CIM_System.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_2740D412608F1B16834F5DE003A2AD46;

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
_CIM_System_Name;

/*[1325]*/
const Meta_Property
_CIM_System_Name =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "Name",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_System,Name),
    0, /* value */
};

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

/*[1302]*/
extern const Meta_Property
_CIM_EnabledLogicalElement_OtherEnabledState;

/*[1302]*/
extern const Meta_Property
_CIM_EnabledLogicalElement_RequestedState;

/*[1302]*/
extern const Meta_Property
_CIM_EnabledLogicalElement_EnabledDefault;

/*[1302]*/
extern const Meta_Property
_CIM_EnabledLogicalElement_TimeOfLastStateChange;

/*[1302]*/
extern const Meta_Property
_CIM_System_CreationClassName;

/*[1325]*/
const Meta_Property
_CIM_System_CreationClassName =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "CreationClassName",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_System,CreationClassName),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_CIM_System_NameFormat;

/*[1325]*/
const Meta_Property
_CIM_System_NameFormat =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "NameFormat",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_System,NameFormat),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_CIM_System_PrimaryOwnerName;

/*[1325]*/
const Meta_Property
_CIM_System_PrimaryOwnerName =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ|CIMPLE_FLAG_WRITE,
    "PrimaryOwnerName",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_System,PrimaryOwnerName),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_CIM_System_PrimaryOwnerContact;

/*[1325]*/
const Meta_Property
_CIM_System_PrimaryOwnerContact =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ|CIMPLE_FLAG_WRITE,
    "PrimaryOwnerContact",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_System,PrimaryOwnerContact),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_CIM_System_Roles;

/*[1325]*/
const Meta_Property
_CIM_System_Roles =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ|CIMPLE_FLAG_WRITE,
    "Roles",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    -1, /* subscript */
    CIMPLE_OFF(CIM_System,Roles),
    0, /* value */
};

/*[2025]*/
static Meta_Feature* _CIM_System_MFA[] =
{
    (Meta_Feature*)(void*)&_CIM_ManagedElement_Caption,
    (Meta_Feature*)(void*)&_CIM_ManagedElement_Description,
    (Meta_Feature*)(void*)&_CIM_ManagedElement_ElementName,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_InstallDate,
    (Meta_Feature*)(void*)&_CIM_System_Name,
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
    (Meta_Feature*)(void*)&_CIM_System_CreationClassName,
    (Meta_Feature*)(void*)&_CIM_System_NameFormat,
    (Meta_Feature*)(void*)&_CIM_System_PrimaryOwnerName,
    (Meta_Feature*)(void*)&_CIM_System_PrimaryOwnerContact,
    (Meta_Feature*)(void*)&_CIM_System_Roles,
};

/*[2072]*/
static const Meta_Feature_Local _locals[] =
{
    {0},
    {0},
    {0},
    {0},
    {1},
    {0},
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
};

/*[2092]*/
const Meta_Class CIM_System::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_CLASS|CIMPLE_FLAG_ABSTRACT,
    "CIM_System",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIM_System_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_System_MFA),
    sizeof(CIM_System),
    _locals,
    &CIM_EnabledLogicalElement::static_meta_class,
    2, /* num_keys */
    &__meta_repository_2740D412608F1B16834F5DE003A2AD46,
};

CIMPLE_NAMESPACE_END

