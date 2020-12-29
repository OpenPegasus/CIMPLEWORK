/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.0.25
//
//==============================================================================

#ifndef _cimple_CIM_InstIndication_h
#define _cimple_CIM_InstIndication_h

#include <cimple/cimple.h>
#include "CIM_Indication.h"

CIMPLE_NAMESPACE_BEGIN

// CIM_InstIndication keys:

/*[1192]*/
class CIM_InstIndication : public Instance
{
public:
    // CIM_Indication features:
    Property<String> IndicationIdentifier;
    Property<Array_String> CorrelatedIndications;
    Property<Datetime> IndicationTime;
    Property<uint16> PerceivedSeverity;
    Property<String> OtherSeverity;

    // CIM_InstIndication features:
    Instance* SourceInstance;
    Property<String> SourceInstanceModelPath;
    Property<String> SourceInstanceHost;

    CIMPLE_CLASS(CIM_InstIndication)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_InstIndication_h */
