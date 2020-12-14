//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENHND.
//
//==============================================================================

#ifndef _cimple_CIM_ManagedElement_Hnd
#define _cimple_CIM_ManagedElement_Hnd

#include <cimple/cimple.h>
#include "CIM_ManagedElement.h"

CIMPLE_NAMESPACE_BEGIN

class CIM_ManagedElement_Ref : public Instance_Ref
{
public:
    typedef CIM_ManagedElement Class;
    CIM_ManagedElement_Ref();
    CIM_ManagedElement_Ref(const CIM_ManagedElement_Ref& x);
    CIM_ManagedElement_Ref(CIM_ManagedElement* inst);
    explicit CIM_ManagedElement_Ref(const Instance_Ref& x);
    ~CIM_ManagedElement_Ref();
    CIM_ManagedElement_Ref& operator=(const CIM_ManagedElement_Ref& x);
    static bool is_a(const Instance_Ref& x);

protected:
    CIM_ManagedElement_Ref(const Meta_Class* mc);
    CIM_ManagedElement_Ref(const Meta_Class* mc, const Instance_Ref& x);
};

class CIM_ManagedElement_Hnd : public Instance_Hnd
{
public:
    typedef CIM_ManagedElement Class;
    CIM_ManagedElement_Hnd();
    CIM_ManagedElement_Hnd(const CIM_ManagedElement_Hnd& x);
    CIM_ManagedElement_Hnd(CIM_ManagedElement* inst);
    explicit CIM_ManagedElement_Hnd(const Instance_Hnd& x);
    ~CIM_ManagedElement_Hnd();
    CIM_ManagedElement_Hnd& operator=(const CIM_ManagedElement_Hnd& x);
    static bool is_a(const Instance_Hnd& x);
    CIM_ManagedElement_Ref reference() const;

    // Caption:
    const String& Caption_value() const;
    void Caption_value(const String& x);
    bool Caption_null() const;
    void Caption_clear();

    // Description:
    const String& Description_value() const;
    void Description_value(const String& x);
    bool Description_null() const;
    void Description_clear();

    // ElementName:
    const String& ElementName_value() const;
    void ElementName_value(const String& x);
    bool ElementName_null() const;
    void ElementName_clear();

protected:
    CIM_ManagedElement_Hnd(const Meta_Class* mc);
    CIM_ManagedElement_Hnd(const Meta_Class* mc, const Instance_Hnd& x);
};

inline CIM_ManagedElement_Ref::CIM_ManagedElement_Ref() :
    Instance_Ref(&CIM_ManagedElement::static_meta_class)
{
}

inline CIM_ManagedElement_Ref::CIM_ManagedElement_Ref(const CIM_ManagedElement_Ref& x) :
    Instance_Ref(x)
{
}

inline CIM_ManagedElement_Ref::CIM_ManagedElement_Ref(CIM_ManagedElement* inst) :
    Instance_Ref((Instance*)inst)
{
}

inline CIM_ManagedElement_Ref::CIM_ManagedElement_Ref(const Instance_Ref& x) : 
    Instance_Ref(&CIM_ManagedElement::static_meta_class, x)
{
}

inline CIM_ManagedElement_Ref::CIM_ManagedElement_Ref(const Meta_Class* mc) : Instance_Ref(mc)
{
}

inline CIM_ManagedElement_Ref::CIM_ManagedElement_Ref(const Meta_Class* mc, const Instance_Ref& x) : Instance_Ref(mc, x)
{
}

inline CIM_ManagedElement_Ref::~CIM_ManagedElement_Ref()
{
}

inline CIM_ManagedElement_Ref& CIM_ManagedElement_Ref::operator=(const CIM_ManagedElement_Ref& x)
{
    Instance_Ref::operator=(x);
    return *this;
}

inline bool CIM_ManagedElement_Ref::is_a(const Instance_Ref& x)
{
    return is_subclass(&CIM_ManagedElement::static_meta_class, x.meta_class());
}

inline CIM_ManagedElement_Hnd::CIM_ManagedElement_Hnd() :
    Instance_Hnd(&CIM_ManagedElement::static_meta_class)
{
}

inline CIM_ManagedElement_Hnd::CIM_ManagedElement_Hnd(const CIM_ManagedElement_Hnd& x) :
    Instance_Hnd(x)
{
}

inline CIM_ManagedElement_Hnd::CIM_ManagedElement_Hnd(CIM_ManagedElement* inst) :
    Instance_Hnd((Instance*)inst)
{
}

inline CIM_ManagedElement_Hnd::CIM_ManagedElement_Hnd(const Instance_Hnd& x) : 
    Instance_Hnd(&CIM_ManagedElement::static_meta_class, x)
{
}

inline CIM_ManagedElement_Hnd::CIM_ManagedElement_Hnd(const Meta_Class* mc) : Instance_Hnd(mc)
{
}

inline CIM_ManagedElement_Hnd::CIM_ManagedElement_Hnd(const Meta_Class* mc, const Instance_Hnd& x) : Instance_Hnd(mc, x)
{
}

inline CIM_ManagedElement_Hnd::~CIM_ManagedElement_Hnd()
{
}

inline CIM_ManagedElement_Hnd& CIM_ManagedElement_Hnd::operator=(const CIM_ManagedElement_Hnd& x)
{
    Instance_Hnd::operator=(x);
    return *this;
}

inline bool CIM_ManagedElement_Hnd::is_a(const Instance_Hnd& x)
{
    return is_subclass(&CIM_ManagedElement::static_meta_class, x.meta_class());
}

inline CIM_ManagedElement_Ref CIM_ManagedElement_Hnd::reference() const
{
    return CIM_ManagedElement_Ref((CIM_ManagedElement*)key_clone(_inst));
}

inline const String& CIM_ManagedElement_Hnd::Caption_value() const
{
    if (((Class*)_inst)->Caption.null)
        _throw_null_access("Caption");
   return ((Class*)_inst)->Caption.value;
}

inline void CIM_ManagedElement_Hnd::Caption_value(const String& x)
{
    _cow();
   ((Class*)_inst)->Caption.value = x;
   ((Class*)_inst)->Caption.null = false;
}

inline bool CIM_ManagedElement_Hnd::Caption_null() const
{
   return ((Class*)_inst)->Caption.null;
}

inline void CIM_ManagedElement_Hnd::Caption_clear()
{
    _cow();
    __clear(((Class*)_inst)->Caption.value);
    ((Class*)_inst)->Caption.null = true;;
}

inline const String& CIM_ManagedElement_Hnd::Description_value() const
{
    if (((Class*)_inst)->Description.null)
        _throw_null_access("Description");
   return ((Class*)_inst)->Description.value;
}

inline void CIM_ManagedElement_Hnd::Description_value(const String& x)
{
    _cow();
   ((Class*)_inst)->Description.value = x;
   ((Class*)_inst)->Description.null = false;
}

inline bool CIM_ManagedElement_Hnd::Description_null() const
{
   return ((Class*)_inst)->Description.null;
}

inline void CIM_ManagedElement_Hnd::Description_clear()
{
    _cow();
    __clear(((Class*)_inst)->Description.value);
    ((Class*)_inst)->Description.null = true;;
}

inline const String& CIM_ManagedElement_Hnd::ElementName_value() const
{
    if (((Class*)_inst)->ElementName.null)
        _throw_null_access("ElementName");
   return ((Class*)_inst)->ElementName.value;
}

inline void CIM_ManagedElement_Hnd::ElementName_value(const String& x)
{
    _cow();
   ((Class*)_inst)->ElementName.value = x;
   ((Class*)_inst)->ElementName.null = false;
}

inline bool CIM_ManagedElement_Hnd::ElementName_null() const
{
   return ((Class*)_inst)->ElementName.null;
}

inline void CIM_ManagedElement_Hnd::ElementName_clear()
{
    _cow();
    __clear(((Class*)_inst)->ElementName.value);
    ((Class*)_inst)->ElementName.null = true;;
}

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_ManagedElement_Hnd_h */
