/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class SimpleCudaComputeAlgorithm!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGGeometry.h"                // Target Class

#include "OSGSimpleCudaComputeAlgorithmBase.h"
#include "OSGSimpleCudaComputeAlgorithm.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SimpleCudaComputeAlgorithm
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          SimpleCudaComputeAlgorithmBase::_sfMode
    
*/

/*! \var Real32          SimpleCudaComputeAlgorithmBase::_sfIntensity
    
*/

/*! \var Real32          SimpleCudaComputeAlgorithmBase::_sfScale
    
*/

/*! \var Real32          SimpleCudaComputeAlgorithmBase::_sfScaleStep
    
*/

/*! \var Real32          SimpleCudaComputeAlgorithmBase::_sfScaleMax
    
*/

/*! \var Geometry *      SimpleCudaComputeAlgorithmBase::_sfTarget
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<SimpleCudaComputeAlgorithm *, nsOSG>::_type(
    "SimpleCudaComputeAlgorithmPtr", 
    "ComputeAlgorithmPtr", 
    SimpleCudaComputeAlgorithm::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(SimpleCudaComputeAlgorithm *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           SimpleCudaComputeAlgorithm *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           SimpleCudaComputeAlgorithm *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SimpleCudaComputeAlgorithmBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "mode",
        "",
        ModeFieldId, ModeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleCudaComputeAlgorithm::editHandleMode),
        static_cast<FieldGetMethodSig >(&SimpleCudaComputeAlgorithm::getHandleMode));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "intensity",
        "",
        IntensityFieldId, IntensityFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleCudaComputeAlgorithm::editHandleIntensity),
        static_cast<FieldGetMethodSig >(&SimpleCudaComputeAlgorithm::getHandleIntensity));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "scale",
        "",
        ScaleFieldId, ScaleFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleCudaComputeAlgorithm::editHandleScale),
        static_cast<FieldGetMethodSig >(&SimpleCudaComputeAlgorithm::getHandleScale));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "scaleStep",
        "",
        ScaleStepFieldId, ScaleStepFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleCudaComputeAlgorithm::editHandleScaleStep),
        static_cast<FieldGetMethodSig >(&SimpleCudaComputeAlgorithm::getHandleScaleStep));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "scaleMax",
        "",
        ScaleMaxFieldId, ScaleMaxFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleCudaComputeAlgorithm::editHandleScaleMax),
        static_cast<FieldGetMethodSig >(&SimpleCudaComputeAlgorithm::getHandleScaleMax));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecGeometryPtr::Description(
        SFUnrecGeometryPtr::getClassType(),
        "target",
        "",
        TargetFieldId, TargetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleCudaComputeAlgorithm::editHandleTarget),
        static_cast<FieldGetMethodSig >(&SimpleCudaComputeAlgorithm::getHandleTarget));

    oType.addInitialDesc(pDesc);
}


SimpleCudaComputeAlgorithmBase::TypeObject SimpleCudaComputeAlgorithmBase::_type(
    SimpleCudaComputeAlgorithmBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&SimpleCudaComputeAlgorithmBase::createEmptyLocal),
    SimpleCudaComputeAlgorithm::initMethod,
    SimpleCudaComputeAlgorithm::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SimpleCudaComputeAlgorithm::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SimpleCudaComputeAlgorithm\"\n"
    "\tparent=\"ComputeAlgorithm\"\n"
    "\tlibrary=\"ContribCompute\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    ">\n"
    "  <Field\n"
    "     name=\"mode\"\n"
    "     type=\"UInt32\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"(SimpleCudaComputeAlgorithm::UpdateOSG)\"\n"
    "     >\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "     name=\"intensity\"\n"
    "     type=\"Real32\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"0.02f\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"scale\"\n"
    "     type=\"Real32\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"4.5f\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"scaleStep\"\n"
    "     type=\"Real32\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"0.1f\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"scaleMax\"\n"
    "     type=\"Real32\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"50.f\"\n"
    "     >\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "\t name=\"target\"\n"
    "\t type=\"Geometry\"\n"
    "     category=\"pointer\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SimpleCudaComputeAlgorithmBase::getType(void)
{
    return _type;
}

const FieldContainerType &SimpleCudaComputeAlgorithmBase::getType(void) const
{
    return _type;
}

UInt32 SimpleCudaComputeAlgorithmBase::getContainerSize(void) const
{
    return sizeof(SimpleCudaComputeAlgorithm);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *SimpleCudaComputeAlgorithmBase::editSFMode(void)
{
    editSField(ModeFieldMask);

    return &_sfMode;
}

const SFUInt32 *SimpleCudaComputeAlgorithmBase::getSFMode(void) const
{
    return &_sfMode;
}


SFReal32 *SimpleCudaComputeAlgorithmBase::editSFIntensity(void)
{
    editSField(IntensityFieldMask);

    return &_sfIntensity;
}

const SFReal32 *SimpleCudaComputeAlgorithmBase::getSFIntensity(void) const
{
    return &_sfIntensity;
}


SFReal32 *SimpleCudaComputeAlgorithmBase::editSFScale(void)
{
    editSField(ScaleFieldMask);

    return &_sfScale;
}

const SFReal32 *SimpleCudaComputeAlgorithmBase::getSFScale(void) const
{
    return &_sfScale;
}


SFReal32 *SimpleCudaComputeAlgorithmBase::editSFScaleStep(void)
{
    editSField(ScaleStepFieldMask);

    return &_sfScaleStep;
}

const SFReal32 *SimpleCudaComputeAlgorithmBase::getSFScaleStep(void) const
{
    return &_sfScaleStep;
}


SFReal32 *SimpleCudaComputeAlgorithmBase::editSFScaleMax(void)
{
    editSField(ScaleMaxFieldMask);

    return &_sfScaleMax;
}

const SFReal32 *SimpleCudaComputeAlgorithmBase::getSFScaleMax(void) const
{
    return &_sfScaleMax;
}


//! Get the SimpleCudaComputeAlgorithm::_sfTarget field.
const SFUnrecGeometryPtr *SimpleCudaComputeAlgorithmBase::getSFTarget(void) const
{
    return &_sfTarget;
}

SFUnrecGeometryPtr  *SimpleCudaComputeAlgorithmBase::editSFTarget         (void)
{
    editSField(TargetFieldMask);

    return &_sfTarget;
}





/*------------------------------ access -----------------------------------*/

SizeT SimpleCudaComputeAlgorithmBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        returnValue += _sfMode.getBinSize();
    }
    if(FieldBits::NoField != (IntensityFieldMask & whichField))
    {
        returnValue += _sfIntensity.getBinSize();
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        returnValue += _sfScale.getBinSize();
    }
    if(FieldBits::NoField != (ScaleStepFieldMask & whichField))
    {
        returnValue += _sfScaleStep.getBinSize();
    }
    if(FieldBits::NoField != (ScaleMaxFieldMask & whichField))
    {
        returnValue += _sfScaleMax.getBinSize();
    }
    if(FieldBits::NoField != (TargetFieldMask & whichField))
    {
        returnValue += _sfTarget.getBinSize();
    }

    return returnValue;
}

void SimpleCudaComputeAlgorithmBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        _sfMode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (IntensityFieldMask & whichField))
    {
        _sfIntensity.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ScaleStepFieldMask & whichField))
    {
        _sfScaleStep.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ScaleMaxFieldMask & whichField))
    {
        _sfScaleMax.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TargetFieldMask & whichField))
    {
        _sfTarget.copyToBin(pMem);
    }
}

void SimpleCudaComputeAlgorithmBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        editSField(ModeFieldMask);
        _sfMode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (IntensityFieldMask & whichField))
    {
        editSField(IntensityFieldMask);
        _sfIntensity.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        editSField(ScaleFieldMask);
        _sfScale.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ScaleStepFieldMask & whichField))
    {
        editSField(ScaleStepFieldMask);
        _sfScaleStep.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ScaleMaxFieldMask & whichField))
    {
        editSField(ScaleMaxFieldMask);
        _sfScaleMax.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TargetFieldMask & whichField))
    {
        editSField(TargetFieldMask);
        _sfTarget.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SimpleCudaComputeAlgorithmTransitPtr SimpleCudaComputeAlgorithmBase::createLocal(BitVector bFlags)
{
    SimpleCudaComputeAlgorithmTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SimpleCudaComputeAlgorithm>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SimpleCudaComputeAlgorithmTransitPtr SimpleCudaComputeAlgorithmBase::createDependent(BitVector bFlags)
{
    SimpleCudaComputeAlgorithmTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<SimpleCudaComputeAlgorithm>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SimpleCudaComputeAlgorithmTransitPtr SimpleCudaComputeAlgorithmBase::create(void)
{
    SimpleCudaComputeAlgorithmTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SimpleCudaComputeAlgorithm>(tmpPtr);
    }

    return fc;
}

SimpleCudaComputeAlgorithm *SimpleCudaComputeAlgorithmBase::createEmptyLocal(BitVector bFlags)
{
    SimpleCudaComputeAlgorithm *returnValue;

    newPtr<SimpleCudaComputeAlgorithm>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SimpleCudaComputeAlgorithm *SimpleCudaComputeAlgorithmBase::createEmpty(void)
{
    SimpleCudaComputeAlgorithm *returnValue;

    newPtr<SimpleCudaComputeAlgorithm>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SimpleCudaComputeAlgorithmBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SimpleCudaComputeAlgorithm *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SimpleCudaComputeAlgorithm *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SimpleCudaComputeAlgorithmBase::shallowCopyDependent(
    BitVector bFlags) const
{
    SimpleCudaComputeAlgorithm *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SimpleCudaComputeAlgorithm *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SimpleCudaComputeAlgorithmBase::shallowCopy(void) const
{
    SimpleCudaComputeAlgorithm *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SimpleCudaComputeAlgorithm *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SimpleCudaComputeAlgorithmBase::SimpleCudaComputeAlgorithmBase(void) :
    Inherited(),
    _sfMode                   (UInt32((SimpleCudaComputeAlgorithm::UpdateOSG))),
    _sfIntensity              (Real32(0.02f)),
    _sfScale                  (Real32(4.5f)),
    _sfScaleStep              (Real32(0.1f)),
    _sfScaleMax               (Real32(50.f)),
    _sfTarget                 (NULL)
{
}

SimpleCudaComputeAlgorithmBase::SimpleCudaComputeAlgorithmBase(const SimpleCudaComputeAlgorithmBase &source) :
    Inherited(source),
    _sfMode                   (source._sfMode                   ),
    _sfIntensity              (source._sfIntensity              ),
    _sfScale                  (source._sfScale                  ),
    _sfScaleStep              (source._sfScaleStep              ),
    _sfScaleMax               (source._sfScaleMax               ),
    _sfTarget                 (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

SimpleCudaComputeAlgorithmBase::~SimpleCudaComputeAlgorithmBase(void)
{
}

void SimpleCudaComputeAlgorithmBase::onCreate(const SimpleCudaComputeAlgorithm *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        SimpleCudaComputeAlgorithm *pThis = static_cast<SimpleCudaComputeAlgorithm *>(this);

        pThis->setTarget(source->getTarget());
    }
}

GetFieldHandlePtr SimpleCudaComputeAlgorithmBase::getHandleMode            (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfMode,
             this->getType().getFieldDesc(ModeFieldId),
             const_cast<SimpleCudaComputeAlgorithmBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleCudaComputeAlgorithmBase::editHandleMode           (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfMode,
             this->getType().getFieldDesc(ModeFieldId),
             this));


    editSField(ModeFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleCudaComputeAlgorithmBase::getHandleIntensity       (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfIntensity,
             this->getType().getFieldDesc(IntensityFieldId),
             const_cast<SimpleCudaComputeAlgorithmBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleCudaComputeAlgorithmBase::editHandleIntensity      (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfIntensity,
             this->getType().getFieldDesc(IntensityFieldId),
             this));


    editSField(IntensityFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleCudaComputeAlgorithmBase::getHandleScale           (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfScale,
             this->getType().getFieldDesc(ScaleFieldId),
             const_cast<SimpleCudaComputeAlgorithmBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleCudaComputeAlgorithmBase::editHandleScale          (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfScale,
             this->getType().getFieldDesc(ScaleFieldId),
             this));


    editSField(ScaleFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleCudaComputeAlgorithmBase::getHandleScaleStep       (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfScaleStep,
             this->getType().getFieldDesc(ScaleStepFieldId),
             const_cast<SimpleCudaComputeAlgorithmBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleCudaComputeAlgorithmBase::editHandleScaleStep      (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfScaleStep,
             this->getType().getFieldDesc(ScaleStepFieldId),
             this));


    editSField(ScaleStepFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleCudaComputeAlgorithmBase::getHandleScaleMax        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfScaleMax,
             this->getType().getFieldDesc(ScaleMaxFieldId),
             const_cast<SimpleCudaComputeAlgorithmBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleCudaComputeAlgorithmBase::editHandleScaleMax       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfScaleMax,
             this->getType().getFieldDesc(ScaleMaxFieldId),
             this));


    editSField(ScaleMaxFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleCudaComputeAlgorithmBase::getHandleTarget          (void) const
{
    SFUnrecGeometryPtr::GetHandlePtr returnValue(
        new  SFUnrecGeometryPtr::GetHandle(
             &_sfTarget,
             this->getType().getFieldDesc(TargetFieldId),
             const_cast<SimpleCudaComputeAlgorithmBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleCudaComputeAlgorithmBase::editHandleTarget         (void)
{
    SFUnrecGeometryPtr::EditHandlePtr returnValue(
        new  SFUnrecGeometryPtr::EditHandle(
             &_sfTarget,
             this->getType().getFieldDesc(TargetFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&SimpleCudaComputeAlgorithm::setTarget,
                    static_cast<SimpleCudaComputeAlgorithm *>(this), _1));

    editSField(TargetFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SimpleCudaComputeAlgorithmBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SimpleCudaComputeAlgorithm *pThis = static_cast<SimpleCudaComputeAlgorithm *>(this);

    pThis->execSync(static_cast<SimpleCudaComputeAlgorithm *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SimpleCudaComputeAlgorithmBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SimpleCudaComputeAlgorithm *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SimpleCudaComputeAlgorithm *>(pRefAspect),
                  dynamic_cast<const SimpleCudaComputeAlgorithm *>(this));

    return returnValue;
}
#endif

void SimpleCudaComputeAlgorithmBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<SimpleCudaComputeAlgorithm *>(this)->setTarget(NULL);


}


OSG_END_NAMESPACE
