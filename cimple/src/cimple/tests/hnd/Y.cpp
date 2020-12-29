/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT THIS FILE; IT WAS AUTOMATICALLY GENERATED BY GENCLASS.
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "Y.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_6827E083506B1A56883F566A87E0489F;

static const Meta_Qualifier*
_Y_Key_MQA[] =
{
};

extern const Meta_Property
_Y_Key;

const Meta_Property
_Y_Key =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_KEY|CIMPLE_FLAG_READ,
    "Key",
    _Y_Key_MQA,
    CIMPLE_ARRAY_SIZE(_Y_Key_MQA),
    UINT32,
    0, /* subscript */
    CIMPLE_OFF(Y,Key),
    0, /* value */
};

extern const Meta_Property
_X_Names;

extern const Meta_Property
_Y_Flag;

const Meta_Property
_Y_Flag =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_PROPERTY|CIMPLE_FLAG_READ,
    "Flag",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    BOOLEAN,
    0, /* subscript */
    CIMPLE_OFF(Y,Flag),
    0, /* value */
};

static Meta_Feature* _Y_MFA[] =
{
    (Meta_Feature*)(void*)&_Y_Key,
    (Meta_Feature*)(void*)&_X_Names,
    (Meta_Feature*)(void*)&_Y_Flag,
};

static const Meta_Feature_Local _locals[] =
{
    {1},
    {0},
    {1},
};

const Meta_Class Y::static_meta_class =
{
    { 0 }, /* refs */
    CIMPLE_FLAG_CLASS,
    "Y",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _Y_MFA,
    CIMPLE_ARRAY_SIZE(_Y_MFA),
    sizeof(Y),
    _locals,
    &X::static_meta_class,
    1, /* num_keys */
    0x0904C70A, /* crc */
    &__meta_repository_6827E083506B1A56883F566A87E0489F,
};

Y_Ref::Y_Ref()
{
    _inst = Y::create(true);
    _ref = true;
}

Y_Ref::Y_Ref(const Y_Ref& x) : X_Ref(x)
{
}

Y_Ref::Y_Ref(Y* inst)
{
    _inst = inst;
    _ref = true;
}

Y_Ref::~Y_Ref()
{
}

Y_Ref& Y_Ref::operator=(const Y_Ref& x)
{
    Hnd::operator=(x);
    return *this;
}

const uint32& Y_Ref::Key() const
{
    return ((Y*)_inst)->Key.value;
}

void Y_Ref::Key(const uint32& x)
{
    _cow();
    ((Y*)_inst)->Key.null = false;
    ((Y*)_inst)->Key.value = x;
}

bool Y_Ref::Key_null() const
{
    return ((Y*)_inst)->Key.null;
}

void Y_Ref::Key_null(bool x)
{
    _cow();
    ((Y*)_inst)->Key.null = x;
    __clear(((Y*)_inst)->Key.value);
}

Y_Hnd::Y_Hnd()
{
    _inst = Y::create(true);
    _ref = false;
}

Y_Hnd::Y_Hnd(const Y_Hnd& x) : X_Hnd(x)
{
}

Y_Hnd::Y_Hnd(Y* inst)
{
    _inst = inst;
    _ref = false;
}

Y_Hnd::~Y_Hnd()
{
}

Y_Hnd& Y_Hnd::operator=(const Y_Hnd& x)
{
    Hnd::operator=(x);
    return *this;
}

const uint32& Y_Hnd::Key() const
{
    return ((Y*)_inst)->Key.value;
}

void Y_Hnd::Key(const uint32& x)
{
    _cow();
    ((Y*)_inst)->Key.null = false;
    ((Y*)_inst)->Key.value = x;
}

bool Y_Hnd::Key_null() const
{
    return ((Y*)_inst)->Key.null;
}

void Y_Hnd::Key_null(bool x)
{
    _cow();
    ((Y*)_inst)->Key.null = x;
    __clear(((Y*)_inst)->Key.value);
}

const boolean& Y_Hnd::Flag() const
{
    return ((Y*)_inst)->Flag.value;
}

void Y_Hnd::Flag(const boolean& x)
{
    _cow();
    ((Y*)_inst)->Flag.null = false;
    ((Y*)_inst)->Flag.value = x;
}

bool Y_Hnd::Flag_null() const
{
    return ((Y*)_inst)->Flag.null;
}

void Y_Hnd::Flag_null(bool x)
{
    _cow();
    ((Y*)_inst)->Flag.null = x;
    __clear(((Y*)_inst)->Flag.value);
}

CIMPLE_NAMESPACE_END
