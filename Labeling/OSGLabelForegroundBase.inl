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
 **     class LabelForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &LabelForegroundBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 LabelForegroundBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 LabelForegroundBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the LabelForeground::_sfImportanceThreshold field.

inline
Real32 &LabelForegroundBase::editImportanceThreshold(void)
{
    editSField(ImportanceThresholdFieldMask);

    return _sfImportanceThreshold.getValue();
}

//! Get the value of the LabelForeground::_sfImportanceThreshold field.
inline
      Real32  LabelForegroundBase::getImportanceThreshold(void) const
{
    return _sfImportanceThreshold.getValue();
}

//! Set the value of the LabelForeground::_sfImportanceThreshold field.
inline
void LabelForegroundBase::setImportanceThreshold(const Real32 value)
{
    editSField(ImportanceThresholdFieldMask);

    _sfImportanceThreshold.setValue(value);
}

//! Get the value of the LabelForeground::_sfRoot field.
inline
Node * LabelForegroundBase::getRoot(void) const
{
    return _sfRoot.getValue();
}

//! Set the value of the LabelForeground::_sfRoot field.
inline
void LabelForegroundBase::setRoot(Node * const value)
{
    editSField(RootFieldMask);

    _sfRoot.setValue(value);
}

//! Get the value of the LabelForeground::_sfTextureEnvironment field.
inline
TextureEnvChunk * LabelForegroundBase::getTextureEnvironment(void) const
{
    return _sfTextureEnvironment.getValue();
}

//! Set the value of the LabelForeground::_sfTextureEnvironment field.
inline
void LabelForegroundBase::setTextureEnvironment(TextureEnvChunk * const value)
{
    editSField(TextureEnvironmentFieldMask);

    _sfTextureEnvironment.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void LabelForegroundBase::execSync (      LabelForegroundBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ImportanceThresholdFieldMask & whichField))
        _sfImportanceThreshold.syncWith(pFrom->_sfImportanceThreshold);

    if(FieldBits::NoField != (RootFieldMask & whichField))
        _sfRoot.syncWith(pFrom->_sfRoot);

    if(FieldBits::NoField != (TextureEnvironmentFieldMask & whichField))
        _sfTextureEnvironment.syncWith(pFrom->_sfTextureEnvironment);
}
#endif


inline
const Char8 *LabelForegroundBase::getClassname(void)
{
    return "LabelForeground";
}
OSG_GEN_CONTAINERPTR(LabelForeground);

OSG_END_NAMESPACE

