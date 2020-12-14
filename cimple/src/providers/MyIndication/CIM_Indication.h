/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.1.2
//
//==============================================================================

#ifndef _cimple_CIM_Indication_h
#define _cimple_CIM_Indication_h

#include <cimple/cimple.h>

CIMPLE_NAMESPACE_BEGIN

// CIM_Indication keys:

/*[928]*/
class CIM_Indication : public Instance
{
public:
    // CIM_Indication features:
    Property<String> IndicationIdentifier;
    Property<Array_String> CorrelatedIndications;
    Property<Datetime> IndicationTime;
    Property<uint16> PerceivedSeverity;
    Property<String> OtherSeverity;

    CIMPLE_CLASS(CIM_Indication)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_Indication_h */
