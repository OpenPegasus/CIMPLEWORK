//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENHND.
//
//==============================================================================

#ifndef _cimple_CIM_LogicalElement_Hnd
#define _cimple_CIM_LogicalElement_Hnd

#include <cimple/cimple.h>
#include "CIM_LogicalElement.h"
#include "CIM_ManagedSystemElement_Hnd.h"

CIMPLE_NAMESPACE_BEGIN

class CIM_LogicalElement_Ref : public CIM_ManagedSystemElement_Ref
{
public:
    typedef CIM_LogicalElement Class;
    CIM_LogicalElement_Ref();
    CIM_LogicalElement_Ref(const CIM_LogicalElement_Ref& x);
    CIM_LogicalElement_Ref(CIM_LogicalElement* inst);
    explicit CIM_LogicalElement_Ref(const Instance_Ref& x);
    ~CIM_LogicalElement_Ref();
    CIM_LogicalElement_Ref& operator=(const CIM_LogicalElement_Ref& x);
    static bool is_a(const Instance_Ref& x);

protected:
    CIM_LogicalElement_Ref(const Meta_Class* mc);
    CIM_LogicalElement_Ref(const Meta_Class* mc, const Instance_Ref& x);
};

class CIM_LogicalElement_Hnd : public CIM_ManagedSystemElement_Hnd
{
public:
    typedef CIM_LogicalElement Class;
    CIM_LogicalElement_Hnd();
    CIM_LogicalElement_Hnd(const CIM_LogicalElement_Hnd& x);
    CIM_LogicalElement_Hnd(CIM_LogicalElement* inst);
    explicit CIM_LogicalElement_Hnd(const Instance_Hnd& x);
    ~CIM_LogicalElement_Hnd();
    CIM_LogicalElement_Hnd& operator=(const CIM_LogicalElement_Hnd& x);
    static bool is_a(const Instance_Hnd& x);
    CIM_LogicalElement_Ref reference() const;

protected:
    CIM_LogicalElement_Hnd(const Meta_Class* mc);
    CIM_LogicalElement_Hnd(const Meta_Class* mc, const Instance_Hnd& x);
};

inline CIM_LogicalElement_Ref::CIM_LogicalElement_Ref() :
    CIM_ManagedSystemElement_Ref(&CIM_LogicalElement::static_meta_class)
{
}

inline CIM_LogicalElement_Ref::CIM_LogicalElement_Ref(const CIM_LogicalElement_Ref& x) :
    CIM_ManagedSystemElement_Ref(x)
{
}

inline CIM_LogicalElement_Ref::CIM_LogicalElement_Ref(CIM_LogicalElement* inst) :
    CIM_ManagedSystemElement_Ref((CIM_ManagedSystemElement*)inst)
{
}

inline CIM_LogicalElement_Ref::CIM_LogicalElement_Ref(const Instance_Ref& x) : 
    CIM_ManagedSystemElement_Ref(&CIM_LogicalElement::static_meta_class, x)
{
}

inline CIM_LogicalElement_Ref::CIM_LogicalElement_Ref(const Meta_Class* mc) : CIM_ManagedSystemElement_Ref(mc)
{
}

inline CIM_LogicalElement_Ref::CIM_LogicalElement_Ref(const Meta_Class* mc, const Instance_Ref& x) : CIM_ManagedSystemElement_Ref(mc, x)
{
}

inline CIM_LogicalElement_Ref::~CIM_LogicalElement_Ref()
{
}

inline CIM_LogicalElement_Ref& CIM_LogicalElement_Ref::operator=(const CIM_LogicalElement_Ref& x)
{
    CIM_ManagedSystemElement_Ref::operator=(x);
    return *this;
}

inline bool CIM_LogicalElement_Ref::is_a(const Instance_Ref& x)
{
    return is_subclass(&CIM_LogicalElement::static_meta_class, x.meta_class());
}

inline CIM_LogicalElement_Hnd::CIM_LogicalElement_Hnd() :
    CIM_ManagedSystemElement_Hnd(&CIM_LogicalElement::static_meta_class)
{
}

inline CIM_LogicalElement_Hnd::CIM_LogicalElement_Hnd(const CIM_LogicalElement_Hnd& x) :
    CIM_ManagedSystemElement_Hnd(x)
{
}

inline CIM_LogicalElement_Hnd::CIM_LogicalElement_Hnd(CIM_LogicalElement* inst) :
    CIM_ManagedSystemElement_Hnd((CIM_ManagedSystemElement*)inst)
{
}

inline CIM_LogicalElement_Hnd::CIM_LogicalElement_Hnd(const Instance_Hnd& x) : 
    CIM_ManagedSystemElement_Hnd(&CIM_LogicalElement::static_meta_class, x)
{
}

inline CIM_LogicalElement_Hnd::CIM_LogicalElement_Hnd(const Meta_Class* mc) : CIM_ManagedSystemElement_Hnd(mc)
{
}

inline CIM_LogicalElement_Hnd::CIM_LogicalElement_Hnd(const Meta_Class* mc, const Instance_Hnd& x) : CIM_ManagedSystemElement_Hnd(mc, x)
{
}

inline CIM_LogicalElement_Hnd::~CIM_LogicalElement_Hnd()
{
}

inline CIM_LogicalElement_Hnd& CIM_LogicalElement_Hnd::operator=(const CIM_LogicalElement_Hnd& x)
{
    CIM_ManagedSystemElement_Hnd::operator=(x);
    return *this;
}

inline bool CIM_LogicalElement_Hnd::is_a(const Instance_Hnd& x)
{
    return is_subclass(&CIM_LogicalElement::static_meta_class, x.meta_class());
}

inline CIM_LogicalElement_Ref CIM_LogicalElement_Hnd::reference() const
{
    return CIM_LogicalElement_Ref((CIM_LogicalElement*)key_clone(_inst));
}

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_LogicalElement_Hnd_h */