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
#pragma GCC diagnostic warning "-Wunused-local-typedefs"
#pragma GCC diagnostic warning "-Wnon-virtual-dtor"
#endif
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif

#include "boost/python.hpp"
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "MapHelperBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list MapHelperBase_getMFKeys(OSG::MapHelperBase *self)
{
   boost::python::list result;
   OSG::MFString const * mf_data = self->getMFKeys();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_MapHelperBase_class(){

    { //::OSG::MapHelperBase
        typedef bp::class_< OSG::MapHelperBase, bp::bases< OSG::FieldContainer >, boost::noncopyable > MapHelperBase_exposer_t;
        MapHelperBase_exposer_t MapHelperBase_exposer = MapHelperBase_exposer_t( "MapHelperBase", bp::no_init );
        bp::scope MapHelperBase_scope( MapHelperBase_exposer );
        bp::scope().attr("KeysFieldId") = (int)OSG::MapHelperBase::KeysFieldId;
        bp::scope().attr("ContainerFieldId") = (int)OSG::MapHelperBase::ContainerFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::MapHelperBase::NextFieldId;
        { //::OSG::MapHelperBase::copyFromBin
        
            typedef void ( ::OSG::MapHelperBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            MapHelperBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::MapHelperBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::MapHelperBase::copyToBin
        
            typedef void ( ::OSG::MapHelperBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            MapHelperBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::MapHelperBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::MapHelperBase::create
        
            typedef ::OSG::MapHelperTransitPtr ( *create_function_type )(  );
            
            MapHelperBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::MapHelperBase::create ) );
        
        }
        { //::OSG::MapHelperBase::createDependent
        
            typedef ::OSG::MapHelperTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            MapHelperBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::MapHelperBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::MapHelperBase::createLocal
        
            typedef ::OSG::MapHelperTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            MapHelperBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::MapHelperBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::MapHelperBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::MapHelperBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            MapHelperBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::MapHelperBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::MapHelperBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            MapHelperBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::MapHelperBase::getClassGroupId ) );
        
        }
        { //::OSG::MapHelperBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            MapHelperBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::MapHelperBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::MapHelperBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            MapHelperBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::MapHelperBase::getClassTypeId ) );
        
        }
        { //::OSG::MapHelperBase::getContainer
        
            typedef ::OSG::FieldContainer * ( ::OSG::MapHelperBase::*getContainer_function_type )(  ) const;
            
            MapHelperBase_exposer.def( 
                "getContainer"
                , getContainer_function_type( &::OSG::MapHelperBase::getContainer )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MapHelperBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::MapHelperBase::*getContainerSize_function_type )(  ) const;
            
            MapHelperBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::MapHelperBase::getContainerSize ) );
        
        }
        { //::OSG::MapHelperBase::getKeys
        
            typedef ::std::string const & ( ::OSG::MapHelperBase::*getKeys_function_type )( ::OSG::UInt32 const ) const;
            
            MapHelperBase_exposer.def( 
                "getKeys"
                , getKeys_function_type( &::OSG::MapHelperBase::getKeys )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::MapHelperBase::getSFContainer
        
            typedef ::OSG::SFUnrecFieldContainerPtr const * ( ::OSG::MapHelperBase::*getSFContainer_function_type )(  ) const;
            
            MapHelperBase_exposer.def( 
                "getSFContainer"
                , getSFContainer_function_type( &::OSG::MapHelperBase::getSFContainer )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MapHelperBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::MapHelperBase::*getType_function_type )(  ) ;
            
            MapHelperBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::MapHelperBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MapHelperBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::MapHelperBase::*getType_function_type )(  ) const;
            
            MapHelperBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::MapHelperBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MapHelperBase::setContainer
        
            typedef void ( ::OSG::MapHelperBase::*setContainer_function_type )( ::OSG::FieldContainer * const ) ;
            
            MapHelperBase_exposer.def( 
                "setContainer"
                , setContainer_function_type( &::OSG::MapHelperBase::setContainer )
                , ( bp::arg("value") ) );
        
        }
        MapHelperBase_exposer.staticmethod( "create" );
        MapHelperBase_exposer.staticmethod( "createDependent" );
        MapHelperBase_exposer.staticmethod( "createLocal" );
        MapHelperBase_exposer.staticmethod( "getClassGroupId" );
        MapHelperBase_exposer.staticmethod( "getClassType" );
        MapHelperBase_exposer.staticmethod( "getClassTypeId" );
        MapHelperBase_exposer.def("getMFKeys",MapHelperBase_getMFKeys);
    }

}
