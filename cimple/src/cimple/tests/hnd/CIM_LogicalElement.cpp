/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CIM_LogicalElement.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_6827E083506B1A56883F566A87E0489F;

extern const Meta_Qualifier
_CIM_ManagedElement_Caption_MaxLen_MQ;

static const Meta_Qualifier*
_CIM_LogicalElement_Caption_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ManagedElement_Caption_MaxLen_MQ,
};

extern const Meta_Property
_CIM_ManagedElement_Caption;

static const Meta_Qualifier*
_CIM_LogicalElement_Description_MQA[] =
{
};

extern const Meta_Property
_CIM_ManagedElement_Description;

static const Meta_Qualifier*
_CIM_LogicalElement_ElementName_MQA[] =
{
};

extern const Meta_Property
_CIM_ManagedElement_ElementName;

extern const Meta_Qualifier
_CIM_ManagedSystemElement_InstallDate_MappingStrings_MQ;

static const Meta_Qualifier*
_CIM_LogicalElement_InstallDate_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_InstallDate_MappingStrings_MQ,
};

extern const Meta_Property
_CIM_ManagedSystemElement_InstallDate;

extern const Meta_Qualifier
_CIM_ManagedSystemElement_Name_MaxLen_MQ;

static const Meta_Qualifier*
_CIM_LogicalElement_Name_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_Name_MaxLen_MQ,
};

extern const Meta_Property
_CIM_ManagedSystemElement_Name;

extern const Meta_Qualifier
_CIM_ManagedSystemElement_OperationalStatus_ValueMap_MQ;

extern const Meta_Qualifier
_CIM_ManagedSystemElement_OperationalStatus_Values_MQ;

extern const Meta_Qualifier
_CIM_ManagedSystemElement_OperationalStatus_ArrayType_MQ;

extern const Meta_Qualifier
_CIM_ManagedSystemElement_OperationalStatus_ModelCorrespondence_MQ;

static const Meta_Qualifier*
_CIM_LogicalElement_OperationalStatus_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_OperationalStatus_ValueMap_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_OperationalStatus_Values_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_OperationalStatus_ArrayType_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_OperationalStatus_ModelCorrespondence_MQ,
};

extern const Meta_Property
_CIM_ManagedSystemElement_OperationalStatus;

extern const Meta_Qualifier
_CIM_ManagedSystemElement_StatusDescriptions_ArrayType_MQ;

extern const Meta_Qualifier
_CIM_ManagedSystemElement_StatusDescriptions_ModelCorrespondence_MQ;

static const Meta_Qualifier*
_CIM_LogicalElement_StatusDescriptions_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_StatusDescriptions_ArrayType_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_StatusDescriptions_ModelCorrespondence_MQ,
};

extern const Meta_Property
_CIM_ManagedSystemElement_StatusDescriptions;

extern const Meta_Qualifier
_CIM_ManagedSystemElement_Status_Deprecated_MQ;

extern const Meta_Qualifier
_CIM_ManagedSystemElement_Status_ValueMap_MQ;

extern const Meta_Qualifier
_CIM_ManagedSystemElement_Status_MaxLen_MQ;

static const Meta_Qualifier*
_CIM_LogicalElement_Status_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_Status_Deprecated_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_Status_ValueMap_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_Status_MaxLen_MQ,
};

extern const Meta_Property
_CIM_ManagedSystemElement_Status;

extern const Meta_Qualifier
_CIM_ManagedSystemElement_HealthState_ValueMap_MQ;

extern const Meta_Qualifier
_CIM_ManagedSystemElement_HealthState_Values_MQ;

static const Meta_Qualifier*
_CIM_LogicalElement_HealthState_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_HealthState_ValueMap_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_HealthState_Values_MQ,
};

extern const Meta_Property
_CIM_ManagedSystemElement_HealthState;

static Meta_Feature* _CIM_LogicalElement_MFA[] =
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
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
};

extern const Meta_Qualifier
_CIM_LogicalElement_Version_MQ;

static const Meta_Value_Scalar<const char*>
_CIM_LogicalElement_Version_MV =
{
    "2.6.0"
};

const Meta_Qualifier
_CIM_LogicalElement_Version_MQ =
{
    { 0 }, /* refs */
    "Version", /* name */
    STRING, /* type */
    0, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_LogicalElement_Version_MV,
};

extern const Meta_Qualifier
_CIM_LogicalElement_UMLPackagePath_MQ;

static const Meta_Value_Scalar<const char*>
_CIM_LogicalElement_UMLPackagePath_MV =
{
    "CIM::Core::CoreElements"
};

const Meta_Qualifier
_CIM_LogicalElement_UMLPackagePath_MQ =
{
    { 0 }, /* refs */
    "UMLPackagePath", /* name */
    STRING, /* type */
    0, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_LogicalElement_UMLPackagePath_MV,
};

static const Meta_Qualifier*
_CIM_LogicalElement_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_LogicalElement_Version_MQ,
    (Meta_Qualifier*)(void*)&_CIM_LogicalElement_UMLPackagePath_MQ,
};

const Meta_Class CIM_LogicalElement::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_CLASS|CIMPLE_FLAG_ABSTRACT,
    "CIM_LogicalElement",
    _CIM_LogicalElement_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_LogicalElement_MQA),
    _CIM_LogicalElement_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_LogicalElement_MFA),
    sizeof(CIM_LogicalElement),
    _locals,
    &CIM_ManagedSystemElement::static_meta_class,
    0, /* num_keys */
    0x65D846FD, /* crc */
    &__meta_repository_6827E083506B1A56883F566A87E0489F,
};

CIM_LogicalElement_Ref::CIM_LogicalElement_Ref()
{
    _inst = CIM_LogicalElement::create(true);
    _ref = true;
}

CIM_LogicalElement_Ref::CIM_LogicalElement_Ref(const CIM_LogicalElement_Ref& x) : CIM_ManagedSystemElement_Ref(x)
{
}

CIM_LogicalElement_Ref::CIM_LogicalElement_Ref(CIM_LogicalElement* inst)
{
    _inst = inst;
    _ref = true;
}

CIM_LogicalElement_Ref::~CIM_LogicalElement_Ref()
{
}

CIM_LogicalElement_Ref& CIM_LogicalElement_Ref::operator=(const CIM_LogicalElement_Ref& x)
{
    Hnd::operator=(x);
    return *this;
}

CIM_LogicalElement_Hnd::CIM_LogicalElement_Hnd()
{
    _inst = CIM_LogicalElement::create(true);
    _ref = false;
}

CIM_LogicalElement_Hnd::CIM_LogicalElement_Hnd(const CIM_LogicalElement_Hnd& x) : CIM_ManagedSystemElement_Hnd(x)
{
}

CIM_LogicalElement_Hnd::CIM_LogicalElement_Hnd(CIM_LogicalElement* inst)
{
    _inst = inst;
    _ref = false;
}

CIM_LogicalElement_Hnd::~CIM_LogicalElement_Hnd()
{
}

CIM_LogicalElement_Hnd& CIM_LogicalElement_Hnd::operator=(const CIM_LogicalElement_Hnd& x)
{
    Hnd::operator=(x);
    return *this;
}

CIMPLE_NAMESPACE_END

