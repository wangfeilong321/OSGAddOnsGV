/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class PyFieldContainerPtrMFieldEditHandle!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGAddOnsConfig.h"




#include "OSGPyFieldContainerPtrMFieldEditHandleBase.h"
#include "OSGPyFieldContainerPtrMFieldEditHandle.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PyFieldContainerPtrMFieldEditHandle
    A container used to expose a fieldcontainer pointer multi-field edit handle
    equivalent to Python.  
    It provides access to the underlying multi-field in a pythonic way.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<PyFieldContainerPtrMFieldEditHandle *, nsOSG>::_type(
    "PyFieldContainerPtrMFieldEditHandlePtr", 
    "FieldContainerPtr", 
    PyFieldContainerPtrMFieldEditHandle::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(PyFieldContainerPtrMFieldEditHandle *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           PyFieldContainerPtrMFieldEditHandle *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           PyFieldContainerPtrMFieldEditHandle *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void PyFieldContainerPtrMFieldEditHandleBase::classDescInserter(TypeObject &oType)
{
}


PyFieldContainerPtrMFieldEditHandleBase::TypeObject PyFieldContainerPtrMFieldEditHandleBase::_type(
    PyFieldContainerPtrMFieldEditHandleBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&PyFieldContainerPtrMFieldEditHandleBase::createEmptyLocal),
    PyFieldContainerPtrMFieldEditHandle::initMethod,
    PyFieldContainerPtrMFieldEditHandle::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PyFieldContainerPtrMFieldEditHandle::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"PyFieldContainerPtrMFieldEditHandle\"\n"
    "    parent=\"FieldContainer\"\n"
    "    library=\"Scripting\"\n"
    "    package=\"OSGAddOns\"\n"
    "    structure=\"concrete\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"false\"\n"
    "    docGroupBase=\"GrpScripting\"\n"
    "    >\n"
    "  A container used to expose a fieldcontainer pointer multi-field edit handle\n"
    "  equivalent to Python.  \n"
    "  It provides access to the underlying multi-field in a pythonic way.\n"
    "</FieldContainer>\n",
    "A container used to expose a fieldcontainer pointer multi-field edit handle\n"
    "equivalent to Python.  \n"
    "It provides access to the underlying multi-field in a pythonic way.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PyFieldContainerPtrMFieldEditHandleBase::getType(void)
{
    return _type;
}

const FieldContainerType &PyFieldContainerPtrMFieldEditHandleBase::getType(void) const
{
    return _type;
}

UInt32 PyFieldContainerPtrMFieldEditHandleBase::getContainerSize(void) const
{
    return sizeof(PyFieldContainerPtrMFieldEditHandle);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

SizeT PyFieldContainerPtrMFieldEditHandleBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void PyFieldContainerPtrMFieldEditHandleBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void PyFieldContainerPtrMFieldEditHandleBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
PyFieldContainerPtrMFieldEditHandleTransitPtr PyFieldContainerPtrMFieldEditHandleBase::createLocal(BitVector bFlags)
{
    PyFieldContainerPtrMFieldEditHandleTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PyFieldContainerPtrMFieldEditHandle>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
PyFieldContainerPtrMFieldEditHandleTransitPtr PyFieldContainerPtrMFieldEditHandleBase::createDependent(BitVector bFlags)
{
    PyFieldContainerPtrMFieldEditHandleTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<PyFieldContainerPtrMFieldEditHandle>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PyFieldContainerPtrMFieldEditHandleTransitPtr PyFieldContainerPtrMFieldEditHandleBase::create(void)
{
    PyFieldContainerPtrMFieldEditHandleTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PyFieldContainerPtrMFieldEditHandle>(tmpPtr);
    }

    return fc;
}

PyFieldContainerPtrMFieldEditHandle *PyFieldContainerPtrMFieldEditHandleBase::createEmptyLocal(BitVector bFlags)
{
    PyFieldContainerPtrMFieldEditHandle *returnValue;

    newPtr<PyFieldContainerPtrMFieldEditHandle>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PyFieldContainerPtrMFieldEditHandle *PyFieldContainerPtrMFieldEditHandleBase::createEmpty(void)
{
    PyFieldContainerPtrMFieldEditHandle *returnValue;

    newPtr<PyFieldContainerPtrMFieldEditHandle>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PyFieldContainerPtrMFieldEditHandleBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PyFieldContainerPtrMFieldEditHandle *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PyFieldContainerPtrMFieldEditHandle *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PyFieldContainerPtrMFieldEditHandleBase::shallowCopyDependent(
    BitVector bFlags) const
{
    PyFieldContainerPtrMFieldEditHandle *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PyFieldContainerPtrMFieldEditHandle *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr PyFieldContainerPtrMFieldEditHandleBase::shallowCopy(void) const
{
    PyFieldContainerPtrMFieldEditHandle *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PyFieldContainerPtrMFieldEditHandle *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

PyFieldContainerPtrMFieldEditHandleBase::PyFieldContainerPtrMFieldEditHandleBase(void) :
    Inherited()
{
}

PyFieldContainerPtrMFieldEditHandleBase::PyFieldContainerPtrMFieldEditHandleBase(const PyFieldContainerPtrMFieldEditHandleBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

PyFieldContainerPtrMFieldEditHandleBase::~PyFieldContainerPtrMFieldEditHandleBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void PyFieldContainerPtrMFieldEditHandleBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PyFieldContainerPtrMFieldEditHandle *pThis = static_cast<PyFieldContainerPtrMFieldEditHandle *>(this);

    pThis->execSync(static_cast<PyFieldContainerPtrMFieldEditHandle *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PyFieldContainerPtrMFieldEditHandleBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    PyFieldContainerPtrMFieldEditHandle *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PyFieldContainerPtrMFieldEditHandle *>(pRefAspect),
                  dynamic_cast<const PyFieldContainerPtrMFieldEditHandle *>(this));

    return returnValue;
}
#endif

void PyFieldContainerPtrMFieldEditHandleBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
