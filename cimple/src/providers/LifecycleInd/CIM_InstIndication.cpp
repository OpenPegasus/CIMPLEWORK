/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.0.25
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "CIM_InstIndication.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_CB79DF59E9681ED7B2F09212824D7951;

/*[1566]*/
extern const Meta_Property
_CIM_Indication_IndicationIdentifier;

/*[1566]*/
extern const Meta_Property
_CIM_Indication_CorrelatedIndications;

/*[1566]*/
extern const Meta_Property
_CIM_Indication_IndicationTime;

/*[1566]*/
extern const Meta_Property
_CIM_Indication_PerceivedSeverity;

/*[1566]*/
extern const Meta_Property
_CIM_Indication_OtherSeverity;

extern const Meta_Reference
_CIM_InstIndication_SourceInstance;

/*[2178]*/
const Meta_Reference _CIM_InstIndication_SourceInstance =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_EMBEDDED_OBJECT,
    "SourceInstance",
    0, /* meta_qualifiers */
    0, /* num_meta_qualifiers */
    0, /* subscript */
    &Instance::static_meta_class,
    CIMPLE_OFF(CIM_InstIndication,SourceInstance)
};

/*[1566]*/
extern const Meta_Property
_CIM_InstIndication_SourceInstanceModelPath;

/*[1589]*/
const Meta_Property
_CIM_InstIndication_SourceInstanceModelPath =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "SourceInstanceModelPath",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_InstIndication,SourceInstanceModelPath),
    0, /* value */
};

/*[1566]*/
extern const Meta_Property
_CIM_InstIndication_SourceInstanceHost;

/*[1589]*/
const Meta_Property
_CIM_InstIndication_SourceInstanceHost =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "SourceInstanceHost",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    0, /* subscript */
    CIMPLE_OFF(CIM_InstIndication,SourceInstanceHost),
    0, /* value */
};

/*[2289]*/
static Meta_Feature* _CIM_InstIndication_MFA[] =
{
    (Meta_Feature*)(void*)&_CIM_Indication_IndicationIdentifier,
    (Meta_Feature*)(void*)&_CIM_Indication_CorrelatedIndications,
    (Meta_Feature*)(void*)&_CIM_Indication_IndicationTime,
    (Meta_Feature*)(void*)&_CIM_Indication_PerceivedSeverity,
    (Meta_Feature*)(void*)&_CIM_Indication_OtherSeverity,
    (Meta_Feature*)(void*)&_CIM_InstIndication_SourceInstance,
    (Meta_Feature*)(void*)&_CIM_InstIndication_SourceInstanceModelPath,
    (Meta_Feature*)(void*)&_CIM_InstIndication_SourceInstanceHost,
};

/*[2336]*/
static const Meta_Feature_Local _locals[] =
{
    {0},
    {0},
    {0},
    {0},
    {0},
    {1},
    {1},
    {1},
};

/*[2356]*/
const Meta_Class CIM_InstIndication::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_INDICATION|CIMPLE_FLAG_ABSTRACT,
    "CIM_InstIndication",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _CIM_InstIndication_MFA,
    CIMPLE_ARRAY_SIZE(_CIM_InstIndication_MFA),
    sizeof(CIM_InstIndication),
    _locals,
    &CIM_Indication::static_meta_class,
    0, /* num_keys */
    &__meta_repository_CB79DF59E9681ED7B2F09212824D7951,
};

CIMPLE_NAMESPACE_END

