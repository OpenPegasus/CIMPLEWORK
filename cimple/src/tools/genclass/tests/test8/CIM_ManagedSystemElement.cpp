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

extern const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedElement_Caption_Description_MQ;

extern const Meta_Qualifier_Scalar<uint32>
_CIM_ManagedElement_Caption_MaxLen_MQ;

static const Meta_Qualifier*
_CIM_ManagedSystemElement_Caption_MQA[] =
{
    (Meta_Qualifier*)&_CIM_ManagedElement_Caption_Description_MQ,
    (Meta_Qualifier*)&_CIM_ManagedElement_Caption_MaxLen_MQ,
};

extern const Meta_Property
_CIM_ManagedElement_Caption;

extern const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedElement_Description_Description_MQ;

static const Meta_Qualifier*
_CIM_ManagedSystemElement_Description_MQA[] =
{
    (Meta_Qualifier*)&_CIM_ManagedElement_Description_Description_MQ,
};

extern const Meta_Property
_CIM_ManagedElement_Description;

extern const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedElement_ElementName_Description_MQ;

static const Meta_Qualifier*
_CIM_ManagedSystemElement_ElementName_MQA[] =
{
    (Meta_Qualifier*)&_CIM_ManagedElement_ElementName_Description_MQ,
};

extern const Meta_Property
_CIM_ManagedElement_ElementName;

extern const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedSystemElement_InstallDate_Description_MQ;

const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedSystemElement_InstallDate_Description_MQ =
{
    { 0 }, /* refs */
    "Description", /* name */
    STRING, /* type */
    0, /* array */
    "A datetime value indicating when the object was installed. A lack of a value does not indicate that the object is not installed.", /* value */ 
};

extern const Meta_Qualifier_Array<const char*>
_CIM_ManagedSystemElement_InstallDate_MappingStrings_MQ;

static const char*
_CIM_ManagedSystemElement_InstallDate_MappingStrings_MQ_elements[] =
{
    "MIF.DMTF|ComponentID|001.5",
};

const Meta_Qualifier_Array<const char*>
_CIM_ManagedSystemElement_InstallDate_MappingStrings_MQ =
{
    { 0 }, /* refs */
    "MappingStrings", /* name */
    STRING, /* type */
    1, /* array */
    _CIM_ManagedSystemElement_InstallDate_MappingStrings_MQ_elements, /* value */
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_InstallDate_MappingStrings_MQ_elements),
};

static const Meta_Qualifier*
_CIM_ManagedSystemElement_InstallDate_MQA[] =
{
    (Meta_Qualifier*)&_CIM_ManagedSystemElement_InstallDate_Description_MQ,
    (Meta_Qualifier*)&_CIM_ManagedSystemElement_InstallDate_MappingStrings_MQ,
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
    0,
    CIMPLE_OFF(CIM_ManagedSystemElement,InstallDate),
    0, /* value */
};

extern const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedSystemElement_Name_Description_MQ;

const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedSystemElement_Name_Description_MQ =
{
    { 0 }, /* refs */
    "Description", /* name */
    STRING, /* type */
    0, /* array */
    "The Name property defines the label by which the object is known. When subclassed, the Name property can be overridden to be a Key property.", /* value */ 
};

extern const Meta_Qualifier_Scalar<uint32>
_CIM_ManagedSystemElement_Name_MaxLen_MQ;

const Meta_Qualifier_Scalar<uint32>
_CIM_ManagedSystemElement_Name_MaxLen_MQ =
{
    { 0 }, /* refs */
    "MaxLen", /* name */
    UINT32, /* type */
    0, /* array */
    1024, /* value */ 
};

static const Meta_Qualifier*
_CIM_ManagedSystemElement_Name_MQA[] =
{
    (Meta_Qualifier*)&_CIM_ManagedSystemElement_Name_Description_MQ,
    (Meta_Qualifier*)&_CIM_ManagedSystemElement_Name_MaxLen_MQ,
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
    0,
    CIMPLE_OFF(CIM_ManagedSystemElement,Name),
    0, /* value */
};

extern const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedSystemElement_OperationalStatus_Description_MQ;

const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedSystemElement_OperationalStatus_Description_MQ =
{
    { 0 }, /* refs */
    "Description", /* name */
    STRING, /* type */
    0, /* array */
    "Indicates the current status(es) of the element. Various health and operational statuses are defined. Many of the enumeration's values are self- explanatory. However, a few are not and are described in more detail. \n\"Stressed\" indicates that the element is functioning, but needs attention. Examples of \"Stressed\" states are overload, overheated, etc. \n\"Predictive Failure\" indicates that an element is functioning nominally but predicting a failure in the near future. \n\"In Service\" describes an element being configured, maintained, cleaned, or otherwise administered. \n\"No Contact\" indicates that the monitoring system has knowledge of this element, but has never been able to establish communications with it. \n\"Lost Communication\" indicates that the ManagedSystem Element is known to exist and has been contacted successfully in the past, but is currently unreachable. \n\"Stopped\" and \"Aborted\" are similar, although the former implies a clean and orderly stop, while the latter implies an abrupt stop where the element's state and configuration may need to be updated. \n\"Dormant\" indicates that the element is inactive or quiesced. \n\"Supporting Entity in Error\" describes that this element may be \"OK\" but that another element, on which it is dependent, is in error. An example is a network service or endpoint that cannot function due to lower layer networking problems. \n\"Completed\" indicates the element has completed its operation. This value should be combined with either OK, Error, or Degraded so that a client can till if the complete operation passed (Completed with OK), and failure (Completed with Error). Completed with Degraded would imply the operation finished, but did not complete OK or report an error. \n\"Power Mode\" indicates the element has additional power model information contained in the Associated PowerManagementService association. \nOperationalStatus replaces the Status property on ManagedSystemElement to provide a consistent approach to enumerations, to address implementation needs for an array property, and to provide a migration path from today's environment to the future. This change was not made earlier since it required the DEPRECATED qualifier. Due to the widespread use of the existing Status property in management applications, it is strongly RECOMMENDED that providers/instrumentation provide BOTH the Status and OperationalStatus properties. Further, the first value of OperationalStatus SHOULD contain the primary status for the element. When instrumented, Status (since it is single-valued) SHOULD also provide the primary status of the element.", /* value */ 
};

extern const Meta_Qualifier_Array<const char*>
_CIM_ManagedSystemElement_OperationalStatus_ValueMap_MQ;

static const char*
_CIM_ManagedSystemElement_OperationalStatus_ValueMap_MQ_elements[] =
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

const Meta_Qualifier_Array<const char*>
_CIM_ManagedSystemElement_OperationalStatus_ValueMap_MQ =
{
    { 0 }, /* refs */
    "ValueMap", /* name */
    STRING, /* type */
    1, /* array */
    _CIM_ManagedSystemElement_OperationalStatus_ValueMap_MQ_elements, /* value */
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_OperationalStatus_ValueMap_MQ_elements),
};

extern const Meta_Qualifier_Array<const char*>
_CIM_ManagedSystemElement_OperationalStatus_Values_MQ;

static const char*
_CIM_ManagedSystemElement_OperationalStatus_Values_MQ_elements[] =
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

const Meta_Qualifier_Array<const char*>
_CIM_ManagedSystemElement_OperationalStatus_Values_MQ =
{
    { 0 }, /* refs */
    "Values", /* name */
    STRING, /* type */
    1, /* array */
    _CIM_ManagedSystemElement_OperationalStatus_Values_MQ_elements, /* value */
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_OperationalStatus_Values_MQ_elements),
};

extern const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedSystemElement_OperationalStatus_ArrayType_MQ;

const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedSystemElement_OperationalStatus_ArrayType_MQ =
{
    { 0 }, /* refs */
    "ArrayType", /* name */
    STRING, /* type */
    0, /* array */
    "Indexed", /* value */ 
};

extern const Meta_Qualifier_Array<const char*>
_CIM_ManagedSystemElement_OperationalStatus_ModelCorrespondence_MQ;

static const char*
_CIM_ManagedSystemElement_OperationalStatus_ModelCorrespondence_MQ_elements[] =
{
    "CIM_ManagedSystemElement.StatusDescriptions",
};

const Meta_Qualifier_Array<const char*>
_CIM_ManagedSystemElement_OperationalStatus_ModelCorrespondence_MQ =
{
    { 0 }, /* refs */
    "ModelCorrespondence", /* name */
    STRING, /* type */
    1, /* array */
    _CIM_ManagedSystemElement_OperationalStatus_ModelCorrespondence_MQ_elements, /* value */
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_OperationalStatus_ModelCorrespondence_MQ_elements),
};

static const Meta_Qualifier*
_CIM_ManagedSystemElement_OperationalStatus_MQA[] =
{
    (Meta_Qualifier*)&_CIM_ManagedSystemElement_OperationalStatus_Description_MQ,
    (Meta_Qualifier*)&_CIM_ManagedSystemElement_OperationalStatus_ValueMap_MQ,
    (Meta_Qualifier*)&_CIM_ManagedSystemElement_OperationalStatus_Values_MQ,
    (Meta_Qualifier*)&_CIM_ManagedSystemElement_OperationalStatus_ArrayType_MQ,
    (Meta_Qualifier*)&_CIM_ManagedSystemElement_OperationalStatus_ModelCorrespondence_MQ,
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
    -1,
    CIMPLE_OFF(CIM_ManagedSystemElement,OperationalStatus),
    0, /* value */
};

extern const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedSystemElement_StatusDescriptions_Description_MQ;

const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedSystemElement_StatusDescriptions_Description_MQ =
{
    { 0 }, /* refs */
    "Description", /* name */
    STRING, /* type */
    0, /* array */
    "Strings describing the various OperationalStatus array values. For example, if \"Stopping\" is the value assigned to OperationalStatus, then this property may contain an explanation as to why an object is being stopped. Note that entries in this array are correlated with those at the same array index in OperationalStatus.", /* value */ 
};

extern const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedSystemElement_StatusDescriptions_ArrayType_MQ;

const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedSystemElement_StatusDescriptions_ArrayType_MQ =
{
    { 0 }, /* refs */
    "ArrayType", /* name */
    STRING, /* type */
    0, /* array */
    "Indexed", /* value */ 
};

extern const Meta_Qualifier_Array<const char*>
_CIM_ManagedSystemElement_StatusDescriptions_ModelCorrespondence_MQ;

static const char*
_CIM_ManagedSystemElement_StatusDescriptions_ModelCorrespondence_MQ_elements[] =
{
    "CIM_ManagedSystemElement.OperationalStatus",
};

const Meta_Qualifier_Array<const char*>
_CIM_ManagedSystemElement_StatusDescriptions_ModelCorrespondence_MQ =
{
    { 0 }, /* refs */
    "ModelCorrespondence", /* name */
    STRING, /* type */
    1, /* array */
    _CIM_ManagedSystemElement_StatusDescriptions_ModelCorrespondence_MQ_elements, /* value */
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_StatusDescriptions_ModelCorrespondence_MQ_elements),
};

static const Meta_Qualifier*
_CIM_ManagedSystemElement_StatusDescriptions_MQA[] =
{
    (Meta_Qualifier*)&_CIM_ManagedSystemElement_StatusDescriptions_Description_MQ,
    (Meta_Qualifier*)&_CIM_ManagedSystemElement_StatusDescriptions_ArrayType_MQ,
    (Meta_Qualifier*)&_CIM_ManagedSystemElement_StatusDescriptions_ModelCorrespondence_MQ,
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
    -1,
    CIMPLE_OFF(CIM_ManagedSystemElement,StatusDescriptions),
    0, /* value */
};

extern const Meta_Qualifier_Array<const char*>
_CIM_ManagedSystemElement_Status_Deprecated_MQ;

static const char*
_CIM_ManagedSystemElement_Status_Deprecated_MQ_elements[] =
{
    "CIM_ManagedSystemElement.OperationalStatus",
};

const Meta_Qualifier_Array<const char*>
_CIM_ManagedSystemElement_Status_Deprecated_MQ =
{
    { 0 }, /* refs */
    "Deprecated", /* name */
    STRING, /* type */
    1, /* array */
    _CIM_ManagedSystemElement_Status_Deprecated_MQ_elements, /* value */
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_Status_Deprecated_MQ_elements),
};

extern const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedSystemElement_Status_Description_MQ;

const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedSystemElement_Status_Description_MQ =
{
    { 0 }, /* refs */
    "Description", /* name */
    STRING, /* type */
    0, /* array */
    "A string indicating the current status of the object. Various operational and non-operational statuses are defined. This property is deprecated in lieu of OperationalStatus, which includes the same semantics in its enumeration. This change is made for 3 reasons: 1) Status is more correctly defined as an array. This overcomes the limitation of describing status via a single value, when it is really a multi-valued property (for example, an element may be OK AND Stopped. 2) A MaxLen of 10 is too restrictive and leads to unclear enumerated values. And, 3) The change to a uint16 data type was discussed when CIM V2.0 was defined. However, existing V1.0 implementations used the string property and did not want to modify their code. Therefore, Status was grandfathered into the Schema. Use of the Deprecated qualifier allows the maintenance of the existing property, but also permits an improved definition using OperationalStatus.", /* value */ 
};

extern const Meta_Qualifier_Array<const char*>
_CIM_ManagedSystemElement_Status_ValueMap_MQ;

static const char*
_CIM_ManagedSystemElement_Status_ValueMap_MQ_elements[] =
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

const Meta_Qualifier_Array<const char*>
_CIM_ManagedSystemElement_Status_ValueMap_MQ =
{
    { 0 }, /* refs */
    "ValueMap", /* name */
    STRING, /* type */
    1, /* array */
    _CIM_ManagedSystemElement_Status_ValueMap_MQ_elements, /* value */
    CIMPLE_ARRAY_SIZE(_CIM_ManagedSystemElement_Status_ValueMap_MQ_elements),
};

extern const Meta_Qualifier_Scalar<uint32>
_CIM_ManagedSystemElement_Status_MaxLen_MQ;

const Meta_Qualifier_Scalar<uint32>
_CIM_ManagedSystemElement_Status_MaxLen_MQ =
{
    { 0 }, /* refs */
    "MaxLen", /* name */
    UINT32, /* type */
    0, /* array */
    10, /* value */ 
};

static const Meta_Qualifier*
_CIM_ManagedSystemElement_Status_MQA[] =
{
    (Meta_Qualifier*)&_CIM_ManagedSystemElement_Status_Deprecated_MQ,
    (Meta_Qualifier*)&_CIM_ManagedSystemElement_Status_Description_MQ,
    (Meta_Qualifier*)&_CIM_ManagedSystemElement_Status_ValueMap_MQ,
    (Meta_Qualifier*)&_CIM_ManagedSystemElement_Status_MaxLen_MQ,
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
    0,
    CIMPLE_OFF(CIM_ManagedSystemElement,Status),
    0, /* value */
};

static Meta_Feature* _CIM_ManagedSystemElement_MFA[] =
{
    (Meta_Feature*)&_CIM_ManagedElement_Caption,
    (Meta_Feature*)&_CIM_ManagedElement_Description,
    (Meta_Feature*)&_CIM_ManagedElement_ElementName,
    (Meta_Feature*)&_CIM_ManagedSystemElement_InstallDate,
    (Meta_Feature*)&_CIM_ManagedSystemElement_Name,
    (Meta_Feature*)&_CIM_ManagedSystemElement_OperationalStatus,
    (Meta_Feature*)&_CIM_ManagedSystemElement_StatusDescriptions,
    (Meta_Feature*)&_CIM_ManagedSystemElement_Status,
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
};

extern const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedSystemElement_Version_MQ;

const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedSystemElement_Version_MQ =
{
    { 0 }, /* refs */
    "Version", /* name */
    STRING, /* type */
    0, /* array */
    "2.8.0", /* value */ 
};

extern const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedSystemElement_Description_MQ;

const Meta_Qualifier_Scalar<const char*>
_CIM_ManagedSystemElement_Description_MQ =
{
    { 0 }, /* refs */
    "Description", /* name */
    STRING, /* type */
    0, /* array */
    "CIM_ManagedSystemElement is the base class for the System Element hierarchy. Any distinguishable component of a System is a candidate for inclusion in this class. Examples of system components include: \n- software components such as application servers, databases, and applications \n- operating system components such as files, processes, and threads \n- device components such as disk drives, controllers, processors, and printers \n- physical components such as chips and cards.", /* value */ 
};

static const Meta_Qualifier*
_CIM_ManagedSystemElement_MQA[] =
{
    (Meta_Qualifier*)&_CIM_ManagedSystemElement_Version_MQ,
    (Meta_Qualifier*)&_CIM_ManagedSystemElement_Description_MQ,
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
    0x5DB2A81C, /* crc */
    0,
};

CIMPLE_NAMESPACE_END

