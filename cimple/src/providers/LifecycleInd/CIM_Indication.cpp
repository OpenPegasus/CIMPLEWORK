/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.0.25
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CIM_Indication.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_6FF88CC366261FACB440F949B95C94A9;

/*[1566]*/
extern const Meta_Property
_CIM_Indication_IndicationIdentifier;

/*[1589]*/
const Meta_Property
_CIM_Indication_IndicationIdentifier =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "IndicationIdentifier",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_Indication,IndicationIdentifier),
    0, /* value */
};

/*[1566]*/
extern const Meta_Property
_CIM_Indication_CorrelatedIndications;

/*[1589]*/
const Meta_Property
_CIM_Indication_CorrelatedIndications =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "CorrelatedIndications",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    -1, /* subscript */
    CIMPLE_OFF(CIM_Indication,CorrelatedIndications),
    0, /* value */
};

/*[1566]*/
extern const Meta_Property
_CIM_Indication_IndicationTime;

/*[1589]*/
const Meta_Property
_CIM_Indication_IndicationTime =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "IndicationTime",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    DATETIME,
    0, /* subscript */
    CIMPLE_OFF(CIM_Indication,IndicationTime),
    0, /* value */
};

/*[1566]*/
extern const Meta_Property
_CIM_Indication_PerceivedSeverity;

/*[1589]*/
const Meta_Property
_CIM_Indication_PerceivedSeverity =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "PerceivedSeverity",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    UINT16,
    0, /* subscript */
    CIMPLE_OFF(CIM_Indication,PerceivedSeverity),
    0, /* value */
};

/*[1566]*/
extern const Meta_Property
_CIM_Indication_OtherSeverity;

/*[1589]*/
const Meta_Property
_CIM_Indication_OtherSeverity =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "OtherSeverity",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_Indication,OtherSeverity),
    0, /* value */
};

/*[2289]*/
static Meta_Feature* _CIM_Indication_MFA[] =
{
    (Meta_Feature*)(void*)&_CIM_Indication_IndicationIdentifier,
    (Meta_Feature*)(void*)&_CIM_Indication_CorrelatedIndications,
    (Meta_Feature*)(void*)&_CIM_Indication_IndicationTime,
    (Meta_Feature*)(void*)&_CIM_Indication_PerceivedSeverity,
    (Meta_Feature*)(void*)&_CIM_Indication_OtherSeverity,
};

/*[2336]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
    {1},
    {1},
    {1},
};

/*[2356]*/
const Meta_Class CIM_Indication::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_INDICATION|CIMPLE_FLAG_ABSTRACT,
    "CIM_Indication",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIM_Indication_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_Indication_MFA),
    sizeof(CIM_Indication),
    _locals,
    0, /* super_class */ 
    0, /* num_keys */
    &__meta_repository_6FF88CC366261FACB440F949B95C94A9,
};

CIMPLE_NAMESPACE_END

