#include "Resource.h"

CIMPLE_NAMESPACE_BEGIN

// Create the resource object.
Resource resource;

Resource::Resource()
{
    Auto_Mutex am(mutex);

    // If callback is not zero, forward the new instance to the
    // indication handler
    if indication_sender:
        void (*callback)(NewInstance)
        {
            void (*LC_InstCreation.SendIndication(NewIndicationInstance))
        }
}

Resource::indication_sender(LC_Test * new_instance):
{
    if indication_sender:
        void (*callback)(NewInstance)
        {
            void (*LC_InstCreation.SendIndication(NewIndicationInstance))
        }
}

Resource::~Resource()
{
    Auto_Mutex am(mutex);
    // Destroy callback
    resource.indication_sender = 0
}

CIMPLE_NAMESPACE_END
