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
#include "OSGEffectGroups_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "DistortionDisplayFilterBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list DistortionDisplayFilterBase_getMFPositions(OSG::DistortionDisplayFilterBase *self)
{
   boost::python::list result;
   OSG::MFVec2f const * mf_data = self->getMFPositions();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_DistortionDisplayFilterBase_class(){

    { //::OSG::DistortionDisplayFilterBase
        typedef bp::class_< OSG::DistortionDisplayFilterBase, bp::bases< OSG::DisplayFilter >, boost::noncopyable > DistortionDisplayFilterBase_exposer_t;
        DistortionDisplayFilterBase_exposer_t DistortionDisplayFilterBase_exposer = DistortionDisplayFilterBase_exposer_t( "DistortionDisplayFilterBase", bp::no_init );
        bp::scope DistortionDisplayFilterBase_scope( DistortionDisplayFilterBase_exposer );
        bp::scope().attr("RowsFieldId") = (int)OSG::DistortionDisplayFilterBase::RowsFieldId;
        bp::scope().attr("ColumnsFieldId") = (int)OSG::DistortionDisplayFilterBase::ColumnsFieldId;
        bp::scope().attr("PositionsFieldId") = (int)OSG::DistortionDisplayFilterBase::PositionsFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::DistortionDisplayFilterBase::NextFieldId;
        { //::OSG::DistortionDisplayFilterBase::copyFromBin
        
            typedef void ( ::OSG::DistortionDisplayFilterBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            DistortionDisplayFilterBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::DistortionDisplayFilterBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::DistortionDisplayFilterBase::copyToBin
        
            typedef void ( ::OSG::DistortionDisplayFilterBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            DistortionDisplayFilterBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::DistortionDisplayFilterBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::DistortionDisplayFilterBase::create
        
            typedef ::OSG::DistortionDisplayFilterTransitPtr ( *create_function_type )(  );
            
            DistortionDisplayFilterBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::DistortionDisplayFilterBase::create ) );
        
        }
        { //::OSG::DistortionDisplayFilterBase::createDependent
        
            typedef ::OSG::DistortionDisplayFilterTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            DistortionDisplayFilterBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::DistortionDisplayFilterBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::DistortionDisplayFilterBase::createLocal
        
            typedef ::OSG::DistortionDisplayFilterTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            DistortionDisplayFilterBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::DistortionDisplayFilterBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::DistortionDisplayFilterBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::DistortionDisplayFilterBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            DistortionDisplayFilterBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::DistortionDisplayFilterBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::DistortionDisplayFilterBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            DistortionDisplayFilterBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::DistortionDisplayFilterBase::getClassGroupId ) );
        
        }
        { //::OSG::DistortionDisplayFilterBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            DistortionDisplayFilterBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::DistortionDisplayFilterBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::DistortionDisplayFilterBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            DistortionDisplayFilterBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::DistortionDisplayFilterBase::getClassTypeId ) );
        
        }
        { //::OSG::DistortionDisplayFilterBase::getColumns
        
            typedef ::OSG::UInt32 ( ::OSG::DistortionDisplayFilterBase::*getColumns_function_type )(  ) const;
            
            DistortionDisplayFilterBase_exposer.def( 
                "getColumns"
                , getColumns_function_type( &::OSG::DistortionDisplayFilterBase::getColumns ) );
        
        }
        { //::OSG::DistortionDisplayFilterBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::DistortionDisplayFilterBase::*getContainerSize_function_type )(  ) const;
            
            DistortionDisplayFilterBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::DistortionDisplayFilterBase::getContainerSize ) );
        
        }
        { //::OSG::DistortionDisplayFilterBase::getPositions
        
            typedef ::OSG::Vec2f const & ( ::OSG::DistortionDisplayFilterBase::*getPositions_function_type )( ::OSG::UInt32 const ) const;
            
            DistortionDisplayFilterBase_exposer.def( 
                "getPositions"
                , getPositions_function_type( &::OSG::DistortionDisplayFilterBase::getPositions )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::DistortionDisplayFilterBase::getRows
        
            typedef ::OSG::UInt32 ( ::OSG::DistortionDisplayFilterBase::*getRows_function_type )(  ) const;
            
            DistortionDisplayFilterBase_exposer.def( 
                "getRows"
                , getRows_function_type( &::OSG::DistortionDisplayFilterBase::getRows ) );
        
        }
        { //::OSG::DistortionDisplayFilterBase::getSFColumns
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::DistortionDisplayFilterBase::*getSFColumns_function_type )(  ) const;
            
            DistortionDisplayFilterBase_exposer.def( 
                "getSFColumns"
                , getSFColumns_function_type( &::OSG::DistortionDisplayFilterBase::getSFColumns )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DistortionDisplayFilterBase::getSFRows
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::DistortionDisplayFilterBase::*getSFRows_function_type )(  ) const;
            
            DistortionDisplayFilterBase_exposer.def( 
                "getSFRows"
                , getSFRows_function_type( &::OSG::DistortionDisplayFilterBase::getSFRows )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DistortionDisplayFilterBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::DistortionDisplayFilterBase::*getType_function_type )(  ) ;
            
            DistortionDisplayFilterBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::DistortionDisplayFilterBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DistortionDisplayFilterBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::DistortionDisplayFilterBase::*getType_function_type )(  ) const;
            
            DistortionDisplayFilterBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::DistortionDisplayFilterBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DistortionDisplayFilterBase::setColumns
        
            typedef void ( ::OSG::DistortionDisplayFilterBase::*setColumns_function_type )( ::OSG::UInt32 const ) ;
            
            DistortionDisplayFilterBase_exposer.def( 
                "setColumns"
                , setColumns_function_type( &::OSG::DistortionDisplayFilterBase::setColumns )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::DistortionDisplayFilterBase::setRows
        
            typedef void ( ::OSG::DistortionDisplayFilterBase::*setRows_function_type )( ::OSG::UInt32 const ) ;
            
            DistortionDisplayFilterBase_exposer.def( 
                "setRows"
                , setRows_function_type( &::OSG::DistortionDisplayFilterBase::setRows )
                , ( bp::arg("value") ) );
        
        }
        DistortionDisplayFilterBase_exposer.staticmethod( "create" );
        DistortionDisplayFilterBase_exposer.staticmethod( "createDependent" );
        DistortionDisplayFilterBase_exposer.staticmethod( "createLocal" );
        DistortionDisplayFilterBase_exposer.staticmethod( "getClassGroupId" );
        DistortionDisplayFilterBase_exposer.staticmethod( "getClassType" );
        DistortionDisplayFilterBase_exposer.staticmethod( "getClassTypeId" );
        DistortionDisplayFilterBase_exposer.def("getMFPositions",DistortionDisplayFilterBase_getMFPositions);
    }

}
