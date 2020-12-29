/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CIM_ManagedSystemElement.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_C2AA78B37C6515EB9DBF2BC150C67E7F;

extern const Meta_Property
_CIM_ManagedElement_Caption;

extern const Meta_Property
_CIM_ManagedElement_Description;

extern const Meta_Property
_CIM_ManagedElement_ElementName;

extern const Meta_Property
_CIM_ManagedSystemElement_InstallDate;

const Meta_Property
_CIM_ManagedSystemElement_InstallDate =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "InstallDate",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    DATETIME,
    0, /* subscript */
    CIMPLE_OFF(CIM_ManagedSystemElement,InstallDate),
    0, /* value */
};

extern const Meta_Property
_CIM_ManagedSystemElement_Name;

const Meta_Property
_CIM_ManagedSystemElement_Name =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "Name",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_ManagedSystemElement,Name),
    0, /* value */
};

extern const Meta_Property
_CIM_ManagedSystemElement_OperationalStatus;

const Meta_Property
_CIM_ManagedSystemElement_OperationalStatus =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "OperationalStatus",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT16,
    -1, /* subscript */
    CIMPLE_OFF(CIM_ManagedSystemElement,OperationalStatus),
    0, /* value */
};

extern const Meta_Property
_CIM_ManagedSystemElement_StatusDescriptions;

const Meta_Property
_CIM_ManagedSystemElement_StatusDescriptions =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "StatusDescriptions",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    -1, /* subscript */
    CIMPLE_OFF(CIM_ManagedSystemElement,StatusDescriptions),
    0, /* value */
};

extern const Meta_Property
_CIM_ManagedSystemElement_Status;

const Meta_Property
_CIM_ManagedSystemElement_Status =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "Status",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_ManagedSystemElement,Status),
    0, /* value */
};

extern const Meta_Property
_CIM_ManagedSystemElement_HealthState;

const Meta_Property
_CIM_ManagedSystemElement_HealthState =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "HealthState",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT16,
    0, /* subscript */
    CIMPLE_OFF(CIM_ManagedSystemElement,HealthState),
    0, /* value */
};

static Meta_Feature* _CIM_ManagedSystemElement_MFA[] =
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
};

static const Meta_Feature_Local _locals[] =
{
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

const Meta_Class CIM_ManagedSystemElement::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_CLASS|CIMPLE_FLAG_ABSTRACT,
    "CIM_ManagedSystemElement",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIM_ManagedSystemElement_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_MFA),
    sizeof(CIM_ManagedSystemElement),
    _locals,
    &CIM_ManagedElement::static_meta_class,
    0, /* num_keys */
    0x0DD66B62, /* crc */
    &__meta_repository_C2AA78B37C6515EB9DBF2BC150C67E7F,
};

CIMPLE_NAMESPACE_END
