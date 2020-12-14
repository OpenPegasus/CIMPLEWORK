//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENHND.
//
//==============================================================================

#ifndef _cimple_CIM_System_Hnd
#define _cimple_CIM_System_Hnd

#include <cimple/cimple.h>
#include "CIM_System.h"
#include "CIM_EnabledLogicalElement_Hnd.h"

CIMPLE_NAMESPACE_BEGIN

class CIM_System_Ref : public CIM_EnabledLogicalElement_Ref
{
public:
    typedef CIM_System Class;
    CIM_System_Ref();
    CIM_System_Ref(const CIM_System_Ref& x);
    CIM_System_Ref(CIM_System* inst);
    explicit CIM_System_Ref(const Instance_Ref& x);
    ~CIM_System_Ref();
    CIM_System_Ref& operator=(const CIM_System_Ref& x);
    static bool is_a(const Instance_Ref& x);

    // CreationClassName:
    const String& CreationClassName_value() const;
    void CreationClassName_value(const String& x);
    bool CreationClassName_null() const;
    void CreationClassName_clear();

    // Name:
    const String& Name_value() const;
    void Name_value(const String& x);
    bool Name_null() const;
    void Name_clear();

protected:
    CIM_System_Ref(const Meta_Class* mc);
    CIM_System_Ref(const Meta_Class* mc, const Instance_Ref& x);
};

class CIM_System_Hnd : public CIM_EnabledLogicalElement_Hnd
{
public:
    typedef CIM_System Class;
    CIM_System_Hnd();
    CIM_System_Hnd(const CIM_System_Hnd& x);
    CIM_System_Hnd(CIM_System* inst);
    explicit CIM_System_Hnd(const Instance_Hnd& x);
    ~CIM_System_Hnd();
    CIM_System_Hnd& operator=(const CIM_System_Hnd& x);
    static bool is_a(const Instance_Hnd& x);
    CIM_System_Ref reference() const;

    // CreationClassName:
    const String& CreationClassName_value() const;
    void CreationClassName_value(const String& x);
    bool CreationClassName_null() const;
    void CreationClassName_clear();

    // Name:
    const String& Name_value() const;
    void Name_value(const String& x);
    bool Name_null() const;
    void Name_clear();

    // NameFormat:
    const String& NameFormat_value() const;
    void NameFormat_value(const String& x);
    bool NameFormat_null() const;
    void NameFormat_clear();

    // PrimaryOwnerName:
    const String& PrimaryOwnerName_value() const;
    void PrimaryOwnerName_value(const String& x);
    bool PrimaryOwnerName_null() const;
    void PrimaryOwnerName_clear();

    // PrimaryOwnerContact:
    const String& PrimaryOwnerContact_value() const;
    void PrimaryOwnerContact_value(const String& x);
    bool PrimaryOwnerContact_null() const;
    void PrimaryOwnerContact_clear();

    // Roles:
    const Array_String& Roles_value() const;
    void Roles_value(const Array_String& x);
    bool Roles_null() const;
    void Roles_clear();

protected:
    CIM_System_Hnd(const Meta_Class* mc);
    CIM_System_Hnd(const Meta_Class* mc, const Instance_Hnd& x);
};

inline CIM_System_Ref::CIM_System_Ref() :
    CIM_EnabledLogicalElement_Ref(&CIM_System::static_meta_class)
{
}

inline CIM_System_Ref::CIM_System_Ref(const CIM_System_Ref& x) :
    CIM_EnabledLogicalElement_Ref(x)
{
}

inline CIM_System_Ref::CIM_System_Ref(CIM_System* inst) :
    CIM_EnabledLogicalElement_Ref((CIM_EnabledLogicalElement*)inst)
{
}

inline CIM_System_Ref::CIM_System_Ref(const Instance_Ref& x) : 
    CIM_EnabledLogicalElement_Ref(&CIM_System::static_meta_class, x)
{
}

inline CIM_System_Ref::CIM_System_Ref(const Meta_Class* mc) : CIM_EnabledLogicalElement_Ref(mc)
{
}

inline CIM_System_Ref::CIM_System_Ref(const Meta_Class* mc, const Instance_Ref& x) : CIM_EnabledLogicalElement_Ref(mc, x)
{
}

inline CIM_System_Ref::~CIM_System_Ref()
{
}

inline CIM_System_Ref& CIM_System_Ref::operator=(const CIM_System_Ref& x)
{
    CIM_EnabledLogicalElement_Ref::operator=(x);
    return *this;
}

inline bool CIM_System_Ref::is_a(const Instance_Ref& x)
{
    return is_subclass(&CIM_System::static_meta_class, x.meta_class());
}

inline const String& CIM_System_Ref::CreationClassName_value() const
{
    if (((Class*)_inst)->CreationClassName.null)
        _throw_null_access("CreationClassName");
   return ((Class*)_inst)->CreationClassName.value;
}

inline void CIM_System_Ref::CreationClassName_value(const String& x)
{
    _cow();
   ((Class*)_inst)->CreationClassName.value = x;
   ((Class*)_inst)->CreationClassName.null = false;
}

inline bool CIM_System_Ref::CreationClassName_null() const
{
   return ((Class*)_inst)->CreationClassName.null;
}

inline void CIM_System_Ref::CreationClassName_clear()
{
    _cow();
    __clear(((Class*)_inst)->CreationClassName.value);
    ((Class*)_inst)->CreationClassName.null = true;;
}

inline const String& CIM_System_Ref::Name_value() const
{
    if (((Class*)_inst)->Name.null)
        _throw_null_access("Name");
   return ((Class*)_inst)->Name.value;
}

inline void CIM_System_Ref::Name_value(const String& x)
{
    _cow();
   ((Class*)_inst)->Name.value = x;
   ((Class*)_inst)->Name.null = false;
}

inline bool CIM_System_Ref::Name_null() const
{
   return ((Class*)_inst)->Name.null;
}

inline void CIM_System_Ref::Name_clear()
{
    _cow();
    __clear(((Class*)_inst)->Name.value);
    ((Class*)_inst)->Name.null = true;;
}

inline CIM_System_Hnd::CIM_System_Hnd() :
    CIM_EnabledLogicalElement_Hnd(&CIM_System::static_meta_class)
{
}

inline CIM_System_Hnd::CIM_System_Hnd(const CIM_System_Hnd& x) :
    CIM_EnabledLogicalElement_Hnd(x)
{
}

inline CIM_System_Hnd::CIM_System_Hnd(CIM_System* inst) :
    CIM_EnabledLogicalElement_Hnd((CIM_EnabledLogicalElement*)inst)
{
}

inline CIM_System_Hnd::CIM_System_Hnd(const Instance_Hnd& x) : 
    CIM_EnabledLogicalElement_Hnd(&CIM_System::static_meta_class, x)
{
}

inline CIM_System_Hnd::CIM_System_Hnd(const Meta_Class* mc) : CIM_EnabledLogicalElement_Hnd(mc)
{
}

inline CIM_System_Hnd::CIM_System_Hnd(const Meta_Class* mc, const Instance_Hnd& x) : CIM_EnabledLogicalElement_Hnd(mc, x)
{
}

inline CIM_System_Hnd::~CIM_System_Hnd()
{
}

inline CIM_System_Hnd& CIM_System_Hnd::operator=(const CIM_System_Hnd& x)
{
    CIM_EnabledLogicalElement_Hnd::operator=(x);
    return *this;
}

inline bool CIM_System_Hnd::is_a(const Instance_Hnd& x)
{
    return is_subclass(&CIM_System::static_meta_class, x.meta_class());
}

inline CIM_System_Ref CIM_System_Hnd::reference() const
{
    return CIM_System_Ref((CIM_System*)key_clone(_inst));
}

inline const String& CIM_System_Hnd::CreationClassName_value() const
{
    if (((Class*)_inst)->CreationClassName.null)
        _throw_null_access("CreationClassName");
   return ((Class*)_inst)->CreationClassName.value;
}

inline void CIM_System_Hnd::CreationClassName_value(const String& x)
{
    _cow();
   ((Class*)_inst)->CreationClassName.value = x;
   ((Class*)_inst)->CreationClassName.null = false;
}

inline bool CIM_System_Hnd::CreationClassName_null() const
{
   return ((Class*)_inst)->CreationClassName.null;
}

inline void CIM_System_Hnd::CreationClassName_clear()
{
    _cow();
    __clear(((Class*)_inst)->CreationClassName.value);
    ((Class*)_inst)->CreationClassName.null = true;;
}

inline const String& CIM_System_Hnd::Name_value() const
{
    if (((Class*)_inst)->Name.null)
        _throw_null_access("Name");
   return ((Class*)_inst)->Name.value;
}

inline void CIM_System_Hnd::Name_value(const String& x)
{
    _cow();
   ((Class*)_inst)->Name.value = x;
   ((Class*)_inst)->Name.null = false;
}

inline bool CIM_System_Hnd::Name_null() const
{
   return ((Class*)_inst)->Name.null;
}

inline void CIM_System_Hnd::Name_clear()
{
    _cow();
    __clear(((Class*)_inst)->Name.value);
    ((Class*)_inst)->Name.null = true;;
}

inline const String& CIM_System_Hnd::NameFormat_value() const
{
    if (((Class*)_inst)->NameFormat.null)
        _throw_null_access("NameFormat");
   return ((Class*)_inst)->NameFormat.value;
}

inline void CIM_System_Hnd::NameFormat_value(const String& x)
{
    _cow();
   ((Class*)_inst)->NameFormat.value = x;
   ((Class*)_inst)->NameFormat.null = false;
}

inline bool CIM_System_Hnd::NameFormat_null() const
{
   return ((Class*)_inst)->NameFormat.null;
}

inline void CIM_System_Hnd::NameFormat_clear()
{
    _cow();
    __clear(((Class*)_inst)->NameFormat.value);
    ((Class*)_inst)->NameFormat.null = true;;
}

inline const String& CIM_System_Hnd::PrimaryOwnerName_value() const
{
    if (((Class*)_inst)->PrimaryOwnerName.null)
        _throw_null_access("PrimaryOwnerName");
   return ((Class*)_inst)->PrimaryOwnerName.value;
}

inline void CIM_System_Hnd::PrimaryOwnerName_value(const String& x)
{
    _cow();
   ((Class*)_inst)->PrimaryOwnerName.value = x;
   ((Class*)_inst)->PrimaryOwnerName.null = false;
}

inline bool CIM_System_Hnd::PrimaryOwnerName_null() const
{
   return ((Class*)_inst)->PrimaryOwnerName.null;
}

inline void CIM_System_Hnd::PrimaryOwnerName_clear()
{
    _cow();
    __clear(((Class*)_inst)->PrimaryOwnerName.value);
    ((Class*)_inst)->PrimaryOwnerName.null = true;;
}

inline const String& CIM_System_Hnd::PrimaryOwnerContact_value() const
{
    if (((Class*)_inst)->PrimaryOwnerContact.null)
        _throw_null_access("PrimaryOwnerContact");
   return ((Class*)_inst)->PrimaryOwnerContact.value;
}

inline void CIM_System_Hnd::PrimaryOwnerContact_value(const String& x)
{
    _cow();
   ((Class*)_inst)->PrimaryOwnerContact.value = x;
   ((Class*)_inst)->PrimaryOwnerContact.null = false;
}

inline bool CIM_System_Hnd::PrimaryOwnerContact_null() const
{
   return ((Class*)_inst)->PrimaryOwnerContact.null;
}

inline void CIM_System_Hnd::PrimaryOwnerContact_clear()
{
    _cow();
    __clear(((Class*)_inst)->PrimaryOwnerContact.value);
    ((Class*)_inst)->PrimaryOwnerContact.null = true;;
}

inline const Array_String& CIM_System_Hnd::Roles_value() const
{
    if (((Class*)_inst)->Roles.null)
        _throw_null_access("Roles");
   return ((Class*)_inst)->Roles.value;
}

inline void CIM_System_Hnd::Roles_value(const Array_String& x)
{
    _cow();
   ((Class*)_inst)->Roles.value = x;
   ((Class*)_inst)->Roles.null = false;
}

inline bool CIM_System_Hnd::Roles_null() const
{
   return ((Class*)_inst)->Roles.null;
}

inline void CIM_System_Hnd::Roles_clear()
{
    _cow();
    __clear(((Class*)_inst)->Roles.value);
    ((Class*)_inst)->Roles.null = true;;
}

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_System_Hnd_h */
