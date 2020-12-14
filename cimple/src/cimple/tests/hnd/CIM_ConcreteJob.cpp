/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CIM_ConcreteJob.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_6827E083506B1A56883F566A87E0489F;

extern const Meta_Qualifier
_CIM_ManagedElement_Caption_MaxLen_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_Caption_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ManagedElement_Caption_MaxLen_MQ,
};

extern const Meta_Property
_CIM_ManagedElement_Caption;

static const Meta_Qualifier*
_CIM_ConcreteJob_Description_MQA[] =
{
};

extern const Meta_Property
_CIM_ManagedElement_Description;

static const Meta_Qualifier*
_CIM_ConcreteJob_ElementName_MQA[] =
{
};

extern const Meta_Property
_CIM_ManagedElement_ElementName;

extern const Meta_Qualifier
_CIM_ManagedSystemElement_InstallDate_MappingStrings_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_InstallDate_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_InstallDate_MappingStrings_MQ,
};

extern const Meta_Property
_CIM_ManagedSystemElement_InstallDate;

extern const Meta_Qualifier
_CIM_ConcreteJob_Name_Override_MQ;

static const Meta_Value_Scalar<const char*>
_CIM_ConcreteJob_Name_Override_MV =
{
    "Name"
};

const Meta_Qualifier
_CIM_ConcreteJob_Name_Override_MQ =
{
    { 0 }, /* refs */
    "Override", /* name */
    STRING, /* type */
    0, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ConcreteJob_Name_Override_MV,
};

extern const Meta_Qualifier
_CIM_ManagedSystemElement_Name_MaxLen_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_Name_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ConcreteJob_Name_Override_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_Name_MaxLen_MQ,
};

extern const Meta_Property
_CIM_ConcreteJob_Name;

const Meta_Property
_CIM_ConcreteJob_Name =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ|CIMPLE_FLAG_REQUIRED,
    "Name",
    _CIM_ConcreteJob_Name_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ConcreteJob_Name_MQA),
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_ConcreteJob,Name),
    0, /* value */
};

extern const Meta_Qualifier
_CIM_ManagedSystemElement_OperationalStatus_ValueMap_MQ;

extern const Meta_Qualifier
_CIM_ManagedSystemElement_OperationalStatus_Values_MQ;

extern const Meta_Qualifier
_CIM_ManagedSystemElement_OperationalStatus_ArrayType_MQ;

extern const Meta_Qualifier
_CIM_ManagedSystemElement_OperationalStatus_ModelCorrespondence_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_OperationalStatus_MQA[] =
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
_CIM_ConcreteJob_StatusDescriptions_MQA[] =
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
_CIM_ConcreteJob_Status_MQA[] =
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
_CIM_ConcreteJob_HealthState_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_HealthState_ValueMap_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ManagedSystemElement_HealthState_Values_MQ,
};

extern const Meta_Property
_CIM_ManagedSystemElement_HealthState;

extern const Meta_Qualifier
_CIM_Job_JobStatus_ModelCorrespondence_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_JobStatus_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_Job_JobStatus_ModelCorrespondence_MQ,
};

extern const Meta_Property
_CIM_Job_JobStatus;

static const Meta_Qualifier*
_CIM_ConcreteJob_TimeSubmitted_MQA[] =
{
};

extern const Meta_Property
_CIM_Job_TimeSubmitted;

extern const Meta_Qualifier
_CIM_Job_ScheduledStartTime_Deprecated_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_ScheduledStartTime_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_Job_ScheduledStartTime_Deprecated_MQ,
};

extern const Meta_Property
_CIM_Job_ScheduledStartTime;

static const Meta_Qualifier*
_CIM_ConcreteJob_StartTime_MQA[] =
{
};

extern const Meta_Property
_CIM_Job_StartTime;

static const Meta_Qualifier*
_CIM_ConcreteJob_ElapsedTime_MQA[] =
{
};

extern const Meta_Property
_CIM_Job_ElapsedTime;

static const Meta_Qualifier*
_CIM_ConcreteJob_JobRunTimes_MQA[] =
{
};

extern const Meta_Property
_CIM_Job_JobRunTimes;

extern const Meta_Qualifier
_CIM_Job_RunMonth_ValueMap_MQ;

extern const Meta_Qualifier
_CIM_Job_RunMonth_Values_MQ;

extern const Meta_Qualifier
_CIM_Job_RunMonth_ModelCorrespondence_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_RunMonth_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_Job_RunMonth_ValueMap_MQ,
    (Meta_Qualifier*)(void*)&_CIM_Job_RunMonth_Values_MQ,
    (Meta_Qualifier*)(void*)&_CIM_Job_RunMonth_ModelCorrespondence_MQ,
};

extern const Meta_Property
_CIM_Job_RunMonth;

extern const Meta_Qualifier
_CIM_Job_RunDay_MinValue_MQ;

extern const Meta_Qualifier
_CIM_Job_RunDay_MaxValue_MQ;

extern const Meta_Qualifier
_CIM_Job_RunDay_ModelCorrespondence_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_RunDay_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_Job_RunDay_MinValue_MQ,
    (Meta_Qualifier*)(void*)&_CIM_Job_RunDay_MaxValue_MQ,
    (Meta_Qualifier*)(void*)&_CIM_Job_RunDay_ModelCorrespondence_MQ,
};

extern const Meta_Property
_CIM_Job_RunDay;

extern const Meta_Qualifier
_CIM_Job_RunDayOfWeek_ValueMap_MQ;

extern const Meta_Qualifier
_CIM_Job_RunDayOfWeek_Values_MQ;

extern const Meta_Qualifier
_CIM_Job_RunDayOfWeek_ModelCorrespondence_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_RunDayOfWeek_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_Job_RunDayOfWeek_ValueMap_MQ,
    (Meta_Qualifier*)(void*)&_CIM_Job_RunDayOfWeek_Values_MQ,
    (Meta_Qualifier*)(void*)&_CIM_Job_RunDayOfWeek_ModelCorrespondence_MQ,
};

extern const Meta_Property
_CIM_Job_RunDayOfWeek;

extern const Meta_Qualifier
_CIM_Job_RunStartInterval_ModelCorrespondence_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_RunStartInterval_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_Job_RunStartInterval_ModelCorrespondence_MQ,
};

extern const Meta_Property
_CIM_Job_RunStartInterval;

extern const Meta_Qualifier
_CIM_Job_LocalOrUtcTime_ValueMap_MQ;

extern const Meta_Qualifier
_CIM_Job_LocalOrUtcTime_Values_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_LocalOrUtcTime_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_Job_LocalOrUtcTime_ValueMap_MQ,
    (Meta_Qualifier*)(void*)&_CIM_Job_LocalOrUtcTime_Values_MQ,
};

extern const Meta_Property
_CIM_Job_LocalOrUtcTime;

extern const Meta_Qualifier
_CIM_Job_UntilTime_ModelCorrespondence_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_UntilTime_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_Job_UntilTime_ModelCorrespondence_MQ,
};

extern const Meta_Property
_CIM_Job_UntilTime;

static const Meta_Qualifier*
_CIM_ConcreteJob_Notify_MQA[] =
{
};

extern const Meta_Property
_CIM_Job_Notify;

extern const Meta_Qualifier
_CIM_Job_Owner_ModelCorrespondence_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_Owner_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_Job_Owner_ModelCorrespondence_MQ,
};

extern const Meta_Property
_CIM_Job_Owner;

static const Meta_Qualifier*
_CIM_ConcreteJob_Priority_MQA[] =
{
};

extern const Meta_Property
_CIM_Job_Priority;

extern const Meta_Qualifier
_CIM_Job_PercentComplete_Units_MQ;

extern const Meta_Qualifier
_CIM_Job_PercentComplete_MinValue_MQ;

extern const Meta_Qualifier
_CIM_Job_PercentComplete_MaxValue_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_PercentComplete_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_Job_PercentComplete_Units_MQ,
    (Meta_Qualifier*)(void*)&_CIM_Job_PercentComplete_MinValue_MQ,
    (Meta_Qualifier*)(void*)&_CIM_Job_PercentComplete_MaxValue_MQ,
};

extern const Meta_Property
_CIM_Job_PercentComplete;

static const Meta_Qualifier*
_CIM_ConcreteJob_DeleteOnCompletion_MQA[] =
{
};

extern const Meta_Property
_CIM_Job_DeleteOnCompletion;

extern const Meta_Qualifier
_CIM_Job_ErrorCode_ModelCorrespondence_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_ErrorCode_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_Job_ErrorCode_ModelCorrespondence_MQ,
};

extern const Meta_Property
_CIM_Job_ErrorCode;

extern const Meta_Qualifier
_CIM_Job_ErrorDescription_ModelCorrespondence_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_ErrorDescription_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_Job_ErrorDescription_ModelCorrespondence_MQ,
};

extern const Meta_Property
_CIM_Job_ErrorDescription;

extern const Meta_Qualifier
_CIM_Job_RecoveryAction_ValueMap_MQ;

extern const Meta_Qualifier
_CIM_Job_RecoveryAction_Values_MQ;

extern const Meta_Qualifier
_CIM_Job_RecoveryAction_ModelCorrespondence_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_RecoveryAction_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_Job_RecoveryAction_ValueMap_MQ,
    (Meta_Qualifier*)(void*)&_CIM_Job_RecoveryAction_Values_MQ,
    (Meta_Qualifier*)(void*)&_CIM_Job_RecoveryAction_ModelCorrespondence_MQ,
};

extern const Meta_Property
_CIM_Job_RecoveryAction;

extern const Meta_Qualifier
_CIM_Job_OtherRecoveryAction_ModelCorrespondence_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_OtherRecoveryAction_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_Job_OtherRecoveryAction_ModelCorrespondence_MQ,
};

extern const Meta_Property
_CIM_Job_OtherRecoveryAction;

extern const Meta_Qualifier
_CIM_Job_KillJob_Deprecated_MQ;

extern const Meta_Qualifier
_CIM_Job_KillJob_ValueMap_MQ;

extern const Meta_Qualifier
_CIM_Job_KillJob_Values_MQ;

static const Meta_Qualifier*
_CIM_ConcreteJob_KillJob_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_Job_KillJob_Deprecated_MQ,
    (Meta_Qualifier*)(void*)&_CIM_Job_KillJob_ValueMap_MQ,
    (Meta_Qualifier*)(void*)&_CIM_Job_KillJob_Values_MQ,
};

static const Meta_Qualifier*
_CIM_ConcreteJob_InstanceID_MQA[] =
{
};

extern const Meta_Property
_CIM_ConcreteJob_InstanceID;

const Meta_Property
_CIM_ConcreteJob_InstanceID =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "InstanceID",
    _CIM_ConcreteJob_InstanceID_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ConcreteJob_InstanceID_MQA),
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_ConcreteJob,InstanceID),
    0, /* value */
};

extern const Meta_Qualifier
_CIM_ConcreteJob_JobState_ValueMap_MQ;

static const char*
_CIM_ConcreteJob_JobState_ValueMap_elements[] =
{
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
    "13..32767",
    "32768..65535",
};

const Meta_Value_Array<const char*>
_CIM_ConcreteJob_JobState_ValueMap_MV =
{
    _CIM_ConcreteJob_JobState_ValueMap_elements,
    CIMPLE_ARRAY_SIZE(_CIM_ConcreteJob_JobState_ValueMap_elements),
};

const Meta_Qualifier
_CIM_ConcreteJob_JobState_ValueMap_MQ =
{
    { 0 }, /* refs */
    "ValueMap", /* name */
    STRING, /* type */
    1, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ConcreteJob_JobState_ValueMap_MV,
};

extern const Meta_Qualifier
_CIM_ConcreteJob_JobState_Values_MQ;

static const char*
_CIM_ConcreteJob_JobState_Values_elements[] =
{
    "New",
    "Starting",
    "Running",
    "Suspended",
    "Shutting Down",
    "Completed",
    "Terminated",
    "Killed",
    "Exception",
    "Service",
    "Query Pending",
    "DMTF Reserved",
    "Vendor Reserved",
};

const Meta_Value_Array<const char*>
_CIM_ConcreteJob_JobState_Values_MV =
{
    _CIM_ConcreteJob_JobState_Values_elements,
    CIMPLE_ARRAY_SIZE(_CIM_ConcreteJob_JobState_Values_elements),
};

const Meta_Qualifier
_CIM_ConcreteJob_JobState_Values_MQ =
{
    { 0 }, /* refs */
    "Values", /* name */
    STRING, /* type */
    1, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ConcreteJob_JobState_Values_MV,
};

static const Meta_Qualifier*
_CIM_ConcreteJob_JobState_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ConcreteJob_JobState_ValueMap_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ConcreteJob_JobState_Values_MQ,
};

extern const Meta_Property
_CIM_ConcreteJob_JobState;

const Meta_Property
_CIM_ConcreteJob_JobState =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "JobState",
    _CIM_ConcreteJob_JobState_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ConcreteJob_JobState_MQA),
    UINT16,
    0, /* subscript */
    CIMPLE_OFF(CIM_ConcreteJob,JobState),
    0, /* value */
};

static const Meta_Qualifier*
_CIM_ConcreteJob_TimeOfLastStateChange_MQA[] =
{
};

extern const Meta_Property
_CIM_ConcreteJob_TimeOfLastStateChange;

const Meta_Property
_CIM_ConcreteJob_TimeOfLastStateChange =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "TimeOfLastStateChange",
    _CIM_ConcreteJob_TimeOfLastStateChange_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ConcreteJob_TimeOfLastStateChange_MQA),
    DATETIME,
    0, /* subscript */
    CIMPLE_OFF(CIM_ConcreteJob,TimeOfLastStateChange),
    0, /* value */
};

extern const Meta_Qualifier
_CIM_ConcreteJob_RequestStateChange_ValueMap_MQ;

static const char*
_CIM_ConcreteJob_RequestStateChange_ValueMap_elements[] =
{
    "0",
    "1",
    "2",
    "3",
    "4",
    "5",
    "6",
    "..",
    "4096",
    "4097",
    "4098",
    "4099",
    "4100..32767",
    "32768..65535",
};

const Meta_Value_Array<const char*>
_CIM_ConcreteJob_RequestStateChange_ValueMap_MV =
{
    _CIM_ConcreteJob_RequestStateChange_ValueMap_elements,
    CIMPLE_ARRAY_SIZE(_CIM_ConcreteJob_RequestStateChange_ValueMap_elements),
};

const Meta_Qualifier
_CIM_ConcreteJob_RequestStateChange_ValueMap_MQ =
{
    { 0 }, /* refs */
    "ValueMap", /* name */
    STRING, /* type */
    1, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ConcreteJob_RequestStateChange_ValueMap_MV,
};

extern const Meta_Qualifier
_CIM_ConcreteJob_RequestStateChange_Values_MQ;

static const char*
_CIM_ConcreteJob_RequestStateChange_Values_elements[] =
{
    "Completed with No Error",
    "Not Supported",
    "Unknown/Unspecified Error",
    "Can NOT complete within Timeout Period",
    "Failed",
    "Invalid Parameter",
    "In Use",
    "DMTF Reserved",
    "Method Parameters Checked - Transition Started",
    "Invalid State Transition",
    "Use of Timeout Parameter Not Supported",
    "Busy",
    "Method Reserved",
    "Vendor Specific",
};

const Meta_Value_Array<const char*>
_CIM_ConcreteJob_RequestStateChange_Values_MV =
{
    _CIM_ConcreteJob_RequestStateChange_Values_elements,
    CIMPLE_ARRAY_SIZE(_CIM_ConcreteJob_RequestStateChange_Values_elements),
};

const Meta_Qualifier
_CIM_ConcreteJob_RequestStateChange_Values_MQ =
{
    { 0 }, /* refs */
    "Values", /* name */
    STRING, /* type */
    1, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ConcreteJob_RequestStateChange_Values_MV,
};

static const Meta_Qualifier*
_CIM_ConcreteJob_RequestStateChange_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ConcreteJob_RequestStateChange_ValueMap_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ConcreteJob_RequestStateChange_Values_MQ,
};

extern const Meta_Qualifier
_CIM_ConcreteJob_RequestStateChange_RequestedState_ValueMap_MQ;

static const char*
_CIM_ConcreteJob_RequestStateChange_RequestedState_ValueMap_elements[] =
{
    "2",
    "3",
    "4",
    "5",
    "6",
    "7..32767",
    "32768..65535",
};

const Meta_Value_Array<const char*>
_CIM_ConcreteJob_RequestStateChange_RequestedState_ValueMap_MV =
{
    _CIM_ConcreteJob_RequestStateChange_RequestedState_ValueMap_elements,
    CIMPLE_ARRAY_SIZE(_CIM_ConcreteJob_RequestStateChange_RequestedState_ValueMap_elements),
};

const Meta_Qualifier
_CIM_ConcreteJob_RequestStateChange_RequestedState_ValueMap_MQ =
{
    { 0 }, /* refs */
    "ValueMap", /* name */
    STRING, /* type */
    1, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ConcreteJob_RequestStateChange_RequestedState_ValueMap_MV,
};

extern const Meta_Qualifier
_CIM_ConcreteJob_RequestStateChange_RequestedState_Values_MQ;

static const char*
_CIM_ConcreteJob_RequestStateChange_RequestedState_Values_elements[] =
{
    "Start",
    "Suspend",
    "Terminate",
    "Kill",
    "Service",
    "DMTF Reserved",
    "Vendor Reserved",
};

const Meta_Value_Array<const char*>
_CIM_ConcreteJob_RequestStateChange_RequestedState_Values_MV =
{
    _CIM_ConcreteJob_RequestStateChange_RequestedState_Values_elements,
    CIMPLE_ARRAY_SIZE(_CIM_ConcreteJob_RequestStateChange_RequestedState_Values_elements),
};

const Meta_Qualifier
_CIM_ConcreteJob_RequestStateChange_RequestedState_Values_MQ =
{
    { 0 }, /* refs */
    "Values", /* name */
    STRING, /* type */
    1, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ConcreteJob_RequestStateChange_RequestedState_Values_MV,
};

static const Meta_Qualifier*
_CIM_ConcreteJob_RequestStateChange_RequestedState_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ConcreteJob_RequestStateChange_RequestedState_ValueMap_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ConcreteJob_RequestStateChange_RequestedState_Values_MQ,
};

static const Meta_Property
_CIM_ConcreteJob_RequestStateChange_RequestedState =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN,
    "RequestedState",
    _CIM_ConcreteJob_RequestStateChange_RequestedState_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ConcreteJob_RequestStateChange_RequestedState_MQA),
    UINT16,
    0,
    CIMPLE_OFF(CIM_ConcreteJob_RequestStateChange_method,RequestedState),
    0, /* value */
};

static const Meta_Qualifier*
_CIM_ConcreteJob_RequestStateChange_TimeoutPeriod_MQA[] =
{
};

static const Meta_Property
_CIM_ConcreteJob_RequestStateChange_TimeoutPeriod =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_IN,
    "TimeoutPeriod",
    _CIM_ConcreteJob_RequestStateChange_TimeoutPeriod_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ConcreteJob_RequestStateChange_TimeoutPeriod_MQA),
    DATETIME,
    0,
    CIMPLE_OFF(CIM_ConcreteJob_RequestStateChange_method,TimeoutPeriod),
    0, /* value */
};

static const Meta_Property
_CIM_ConcreteJob_RequestStateChange_return_value =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_OUT,
    "return_value",
    _CIM_ConcreteJob_RequestStateChange_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ConcreteJob_RequestStateChange_MQA),
    UINT32,
    0,
    CIMPLE_OFF(CIM_ConcreteJob_RequestStateChange_method,return_value),
    0, /* value */
};

static Meta_Feature* _CIM_ConcreteJob_RequestStateChange_MFA[] =
{
    (Meta_Feature*)(void*)&_CIM_ConcreteJob_RequestStateChange_RequestedState,
    (Meta_Feature*)(void*)&_CIM_ConcreteJob_RequestStateChange_TimeoutPeriod,
    (Meta_Feature*)(void*)&_CIM_ConcreteJob_RequestStateChange_return_value
};

const Meta_Method
CIM_ConcreteJob_RequestStateChange_method::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_METHOD,
    "RequestStateChange",
    _CIM_ConcreteJob_RequestStateChange_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ConcreteJob_RequestStateChange_MQA),
    _CIM_ConcreteJob_RequestStateChange_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_ConcreteJob_RequestStateChange_MFA),
    sizeof(CIM_ConcreteJob_RequestStateChange_method),
    UINT32,
};

static const Meta_Qualifier*
_CIM_ConcreteJob_TimeBeforeRemoval_MQA[] =
{
};

extern const Meta_Property
_CIM_ConcreteJob_TimeBeforeRemoval;

static const Meta_Value_Scalar<const char*>
_CIM_ConcreteJob_TimeBeforeRemoval_MV =
{
    "00000000000500.000000:000"
};

const Meta_Property
_CIM_ConcreteJob_TimeBeforeRemoval =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ|CIMPLE_FLAG_REQUIRED|CIMPLE_FLAG_WRITE,
    "TimeBeforeRemoval",
    _CIM_ConcreteJob_TimeBeforeRemoval_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ConcreteJob_TimeBeforeRemoval_MQA),
    DATETIME,
    0, /* subscript */
    CIMPLE_OFF(CIM_ConcreteJob,TimeBeforeRemoval),
    (const Meta_Value*)(void*)&_CIM_ConcreteJob_TimeBeforeRemoval_MV,
};

static Meta_Feature* _CIM_ConcreteJob_MFA[] =
{
    (Meta_Feature*)(void*)&_CIM_ManagedElement_Caption,
    (Meta_Feature*)(void*)&_CIM_ManagedElement_Description,
    (Meta_Feature*)(void*)&_CIM_ManagedElement_ElementName,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_InstallDate,
    (Meta_Feature*)(void*)&_CIM_ConcreteJob_Name,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_OperationalStatus,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_StatusDescriptions,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_Status,
    (Meta_Feature*)(void*)&_CIM_ManagedSystemElement_HealthState,
    (Meta_Feature*)(void*)&_CIM_Job_JobStatus,
    (Meta_Feature*)(void*)&_CIM_Job_TimeSubmitted,
    (Meta_Feature*)(void*)&_CIM_Job_ScheduledStartTime,
    (Meta_Feature*)(void*)&_CIM_Job_StartTime,
    (Meta_Feature*)(void*)&_CIM_Job_ElapsedTime,
    (Meta_Feature*)(void*)&_CIM_Job_JobRunTimes,
    (Meta_Feature*)(void*)&_CIM_Job_RunMonth,
    (Meta_Feature*)(void*)&_CIM_Job_RunDay,
    (Meta_Feature*)(void*)&_CIM_Job_RunDayOfWeek,
    (Meta_Feature*)(void*)&_CIM_Job_RunStartInterval,
    (Meta_Feature*)(void*)&_CIM_Job_LocalOrUtcTime,
    (Meta_Feature*)(void*)&_CIM_Job_UntilTime,
    (Meta_Feature*)(void*)&_CIM_Job_Notify,
    (Meta_Feature*)(void*)&_CIM_Job_Owner,
    (Meta_Feature*)(void*)&_CIM_Job_Priority,
    (Meta_Feature*)(void*)&_CIM_Job_PercentComplete,
    (Meta_Feature*)(void*)&_CIM_Job_DeleteOnCompletion,
    (Meta_Feature*)(void*)&_CIM_Job_ErrorCode,
    (Meta_Feature*)(void*)&_CIM_Job_ErrorDescription,
    (Meta_Feature*)(void*)&_CIM_Job_RecoveryAction,
    (Meta_Feature*)(void*)&_CIM_Job_OtherRecoveryAction,
    (Meta_Feature*)(void*)&CIM_Job_KillJob_method::static_meta_class,
    (Meta_Feature*)(void*)&_CIM_ConcreteJob_InstanceID,
    (Meta_Feature*)(void*)&_CIM_ConcreteJob_JobState,
    (Meta_Feature*)(void*)&_CIM_ConcreteJob_TimeOfLastStateChange,
    (Meta_Feature*)(void*)&CIM_ConcreteJob_RequestStateChange_method::static_meta_class,
    (Meta_Feature*)(void*)&_CIM_ConcreteJob_TimeBeforeRemoval,
};

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
    {0},
    {1},
    {1},
    {1},
    {1},
    {1},
};

extern const Meta_Qualifier
_CIM_ConcreteJob_Version_MQ;

static const Meta_Value_Scalar<const char*>
_CIM_ConcreteJob_Version_MV =
{
    "2.13.0"
};

const Meta_Qualifier
_CIM_ConcreteJob_Version_MQ =
{
    { 0 }, /* refs */
    "Version", /* name */
    STRING, /* type */
    0, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ConcreteJob_Version_MV,
};

extern const Meta_Qualifier
_CIM_ConcreteJob_UMLPackagePath_MQ;

static const Meta_Value_Scalar<const char*>
_CIM_ConcreteJob_UMLPackagePath_MV =
{
    "CIM::Core::CoreElements"
};

const Meta_Qualifier
_CIM_ConcreteJob_UMLPackagePath_MQ =
{
    { 0 }, /* refs */
    "UMLPackagePath", /* name */
    STRING, /* type */
    0, /* array */
    0 /* flavors */,
    (const Meta_Value*)(void*)&_CIM_ConcreteJob_UMLPackagePath_MV,
};

static const Meta_Qualifier*
_CIM_ConcreteJob_MQA[] =
{
    (Meta_Qualifier*)(void*)&_CIM_ConcreteJob_Version_MQ,
    (Meta_Qualifier*)(void*)&_CIM_ConcreteJob_UMLPackagePath_MQ,
};

const Meta_Class CIM_ConcreteJob::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_CLASS,
    "CIM_ConcreteJob",
    _CIM_ConcreteJob_MQA,
    CIMPLE_ARRAY_SIZE(_CIM_ConcreteJob_MQA),
    _CIM_ConcreteJob_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_ConcreteJob_MFA),
    sizeof(CIM_ConcreteJob),
    _locals,
    &CIM_Job::static_meta_class,
    1, /* num_keys */
    0xE68CD3C9, /* crc */
    &__meta_repository_6827E083506B1A56883F566A87E0489F,
};

CIM_ConcreteJob_Ref::CIM_ConcreteJob_Ref()
{
    _inst = CIM_ConcreteJob::create(true);
    _ref = true;
}

CIM_ConcreteJob_Ref::CIM_ConcreteJob_Ref(const CIM_ConcreteJob_Ref& x) : CIM_Job_Ref(x)
{
}

CIM_ConcreteJob_Ref::CIM_ConcreteJob_Ref(CIM_ConcreteJob* inst)
{
    _inst = inst;
    _ref = true;
}

CIM_ConcreteJob_Ref::~CIM_ConcreteJob_Ref()
{
}

CIM_ConcreteJob_Ref& CIM_ConcreteJob_Ref::operator=(const CIM_ConcreteJob_Ref& x)
{
    Hnd::operator=(x);
    return *this;
}

const String& CIM_ConcreteJob_Ref::InstanceID() const
{
    return ((CIM_ConcreteJob*)_inst)->InstanceID.value;
}

void CIM_ConcreteJob_Ref::InstanceID(const String& x)
{
    _cow();
    ((CIM_ConcreteJob*)_inst)->InstanceID.null = false;
    ((CIM_ConcreteJob*)_inst)->InstanceID.value = x;
}

bool CIM_ConcreteJob_Ref::InstanceID_null() const
{
    return ((CIM_ConcreteJob*)_inst)->InstanceID.null;
}

void CIM_ConcreteJob_Ref::InstanceID_null(bool x)
{
    _cow();
    ((CIM_ConcreteJob*)_inst)->InstanceID.null = x;
    __clear(((CIM_ConcreteJob*)_inst)->InstanceID.value);
}

CIM_ConcreteJob_Hnd::CIM_ConcreteJob_Hnd()
{
    _inst = CIM_ConcreteJob::create(true);
    _ref = false;
}

CIM_ConcreteJob_Hnd::CIM_ConcreteJob_Hnd(const CIM_ConcreteJob_Hnd& x) : CIM_Job_Hnd(x)
{
}

CIM_ConcreteJob_Hnd::CIM_ConcreteJob_Hnd(CIM_ConcreteJob* inst)
{
    _inst = inst;
    _ref = false;
}

CIM_ConcreteJob_Hnd::~CIM_ConcreteJob_Hnd()
{
}

CIM_ConcreteJob_Hnd& CIM_ConcreteJob_Hnd::operator=(const CIM_ConcreteJob_Hnd& x)
{
    Hnd::operator=(x);
    return *this;
}

const String& CIM_ConcreteJob_Hnd::InstanceID() const
{
    return ((CIM_ConcreteJob*)_inst)->InstanceID.value;
}

void CIM_ConcreteJob_Hnd::InstanceID(const String& x)
{
    _cow();
    ((CIM_ConcreteJob*)_inst)->InstanceID.null = false;
    ((CIM_ConcreteJob*)_inst)->InstanceID.value = x;
}

bool CIM_ConcreteJob_Hnd::InstanceID_null() const
{
    return ((CIM_ConcreteJob*)_inst)->InstanceID.null;
}

void CIM_ConcreteJob_Hnd::InstanceID_null(bool x)
{
    _cow();
    ((CIM_ConcreteJob*)_inst)->InstanceID.null = x;
    __clear(((CIM_ConcreteJob*)_inst)->InstanceID.value);
}

const String& CIM_ConcreteJob_Hnd::Name() const
{
    return ((CIM_ConcreteJob*)_inst)->Name.value;
}

void CIM_ConcreteJob_Hnd::Name(const String& x)
{
    _cow();
    ((CIM_ConcreteJob*)_inst)->Name.null = false;
    ((CIM_ConcreteJob*)_inst)->Name.value = x;
}

bool CIM_ConcreteJob_Hnd::Name_null() const
{
    return ((CIM_ConcreteJob*)_inst)->Name.null;
}

void CIM_ConcreteJob_Hnd::Name_null(bool x)
{
    _cow();
    ((CIM_ConcreteJob*)_inst)->Name.null = x;
    __clear(((CIM_ConcreteJob*)_inst)->Name.value);
}

const uint16& CIM_ConcreteJob_Hnd::JobState() const
{
    return ((CIM_ConcreteJob*)_inst)->JobState.value;
}

void CIM_ConcreteJob_Hnd::JobState(const uint16& x)
{
    _cow();
    ((CIM_ConcreteJob*)_inst)->JobState.null = false;
    ((CIM_ConcreteJob*)_inst)->JobState.value = x;
}

bool CIM_ConcreteJob_Hnd::JobState_null() const
{
    return ((CIM_ConcreteJob*)_inst)->JobState.null;
}

void CIM_ConcreteJob_Hnd::JobState_null(bool x)
{
    _cow();
    ((CIM_ConcreteJob*)_inst)->JobState.null = x;
    __clear(((CIM_ConcreteJob*)_inst)->JobState.value);
}

const Datetime& CIM_ConcreteJob_Hnd::TimeOfLastStateChange() const
{
    return ((CIM_ConcreteJob*)_inst)->TimeOfLastStateChange.value;
}

void CIM_ConcreteJob_Hnd::TimeOfLastStateChange(const Datetime& x)
{
    _cow();
    ((CIM_ConcreteJob*)_inst)->TimeOfLastStateChange.null = false;
    ((CIM_ConcreteJob*)_inst)->TimeOfLastStateChange.value = x;
}

bool CIM_ConcreteJob_Hnd::TimeOfLastStateChange_null() const
{
    return ((CIM_ConcreteJob*)_inst)->TimeOfLastStateChange.null;
}

void CIM_ConcreteJob_Hnd::TimeOfLastStateChange_null(bool x)
{
    _cow();
    ((CIM_ConcreteJob*)_inst)->TimeOfLastStateChange.null = x;
    __clear(((CIM_ConcreteJob*)_inst)->TimeOfLastStateChange.value);
}

const Datetime& CIM_ConcreteJob_Hnd::TimeBeforeRemoval() const
{
    return ((CIM_ConcreteJob*)_inst)->TimeBeforeRemoval.value;
}

void CIM_ConcreteJob_Hnd::TimeBeforeRemoval(const Datetime& x)
{
    _cow();
    ((CIM_ConcreteJob*)_inst)->TimeBeforeRemoval.null = false;
    ((CIM_ConcreteJob*)_inst)->TimeBeforeRemoval.value = x;
}

bool CIM_ConcreteJob_Hnd::TimeBeforeRemoval_null() const
{
    return ((CIM_ConcreteJob*)_inst)->TimeBeforeRemoval.null;
}

void CIM_ConcreteJob_Hnd::TimeBeforeRemoval_null(bool x)
{
    _cow();
    ((CIM_ConcreteJob*)_inst)->TimeBeforeRemoval.null = x;
    __clear(((CIM_ConcreteJob*)_inst)->TimeBeforeRemoval.value);
}

CIMPLE_NAMESPACE_END

