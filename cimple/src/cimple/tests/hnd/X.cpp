/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "X.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_6827E083506B1A56883F566A87E0489F;

static const Meta_Qualifier*
_X_Key_MQA[] =
{
};

extern const Meta_Property
_X_Key;

const Meta_Property
_X_Key =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "Key",
    _X_Key_MQA,
    CIMPLE_ARRAY_SIZE(_X_Key_MQA),
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(X,Key),
    0, /* value */
};

extern const Meta_Property
_X_Names;

static const char*
_X_Names_elements[] =
{
    "One",
    "Two",
};

const Meta_Value_Array<const char*>
_X_Names_MV =
{
    _X_Names_elements,
    CIMPLE_ARRAY_SIZE(_X_Names_elements),
};

const Meta_Property
_X_Names =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "Names",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    STRING,
    -1, /* subscript */
    CIMPLE_OFF(X,Names),
    (const Meta_Value*)(void*)&_X_Names_MV,
};

static Meta_Feature* _X_MFA[] =
{
    (Meta_Feature*)(void*)&_X_Key,
    (Meta_Feature*)(void*)&_X_Names,
};

static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
};

const Meta_Class X::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_CLASS,
    "X",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _X_MFA,
    CIMPLE_ARRAY_SIZE(_X_MFA),
    sizeof(X),
    _locals,
    0, /* super_class */ 
    1, /* num_keys */
    0x0ACE499F, /* crc */
    &__meta_repository_6827E083506B1A56883F566A87E0489F,
};

X_Ref::X_Ref()
{
    _inst = X::create(true);
    _ref = true;
}

X_Ref::X_Ref(const X_Ref& x) : Hnd(x)
{
}

X_Ref::X_Ref(X* inst)
{
    _inst = inst;
    _ref = true;
}

X_Ref::~X_Ref()
{
}

X_Ref& X_Ref::operator=(const X_Ref& x)
{
    Hnd::operator=(x);
    return *this;
}

const uint32& X_Ref::Key() const
{
    return ((X*)_inst)->Key.value;
}

void X_Ref::Key(const uint32& x)
{
    _cow();
    ((X*)_inst)->Key.null = false;
    ((X*)_inst)->Key.value = x;
}

bool X_Ref::Key_null() const
{
    return ((X*)_inst)->Key.null;
}

void X_Ref::Key_null(bool x)
{
    _cow();
    ((X*)_inst)->Key.null = x;
    __clear(((X*)_inst)->Key.value);
}

X_Hnd::X_Hnd()
{
    _inst = X::create(true);
    _ref = false;
}

X_Hnd::X_Hnd(const X_Hnd& x) : Hnd(x)
{
}

X_Hnd::X_Hnd(X* inst)
{
    _inst = inst;
    _ref = false;
}

X_Hnd::~X_Hnd()
{
}

X_Hnd& X_Hnd::operator=(const X_Hnd& x)
{
    Hnd::operator=(x);
    return *this;
}

const uint32& X_Hnd::Key() const
{
    return ((X*)_inst)->Key.value;
}

void X_Hnd::Key(const uint32& x)
{
    _cow();
    ((X*)_inst)->Key.null = false;
    ((X*)_inst)->Key.value = x;
}

bool X_Hnd::Key_null() const
{
    return ((X*)_inst)->Key.null;
}

void X_Hnd::Key_null(bool x)
{
    _cow();
    ((X*)_inst)->Key.null = x;
    __clear(((X*)_inst)->Key.value);
}

const Array<String>& X_Hnd::Names() const
{
    return ((X*)_inst)->Names.value;
}

void X_Hnd::Names(const Array<String>& x)
{
    _cow();
    ((X*)_inst)->Names.null = false;
    ((X*)_inst)->Names.value = x;
}

bool X_Hnd::Names_null() const
{
    return ((X*)_inst)->Names.null;
}

void X_Hnd::Names_null(bool x)
{
    _cow();
    ((X*)_inst)->Names.null = x;
    __clear(((X*)_inst)->Names.value);
}

CIMPLE_NAMESPACE_END
