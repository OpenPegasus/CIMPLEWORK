/*NOCHKSRC*/
//==============================================================================
//
// PLEASE DO NOT EDIT; THIS FILE WAS AUTOMATICALLY GENERATED BY GENCLASS 2.1.0
//
//==============================================================================

#include <cimple/Meta_Class.h>
#include <cimple/Meta_Property.h>
#include <cimple/Meta_Reference.h>
#include "SalesmanLink.h"

CIMPLE_NAMESPACE_BEGIN

using namespace cimple;

extern const Meta_Repository __meta_repository_CFA0C0C0BF12124090F12E88B029ABDC;

/*[1663]*/
extern const Meta_Reference
_SalesmanLink_parent;

/*[1674]*/
const Meta_Reference
_SalesmanLink_parent =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_KEY,
    "parent",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &Salesman::static_meta_class,
    CIMPLE_OFF(SalesmanLink,parent)
};

/*[1663]*/
extern const Meta_Reference
_SalesmanLink_child;

/*[1674]*/
const Meta_Reference
_SalesmanLink_child =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_REFERENCE|CIMPLE_FLAG_KEY,
    "child",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    0, /* subscript */
    &Salesman::static_meta_class,
    CIMPLE_OFF(SalesmanLink,child)
};

/*[2301]*/
static Meta_Feature* _SalesmanLink_MFA[] =
{
    (Meta_Feature*)(void*)&_SalesmanLink_parent,
    (Meta_Feature*)(void*)&_SalesmanLink_child,
};

/*[2348]*/
static const Meta_Feature_Local _locals[] =
{
    {1},
    {1},
};

/*[2368]*/
const Meta_Class SalesmanLink::static_meta_class =
{
    CIMPLE_ATOMIC_INITIALIZER, /* refs */
    CIMPLE_FLAG_ASSOCIATION,
    "SalesmanLink",
    0, /* meta_qualifiers */
    0, /* num_meta_qaulifiers */
    _SalesmanLink_MFA,
    CIMPLE_ARRAY_SIZE(_SalesmanLink_MFA),
    sizeof(SalesmanLink),
    _locals,
    &PersonLink::static_meta_class,
    2, /* num_keys */
    &__meta_repository_CFA0C0C0BF12124090F12E88B029ABDC,
};

CIMPLE_NAMESPACE_END
