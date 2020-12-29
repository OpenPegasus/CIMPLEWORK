// Generated by genprov 1.2.5
#include "Buzzer_Provider.h"
#include "log.h"

CIMPLE_NAMESPACE_BEGIN

static void _send(
    Indication_Handler<Buzzer>* handler, 
    const String& key,
    const String& message)
{
    Buzzer* buzzer = Buzzer::create();
    buzzer->key.set(key);
    buzzer->message.set(message);
    handler->handle(buzzer);
}

Buzzer_Provider::Buzzer_Provider() : _indication_handler(0)
{
}

Buzzer_Provider::~Buzzer_Provider()
{
}

Load_Status Buzzer_Provider::load()
{
    return LOAD_OK;
}

Unload_Status Buzzer_Provider::unload()
{
    return UNLOAD_OK;
}

Enable_Indications_Status Buzzer_Provider::enable_indications(
    Indication_Handler<Buzzer>* indication_handler)
{
    __log("Buzzer_Provider::enable_indications()");

    _indication_handler = indication_handler;

    return ENABLE_INDICATIONS_OK;
}

Disable_Indications_Status Buzzer_Provider::disable_indications()
{
    __log("Buzzer_Provider::disable_indications()");

    if (_indication_handler)
    {
        delete _indication_handler;
        _indication_handler = 0;
    }

    return DISABLE_INDICATIONS_OK;
}

Invoke_Method_Status Buzzer_Provider::trigger(
    Property<uint32>& return_value)

{
    if (_indication_handler)
    {
        _send(_indication_handler, "YELLOW", "400");
    }

    return INVOKE_METHOD_OK;
}

/*@END@*/

CIMPLE_NAMESPACE_END