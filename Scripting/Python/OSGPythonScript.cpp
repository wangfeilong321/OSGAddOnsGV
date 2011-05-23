/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGRenderAction.h"
#include "OSGIntersectAction.h"

#include "OSGPythonScript.h"

OSG_USING_NAMESPACE

// Documentation for this class is emited in the
// OSGPythonScriptBase.cpp file.
// To modify it, please change the .fcd file (OSGPythonScript.fcd) and
// regenerate the base file.

/*-------------------------------------------------------------------------*/
/*                               Sync                                      */

void PythonScript::changed(ConstFieldMaskArg whichField, 
                           UInt32            origin,
                           BitVector         details)
{
    Inherited::changed(whichField, origin, details);

    fprintf(stderr, "PS : dump\n");

    this->dump(0, 0);
}

/*-------------------------------------------------------------------------*/
/*                               Type                                      */

FieldContainerType &PythonScript::getType(void)
{
    return _localType;
}

const FieldContainerType &PythonScript::getType(void) const
{
    return _localType;
}

/*-------------------------------------------------------------------------*/
/*                               Dump                                      */

void PythonScript::dump(      UInt32    uiIndent, 
                        const BitVector bvFlags) const
{
   Inherited::dump(uiIndent, bvFlags);
}

/*-------------------------------------------------------------------------*/
/*                            Constructors                                 */

PythonScript::PythonScript(void) :
    Inherited()
{
}

PythonScript::PythonScript(const PythonScript &source) :
    Inherited(source)
{
}

/*-------------------------------------------------------------------------*/
/*                             Destructor                                  */

PythonScript::~PythonScript(void)
{
}

/*-------------------------------------------------------------------------*/
/*                              Render                                     */

/*-------------------------------------------------------------------------*/
/*                             Intersect                                   */

/*-------------------------------------------------------------------------*/
/*                                Init                                     */

void PythonScript::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);


    if(ePhase == TypeObject::SystemPost)
    {
    }
}

void PythonScript::frame(OSG::Time, OSG::UInt32)
{
    fprintf(stderr, "PS : frame\n");
}
