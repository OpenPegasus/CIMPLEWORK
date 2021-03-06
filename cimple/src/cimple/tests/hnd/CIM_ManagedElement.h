/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#ifndef _cimple_CIM_ManagedElement_h
#define _cimple_CIM_ManagedElement_h

#include <cimple/cimple.h>

CIMPLE_NAMESPACE_BEGIN

class CIMPLE_LINKAGE CIM_ManagedElement : public Instance
{
public:
    // CIM_ManagedElement features:
    Property<String> Caption;
    Property<String> Description;
    Property<String> ElementName;

    CIMPLE_CLASS(CIM_ManagedElement)
};

class CIMPLE_LINKAGE CIM_ManagedElement_Ref : public Hnd
{
public:

    CIM_ManagedElement_Ref();
    CIM_ManagedElement_Ref(const CIM_ManagedElement_Ref& x);
    CIM_ManagedElement_Ref(CIM_ManagedElement* inst);
    ~CIM_ManagedElement_Ref();
    CIM_ManagedElement_Ref& operator=(const CIM_ManagedElement_Ref& x);
};

class CIMPLE_LINKAGE CIM_ManagedElement_Hnd : public Hnd
{
public:

    CIM_ManagedElement_Hnd();
    CIM_ManagedElement_Hnd(const CIM_ManagedElement_Hnd& x);
    CIM_ManagedElement_Hnd(CIM_ManagedElement* inst);
    ~CIM_ManagedElement_Hnd();
    CIM_ManagedElement_Hnd& operator=(const CIM_ManagedElement_Hnd& x);

    // Caption:
    const String& Caption() const;
    void Caption(const String& x);
    bool Caption_null() const;
    void Caption_null(bool x);

    // Description:
    const String& Description() const;
    void Description(const String& x);
    bool Description_null() const;
    void Description_null(bool x);

    // ElementName:
    const String& ElementName() const;
    void ElementName(const String& x);
    bool ElementName_null() const;
    void ElementName_null(bool x);
};

CIMPLE_NAMESPACE_END

#endif /* _cimple_CIM_ManagedElement_h */
