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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGBBQOUTOFCOREDATASOURCEFIELDS_H_
#define _OSGBBQOUTOFCOREDATASOURCEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribBbqTerrainDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class BbqOutOfCoreDataSource;

OSG_GEN_CONTAINERPTR(BbqOutOfCoreDataSource);
/*! \ingroup GrpContribBbqTerrainFieldTraits
    \ingroup GrpLibOSGContribBbqTerrain
 */
template <>
struct FieldTraits<BbqOutOfCoreDataSource *, nsOSG> :
    public FieldTraitsFCPtrBase<BbqOutOfCoreDataSource *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<BbqOutOfCoreDataSource *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBBBQTERRAIN_DLLMAPPING DataType &getType(void);

};




#ifndef DOXYGEN_SHOULD_SKIP_THIS



#else // these are the doxygen hacks



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGBBQOUTOFCOREDATASOURCEFIELDS_H_ */
