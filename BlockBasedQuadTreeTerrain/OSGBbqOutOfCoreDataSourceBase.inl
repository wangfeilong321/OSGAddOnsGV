/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
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
 **     class BbqOutOfCoreDataSource!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &BbqOutOfCoreDataSourceBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 BbqOutOfCoreDataSourceBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 BbqOutOfCoreDataSourceBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the BbqOutOfCoreDataSource::_sfFilename field.

inline
std::string &BbqOutOfCoreDataSourceBase::editFilename(void)
{
    editSField(FilenameFieldMask);

    return _sfFilename.getValue();
}

//! Get the value of the BbqOutOfCoreDataSource::_sfFilename field.
inline
const std::string &BbqOutOfCoreDataSourceBase::getFilename(void) const
{
    return _sfFilename.getValue();
}

//! Set the value of the BbqOutOfCoreDataSource::_sfFilename field.
inline
void BbqOutOfCoreDataSourceBase::setFilename(const std::string &value)
{
    editSField(FilenameFieldMask);

    _sfFilename.setValue(value);
}
//! Get the value of the BbqOutOfCoreDataSource::_sfHeightScale field.

inline
Real32 &BbqOutOfCoreDataSourceBase::editHeightScale(void)
{
    editSField(HeightScaleFieldMask);

    return _sfHeightScale.getValue();
}

//! Get the value of the BbqOutOfCoreDataSource::_sfHeightScale field.
inline
      Real32  BbqOutOfCoreDataSourceBase::getHeightScale(void) const
{
    return _sfHeightScale.getValue();
}

//! Set the value of the BbqOutOfCoreDataSource::_sfHeightScale field.
inline
void BbqOutOfCoreDataSourceBase::setHeightScale(const Real32 value)
{
    editSField(HeightScaleFieldMask);

    _sfHeightScale.setValue(value);
}
//! Get the value of the BbqOutOfCoreDataSource::_sfHeightOffset field.

inline
Real32 &BbqOutOfCoreDataSourceBase::editHeightOffset(void)
{
    editSField(HeightOffsetFieldMask);

    return _sfHeightOffset.getValue();
}

//! Get the value of the BbqOutOfCoreDataSource::_sfHeightOffset field.
inline
      Real32  BbqOutOfCoreDataSourceBase::getHeightOffset(void) const
{
    return _sfHeightOffset.getValue();
}

//! Set the value of the BbqOutOfCoreDataSource::_sfHeightOffset field.
inline
void BbqOutOfCoreDataSourceBase::setHeightOffset(const Real32 value)
{
    editSField(HeightOffsetFieldMask);

    _sfHeightOffset.setValue(value);
}
//! Get the value of the BbqOutOfCoreDataSource::_sfSampleSpacing field.

inline
Real32 &BbqOutOfCoreDataSourceBase::editSampleSpacing(void)
{
    editSField(SampleSpacingFieldMask);

    return _sfSampleSpacing.getValue();
}

//! Get the value of the BbqOutOfCoreDataSource::_sfSampleSpacing field.
inline
      Real32  BbqOutOfCoreDataSourceBase::getSampleSpacing(void) const
{
    return _sfSampleSpacing.getValue();
}

//! Set the value of the BbqOutOfCoreDataSource::_sfSampleSpacing field.
inline
void BbqOutOfCoreDataSourceBase::setSampleSpacing(const Real32 value)
{
    editSField(SampleSpacingFieldMask);

    _sfSampleSpacing.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void BbqOutOfCoreDataSourceBase::execSync (      BbqOutOfCoreDataSourceBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (FilenameFieldMask & whichField))
        _sfFilename.syncWith(pFrom->_sfFilename);

    if(FieldBits::NoField != (HeightScaleFieldMask & whichField))
        _sfHeightScale.syncWith(pFrom->_sfHeightScale);

    if(FieldBits::NoField != (HeightOffsetFieldMask & whichField))
        _sfHeightOffset.syncWith(pFrom->_sfHeightOffset);

    if(FieldBits::NoField != (SampleSpacingFieldMask & whichField))
        _sfSampleSpacing.syncWith(pFrom->_sfSampleSpacing);
}
#endif


inline
const Char8 *BbqOutOfCoreDataSourceBase::getClassname(void)
{
    return "BbqOutOfCoreDataSource";
}
OSG_GEN_CONTAINERPTR(BbqOutOfCoreDataSource);

OSG_END_NAMESPACE

