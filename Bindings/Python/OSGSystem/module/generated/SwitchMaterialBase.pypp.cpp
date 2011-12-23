// This file has been generated by Py++.


// PyOpenSG is (C) Copyright 2005-2009 by Allen Bierbaum
//
// This file is part of PyOpenSG.
//
// PyOpenSG is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License as published by the Free
// Software Foundation; either version 2 of the License, or (at your option)
// any later version.
//
// PyOpenSG is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
// more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#if __GNUC__ >= 4 || __GNUC_MINOR__ >=3
#pragma GCC diagnostic warning "-Wold-style-cast"
#endif
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif

#include "boost/python.hpp"
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SwitchMaterialBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list SwitchMaterialBase_getMFMaterials(OSG::SwitchMaterialBase *self)
{
   boost::python::list result;
   OSG::MFUnrecMaterialPtr const * mf_data = self->getMFMaterials();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::Material::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

void register_SwitchMaterialBase_class(){

    { //::OSG::SwitchMaterialBase
        typedef bp::class_< OSG::SwitchMaterialBase, bp::bases< OSG::CompositeMaterial >, boost::noncopyable > SwitchMaterialBase_exposer_t;
        SwitchMaterialBase_exposer_t SwitchMaterialBase_exposer = SwitchMaterialBase_exposer_t( "SwitchMaterialBase", bp::no_init );
        bp::scope SwitchMaterialBase_scope( SwitchMaterialBase_exposer );
        bp::scope().attr("MaterialsFieldId") = (int)OSG::SwitchMaterialBase::MaterialsFieldId;
        bp::scope().attr("ChoiceFieldId") = (int)OSG::SwitchMaterialBase::ChoiceFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::SwitchMaterialBase::NextFieldId;
        { //::OSG::SwitchMaterialBase::assignMaterials
        
            typedef void ( ::OSG::SwitchMaterialBase::*assignMaterials_function_type )( ::OSG::MFUnrecMaterialPtr const & ) ;
            
            SwitchMaterialBase_exposer.def( 
                "assignMaterials"
                , assignMaterials_function_type( &::OSG::SwitchMaterialBase::assignMaterials )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SwitchMaterialBase::clearMaterials
        
            typedef void ( ::OSG::SwitchMaterialBase::*clearMaterials_function_type )(  ) ;
            
            SwitchMaterialBase_exposer.def( 
                "clearMaterials"
                , clearMaterials_function_type( &::OSG::SwitchMaterialBase::clearMaterials ) );
        
        }
        { //::OSG::SwitchMaterialBase::copyFromBin
        
            typedef void ( ::OSG::SwitchMaterialBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SwitchMaterialBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::SwitchMaterialBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SwitchMaterialBase::copyToBin
        
            typedef void ( ::OSG::SwitchMaterialBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SwitchMaterialBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::SwitchMaterialBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SwitchMaterialBase::create
        
            typedef ::OSG::SwitchMaterialTransitPtr ( *create_function_type )(  );
            
            SwitchMaterialBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::SwitchMaterialBase::create ) );
        
        }
        { //::OSG::SwitchMaterialBase::createDependent
        
            typedef ::OSG::SwitchMaterialTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            SwitchMaterialBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::SwitchMaterialBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::SwitchMaterialBase::createLocal
        
            typedef ::OSG::SwitchMaterialTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            SwitchMaterialBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::SwitchMaterialBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::SwitchMaterialBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::SwitchMaterialBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            SwitchMaterialBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::SwitchMaterialBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::SwitchMaterialBase::getChoice
        
            typedef ::OSG::UInt32 ( ::OSG::SwitchMaterialBase::*getChoice_function_type )(  ) const;
            
            SwitchMaterialBase_exposer.def( 
                "getChoice"
                , getChoice_function_type( &::OSG::SwitchMaterialBase::getChoice ) );
        
        }
        { //::OSG::SwitchMaterialBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            SwitchMaterialBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::SwitchMaterialBase::getClassGroupId ) );
        
        }
        { //::OSG::SwitchMaterialBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            SwitchMaterialBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::SwitchMaterialBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::SwitchMaterialBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            SwitchMaterialBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::SwitchMaterialBase::getClassTypeId ) );
        
        }
        { //::OSG::SwitchMaterialBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::SwitchMaterialBase::*getContainerSize_function_type )(  ) const;
            
            SwitchMaterialBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::SwitchMaterialBase::getContainerSize ) );
        
        }
        { //::OSG::SwitchMaterialBase::getMaterials
        
            typedef ::OSG::Material * ( ::OSG::SwitchMaterialBase::*getMaterials_function_type )( ::OSG::UInt32 const ) const;
            
            SwitchMaterialBase_exposer.def( 
                "getMaterials"
                , getMaterials_function_type( &::OSG::SwitchMaterialBase::getMaterials )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SwitchMaterialBase::getSFChoice
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::SwitchMaterialBase::*getSFChoice_function_type )(  ) const;
            
            SwitchMaterialBase_exposer.def( 
                "getSFChoice"
                , getSFChoice_function_type( &::OSG::SwitchMaterialBase::getSFChoice )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SwitchMaterialBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::SwitchMaterialBase::*getType_function_type )(  ) ;
            
            SwitchMaterialBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SwitchMaterialBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SwitchMaterialBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::SwitchMaterialBase::*getType_function_type )(  ) const;
            
            SwitchMaterialBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SwitchMaterialBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SwitchMaterialBase::pushToMaterials
        
            typedef void ( ::OSG::SwitchMaterialBase::*pushToMaterials_function_type )( ::OSG::Material * const ) ;
            
            SwitchMaterialBase_exposer.def( 
                "pushToMaterials"
                , pushToMaterials_function_type( &::OSG::SwitchMaterialBase::pushToMaterials )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SwitchMaterialBase::removeFromMaterials
        
            typedef void ( ::OSG::SwitchMaterialBase::*removeFromMaterials_function_type )( ::OSG::UInt32 ) ;
            
            SwitchMaterialBase_exposer.def( 
                "removeFromMaterials"
                , removeFromMaterials_function_type( &::OSG::SwitchMaterialBase::removeFromMaterials )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::SwitchMaterialBase::removeObjFromMaterials
        
            typedef void ( ::OSG::SwitchMaterialBase::*removeObjFromMaterials_function_type )( ::OSG::Material * const ) ;
            
            SwitchMaterialBase_exposer.def( 
                "removeObjFromMaterials"
                , removeObjFromMaterials_function_type( &::OSG::SwitchMaterialBase::removeObjFromMaterials )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SwitchMaterialBase::setChoice
        
            typedef void ( ::OSG::SwitchMaterialBase::*setChoice_function_type )( ::OSG::UInt32 const ) ;
            
            SwitchMaterialBase_exposer.def( 
                "setChoice"
                , setChoice_function_type( &::OSG::SwitchMaterialBase::setChoice )
                , ( bp::arg("value") ) );
        
        }
        SwitchMaterialBase_exposer.staticmethod( "create" );
        SwitchMaterialBase_exposer.staticmethod( "createDependent" );
        SwitchMaterialBase_exposer.staticmethod( "createLocal" );
        SwitchMaterialBase_exposer.staticmethod( "getClassGroupId" );
        SwitchMaterialBase_exposer.staticmethod( "getClassType" );
        SwitchMaterialBase_exposer.staticmethod( "getClassTypeId" );
        SwitchMaterialBase_exposer.def("getMFMaterials",SwitchMaterialBase_getMFMaterials);
    }

}
