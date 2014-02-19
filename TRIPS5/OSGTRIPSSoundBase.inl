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
 **     class TRIPSSound!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &TRIPSSoundBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 TRIPSSoundBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 TRIPSSoundBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the TRIPSSound::_sfSoundID field.

inline
Int32 &TRIPSSoundBase::editSoundID(void)
{
    editSField(SoundIDFieldMask);

    return _sfSoundID.getValue();
}

//! Get the value of the TRIPSSound::_sfSoundID field.
inline
      Int32  TRIPSSoundBase::getSoundID(void) const
{
    return _sfSoundID.getValue();
}

//! Set the value of the TRIPSSound::_sfSoundID field.
inline
void TRIPSSoundBase::setSoundID(const Int32 value)
{
    editSField(SoundIDFieldMask);

    _sfSoundID.setValue(value);
}
//! Get the value of the TRIPSSound::_sfFilename field.

inline
std::string &TRIPSSoundBase::editFilename(void)
{
    editSField(FilenameFieldMask);

    return _sfFilename.getValue();
}

//! Get the value of the TRIPSSound::_sfFilename field.
inline
const std::string &TRIPSSoundBase::getFilename(void) const
{
    return _sfFilename.getValue();
}

//! Set the value of the TRIPSSound::_sfFilename field.
inline
void TRIPSSoundBase::setFilename(const std::string &value)
{
    editSField(FilenameFieldMask);

    _sfFilename.setValue(value);
}
//! Get the value of the TRIPSSound::_sfUsevelocity field.

inline
bool &TRIPSSoundBase::editUsevelocity(void)
{
    editSField(UsevelocityFieldMask);

    return _sfUsevelocity.getValue();
}

//! Get the value of the TRIPSSound::_sfUsevelocity field.
inline
      bool  TRIPSSoundBase::getUsevelocity(void) const
{
    return _sfUsevelocity.getValue();
}

//! Set the value of the TRIPSSound::_sfUsevelocity field.
inline
void TRIPSSoundBase::setUsevelocity(const bool value)
{
    editSField(UsevelocityFieldMask);

    _sfUsevelocity.setValue(value);
}
//! Get the value of the TRIPSSound::_sfLastsoundposition field.

inline
Pnt3f &TRIPSSoundBase::editLastsoundposition(void)
{
    editSField(LastsoundpositionFieldMask);

    return _sfLastsoundposition.getValue();
}

//! Get the value of the TRIPSSound::_sfLastsoundposition field.
inline
const Pnt3f &TRIPSSoundBase::getLastsoundposition(void) const
{
    return _sfLastsoundposition.getValue();
}

//! Set the value of the TRIPSSound::_sfLastsoundposition field.
inline
void TRIPSSoundBase::setLastsoundposition(const Pnt3f &value)
{
    editSField(LastsoundpositionFieldMask);

    _sfLastsoundposition.setValue(value);
}
//! Get the value of the TRIPSSound::_sfVelocity field.

inline
Vec3f &TRIPSSoundBase::editVelocity(void)
{
    editSField(VelocityFieldMask);

    return _sfVelocity.getValue();
}

//! Get the value of the TRIPSSound::_sfVelocity field.
inline
const Vec3f &TRIPSSoundBase::getVelocity(void) const
{
    return _sfVelocity.getValue();
}

//! Set the value of the TRIPSSound::_sfVelocity field.
inline
void TRIPSSoundBase::setVelocity(const Vec3f &value)
{
    editSField(VelocityFieldMask);

    _sfVelocity.setValue(value);
}
//! Get the value of the TRIPSSound::_sfIs3D field.

inline
bool &TRIPSSoundBase::editIs3D(void)
{
    editSField(Is3DFieldMask);

    return _sfIs3D.getValue();
}

//! Get the value of the TRIPSSound::_sfIs3D field.
inline
      bool  TRIPSSoundBase::getIs3D(void) const
{
    return _sfIs3D.getValue();
}

//! Set the value of the TRIPSSound::_sfIs3D field.
inline
void TRIPSSoundBase::setIs3D(const bool value)
{
    editSField(Is3DFieldMask);

    _sfIs3D.setValue(value);
}
//! Get the value of the TRIPSSound::_sfChannel field.

inline
Int32 &TRIPSSoundBase::editChannel(void)
{
    editSField(ChannelFieldMask);

    return _sfChannel.getValue();
}

//! Get the value of the TRIPSSound::_sfChannel field.
inline
      Int32  TRIPSSoundBase::getChannel(void) const
{
    return _sfChannel.getValue();
}

//! Set the value of the TRIPSSound::_sfChannel field.
inline
void TRIPSSoundBase::setChannel(const Int32 value)
{
    editSField(ChannelFieldMask);

    _sfChannel.setValue(value);
}
//! Get the value of the TRIPSSound::_sfSoundVolume field.

inline
Int32 &TRIPSSoundBase::editSoundVolume(void)
{
    editSField(SoundVolumeFieldMask);

    return _sfSoundVolume.getValue();
}

//! Get the value of the TRIPSSound::_sfSoundVolume field.
inline
      Int32  TRIPSSoundBase::getSoundVolume(void) const
{
    return _sfSoundVolume.getValue();
}

//! Set the value of the TRIPSSound::_sfSoundVolume field.
inline
void TRIPSSoundBase::setSoundVolume(const Int32 value)
{
    editSField(SoundVolumeFieldMask);

    _sfSoundVolume.setValue(value);
}
//! Get the value of the TRIPSSound::_sfMinDistance field.

inline
Real32 &TRIPSSoundBase::editMinDistance(void)
{
    editSField(MinDistanceFieldMask);

    return _sfMinDistance.getValue();
}

//! Get the value of the TRIPSSound::_sfMinDistance field.
inline
      Real32  TRIPSSoundBase::getMinDistance(void) const
{
    return _sfMinDistance.getValue();
}

//! Set the value of the TRIPSSound::_sfMinDistance field.
inline
void TRIPSSoundBase::setMinDistance(const Real32 value)
{
    editSField(MinDistanceFieldMask);

    _sfMinDistance.setValue(value);
}
//! Get the value of the TRIPSSound::_sfMaxDistance field.

inline
Real32 &TRIPSSoundBase::editMaxDistance(void)
{
    editSField(MaxDistanceFieldMask);

    return _sfMaxDistance.getValue();
}

//! Get the value of the TRIPSSound::_sfMaxDistance field.
inline
      Real32  TRIPSSoundBase::getMaxDistance(void) const
{
    return _sfMaxDistance.getValue();
}

//! Set the value of the TRIPSSound::_sfMaxDistance field.
inline
void TRIPSSoundBase::setMaxDistance(const Real32 value)
{
    editSField(MaxDistanceFieldMask);

    _sfMaxDistance.setValue(value);
}
//! Get the value of the TRIPSSound::_sfSoundtoplay field.

inline
Int32 &TRIPSSoundBase::editSoundtoplay(void)
{
    editSField(SoundtoplayFieldMask);

    return _sfSoundtoplay.getValue();
}

//! Get the value of the TRIPSSound::_sfSoundtoplay field.
inline
      Int32  TRIPSSoundBase::getSoundtoplay(void) const
{
    return _sfSoundtoplay.getValue();
}

//! Set the value of the TRIPSSound::_sfSoundtoplay field.
inline
void TRIPSSoundBase::setSoundtoplay(const Int32 value)
{
    editSField(SoundtoplayFieldMask);

    _sfSoundtoplay.setValue(value);
}
//! Get the value of the TRIPSSound::_sfPlaymode field.

inline
Int32 &TRIPSSoundBase::editPlaymode(void)
{
    editSField(PlaymodeFieldMask);

    return _sfPlaymode.getValue();
}

//! Get the value of the TRIPSSound::_sfPlaymode field.
inline
      Int32  TRIPSSoundBase::getPlaymode(void) const
{
    return _sfPlaymode.getValue();
}

//! Set the value of the TRIPSSound::_sfPlaymode field.
inline
void TRIPSSoundBase::setPlaymode(const Int32 value)
{
    editSField(PlaymodeFieldMask);

    _sfPlaymode.setValue(value);
}
//! Get the value of the TRIPSSound::_sfPlaymodeparameter1 field.

inline
Int32 &TRIPSSoundBase::editPlaymodeparameter1(void)
{
    editSField(Playmodeparameter1FieldMask);

    return _sfPlaymodeparameter1.getValue();
}

//! Get the value of the TRIPSSound::_sfPlaymodeparameter1 field.
inline
      Int32  TRIPSSoundBase::getPlaymodeparameter1(void) const
{
    return _sfPlaymodeparameter1.getValue();
}

//! Set the value of the TRIPSSound::_sfPlaymodeparameter1 field.
inline
void TRIPSSoundBase::setPlaymodeparameter1(const Int32 value)
{
    editSField(Playmodeparameter1FieldMask);

    _sfPlaymodeparameter1.setValue(value);
}
//! Get the value of the TRIPSSound::_sfPlaymodeparameter2 field.

inline
Int32 &TRIPSSoundBase::editPlaymodeparameter2(void)
{
    editSField(Playmodeparameter2FieldMask);

    return _sfPlaymodeparameter2.getValue();
}

//! Get the value of the TRIPSSound::_sfPlaymodeparameter2 field.
inline
      Int32  TRIPSSoundBase::getPlaymodeparameter2(void) const
{
    return _sfPlaymodeparameter2.getValue();
}

//! Set the value of the TRIPSSound::_sfPlaymodeparameter2 field.
inline
void TRIPSSoundBase::setPlaymodeparameter2(const Int32 value)
{
    editSField(Playmodeparameter2FieldMask);

    _sfPlaymodeparameter2.setValue(value);
}
//! Get the value of the TRIPSSound::_sfPlaymodeparameter3 field.

inline
Int32 &TRIPSSoundBase::editPlaymodeparameter3(void)
{
    editSField(Playmodeparameter3FieldMask);

    return _sfPlaymodeparameter3.getValue();
}

//! Get the value of the TRIPSSound::_sfPlaymodeparameter3 field.
inline
      Int32  TRIPSSoundBase::getPlaymodeparameter3(void) const
{
    return _sfPlaymodeparameter3.getValue();
}

//! Set the value of the TRIPSSound::_sfPlaymodeparameter3 field.
inline
void TRIPSSoundBase::setPlaymodeparameter3(const Int32 value)
{
    editSField(Playmodeparameter3FieldMask);

    _sfPlaymodeparameter3.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void TRIPSSoundBase::execSync (      TRIPSSoundBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (SoundIDFieldMask & whichField))
        _sfSoundID.syncWith(pFrom->_sfSoundID);

    if(FieldBits::NoField != (FilenameFieldMask & whichField))
        _sfFilename.syncWith(pFrom->_sfFilename);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pFrom->_sfBeacon);

    if(FieldBits::NoField != (UsevelocityFieldMask & whichField))
        _sfUsevelocity.syncWith(pFrom->_sfUsevelocity);

    if(FieldBits::NoField != (LastsoundpositionFieldMask & whichField))
        _sfLastsoundposition.syncWith(pFrom->_sfLastsoundposition);

    if(FieldBits::NoField != (VelocityFieldMask & whichField))
        _sfVelocity.syncWith(pFrom->_sfVelocity);

    if(FieldBits::NoField != (Is3DFieldMask & whichField))
        _sfIs3D.syncWith(pFrom->_sfIs3D);

    if(FieldBits::NoField != (ChannelFieldMask & whichField))
        _sfChannel.syncWith(pFrom->_sfChannel);

    if(FieldBits::NoField != (SoundVolumeFieldMask & whichField))
        _sfSoundVolume.syncWith(pFrom->_sfSoundVolume);

    if(FieldBits::NoField != (MinDistanceFieldMask & whichField))
        _sfMinDistance.syncWith(pFrom->_sfMinDistance);

    if(FieldBits::NoField != (MaxDistanceFieldMask & whichField))
        _sfMaxDistance.syncWith(pFrom->_sfMaxDistance);

    if(FieldBits::NoField != (SoundtoplayFieldMask & whichField))
        _sfSoundtoplay.syncWith(pFrom->_sfSoundtoplay);

    if(FieldBits::NoField != (PlaymodeFieldMask & whichField))
        _sfPlaymode.syncWith(pFrom->_sfPlaymode);

    if(FieldBits::NoField != (Playmodeparameter1FieldMask & whichField))
        _sfPlaymodeparameter1.syncWith(pFrom->_sfPlaymodeparameter1);

    if(FieldBits::NoField != (Playmodeparameter2FieldMask & whichField))
        _sfPlaymodeparameter2.syncWith(pFrom->_sfPlaymodeparameter2);

    if(FieldBits::NoField != (Playmodeparameter3FieldMask & whichField))
        _sfPlaymodeparameter3.syncWith(pFrom->_sfPlaymodeparameter3);

    if(FieldBits::NoField != (AudioFieldMask & whichField))
        _sfAudio.syncWith(pFrom->_sfAudio);
}
#endif


inline
const Char8 *TRIPSSoundBase::getClassname(void)
{
    return "TRIPSSound";
}
OSG_GEN_CONTAINERPTR(TRIPSSound);

OSG_END_NAMESPACE

