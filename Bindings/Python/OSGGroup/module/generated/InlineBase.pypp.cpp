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
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "InlineBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list InlineBase_getMFUrl(OSG::InlineBase *self)
{
   boost::python::list result;
   OSG::MFString const * mf_data = self->getMFUrl();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list InlineBase_getMFOptions(OSG::InlineBase *self)
{
   boost::python::list result;
   OSG::MFString const * mf_data = self->getMFOptions();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_InlineBase_class(){

    { //::OSG::InlineBase
        typedef bp::class_< OSG::InlineBase, bp::bases< ::OSG::RootGroup >, boost::noncopyable > InlineBase_exposer_t;
        InlineBase_exposer_t InlineBase_exposer = InlineBase_exposer_t( "InlineBase", bp::no_init );
        bp::scope InlineBase_scope( InlineBase_exposer );
        bp::scope().attr("UrlFieldId") = (int)OSG::InlineBase::UrlFieldId;
        bp::scope().attr("LoadedFieldId") = (int)OSG::InlineBase::LoadedFieldId;
        bp::scope().attr("RootFieldId") = (int)OSG::InlineBase::RootFieldId;
        bp::scope().attr("GraphOpFieldId") = (int)OSG::InlineBase::GraphOpFieldId;
        bp::scope().attr("OptionsFieldId") = (int)OSG::InlineBase::OptionsFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::InlineBase::NextFieldId;
        { //::OSG::InlineBase::copyFromBin
        
            typedef void ( ::OSG::InlineBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            InlineBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::InlineBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::InlineBase::copyToBin
        
            typedef void ( ::OSG::InlineBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            InlineBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::InlineBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::InlineBase::create
        
            typedef ::OSG::InlineTransitPtr ( *create_function_type )(  );
            
            InlineBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::InlineBase::create ) );
        
        }
        { //::OSG::InlineBase::createDependent
        
            typedef ::OSG::InlineTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            InlineBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::InlineBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::InlineBase::createLocal
        
            typedef ::OSG::InlineTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            InlineBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::InlineBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::InlineBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::InlineBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            InlineBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::InlineBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::InlineBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            InlineBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::InlineBase::getClassGroupId ) );
        
        }
        { //::OSG::InlineBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            InlineBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::InlineBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::InlineBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            InlineBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::InlineBase::getClassTypeId ) );
        
        }
        { //::OSG::InlineBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::InlineBase::*getContainerSize_function_type )(  ) const;
            
            InlineBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::InlineBase::getContainerSize ) );
        
        }
        { //::OSG::InlineBase::getGraphOp
        
            typedef ::std::string const & ( ::OSG::InlineBase::*getGraphOp_function_type )(  ) const;
            
            InlineBase_exposer.def( 
                "getGraphOp"
                , getGraphOp_function_type( &::OSG::InlineBase::getGraphOp )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::InlineBase::getLoaded
        
            typedef bool ( ::OSG::InlineBase::*getLoaded_function_type )(  ) const;
            
            InlineBase_exposer.def( 
                "getLoaded"
                , getLoaded_function_type( &::OSG::InlineBase::getLoaded ) );
        
        }
        { //::OSG::InlineBase::getOptions
        
            typedef ::std::string const & ( ::OSG::InlineBase::*getOptions_function_type )( ::OSG::UInt32 const ) const;
            
            InlineBase_exposer.def( 
                "getOptions"
                , getOptions_function_type( &::OSG::InlineBase::getOptions )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::InlineBase::getSFGraphOp
        
            typedef ::OSG::SFString const * ( ::OSG::InlineBase::*getSFGraphOp_function_type )(  ) const;
            
            InlineBase_exposer.def( 
                "getSFGraphOp"
                , getSFGraphOp_function_type( &::OSG::InlineBase::getSFGraphOp )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::InlineBase::getSFLoaded
        
            typedef ::OSG::SFBool const * ( ::OSG::InlineBase::*getSFLoaded_function_type )(  ) const;
            
            InlineBase_exposer.def( 
                "getSFLoaded"
                , getSFLoaded_function_type( &::OSG::InlineBase::getSFLoaded )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::InlineBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::InlineBase::*getType_function_type )(  ) ;
            
            InlineBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::InlineBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::InlineBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::InlineBase::*getType_function_type )(  ) const;
            
            InlineBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::InlineBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::InlineBase::getUrl
        
            typedef ::std::string const & ( ::OSG::InlineBase::*getUrl_function_type )( ::OSG::UInt32 const ) const;
            
            InlineBase_exposer.def( 
                "getUrl"
                , getUrl_function_type( &::OSG::InlineBase::getUrl )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::InlineBase::setGraphOp
        
            typedef void ( ::OSG::InlineBase::*setGraphOp_function_type )( ::std::string const & ) ;
            
            InlineBase_exposer.def( 
                "setGraphOp"
                , setGraphOp_function_type( &::OSG::InlineBase::setGraphOp )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::InlineBase::setLoaded
        
            typedef void ( ::OSG::InlineBase::*setLoaded_function_type )( bool const ) ;
            
            InlineBase_exposer.def( 
                "setLoaded"
                , setLoaded_function_type( &::OSG::InlineBase::setLoaded )
                , ( bp::arg("value") ) );
        
        }
        InlineBase_exposer.staticmethod( "create" );
        InlineBase_exposer.staticmethod( "createDependent" );
        InlineBase_exposer.staticmethod( "createLocal" );
        InlineBase_exposer.staticmethod( "getClassGroupId" );
        InlineBase_exposer.staticmethod( "getClassType" );
        InlineBase_exposer.staticmethod( "getClassTypeId" );
        InlineBase_exposer.def("getMFUrl",InlineBase_getMFUrl);
        InlineBase_exposer.def("getMFOptions",InlineBase_getMFOptions);
    }

}
