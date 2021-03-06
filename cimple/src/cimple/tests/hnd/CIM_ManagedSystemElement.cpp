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

extern const Meta_Repository __meta_repository_6827E083506B1A56883F566A87E0489F;

extern const Meta_Qualifier
_CIM_ManagedElement_Caption_MaxLen_MQ;

static const Meta_Qualifier*
_CIM_ManagedSystemElement_Caption_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ManagedElement_Caption_MaxLen_MQ,
};

extern const Meta_Property
_CIM_ManagedElement_Caption;

static const Meta_Qualifier*
_CIM_ManagedSystemElement_Description_MQA[] =
{
};

extern const Meta_Property
_CIM_ManagedElement_Description;

static const Meta_Qualifier*
_CIM_ManagedSystemElement_ElementName_MQA[] =
{
};

extern const Meta_Property
_CIM_ManagedElement_ElementName;

extern const Meta_Qualifier
_CIM_ManagedSystemElement_InstallDate_MappingStrings_MQ;

static const char*
_CIM_ManagedSystemElement_InstallDate_MappingStrings_elements[] =
{
    "MIF.DMTF|ComponentID|001.5",
};

const Meta_Value_Array<const char*>
_CIM_ManagedSystemElement_InstallDate_MappingStrings_MV =
{
    _CIM_ManagedSystemElement_InstallDate_MappingStrings_elements,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_InstallDate_MappingStrings_elements),
};

const Meta_Qualifier
_CIM_ManagedSystemElement_InstallDate_MappingStrings_MQ =
{
    { 0 }, /* refs */
    "MappingStrings", /* name */
    STRING, /* type */
    1, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ManagedSystemElement_InstallDate_MappingStrings_MV,
};

static const Meta_Qualifier*
_CIM_ManagedSystemElement_InstallDate_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_InstallDate_MappingStrings_MQ,
};

extern const Meta_Property
_CIM_ManagedSystemElement_InstallDate;

const Meta_Property
_CIM_ManagedSystemElement_InstallDate =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "InstallDate",
    _CIM_ManagedSystemElement_InstallDate_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_InstallDate_MQA),
    DATETIME,
    0, /* subscript */
    CIMPLE_OFF(CIM_ManagedSystemElement,InstallDate),
    0, /* value */
};

extern const Meta_Qualifier
_CIM_ManagedSystemElement_Name_MaxLen_MQ;

static const Meta_Value_Scalar<uint32>
_CIM_ManagedSystemElement_Name_MaxLen_MV =
{
    1024
};

const Meta_Qualifier
_CIM_ManagedSystemElement_Name_MaxLen_MQ =
{
    { 0 }, /* refs */
    "MaxLen", /* name */
    UINT32, /* type */
    0, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ManagedSystemElement_Name_MaxLen_MV,
};

static const Meta_Qualifier*
_CIM_ManagedSystemElement_Name_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_Name_MaxLen_MQ,
};

extern const Meta_Property
_CIM_ManagedSystemElement_Name;

const Meta_Property
_CIM_ManagedSystemElement_Name =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "Name",
    _CIM_ManagedSystemElement_Name_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_Name_MQA),
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_ManagedSystemElement,Name),
    0, /* value */
};

extern const Meta_Qualifier
_CIM_ManagedSystemElement_OperationalStatus_ValueMap_MQ;

static const char*
_CIM_ManagedSystemElement_OperationalStatus_ValueMap_elements[] =
{
    "0",
    "1",
    "2",
    "3",
    "4",
    "5",
    "6",
    "7",
    "8",
    "9",
    "10",
    "11",
    "12",
    "13",
    "14",
    "15",
    "16",
    "17",
    "18",
    "..",
    "0x8000..",
};

const Meta_Value_Array<const char*>
_CIM_ManagedSystemElement_OperationalStatus_ValueMap_MV =
{
    _CIM_ManagedSystemElement_OperationalStatus_ValueMap_elements,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_OperationalStatus_ValueMap_elements),
};

const Meta_Qualifier
_CIM_ManagedSystemElement_OperationalStatus_ValueMap_MQ =
{
    { 0 }, /* refs */
    "ValueMap", /* name */
    STRING, /* type */
    1, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ManagedSystemElement_OperationalStatus_ValueMap_MV,
};

extern const Meta_Qualifier
_CIM_ManagedSystemElement_OperationalStatus_Values_MQ;

static const char*
_CIM_ManagedSystemElement_OperationalStatus_Values_elements[] =
{
    "Unknown",
    "Other",
    "OK",
    "Degraded",
    "Stressed",
    "Predictive Failure",
    "Error",
    "Non-Recoverable Error",
    "Starting",
    "Stopping",
    "Stopped",
    "In Service",
    "No Contact",
    "Lost Communication",
    "Aborted",
    "Dormant",
    "Supporting Entity in Error",
    "Completed",
    "Power Mode",
    "DMTF Reserved",
    "Vendor Reserved",
};

const Meta_Value_Array<const char*>
_CIM_ManagedSystemElement_OperationalStatus_Values_MV =
{
    _CIM_ManagedSystemElement_OperationalStatus_Values_elements,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_OperationalStatus_Values_elements),
};

const Meta_Qualifier
_CIM_ManagedSystemElement_OperationalStatus_Values_MQ =
{
    { 0 }, /* refs */
    "Values", /* name */
    STRING, /* type */
    1, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ManagedSystemElement_OperationalStatus_Values_MV,
};

extern const Meta_Qualifier
_CIM_ManagedSystemElement_OperationalStatus_ArrayType_MQ;

static const Meta_Value_Scalar<const char*>
_CIM_ManagedSystemElement_OperationalStatus_ArrayType_MV =
{
    "Indexed"
};

const Meta_Qualifier
_CIM_ManagedSystemElement_OperationalStatus_ArrayType_MQ =
{
    { 0 }, /* refs */
    "ArrayType", /* name */
    STRING, /* type */
    0, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ManagedSystemElement_OperationalStatus_ArrayType_MV,
};

extern const Meta_Qualifier
_CIM_ManagedSystemElement_OperationalStatus_ModelCorrespondence_MQ;

static const char*
_CIM_ManagedSystemElement_OperationalStatus_ModelCorrespondence_elements[] =
{
    "CIM_ManagedSystemElement.StatusDescriptions",
};

const Meta_Value_Array<const char*>
_CIM_ManagedSystemElement_OperationalStatus_ModelCorrespondence_MV =
{
    _CIM_ManagedSystemElement_OperationalStatus_ModelCorrespondence_elements,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_OperationalStatus_ModelCorrespondence_elements),
};

const Meta_Qualifier
_CIM_ManagedSystemElement_OperationalStatus_ModelCorrespondence_MQ =
{
    { 0 }, /* refs */
    "ModelCorrespondence", /* name */
    STRING, /* type */
    1, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ManagedSystemElement_OperationalStatus_ModelCorrespondence_MV,
};

static const Meta_Qualifier*
_CIM_ManagedSystemElement_OperationalStatus_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_OperationalStatus_ValueMap_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_OperationalStatus_Values_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_OperationalStatus_ArrayType_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_OperationalStatus_ModelCorrespondence_MQ,
};

extern const Meta_Property
_CIM_ManagedSystemElement_OperationalStatus;

const Meta_Property
_CIM_ManagedSystemElement_OperationalStatus =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "OperationalStatus",
    _CIM_ManagedSystemElement_OperationalStatus_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_OperationalStatus_MQA),
    UINT16,
    -1, /* subscript */
    CIMPLE_OFF(CIM_ManagedSystemElement,OperationalStatus),
    0, /* value */
};

extern const Meta_Qualifier
_CIM_ManagedSystemElement_StatusDescriptions_ArrayType_MQ;

static const Meta_Value_Scalar<const char*>
_CIM_ManagedSystemElement_StatusDescriptions_ArrayType_MV =
{
    "Indexed"
};

const Meta_Qualifier
_CIM_ManagedSystemElement_StatusDescriptions_ArrayType_MQ =
{
    { 0 }, /* refs */
    "ArrayType", /* name */
    STRING, /* type */
    0, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ManagedSystemElement_StatusDescriptions_ArrayType_MV,
};

extern const Meta_Qualifier
_CIM_ManagedSystemElement_StatusDescriptions_ModelCorrespondence_MQ;

static const char*
_CIM_ManagedSystemElement_StatusDescriptions_ModelCorrespondence_elements[] =
{
    "CIM_ManagedSystemElement.OperationalStatus",
};

const Meta_Value_Array<const char*>
_CIM_ManagedSystemElement_StatusDescriptions_ModelCorrespondence_MV =
{
    _CIM_ManagedSystemElement_StatusDescriptions_ModelCorrespondence_elements,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_StatusDescriptions_ModelCorrespondence_elements),
};

const Meta_Qualifier
_CIM_ManagedSystemElement_StatusDescriptions_ModelCorrespondence_MQ =
{
    { 0 }, /* refs */
    "ModelCorrespondence", /* name */
    STRING, /* type */
    1, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ManagedSystemElement_StatusDescriptions_ModelCorrespondence_MV,
};

static const Meta_Qualifier*
_CIM_ManagedSystemElement_StatusDescriptions_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_StatusDescriptions_ArrayType_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_StatusDescriptions_ModelCorrespondence_MQ,
};

extern const Meta_Property
_CIM_ManagedSystemElement_StatusDescriptions;

const Meta_Property
_CIM_ManagedSystemElement_StatusDescriptions =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "StatusDescriptions",
    _CIM_ManagedSystemElement_StatusDescriptions_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_StatusDescriptions_MQA),
    STRING,
    -1, /* subscript */
    CIMPLE_OFF(CIM_ManagedSystemElement,StatusDescriptions),
    0, /* value */
};

extern const Meta_Qualifier
_CIM_ManagedSystemElement_Status_Deprecated_MQ;

static const char*
_CIM_ManagedSystemElement_Status_Deprecated_elements[] =
{
    "CIM_ManagedSystemElement.OperationalStatus",
};

const Meta_Value_Array<const char*>
_CIM_ManagedSystemElement_Status_Deprecated_MV =
{
    _CIM_ManagedSystemElement_Status_Deprecated_elements,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_Status_Deprecated_elements),
};

const Meta_Qualifier
_CIM_ManagedSystemElement_Status_Deprecated_MQ =
{
    { 0 }, /* refs */
    "Deprecated", /* name */
    STRING, /* type */
    1, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ManagedSystemElement_Status_Deprecated_MV,
};

extern const Meta_Qualifier
_CIM_ManagedSystemElement_Status_ValueMap_MQ;

static const char*
_CIM_ManagedSystemElement_Status_ValueMap_elements[] =
{
    "OK",
    "Error",
    "Degraded",
    "Unknown",
    "Pred Fail",
    "Starting",
    "Stopping",
    "Service",
    "Stressed",
    "NonRecover",
    "No Contact",
    "Lost Comm",
    "Stopped",
};

const Meta_Value_Array<const char*>
_CIM_ManagedSystemElement_Status_ValueMap_MV =
{
    _CIM_ManagedSystemElement_Status_ValueMap_elements,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_Status_ValueMap_elements),
};

const Meta_Qualifier
_CIM_ManagedSystemElement_Status_ValueMap_MQ =
{
    { 0 }, /* refs */
    "ValueMap", /* name */
    STRING, /* type */
    1, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ManagedSystemElement_Status_ValueMap_MV,
};

extern const Meta_Qualifier
_CIM_ManagedSystemElement_Status_MaxLen_MQ;

static const Meta_Value_Scalar<uint32>
_CIM_ManagedSystemElement_Status_MaxLen_MV =
{
    10
};

const Meta_Qualifier
_CIM_ManagedSystemElement_Status_MaxLen_MQ =
{
    { 0 }, /* refs */
    "MaxLen", /* name */
    UINT32, /* type */
    0, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ManagedSystemElement_Status_MaxLen_MV,
};

static const Meta_Qualifier*
_CIM_ManagedSystemElement_Status_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_Status_Deprecated_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_Status_ValueMap_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_Status_MaxLen_MQ,
};

extern const Meta_Property
_CIM_ManagedSystemElement_Status;

const Meta_Property
_CIM_ManagedSystemElement_Status =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "Status",
    _CIM_ManagedSystemElement_Status_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_Status_MQA),
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_ManagedSystemElement,Status),
    0, /* value */
};

extern const Meta_Qualifier
_CIM_ManagedSystemElement_HealthState_ValueMap_MQ;

static const char*
_CIM_ManagedSystemElement_HealthState_ValueMap_elements[] =
{
    "0",
    "5",
    "10",
    "15",
    "20",
    "25",
    "30",
    "..",
};

const Meta_Value_Array<const char*>
_CIM_ManagedSystemElement_HealthState_ValueMap_MV =
{
    _CIM_ManagedSystemElement_HealthState_ValueMap_elements,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_HealthState_ValueMap_elements),
};

const Meta_Qualifier
_CIM_ManagedSystemElement_HealthState_ValueMap_MQ =
{
    { 0 }, /* refs */
    "ValueMap", /* name */
    STRING, /* type */
    1, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ManagedSystemElement_HealthState_ValueMap_MV,
};

extern const Meta_Qualifier
_CIM_ManagedSystemElement_HealthState_Values_MQ;

static const char*
_CIM_ManagedSystemElement_HealthState_Values_elements[] =
{
    "Unknown",
    "OK",
    "Degraded/Warning",
    "Minor failure",
    "Major failure",
    "Critical failure",
    "Non-recoverable error",
    "DMTF Reserved",
};

const Meta_Value_Array<const char*>
_CIM_ManagedSystemElement_HealthState_Values_MV =
{
    _CIM_ManagedSystemElement_HealthState_Values_elements,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_HealthState_Values_elements),
};

const Meta_Qualifier
_CIM_ManagedSystemElement_HealthState_Values_MQ =
{
    { 0 }, /* refs */
    "Values", /* name */
    STRING, /* type */
    1, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ManagedSystemElement_HealthState_Values_MV,
};

static const Meta_Qualifier*
_CIM_ManagedSystemElement_HealthState_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_HealthState_ValueMap_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_HealthState_Values_MQ,
};

extern const Meta_Property
_CIM_ManagedSystemElement_HealthState;

const Meta_Property
_CIM_ManagedSystemElement_HealthState =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "HealthState",
    _CIM_ManagedSystemElement_HealthState_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_HealthState_MQA),
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

extern const Meta_Qualifier
_CIM_ManagedSystemElement_Version_MQ;

static const Meta_Value_Scalar<const char*>
_CIM_ManagedSystemElement_Version_MV =
{
    "2.11.0"
};

const Meta_Qualifier
_CIM_ManagedSystemElement_Version_MQ =
{
    { 0 }, /* refs */
    "Version", /* name */
    STRING, /* type */
    0, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ManagedSystemElement_Version_MV,
};

extern const Meta_Qualifier
_CIM_ManagedSystemElement_UMLPackagePath_MQ;

static const Meta_Value_Scalar<const char*>
_CIM_ManagedSystemElement_UMLPackagePath_MV =
{
    "CIM::Core::CoreElements"
};

const Meta_Qualifier
_CIM_ManagedSystemElement_UMLPackagePath_MQ =
{
    { 0 }, /* refs */
    "UMLPackagePath", /* name */
    STRING, /* type */
    0, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ManagedSystemElement_UMLPackagePath_MV,
};

static const Meta_Qualifier*
_CIM_ManagedSystemElement_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_Version_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_UMLPackagePath_MQ,
};

const Meta_Class CIM_ManagedSystemElement::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_CLASS|CIMPLE_FLAG_ABSTRACT,
    "CIM_ManagedSystemElement",
    _CIM_ManagedSystemElement_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_MQA),
    _CIM_ManagedSystemElement_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_MFA),
    sizeof(CIM_ManagedSystemElement),
    _locals,
    &CIM_ManagedElement::static_meta_class,
    0, /* num_keys */
    0x0DD66B62, /* crc */
    &__meta_repository_6827E083506B1A56883F566A87E0489F,
};

CIM_ManagedSystemElement_Ref::CIM_ManagedSystemElement_Ref()
{
    _inst = CIM_ManagedSystemElement::create(true);
    _ref = true;
}

CIM_ManagedSystemElement_Ref::CIM_ManagedSystemElement_Ref(const CIM_ManagedSystemElement_Ref& x) : CIM_ManagedElement_Ref(x)
{
}

CIM_ManagedSystemElement_Ref::CIM_ManagedSystemElement_Ref(CIM_ManagedSystemElement* inst)
{
    _inst = inst;
    _ref = true;
}

CIM_ManagedSystemElement_Ref::~CIM_ManagedSystemElement_Ref()
{
}

CIM_ManagedSystemElement_Ref& CIM_ManagedSystemElement_Ref::operator=(const CIM_ManagedSystemElement_Ref& x)
{
    Hnd::operator=(x);
    return *this;
}

CIM_ManagedSystemElement_Hnd::CIM_ManagedSystemElement_Hnd()
{
    _inst = CIM_ManagedSystemElement::create(true);
    _ref = false;
}

CIM_ManagedSystemElement_Hnd::CIM_ManagedSystemElement_Hnd(const CIM_ManagedSystemElement_Hnd& x) : CIM_ManagedElement_Hnd(x)
{
}

CIM_ManagedSystemElement_Hnd::CIM_ManagedSystemElement_Hnd(CIM_ManagedSystemElement* inst)
{
    _inst = inst;
    _ref = false;
}

CIM_ManagedSystemElement_Hnd::~CIM_ManagedSystemElement_Hnd()
{
}

CIM_ManagedSystemElement_Hnd& CIM_ManagedSystemElement_Hnd::operator=(const CIM_ManagedSystemElement_Hnd& x)
{
    Hnd::operator=(x);
    return *this;
}

const Datetime& CIM_ManagedSystemElement_Hnd::InstallDate() const
{
    return ((CIM_ManagedSystemElement*)_inst)->InstallDate.value;
}

void CIM_ManagedSystemElement_Hnd::InstallDate(const Datetime& x)
{
    _cow();
    ((CIM_ManagedSystemElement*)_inst)->InstallDate.null = false;
    ((CIM_ManagedSystemElement*)_inst)->InstallDate.value = x;
}

bool CIM_ManagedSystemElement_Hnd::InstallDate_null() const
{
    return ((CIM_ManagedSystemElement*)_inst)->InstallDate.null;
}

void CIM_ManagedSystemElement_Hnd::InstallDate_null(bool x)
{
    _cow();
    ((CIM_ManagedSystemElement*)_inst)->InstallDate.null = x;
    __clear(((CIM_ManagedSystemElement*)_inst)->InstallDate.value);
}

const String& CIM_ManagedSystemElement_Hnd::Name() const
{
    return ((CIM_ManagedSystemElement*)_inst)->Name.value;
}

void CIM_ManagedSystemElement_Hnd::Name(const String& x)
{
    _cow();
    ((CIM_ManagedSystemElement*)_inst)->Name.null = false;
    ((CIM_ManagedSystemElement*)_inst)->Name.value = x;
}

bool CIM_ManagedSystemElement_Hnd::Name_null() const
{
    return ((CIM_ManagedSystemElement*)_inst)->Name.null;
}

void CIM_ManagedSystemElement_Hnd::Name_null(bool x)
{
    _cow();
    ((CIM_ManagedSystemElement*)_inst)->Name.null = x;
    __clear(((CIM_ManagedSystemElement*)_inst)->Name.value);
}

const Array<uint16>& CIM_ManagedSystemElement_Hnd::OperationalStatus() const
{
    return ((CIM_ManagedSystemElement*)_inst)->OperationalStatus.value;
}

void CIM_ManagedSystemElement_Hnd::OperationalStatus(const Array<uint16>& x)
{
    _cow();
    ((CIM_ManagedSystemElement*)_inst)->OperationalStatus.null = false;
    ((CIM_ManagedSystemElement*)_inst)->OperationalStatus.value = x;
}

bool CIM_ManagedSystemElement_Hnd::OperationalStatus_null() const
{
    return ((CIM_ManagedSystemElement*)_inst)->OperationalStatus.null;
}

void CIM_ManagedSystemElement_Hnd::OperationalStatus_null(bool x)
{
    _cow();
    ((CIM_ManagedSystemElement*)_inst)->OperationalStatus.null = x;
    __clear(((CIM_ManagedSystemElement*)_inst)->OperationalStatus.value);
}

const Array<String>& CIM_ManagedSystemElement_Hnd::StatusDescriptions() const
{
    return ((CIM_ManagedSystemElement*)_inst)->StatusDescriptions.value;
}

void CIM_ManagedSystemElement_Hnd::StatusDescriptions(const Array<String>& x)
{
    _cow();
    ((CIM_ManagedSystemElement*)_inst)->StatusDescriptions.null = false;
    ((CIM_ManagedSystemElement*)_inst)->StatusDescriptions.value = x;
}

bool CIM_ManagedSystemElement_Hnd::StatusDescriptions_null() const
{
    return ((CIM_ManagedSystemElement*)_inst)->StatusDescriptions.null;
}

void CIM_ManagedSystemElement_Hnd::StatusDescriptions_null(bool x)
{
    _cow();
    ((CIM_ManagedSystemElement*)_inst)->StatusDescriptions.null = x;
    __clear(((CIM_ManagedSystemElement*)_inst)->StatusDescriptions.value);
}

const String& CIM_ManagedSystemElement_Hnd::Status() const
{
    return ((CIM_ManagedSystemElement*)_inst)->Status.value;
}

void CIM_ManagedSystemElement_Hnd::Status(const String& x)
{
    _cow();
    ((CIM_ManagedSystemElement*)_inst)->Status.null = false;
    ((CIM_ManagedSystemElement*)_inst)->Status.value = x;
}

bool CIM_ManagedSystemElement_Hnd::Status_null() const
{
    return ((CIM_ManagedSystemElement*)_inst)->Status.null;
}

void CIM_ManagedSystemElement_Hnd::Status_null(bool x)
{
    _cow();
    ((CIM_ManagedSystemElement*)_inst)->Status.null = x;
    __clear(((CIM_ManagedSystemElement*)_inst)->Status.value);
}

const uint16& CIM_ManagedSystemElement_Hnd::HealthState() const
{
    return ((CIM_ManagedSystemElement*)_inst)->HealthState.value;
}

void CIM_ManagedSystemElement_Hnd::HealthState(const uint16& x)
{
    _cow();
    ((CIM_ManagedSystemElement*)_inst)->HealthState.null = false;
    ((CIM_ManagedSystemElement*)_inst)->HealthState.value = x;
}

bool CIM_ManagedSystemElement_Hnd::HealthState_null() const
{
    return ((CIM_ManagedSystemElement*)_inst)->HealthState.null;
}

void CIM_ManagedSystemElement_Hnd::HealthState_null(bool x)
{
    _cow();
    ((CIM_ManagedSystemElement*)_inst)->HealthState.null = x;
    __clear(((CIM_ManagedSystemElement*)_inst)->HealthState.value);
}

CIMPLE_NAMESPACE_END

