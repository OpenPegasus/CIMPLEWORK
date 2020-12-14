/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CIM_CommonDatabase.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

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
_CIM_CommonDatabase_InstanceID;

/*[1325]*/
const Meta_Property
_CIM_CommonDatabase_InstanceID =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "InstanceID",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_CommonDatabase,InstanceID),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_CIM_CommonDatabase_DatabaseVersion;

/*[1325]*/
const Meta_Property
_CIM_CommonDatabase_DatabaseVersion =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "DatabaseVersion",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_CommonDatabase,DatabaseVersion),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_CIM_CommonDatabase_LastBackup;

/*[1325]*/
const Meta_Property
_CIM_CommonDatabase_LastBackup =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "LastBackup",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    DATETIME,
    0, /* subscript */
    CIMPLE_OFF(CIM_CommonDatabase,LastBackup),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_CIM_CommonDatabase_SizeAllocated;

/*[1325]*/
const Meta_Property
_CIM_CommonDatabase_SizeAllocated =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "SizeAllocated",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(CIM_CommonDatabase,SizeAllocated),
    0, /* value */
};

/*[1302]*/
extern const Meta_Property
_CIM_CommonDatabase_SizeUnits;

/*[1325]*/
const Meta_Property
_CIM_CommonDatabase_SizeUnits =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "SizeUnits",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT16,
    0, /* subscript */
    CIMPLE_OFF(CIM_CommonDatabase,SizeUnits),
    0, /* value */
};

/*[2025]*/
static Meta_Feature* _CIM_CommonDatabase_MFA[] =
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
    (Meta_Feature*)(void*)&_CIM_CommonDatabase_InstanceID,
    (Meta_Feature*)(void*)&_CIM_CommonDatabase_DatabaseVersion,
    (Meta_Feature*)(void*)&_CIM_CommonDatabase_LastBackup,
    (Meta_Feature*)(void*)&_CIM_CommonDatabase_SizeAllocated,
    (Meta_Feature*)(void*)&_CIM_CommonDatabase_SizeUnits,
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
const Meta_Class CIM_CommonDatabase::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_CLASS,
    "CIM_CommonDatabase",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIM_CommonDatabase_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_CommonDatabase_MFA),
    sizeof(CIM_CommonDatabase),
    _locals,
    &CIM_EnabledLogicalElement::static_meta_class,
    1, /* num_keys */
    0,
};

CIMPLE_NAMESPACE_END

