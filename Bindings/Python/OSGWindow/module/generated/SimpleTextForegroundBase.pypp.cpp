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
#include "OSGWindow_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SimpleTextForegroundBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list SimpleTextForegroundBase_getMFLines(OSG::SimpleTextForegroundBase *self)
{
   boost::python::list result;
   OSG::MFString const * mf_data = self->getMFLines();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_SimpleTextForegroundBase_class(){

    { //::OSG::SimpleTextForegroundBase
        typedef bp::class_< OSG::SimpleTextForegroundBase, bp::bases< ::OSG::Foreground >, boost::noncopyable > SimpleTextForegroundBase_exposer_t;
        SimpleTextForegroundBase_exposer_t SimpleTextForegroundBase_exposer = SimpleTextForegroundBase_exposer_t( "SimpleTextForegroundBase", bp::no_init );
        bp::scope SimpleTextForegroundBase_scope( SimpleTextForegroundBase_exposer );
        bp::scope().attr("LinesFieldId") = (int)OSG::SimpleTextForegroundBase::LinesFieldId;
        bp::scope().attr("SizeFieldId") = (int)OSG::SimpleTextForegroundBase::SizeFieldId;
        bp::scope().attr("ColorFieldId") = (int)OSG::SimpleTextForegroundBase::ColorFieldId;
        bp::scope().attr("ShadowColorFieldId") = (int)OSG::SimpleTextForegroundBase::ShadowColorFieldId;
        bp::scope().attr("BgColorFieldId") = (int)OSG::SimpleTextForegroundBase::BgColorFieldId;
        bp::scope().attr("FamilyFieldId") = (int)OSG::SimpleTextForegroundBase::FamilyFieldId;
        bp::scope().attr("ShadowOffsetFieldId") = (int)OSG::SimpleTextForegroundBase::ShadowOffsetFieldId;
        bp::scope().attr("HorizontalAlignFieldId") = (int)OSG::SimpleTextForegroundBase::HorizontalAlignFieldId;
        bp::scope().attr("VerticalAlignFieldId") = (int)OSG::SimpleTextForegroundBase::VerticalAlignFieldId;
        bp::scope().attr("BorderColorFieldId") = (int)OSG::SimpleTextForegroundBase::BorderColorFieldId;
        bp::scope().attr("BorderOffsetFieldId") = (int)OSG::SimpleTextForegroundBase::BorderOffsetFieldId;
        bp::scope().attr("TextMarginFieldId") = (int)OSG::SimpleTextForegroundBase::TextMarginFieldId;
        bp::scope().attr("TileFieldId") = (int)OSG::SimpleTextForegroundBase::TileFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::SimpleTextForegroundBase::NextFieldId;
        { //::OSG::SimpleTextForegroundBase::copyFromBin
        
            typedef void ( ::OSG::SimpleTextForegroundBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SimpleTextForegroundBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::SimpleTextForegroundBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::copyToBin
        
            typedef void ( ::OSG::SimpleTextForegroundBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SimpleTextForegroundBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::SimpleTextForegroundBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::create
        
            typedef ::OSG::SimpleTextForegroundTransitPtr ( *create_function_type )(  );
            
            SimpleTextForegroundBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::SimpleTextForegroundBase::create ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::createDependent
        
            typedef ::OSG::SimpleTextForegroundTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            SimpleTextForegroundBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::SimpleTextForegroundBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::createLocal
        
            typedef ::OSG::SimpleTextForegroundTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            SimpleTextForegroundBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::SimpleTextForegroundBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::getBgColor
        
            typedef ::OSG::Color4f const & ( ::OSG::SimpleTextForegroundBase::*getBgColor_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getBgColor"
                , getBgColor_function_type( &::OSG::SimpleTextForegroundBase::getBgColor )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::SimpleTextForegroundBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            SimpleTextForegroundBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::SimpleTextForegroundBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::getBorderColor
        
            typedef ::OSG::Color4f const & ( ::OSG::SimpleTextForegroundBase::*getBorderColor_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getBorderColor"
                , getBorderColor_function_type( &::OSG::SimpleTextForegroundBase::getBorderColor )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getBorderOffset
        
            typedef ::OSG::Vec2f const & ( ::OSG::SimpleTextForegroundBase::*getBorderOffset_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getBorderOffset"
                , getBorderOffset_function_type( &::OSG::SimpleTextForegroundBase::getBorderOffset )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            SimpleTextForegroundBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::SimpleTextForegroundBase::getClassGroupId ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            SimpleTextForegroundBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::SimpleTextForegroundBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            SimpleTextForegroundBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::SimpleTextForegroundBase::getClassTypeId ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::getColor
        
            typedef ::OSG::Color4f const & ( ::OSG::SimpleTextForegroundBase::*getColor_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getColor"
                , getColor_function_type( &::OSG::SimpleTextForegroundBase::getColor )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::SimpleTextForegroundBase::*getContainerSize_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::SimpleTextForegroundBase::getContainerSize ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::getFamily
        
            typedef ::std::string const & ( ::OSG::SimpleTextForegroundBase::*getFamily_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getFamily"
                , getFamily_function_type( &::OSG::SimpleTextForegroundBase::getFamily )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getHorizontalAlign
        
            typedef ::OSG::UInt8 ( ::OSG::SimpleTextForegroundBase::*getHorizontalAlign_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getHorizontalAlign"
                , getHorizontalAlign_function_type( &::OSG::SimpleTextForegroundBase::getHorizontalAlign ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::getLines
        
            typedef ::std::string const & ( ::OSG::SimpleTextForegroundBase::*getLines_function_type )( ::OSG::UInt32 const ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getLines"
                , getLines_function_type( &::OSG::SimpleTextForegroundBase::getLines )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getSFBgColor
        
            typedef ::OSG::SFColor4f const * ( ::OSG::SimpleTextForegroundBase::*getSFBgColor_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getSFBgColor"
                , getSFBgColor_function_type( &::OSG::SimpleTextForegroundBase::getSFBgColor )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getSFBorderColor
        
            typedef ::OSG::SFColor4f const * ( ::OSG::SimpleTextForegroundBase::*getSFBorderColor_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getSFBorderColor"
                , getSFBorderColor_function_type( &::OSG::SimpleTextForegroundBase::getSFBorderColor )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getSFBorderOffset
        
            typedef ::OSG::SFVec2f const * ( ::OSG::SimpleTextForegroundBase::*getSFBorderOffset_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getSFBorderOffset"
                , getSFBorderOffset_function_type( &::OSG::SimpleTextForegroundBase::getSFBorderOffset )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getSFColor
        
            typedef ::OSG::SFColor4f const * ( ::OSG::SimpleTextForegroundBase::*getSFColor_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getSFColor"
                , getSFColor_function_type( &::OSG::SimpleTextForegroundBase::getSFColor )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getSFFamily
        
            typedef ::OSG::SFString const * ( ::OSG::SimpleTextForegroundBase::*getSFFamily_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getSFFamily"
                , getSFFamily_function_type( &::OSG::SimpleTextForegroundBase::getSFFamily )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getSFHorizontalAlign
        
            typedef ::OSG::SFUInt8 const * ( ::OSG::SimpleTextForegroundBase::*getSFHorizontalAlign_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getSFHorizontalAlign"
                , getSFHorizontalAlign_function_type( &::OSG::SimpleTextForegroundBase::getSFHorizontalAlign )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getSFShadowColor
        
            typedef ::OSG::SFColor4f const * ( ::OSG::SimpleTextForegroundBase::*getSFShadowColor_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getSFShadowColor"
                , getSFShadowColor_function_type( &::OSG::SimpleTextForegroundBase::getSFShadowColor )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getSFShadowOffset
        
            typedef ::OSG::SFVec2f const * ( ::OSG::SimpleTextForegroundBase::*getSFShadowOffset_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getSFShadowOffset"
                , getSFShadowOffset_function_type( &::OSG::SimpleTextForegroundBase::getSFShadowOffset )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getSFSize
        
            typedef ::OSG::SFReal32 const * ( ::OSG::SimpleTextForegroundBase::*getSFSize_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getSFSize"
                , getSFSize_function_type( &::OSG::SimpleTextForegroundBase::getSFSize )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getSFTextMargin
        
            typedef ::OSG::SFVec2f const * ( ::OSG::SimpleTextForegroundBase::*getSFTextMargin_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getSFTextMargin"
                , getSFTextMargin_function_type( &::OSG::SimpleTextForegroundBase::getSFTextMargin )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getSFTile
        
            typedef ::OSG::SFBool const * ( ::OSG::SimpleTextForegroundBase::*getSFTile_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getSFTile"
                , getSFTile_function_type( &::OSG::SimpleTextForegroundBase::getSFTile )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getSFVerticalAlign
        
            typedef ::OSG::SFUInt8 const * ( ::OSG::SimpleTextForegroundBase::*getSFVerticalAlign_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getSFVerticalAlign"
                , getSFVerticalAlign_function_type( &::OSG::SimpleTextForegroundBase::getSFVerticalAlign )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getShadowColor
        
            typedef ::OSG::Color4f const & ( ::OSG::SimpleTextForegroundBase::*getShadowColor_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getShadowColor"
                , getShadowColor_function_type( &::OSG::SimpleTextForegroundBase::getShadowColor )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getShadowOffset
        
            typedef ::OSG::Vec2f const & ( ::OSG::SimpleTextForegroundBase::*getShadowOffset_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getShadowOffset"
                , getShadowOffset_function_type( &::OSG::SimpleTextForegroundBase::getShadowOffset )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getSize
        
            typedef ::OSG::Real32 ( ::OSG::SimpleTextForegroundBase::*getSize_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getSize"
                , getSize_function_type( &::OSG::SimpleTextForegroundBase::getSize ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::getTextMargin
        
            typedef ::OSG::Vec2f const & ( ::OSG::SimpleTextForegroundBase::*getTextMargin_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getTextMargin"
                , getTextMargin_function_type( &::OSG::SimpleTextForegroundBase::getTextMargin )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getTile
        
            typedef bool ( ::OSG::SimpleTextForegroundBase::*getTile_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getTile"
                , getTile_function_type( &::OSG::SimpleTextForegroundBase::getTile ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::SimpleTextForegroundBase::*getType_function_type )(  ) ;
            
            SimpleTextForegroundBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SimpleTextForegroundBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::SimpleTextForegroundBase::*getType_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SimpleTextForegroundBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleTextForegroundBase::getVerticalAlign
        
            typedef ::OSG::UInt8 ( ::OSG::SimpleTextForegroundBase::*getVerticalAlign_function_type )(  ) const;
            
            SimpleTextForegroundBase_exposer.def( 
                "getVerticalAlign"
                , getVerticalAlign_function_type( &::OSG::SimpleTextForegroundBase::getVerticalAlign ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::setBgColor
        
            typedef void ( ::OSG::SimpleTextForegroundBase::*setBgColor_function_type )( ::OSG::Color4f const & ) ;
            
            SimpleTextForegroundBase_exposer.def( 
                "setBgColor"
                , setBgColor_function_type( &::OSG::SimpleTextForegroundBase::setBgColor )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::setBorderColor
        
            typedef void ( ::OSG::SimpleTextForegroundBase::*setBorderColor_function_type )( ::OSG::Color4f const & ) ;
            
            SimpleTextForegroundBase_exposer.def( 
                "setBorderColor"
                , setBorderColor_function_type( &::OSG::SimpleTextForegroundBase::setBorderColor )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::setBorderOffset
        
            typedef void ( ::OSG::SimpleTextForegroundBase::*setBorderOffset_function_type )( ::OSG::Vec2f const & ) ;
            
            SimpleTextForegroundBase_exposer.def( 
                "setBorderOffset"
                , setBorderOffset_function_type( &::OSG::SimpleTextForegroundBase::setBorderOffset )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::setColor
        
            typedef void ( ::OSG::SimpleTextForegroundBase::*setColor_function_type )( ::OSG::Color4f const & ) ;
            
            SimpleTextForegroundBase_exposer.def( 
                "setColor"
                , setColor_function_type( &::OSG::SimpleTextForegroundBase::setColor )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::setFamily
        
            typedef void ( ::OSG::SimpleTextForegroundBase::*setFamily_function_type )( ::std::string const & ) ;
            
            SimpleTextForegroundBase_exposer.def( 
                "setFamily"
                , setFamily_function_type( &::OSG::SimpleTextForegroundBase::setFamily )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::setHorizontalAlign
        
            typedef void ( ::OSG::SimpleTextForegroundBase::*setHorizontalAlign_function_type )( ::OSG::UInt8 const ) ;
            
            SimpleTextForegroundBase_exposer.def( 
                "setHorizontalAlign"
                , setHorizontalAlign_function_type( &::OSG::SimpleTextForegroundBase::setHorizontalAlign )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::setShadowColor
        
            typedef void ( ::OSG::SimpleTextForegroundBase::*setShadowColor_function_type )( ::OSG::Color4f const & ) ;
            
            SimpleTextForegroundBase_exposer.def( 
                "setShadowColor"
                , setShadowColor_function_type( &::OSG::SimpleTextForegroundBase::setShadowColor )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::setShadowOffset
        
            typedef void ( ::OSG::SimpleTextForegroundBase::*setShadowOffset_function_type )( ::OSG::Vec2f const & ) ;
            
            SimpleTextForegroundBase_exposer.def( 
                "setShadowOffset"
                , setShadowOffset_function_type( &::OSG::SimpleTextForegroundBase::setShadowOffset )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::setSize
        
            typedef void ( ::OSG::SimpleTextForegroundBase::*setSize_function_type )( ::OSG::Real32 const ) ;
            
            SimpleTextForegroundBase_exposer.def( 
                "setSize"
                , setSize_function_type( &::OSG::SimpleTextForegroundBase::setSize )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::setTextMargin
        
            typedef void ( ::OSG::SimpleTextForegroundBase::*setTextMargin_function_type )( ::OSG::Vec2f const & ) ;
            
            SimpleTextForegroundBase_exposer.def( 
                "setTextMargin"
                , setTextMargin_function_type( &::OSG::SimpleTextForegroundBase::setTextMargin )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::setTile
        
            typedef void ( ::OSG::SimpleTextForegroundBase::*setTile_function_type )( bool const ) ;
            
            SimpleTextForegroundBase_exposer.def( 
                "setTile"
                , setTile_function_type( &::OSG::SimpleTextForegroundBase::setTile )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SimpleTextForegroundBase::setVerticalAlign
        
            typedef void ( ::OSG::SimpleTextForegroundBase::*setVerticalAlign_function_type )( ::OSG::UInt8 const ) ;
            
            SimpleTextForegroundBase_exposer.def( 
                "setVerticalAlign"
                , setVerticalAlign_function_type( &::OSG::SimpleTextForegroundBase::setVerticalAlign )
                , ( bp::arg("value") ) );
        
        }
        SimpleTextForegroundBase_exposer.staticmethod( "create" );
        SimpleTextForegroundBase_exposer.staticmethod( "createDependent" );
        SimpleTextForegroundBase_exposer.staticmethod( "createLocal" );
        SimpleTextForegroundBase_exposer.staticmethod( "getClassGroupId" );
        SimpleTextForegroundBase_exposer.staticmethod( "getClassType" );
        SimpleTextForegroundBase_exposer.staticmethod( "getClassTypeId" );
        SimpleTextForegroundBase_exposer.def("getMFLines",SimpleTextForegroundBase_getMFLines);
    }

}
