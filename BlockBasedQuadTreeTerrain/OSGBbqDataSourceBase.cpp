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
 **     class BbqDataSource!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGAddOnsConfig.h"




#include "OSGBbqDataSourceBase.h"
#include "OSGBbqDataSource.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::BbqDataSource
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            BbqDataSourceBase::_sfIgnoreGeoRef
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<BbqDataSource *, nsOSG>::_type(
    "BbqDataSourcePtr", 
    "FieldContainerPtr", 
    BbqDataSource::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(BbqDataSource *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           BbqDataSource *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           BbqDataSource *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void BbqDataSourceBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "ignoreGeoRef",
        "",
        IgnoreGeoRefFieldId, IgnoreGeoRefFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&BbqDataSource::editHandleIgnoreGeoRef),
        static_cast<FieldGetMethodSig >(&BbqDataSource::getHandleIgnoreGeoRef));

    oType.addInitialDesc(pDesc);
}


BbqDataSourceBase::TypeObject BbqDataSourceBase::_type(
    BbqDataSourceBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    NULL,
    BbqDataSource::initMethod,
    BbqDataSource::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&BbqDataSource::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"BbqDataSource\"\n"
    "    parent=\"FieldContainer\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    library=\"ContribBbqTerrain\"\n"
    "    package=\"OSGAddOns\"\n"
    "    >\n"
    "  <Field\n"
    "\t  name=\"ignoreGeoRef\"\n"
    "\t  type=\"bool\"\n"
    "\t  cardinality=\"single\"\n"
    "\t  visibility=\"external\"\n"
    "\t  defaultValue=\"false\"\n"
    "\t  access=\"public\"\n"
    "\t  >\n"
    "  </Field>    \n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &BbqDataSourceBase::getType(void)
{
    return _type;
}

const FieldContainerType &BbqDataSourceBase::getType(void) const
{
    return _type;
}

UInt32 BbqDataSourceBase::getContainerSize(void) const
{
    return sizeof(BbqDataSource);
}

/*------------------------- decorator get ------------------------------*/


SFBool *BbqDataSourceBase::editSFIgnoreGeoRef(void)
{
    editSField(IgnoreGeoRefFieldMask);

    return &_sfIgnoreGeoRef;
}

const SFBool *BbqDataSourceBase::getSFIgnoreGeoRef(void) const
{
    return &_sfIgnoreGeoRef;
}






/*------------------------------ access -----------------------------------*/

SizeT BbqDataSourceBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (IgnoreGeoRefFieldMask & whichField))
    {
        returnValue += _sfIgnoreGeoRef.getBinSize();
    }

    return returnValue;
}

void BbqDataSourceBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (IgnoreGeoRefFieldMask & whichField))
    {
        _sfIgnoreGeoRef.copyToBin(pMem);
    }
}

void BbqDataSourceBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (IgnoreGeoRefFieldMask & whichField))
    {
        editSField(IgnoreGeoRefFieldMask);
        _sfIgnoreGeoRef.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

BbqDataSourceBase::BbqDataSourceBase(void) :
    Inherited(),
    _sfIgnoreGeoRef           (bool(false))
{
}

BbqDataSourceBase::BbqDataSourceBase(const BbqDataSourceBase &source) :
    Inherited(source),
    _sfIgnoreGeoRef           (source._sfIgnoreGeoRef           )
{
}


/*-------------------------- destructors ----------------------------------*/

BbqDataSourceBase::~BbqDataSourceBase(void)
{
}


GetFieldHandlePtr BbqDataSourceBase::getHandleIgnoreGeoRef    (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfIgnoreGeoRef,
             this->getType().getFieldDesc(IgnoreGeoRefFieldId),
             const_cast<BbqDataSourceBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr BbqDataSourceBase::editHandleIgnoreGeoRef   (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfIgnoreGeoRef,
             this->getType().getFieldDesc(IgnoreGeoRefFieldId),
             this));


    editSField(IgnoreGeoRefFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void BbqDataSourceBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    BbqDataSource *pThis = static_cast<BbqDataSource *>(this);

    pThis->execSync(static_cast<BbqDataSource *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void BbqDataSourceBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
