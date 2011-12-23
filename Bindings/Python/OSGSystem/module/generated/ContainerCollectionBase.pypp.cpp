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
#include "ContainerCollectionBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list ContainerCollectionBase_getMFContainers(OSG::ContainerCollectionBase *self)
{
   boost::python::list result;
   OSG::MFUnrecFieldContainerPtr const * mf_data = self->getMFContainers();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_ContainerCollectionBase_class(){

    { //::OSG::ContainerCollectionBase
        typedef bp::class_< OSG::ContainerCollectionBase, bp::bases< ::OSG::Attachment >, boost::noncopyable > ContainerCollectionBase_exposer_t;
        ContainerCollectionBase_exposer_t ContainerCollectionBase_exposer = ContainerCollectionBase_exposer_t( "ContainerCollectionBase", bp::no_init );
        bp::scope ContainerCollectionBase_scope( ContainerCollectionBase_exposer );
        bp::scope().attr("NameFieldId") = (int)OSG::ContainerCollectionBase::NameFieldId;
        bp::scope().attr("ContainersFieldId") = (int)OSG::ContainerCollectionBase::ContainersFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ContainerCollectionBase::NextFieldId;
        { //::OSG::ContainerCollectionBase::assignContainers
        
            typedef void ( ::OSG::ContainerCollectionBase::*assignContainers_function_type )( ::OSG::MFUnrecFieldContainerPtr const & ) ;
            
            ContainerCollectionBase_exposer.def( 
                "assignContainers"
                , assignContainers_function_type( &::OSG::ContainerCollectionBase::assignContainers )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ContainerCollectionBase::clearContainers
        
            typedef void ( ::OSG::ContainerCollectionBase::*clearContainers_function_type )(  ) ;
            
            ContainerCollectionBase_exposer.def( 
                "clearContainers"
                , clearContainers_function_type( &::OSG::ContainerCollectionBase::clearContainers ) );
        
        }
        { //::OSG::ContainerCollectionBase::copyFromBin
        
            typedef void ( ::OSG::ContainerCollectionBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ContainerCollectionBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ContainerCollectionBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ContainerCollectionBase::copyToBin
        
            typedef void ( ::OSG::ContainerCollectionBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ContainerCollectionBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ContainerCollectionBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ContainerCollectionBase::create
        
            typedef ::OSG::ContainerCollectionTransitPtr ( *create_function_type )(  );
            
            ContainerCollectionBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ContainerCollectionBase::create ) );
        
        }
        { //::OSG::ContainerCollectionBase::createDependent
        
            typedef ::OSG::ContainerCollectionTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ContainerCollectionBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ContainerCollectionBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ContainerCollectionBase::createLocal
        
            typedef ::OSG::ContainerCollectionTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ContainerCollectionBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ContainerCollectionBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ContainerCollectionBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ContainerCollectionBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ContainerCollectionBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ContainerCollectionBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ContainerCollectionBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ContainerCollectionBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ContainerCollectionBase::getClassGroupId ) );
        
        }
        { //::OSG::ContainerCollectionBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ContainerCollectionBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ContainerCollectionBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ContainerCollectionBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ContainerCollectionBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ContainerCollectionBase::getClassTypeId ) );
        
        }
        { //::OSG::ContainerCollectionBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ContainerCollectionBase::*getContainerSize_function_type )(  ) const;
            
            ContainerCollectionBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ContainerCollectionBase::getContainerSize ) );
        
        }
        { //::OSG::ContainerCollectionBase::getContainers
        
            typedef ::OSG::FieldContainer * ( ::OSG::ContainerCollectionBase::*getContainers_function_type )( ::OSG::UInt32 const ) const;
            
            ContainerCollectionBase_exposer.def( 
                "getContainers"
                , getContainers_function_type( &::OSG::ContainerCollectionBase::getContainers )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ContainerCollectionBase::getName
        
            typedef ::std::string const & ( ::OSG::ContainerCollectionBase::*getName_function_type )(  ) const;
            
            ContainerCollectionBase_exposer.def( 
                "getName"
                , getName_function_type( &::OSG::ContainerCollectionBase::getName )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::ContainerCollectionBase::getSFName
        
            typedef ::OSG::SFString const * ( ::OSG::ContainerCollectionBase::*getSFName_function_type )(  ) const;
            
            ContainerCollectionBase_exposer.def( 
                "getSFName"
                , getSFName_function_type( &::OSG::ContainerCollectionBase::getSFName )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ContainerCollectionBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ContainerCollectionBase::*getType_function_type )(  ) ;
            
            ContainerCollectionBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ContainerCollectionBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ContainerCollectionBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ContainerCollectionBase::*getType_function_type )(  ) const;
            
            ContainerCollectionBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ContainerCollectionBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ContainerCollectionBase::pushToContainers
        
            typedef void ( ::OSG::ContainerCollectionBase::*pushToContainers_function_type )( ::OSG::FieldContainer * const ) ;
            
            ContainerCollectionBase_exposer.def( 
                "pushToContainers"
                , pushToContainers_function_type( &::OSG::ContainerCollectionBase::pushToContainers )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ContainerCollectionBase::removeFromContainers
        
            typedef void ( ::OSG::ContainerCollectionBase::*removeFromContainers_function_type )( ::OSG::UInt32 ) ;
            
            ContainerCollectionBase_exposer.def( 
                "removeFromContainers"
                , removeFromContainers_function_type( &::OSG::ContainerCollectionBase::removeFromContainers )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::ContainerCollectionBase::removeObjFromContainers
        
            typedef void ( ::OSG::ContainerCollectionBase::*removeObjFromContainers_function_type )( ::OSG::FieldContainer * const ) ;
            
            ContainerCollectionBase_exposer.def( 
                "removeObjFromContainers"
                , removeObjFromContainers_function_type( &::OSG::ContainerCollectionBase::removeObjFromContainers )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ContainerCollectionBase::setName
        
            typedef void ( ::OSG::ContainerCollectionBase::*setName_function_type )( ::std::string const & ) ;
            
            ContainerCollectionBase_exposer.def( 
                "setName"
                , setName_function_type( &::OSG::ContainerCollectionBase::setName )
                , ( bp::arg("value") ) );
        
        }
        ContainerCollectionBase_exposer.staticmethod( "create" );
        ContainerCollectionBase_exposer.staticmethod( "createDependent" );
        ContainerCollectionBase_exposer.staticmethod( "createLocal" );
        ContainerCollectionBase_exposer.staticmethod( "getClassGroupId" );
        ContainerCollectionBase_exposer.staticmethod( "getClassType" );
        ContainerCollectionBase_exposer.staticmethod( "getClassTypeId" );
        ContainerCollectionBase_exposer.def("getMFContainers",ContainerCollectionBase_getMFContainers);
    }

}
