//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENHND.
//
//==============================================================================

#ifndef _cimple_CIM_ElementConformsToProfile_Hnd
#define _cimple_CIM_ElementConformsToProfile_Hnd

#include <cimple/cimple.h>
#include "CIM_ElementConformsToProfile.h"
#include "CIM_RegisteredProfile_Hnd.h"
#include "CIM_ManagedElement_Hnd.h"

CIMPLE_NAMESPACE_BEGIN

class CIM_ElementConformsToProfile_Ref : public Instance_Ref
{
public:
    typedef CIM_ElementConformsToProfile Class;
    CIM_ElementConformsToProfile_Ref();
    CIM_ElementConformsToProfile_Ref(const CIM_ElementConformsToProfile_Ref& x);
    CIM_ElementConformsToProfile_Ref(CIM_ElementConformsToProfile* inst);
    explicit CIM_ElementConformsToProfile_Ref(const Instance_Ref& x);
    ~CIM_ElementConformsToProfile_Ref();
    CIM_ElementConformsToProfile_Ref& operator=(const CIM_ElementConformsToProfile_Ref& x);
    static bool is_a(const Instance_Ref& x);

    // ConformantStandard:
    CIM_RegisteredProfile_Ref ConformantStandard_value() const;
    void ConformantStandard_value(const CIM_RegisteredProfile_Ref& x);
    bool ConformantStandard_null() const;
    void ConformantStandard_clear();

    // ManagedElement:
    CIM_ManagedElement_Ref ManagedElement_value() const;
    void ManagedElement_value(const CIM_ManagedElement_Ref& x);
    bool ManagedElement_null() const;
    void ManagedElement_clear();

protected:
    CIM_ElementConformsToProfile_Ref(const Meta_Class* mc);
    CIM_ElementConformsToProfile_Ref(const Meta_Class* mc, const Instance_Ref& x);
};

class CIM_ElementConformsToProfile_Hnd : public Instance_Hnd
{
public:
    typedef CIM_ElementConformsToProfile Class;
    CIM_ElementConformsToProfile_Hnd();
    CIM_ElementConformsToProfile_Hnd(const CIM_ElementConformsToProfile_Hnd& x);
    CIM_ElementConformsToProfile_Hnd(CIM_ElementConformsToProfile* inst);
    explicit CIM_ElementConformsToProfile_Hnd(const Instance_Hnd& x);
    ~CIM_ElementConformsToProfile_Hnd();
    CIM_ElementConformsToProfile_Hnd& operator=(const CIM_ElementConformsToProfile_Hnd& x);
    static bool is_a(const Instance_Hnd& x);
    CIM_ElementConformsToProfile_Ref reference() const;

    // ConformantStandard:
    CIM_RegisteredProfile_Ref ConformantStandard_value() const;
    void ConformantStandard_value(const CIM_RegisteredProfile_Ref& x);
    bool ConformantStandard_null() const;
    void ConformantStandard_clear();

    // ManagedElement:
    CIM_ManagedElement_Ref ManagedElement_value() const;
    void ManagedElement_value(const CIM_ManagedElement_Ref& x);
    bool ManagedElement_null() const;
    void ManagedElement_clear();

protected:
    CIM_ElementConformsToProfile_Hnd(const Meta_Class* mc);
    CIM_ElementConformsToProfile_Hnd(const Meta_Class* mc, const Instance_Hnd& x);
};

inline CIM_ElementConformsToProfile_Ref::CIM_ElementConformsToProfile_Ref() :
    Instance_Ref(&CIM_ElementConformsToProfile::static_meta_class)
{
}

inline CIM_ElementConformsToProfile_Ref::CIM_ElementConformsToProfile_Ref(const CIM_ElementConformsToProfile_Ref& x) :
    Instance_Ref(x)
{
}

inline CIM_ElementConformsToProfile_Ref::CIM_ElementConformsToProfile_Ref(CIM_ElementConformsToProfile* inst) :
    Instance_Ref((Instance*)inst)
{
}

inline CIM_ElementConformsToProfile_Ref::CIM_ElementConformsToProfile_Ref(const Instance_Ref& x) : 
    Instance_Ref(&CIM_ElementConformsToProfile::static_meta_class, x)
{
}

inline CIM_ElementConformsToProfile_Ref::CIM_ElementConformsToProfile_Ref(const Meta_Class* mc) : Instance_Ref(mc)
{
}

inline CIM_ElementConformsToProfile_Ref::CIM_ElementConformsToProfile_Ref(const Meta_Class* mc, const Instance_Ref& x) : Instance_Ref(mc, x)
{
}

inline CIM_ElementConformsToProfile_Ref::~CIM_ElementConformsToProfile_Ref()
{
}

inline CIM_ElementConformsToProfile_Ref& CIM_ElementConformsToProfile_Ref::operator=(const CIM_ElementConformsToProfile_Ref& x)
{
    Instance_Ref::operator=(x);
    return *this;
}

inline bool CIM_ElementConformsToProfile_Ref::is_a(const Instance_Ref& x)
{
    return is_subclass(&CIM_ElementConformsToProfile::static_meta_class, x.meta_class());
}

inline CIM_RegisteredProfile_Ref CIM_ElementConformsToProfile_Ref::ConformantStandard_value() const
{
    if (!((Class*)_inst)->ConformantStandard)
        _throw_null_access("ConformantStandard");
    ref(((Class*)_inst)->ConformantStandard);
    return CIM_RegisteredProfile_Ref(((Class*)_inst)->ConformantStandard);
}

inline void CIM_ElementConformsToProfile_Ref::ConformantStandard_value(const CIM_RegisteredProfile_Ref& x)
{
    _cow();
    unref(((Class*)_inst)->ConformantStandard);
    ref(((Class*)_inst)->ConformantStandard = (CIM_RegisteredProfile*)x.instance());
}

inline bool CIM_ElementConformsToProfile_Ref::ConformantStandard_null() const
{
    return ((Class*)_inst)->ConformantStandard == 0;
}

inline void CIM_ElementConformsToProfile_Ref::ConformantStandard_clear()
{
    _cow();
    unref(((Class*)_inst)->ConformantStandard);
    ((Class*)_inst)->ConformantStandard = 0;
}

inline CIM_ManagedElement_Ref CIM_ElementConformsToProfile_Ref::ManagedElement_value() const
{
    if (!((Class*)_inst)->ManagedElement)
        _throw_null_access("ManagedElement");
    ref(((Class*)_inst)->ManagedElement);
    return CIM_ManagedElement_Ref(((Class*)_inst)->ManagedElement);
}

inline void CIM_ElementConformsToProfile_Ref::ManagedElement_value(const CIM_ManagedElement_Ref& x)
{
    _cow();
    unref(((Class*)_inst)->ManagedElement);
    ref(((Class*)_inst)->ManagedElement = (CIM_ManagedElement*)x.instance());
}

inline bool CIM_ElementConformsToProfile_Ref::ManagedElement_null() const
{
    return ((Class*)_inst)->ManagedElement == 0;
}

inline void CIM_ElementConformsToProfile_Ref::ManagedElement_clear()
{
    _cow();
    unref(((Class*)_inst)->ManagedElement);
    ((Class*)_inst)->ManagedElement = 0;
}

inline CIM_ElementConformsToProfile_Hnd::CIM_ElementConformsToProfile_Hnd() :
    Instance_Hnd(&CIM_ElementConformsToProfile::static_meta_class)
{
}

inline CIM_ElementConformsToProfile_Hnd::CIM_ElementConformsToProfile_Hnd(const CIM_ElementConformsToProfile_Hnd& x) :
    Instance_Hnd(x)
{
}

inline CIM_ElementConformsToProfile_Hnd::CIM_ElementConformsToProfile_Hnd(CIM_ElementConformsToProfile* inst) :
    Instance_Hnd((Instance*)inst)
{
}

inline CIM_ElementConformsToProfile_Hnd::CIM_ElementConformsToProfile_Hnd(const Instance_Hnd& x) : 
    Instance_Hnd(&CIM_ElementConformsToProfile::static_meta_class, x)
{
}

inline CIM_ElementConformsToProfile_Hnd::CIM_ElementConformsToProfile_Hnd(const Meta_Class* mc) : Instance_Hnd(mc)
{
}

inline CIM_ElementConformsToProfile_Hnd::CIM_ElementConformsToProfile_Hnd(const Meta_Class* mc, const Instance_Hnd& x) : Instance_Hnd(mc, x)
{
}

inline CIM_ElementConformsToProfile_Hnd::~CIM_ElementConformsToProfile_Hnd()
{
}

inline CIM_ElementConformsToProfile_Hnd& CIM_ElementConformsToProfile_Hnd::operator=(const CIM_ElementConformsToProfile_Hnd& x)
{
    Instance_Hnd::operator=(x);
    return *this;
}

inline bool CIM_ElementConformsToProfile_Hnd::is_a(const Instance_Hnd& x)
{
    return is_subclass(&CIM_ElementConformsToProfile::static_meta_class, x.meta_class());
}

inline CIM_ElementConformsToProfile_Ref CIM_ElementConformsToProfile_Hnd::reference() const
{
    return CIM_ElementConformsToProfile_Ref((CIM_ElementConformsToProfile*)key_clone(_inst));
}

inline CIM_RegisteredProfile_Ref CIM_ElementConformsToProfile_Hnd::ConformantStandard_value() const
{
    if (!((Class*)_inst)->ConformantStandard)
        _throw_null_access("ConformantStandard");
    ref(((Class*)_inst)->ConformantStandard);
    return CIM_RegisteredProfile_Ref(((Class*)_inst)->ConformantStandard);
}

inline void CIM_ElementConformsToProfile_Hnd::ConformantStandard_value(const CIM_RegisteredProfile_Ref& x)
{
    _cow();
    unref(((Class*)_inst)->ConformantStandard);
    ref(((Class*)_inst)->ConformantStandard = (CIM_RegisteredProfile*)x.instance());
}

inline bool CIM_ElementConformsToProfile_Hnd::ConformantStandard_null() const
{
    return ((Class*)_inst)->ConformantStandard == 0;
}

inline void CIM_ElementConformsToProfile_Hnd::ConformantStandard_clear()
{
    _cow();
    unref(((Class*)_inst)->ConformantStandard);
    ((Class*)_inst)->ConformantStandard = 0;
}

inline CIM_ManagedElement_Ref CIM_ElementConformsToProfile_Hnd::ManagedElement_value() const
{
    if (!((Class*)_inst)->ManagedElement)
        _throw_null_access("ManagedElement");
    ref(((Class*)_inst)->ManagedElement);
    return CIM_ManagedElement_Ref(((Class*)_inst)->ManagedElement);
}

inline void CIM_ElementConformsToProfile_Hnd::ManagedElement_value(const CIM_ManagedElement_Ref& x)
{
    _cow();
    unref(((Class*)_inst)->ManagedElement);
    ref(((Class*)_inst)->ManagedElement = (CIM_ManagedElement*)x.instance());
}

inline bool CIM_ElementConformsToProfile_Hnd::ManagedElement_null() const
{
    return ((Class*)_inst)->ManagedElement == 0;
}

inline void CIM_ElementConformsToProfile_Hnd::ManagedElement_clear()
{
    _cow();
    unref(((Class*)_inst)->ManagedElement);
    ((Class*)_inst)->ManagedElement = 0;
}

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_ElementConformsToProfile_Hnd_h */