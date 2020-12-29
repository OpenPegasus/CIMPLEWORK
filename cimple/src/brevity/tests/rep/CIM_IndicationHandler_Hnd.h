//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENHND.
//
//==============================================================================

#ifndef _cimple_CIM_IndicationHandler_Hnd
#define _cimple_CIM_IndicationHandler_Hnd

#include <cimple/cimple.h>
#include "CIM_IndicationHandler.h"
#include "CIM_ListenerDestination_Hnd.h"

CIMPLE_NAMESPACE_BEGIN

class CIM_IndicationHandler_Ref : public CIM_ListenerDestination_Ref
{
public:
    typedef CIM_IndicationHandler Class;
    CIM_IndicationHandler_Ref();
    CIM_IndicationHandler_Ref(const CIM_IndicationHandler_Ref& x);
    CIM_IndicationHandler_Ref(CIM_IndicationHandler* inst);
    explicit CIM_IndicationHandler_Ref(const Instance_Ref& x);
    ~CIM_IndicationHandler_Ref();
    CIM_IndicationHandler_Ref& operator=(const CIM_IndicationHandler_Ref& x);
    static bool is_a(const Instance_Ref& x);

protected:
    CIM_IndicationHandler_Ref(const Meta_Class* mc);
    CIM_IndicationHandler_Ref(const Meta_Class* mc, const Instance_Ref& x);
};

class CIM_IndicationHandler_Hnd : public CIM_ListenerDestination_Hnd
{
public:
    typedef CIM_IndicationHandler Class;
    CIM_IndicationHandler_Hnd();
    CIM_IndicationHandler_Hnd(const CIM_IndicationHandler_Hnd& x);
    CIM_IndicationHandler_Hnd(CIM_IndicationHandler* inst);
    explicit CIM_IndicationHandler_Hnd(const Instance_Hnd& x);
    ~CIM_IndicationHandler_Hnd();
    CIM_IndicationHandler_Hnd& operator=(const CIM_IndicationHandler_Hnd& x);
    static bool is_a(const Instance_Hnd& x);
    CIM_IndicationHandler_Ref reference() const;

    // Owner:
    const String& Owner_value() const;
    void Owner_value(const String& x);
    bool Owner_null() const;
    void Owner_clear();

protected:
    CIM_IndicationHandler_Hnd(const Meta_Class* mc);
    CIM_IndicationHandler_Hnd(const Meta_Class* mc, const Instance_Hnd& x);
};

inline CIM_IndicationHandler_Ref::CIM_IndicationHandler_Ref() :
    CIM_ListenerDestination_Ref(&CIM_IndicationHandler::static_meta_class)
{
}

inline CIM_IndicationHandler_Ref::CIM_IndicationHandler_Ref(const CIM_IndicationHandler_Ref& x) :
    CIM_ListenerDestination_Ref(x)
{
}

inline CIM_IndicationHandler_Ref::CIM_IndicationHandler_Ref(CIM_IndicationHandler* inst) :
    CIM_ListenerDestination_Ref((CIM_ListenerDestination*)inst)
{
}

inline CIM_IndicationHandler_Ref::CIM_IndicationHandler_Ref(const Instance_Ref& x) : 
    CIM_ListenerDestination_Ref(&CIM_IndicationHandler::static_meta_class, x)
{
}

inline CIM_IndicationHandler_Ref::CIM_IndicationHandler_Ref(const Meta_Class* mc) : CIM_ListenerDestination_Ref(mc)
{
}

inline CIM_IndicationHandler_Ref::CIM_IndicationHandler_Ref(const Meta_Class* mc, const Instance_Ref& x) : CIM_ListenerDestination_Ref(mc, x)
{
}

inline CIM_IndicationHandler_Ref::~CIM_IndicationHandler_Ref()
{
}

inline CIM_IndicationHandler_Ref& CIM_IndicationHandler_Ref::operator=(const CIM_IndicationHandler_Ref& x)
{
    CIM_ListenerDestination_Ref::operator=(x);
    return *this;
}

inline bool CIM_IndicationHandler_Ref::is_a(const Instance_Ref& x)
{
    return is_subclass(&CIM_IndicationHandler::static_meta_class, x.meta_class());
}

inline CIM_IndicationHandler_Hnd::CIM_IndicationHandler_Hnd() :
    CIM_ListenerDestination_Hnd(&CIM_IndicationHandler::static_meta_class)
{
}

inline CIM_IndicationHandler_Hnd::CIM_IndicationHandler_Hnd(const CIM_IndicationHandler_Hnd& x) :
    CIM_ListenerDestination_Hnd(x)
{
}

inline CIM_IndicationHandler_Hnd::CIM_IndicationHandler_Hnd(CIM_IndicationHandler* inst) :
    CIM_ListenerDestination_Hnd((CIM_ListenerDestination*)inst)
{
}

inline CIM_IndicationHandler_Hnd::CIM_IndicationHandler_Hnd(const Instance_Hnd& x) : 
    CIM_ListenerDestination_Hnd(&CIM_IndicationHandler::static_meta_class, x)
{
}

inline CIM_IndicationHandler_Hnd::CIM_IndicationHandler_Hnd(const Meta_Class* mc) : CIM_ListenerDestination_Hnd(mc)
{
}

inline CIM_IndicationHandler_Hnd::CIM_IndicationHandler_Hnd(const Meta_Class* mc, const Instance_Hnd& x) : CIM_ListenerDestination_Hnd(mc, x)
{
}

inline CIM_IndicationHandler_Hnd::~CIM_IndicationHandler_Hnd()
{
}

inline CIM_IndicationHandler_Hnd& CIM_IndicationHandler_Hnd::operator=(const CIM_IndicationHandler_Hnd& x)
{
    CIM_ListenerDestination_Hnd::operator=(x);
    return *this;
}

inline bool CIM_IndicationHandler_Hnd::is_a(const Instance_Hnd& x)
{
    return is_subclass(&CIM_IndicationHandler::static_meta_class, x.meta_class());
}

inline CIM_IndicationHandler_Ref CIM_IndicationHandler_Hnd::reference() const
{
    return CIM_IndicationHandler_Ref((CIM_IndicationHandler*)key_clone(_inst));
}

inline const String& CIM_IndicationHandler_Hnd::Owner_value() const
{
    if (((Class*)_inst)->Owner.null)
        _throw_null_access("Owner");
   return ((Class*)_inst)->Owner.value;
}

inline void CIM_IndicationHandler_Hnd::Owner_value(const String& x)
{
    _cow();
   ((Class*)_inst)->Owner.value = x;
   ((Class*)_inst)->Owner.null = false;
}

inline bool CIM_IndicationHandler_Hnd::Owner_null() const
{
   return ((Class*)_inst)->Owner.null;
}

inline void CIM_IndicationHandler_Hnd::Owner_clear()
{
    _cow();
    __clear(((Class*)_inst)->Owner.value);
    ((Class*)_inst)->Owner.null = true;;
}

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_IndicationHandler_Hnd_h */