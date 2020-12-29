/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 1.2.5
//
//==============================================================================

#ifndef _cimple_Buzzer_h
#define _cimple_Buzzer_h

#include <cimple/cimple.h>
#include "__ExtrinsicEvent.h"

CIMPLE_NAMESPACE_BEGIN

// Buzzer keys:
//     key

/*[930]*/
class Buzzer : public Instance
{
public:
    // __ExtrinsicEvent features:

    // Buzzer features:
    Property<String> key;
    Property<String> message;

    CIMPLE_CLASS(Buzzer)
};

/*[1016]*/
class Buzzer_trigger_method : public Instance
{
public:
    Property<uint32> return_value;
    CIMPLE_METHOD(Buzzer_trigger_method)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_Buzzer_h */