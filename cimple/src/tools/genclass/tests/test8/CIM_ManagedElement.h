//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#ifndef _cimple_CIM_ManagedElement_h
#define _cimple_CIM_ManagedElement_h

#include <cimple/cimple.h>

CIMPLE_NAMESPACE_BEGIN

class CIM_ManagedElement : public Instance
{
public:
    // CIM_ManagedElement features:
    Property<String> Caption;
    Property<String> Description;
    Property<String> ElementName;

    CIMPLE_CLASS(CIM_ManagedElement)
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_ManagedElement_h */