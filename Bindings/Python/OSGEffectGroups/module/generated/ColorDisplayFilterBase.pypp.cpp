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
#include "ColorDisplayFilterBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list ColorDisplayFilterBase_getMFColorTable(OSG::ColorDisplayFilterBase *self)
{
   boost::python::list result;
   OSG::MFColor3f const * mf_data = self->getMFColorTable();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_ColorDisplayFilterBase_class(){

    { //::OSG::ColorDisplayFilterBase
        typedef bp::class_< OSG::ColorDisplayFilterBase, bp::bases< OSG::DisplayFilter >, boost::noncopyable > ColorDisplayFilterBase_exposer_t;
        ColorDisplayFilterBase_exposer_t ColorDisplayFilterBase_exposer = ColorDisplayFilterBase_exposer_t( "ColorDisplayFilterBase", bp::no_init );
        bp::scope ColorDisplayFilterBase_scope( ColorDisplayFilterBase_exposer );
        bp::scope().attr("GammaFieldId") = (int)OSG::ColorDisplayFilterBase::GammaFieldId;
        bp::scope().attr("MatrixFieldId") = (int)OSG::ColorDisplayFilterBase::MatrixFieldId;
        bp::scope().attr("ColorTableWidthFieldId") = (int)OSG::ColorDisplayFilterBase::ColorTableWidthFieldId;
        bp::scope().attr("ColorTableHeightFieldId") = (int)OSG::ColorDisplayFilterBase::ColorTableHeightFieldId;
        bp::scope().attr("ColorTableDepthFieldId") = (int)OSG::ColorDisplayFilterBase::ColorTableDepthFieldId;
        bp::scope().attr("ColorTableFieldId") = (int)OSG::ColorDisplayFilterBase::ColorTableFieldId;
        bp::scope().attr("TableImageFieldId") = (int)OSG::ColorDisplayFilterBase::TableImageFieldId;
        bp::scope().attr("FilterShaderFieldId") = (int)OSG::ColorDisplayFilterBase::FilterShaderFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ColorDisplayFilterBase::NextFieldId;
        { //::OSG::ColorDisplayFilterBase::copyFromBin
        
            typedef void ( ::OSG::ColorDisplayFilterBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ColorDisplayFilterBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ColorDisplayFilterBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ColorDisplayFilterBase::copyToBin
        
            typedef void ( ::OSG::ColorDisplayFilterBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ColorDisplayFilterBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ColorDisplayFilterBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ColorDisplayFilterBase::create
        
            typedef ::OSG::ColorDisplayFilterTransitPtr ( *create_function_type )(  );
            
            ColorDisplayFilterBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ColorDisplayFilterBase::create ) );
        
        }
        { //::OSG::ColorDisplayFilterBase::createDependent
        
            typedef ::OSG::ColorDisplayFilterTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ColorDisplayFilterBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ColorDisplayFilterBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ColorDisplayFilterBase::createLocal
        
            typedef ::OSG::ColorDisplayFilterTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ColorDisplayFilterBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ColorDisplayFilterBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ColorDisplayFilterBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ColorDisplayFilterBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ColorDisplayFilterBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ColorDisplayFilterBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ColorDisplayFilterBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ColorDisplayFilterBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ColorDisplayFilterBase::getClassGroupId ) );
        
        }
        { //::OSG::ColorDisplayFilterBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ColorDisplayFilterBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ColorDisplayFilterBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ColorDisplayFilterBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ColorDisplayFilterBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ColorDisplayFilterBase::getClassTypeId ) );
        
        }
        { //::OSG::ColorDisplayFilterBase::getColorTable
        
            typedef ::OSG::Color3f const & ( ::OSG::ColorDisplayFilterBase::*getColorTable_function_type )( ::OSG::UInt32 const ) const;
            
            ColorDisplayFilterBase_exposer.def( 
                "getColorTable"
                , getColorTable_function_type( &::OSG::ColorDisplayFilterBase::getColorTable )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::ColorDisplayFilterBase::getColorTableDepth
        
            typedef ::OSG::UInt32 ( ::OSG::ColorDisplayFilterBase::*getColorTableDepth_function_type )(  ) const;
            
            ColorDisplayFilterBase_exposer.def( 
                "getColorTableDepth"
                , getColorTableDepth_function_type( &::OSG::ColorDisplayFilterBase::getColorTableDepth ) );
        
        }
        { //::OSG::ColorDisplayFilterBase::getColorTableHeight
        
            typedef ::OSG::UInt32 ( ::OSG::ColorDisplayFilterBase::*getColorTableHeight_function_type )(  ) const;
            
            ColorDisplayFilterBase_exposer.def( 
                "getColorTableHeight"
                , getColorTableHeight_function_type( &::OSG::ColorDisplayFilterBase::getColorTableHeight ) );
        
        }
        { //::OSG::ColorDisplayFilterBase::getColorTableWidth
        
            typedef ::OSG::UInt32 ( ::OSG::ColorDisplayFilterBase::*getColorTableWidth_function_type )(  ) const;
            
            ColorDisplayFilterBase_exposer.def( 
                "getColorTableWidth"
                , getColorTableWidth_function_type( &::OSG::ColorDisplayFilterBase::getColorTableWidth ) );
        
        }
        { //::OSG::ColorDisplayFilterBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ColorDisplayFilterBase::*getContainerSize_function_type )(  ) const;
            
            ColorDisplayFilterBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ColorDisplayFilterBase::getContainerSize ) );
        
        }
        { //::OSG::ColorDisplayFilterBase::getGamma
        
            typedef ::OSG::Real32 ( ::OSG::ColorDisplayFilterBase::*getGamma_function_type )(  ) const;
            
            ColorDisplayFilterBase_exposer.def( 
                "getGamma"
                , getGamma_function_type( &::OSG::ColorDisplayFilterBase::getGamma ) );
        
        }
        { //::OSG::ColorDisplayFilterBase::getMatrix
        
            typedef ::OSG::Matrix const & ( ::OSG::ColorDisplayFilterBase::*getMatrix_function_type )(  ) const;
            
            ColorDisplayFilterBase_exposer.def( 
                "getMatrix"
                , getMatrix_function_type( &::OSG::ColorDisplayFilterBase::getMatrix )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::ColorDisplayFilterBase::getSFColorTableDepth
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::ColorDisplayFilterBase::*getSFColorTableDepth_function_type )(  ) const;
            
            ColorDisplayFilterBase_exposer.def( 
                "getSFColorTableDepth"
                , getSFColorTableDepth_function_type( &::OSG::ColorDisplayFilterBase::getSFColorTableDepth )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ColorDisplayFilterBase::getSFColorTableHeight
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::ColorDisplayFilterBase::*getSFColorTableHeight_function_type )(  ) const;
            
            ColorDisplayFilterBase_exposer.def( 
                "getSFColorTableHeight"
                , getSFColorTableHeight_function_type( &::OSG::ColorDisplayFilterBase::getSFColorTableHeight )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ColorDisplayFilterBase::getSFColorTableWidth
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::ColorDisplayFilterBase::*getSFColorTableWidth_function_type )(  ) const;
            
            ColorDisplayFilterBase_exposer.def( 
                "getSFColorTableWidth"
                , getSFColorTableWidth_function_type( &::OSG::ColorDisplayFilterBase::getSFColorTableWidth )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ColorDisplayFilterBase::getSFGamma
        
            typedef ::OSG::SFReal32 const * ( ::OSG::ColorDisplayFilterBase::*getSFGamma_function_type )(  ) const;
            
            ColorDisplayFilterBase_exposer.def( 
                "getSFGamma"
                , getSFGamma_function_type( &::OSG::ColorDisplayFilterBase::getSFGamma )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ColorDisplayFilterBase::getSFMatrix
        
            typedef ::OSG::SFMatrix const * ( ::OSG::ColorDisplayFilterBase::*getSFMatrix_function_type )(  ) const;
            
            ColorDisplayFilterBase_exposer.def( 
                "getSFMatrix"
                , getSFMatrix_function_type( &::OSG::ColorDisplayFilterBase::getSFMatrix )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ColorDisplayFilterBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ColorDisplayFilterBase::*getType_function_type )(  ) ;
            
            ColorDisplayFilterBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ColorDisplayFilterBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ColorDisplayFilterBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ColorDisplayFilterBase::*getType_function_type )(  ) const;
            
            ColorDisplayFilterBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ColorDisplayFilterBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ColorDisplayFilterBase::setColorTableDepth
        
            typedef void ( ::OSG::ColorDisplayFilterBase::*setColorTableDepth_function_type )( ::OSG::UInt32 const ) ;
            
            ColorDisplayFilterBase_exposer.def( 
                "setColorTableDepth"
                , setColorTableDepth_function_type( &::OSG::ColorDisplayFilterBase::setColorTableDepth )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ColorDisplayFilterBase::setColorTableHeight
        
            typedef void ( ::OSG::ColorDisplayFilterBase::*setColorTableHeight_function_type )( ::OSG::UInt32 const ) ;
            
            ColorDisplayFilterBase_exposer.def( 
                "setColorTableHeight"
                , setColorTableHeight_function_type( &::OSG::ColorDisplayFilterBase::setColorTableHeight )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ColorDisplayFilterBase::setColorTableWidth
        
            typedef void ( ::OSG::ColorDisplayFilterBase::*setColorTableWidth_function_type )( ::OSG::UInt32 const ) ;
            
            ColorDisplayFilterBase_exposer.def( 
                "setColorTableWidth"
                , setColorTableWidth_function_type( &::OSG::ColorDisplayFilterBase::setColorTableWidth )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ColorDisplayFilterBase::setGamma
        
            typedef void ( ::OSG::ColorDisplayFilterBase::*setGamma_function_type )( ::OSG::Real32 const ) ;
            
            ColorDisplayFilterBase_exposer.def( 
                "setGamma"
                , setGamma_function_type( &::OSG::ColorDisplayFilterBase::setGamma )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ColorDisplayFilterBase::setMatrix
        
            typedef void ( ::OSG::ColorDisplayFilterBase::*setMatrix_function_type )( ::OSG::Matrix const & ) ;
            
            ColorDisplayFilterBase_exposer.def( 
                "setMatrix"
                , setMatrix_function_type( &::OSG::ColorDisplayFilterBase::setMatrix )
                , ( bp::arg("value") ) );
        
        }
        ColorDisplayFilterBase_exposer.staticmethod( "create" );
        ColorDisplayFilterBase_exposer.staticmethod( "createDependent" );
        ColorDisplayFilterBase_exposer.staticmethod( "createLocal" );
        ColorDisplayFilterBase_exposer.staticmethod( "getClassGroupId" );
        ColorDisplayFilterBase_exposer.staticmethod( "getClassType" );
        ColorDisplayFilterBase_exposer.staticmethod( "getClassTypeId" );
        ColorDisplayFilterBase_exposer.def("getMFColorTable",ColorDisplayFilterBase_getMFColorTable);
    }

}
