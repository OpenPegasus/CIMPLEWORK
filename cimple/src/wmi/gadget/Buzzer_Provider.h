// Generated by genprov 1.2.5
#ifndef _Buzzer_Provider_h
#define _Buzzer_Provider_h

#include <cimple/cimple.h>
#include "Buzzer.h"

CIMPLE_NAMESPACE_BEGIN

class Buzzer_Provider
{
public:

    typedef Buzzer Class;

    Buzzer_Provider();

    ~Buzzer_Provider();

    Load_Status load();

    Unload_Status unload();

    Enable_Indications_Status enable_indications(
        Indication_Handler<Buzzer>* indication_handler);

    Disable_Indications_Status disable_indications();

    Invoke_Method_Status trigger(
        Property<uint32>& return_value);

    /*@END@*/
private:

    Indication_Handler<Buzzer>* _indication_handler;
};

CIMPLE_NAMESPACE_END

#endif /* _Buzzer_Provider_h */