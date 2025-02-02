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
#include "OSGDrawable_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "GeoMultiPropertyBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct GeoMultiPropertyBase_wrapper : OSG::GeoMultiPropertyBase, bp::wrapper< OSG::GeoMultiPropertyBase > {

    virtual void clear(  ){
        bp::override func_clear = this->get_override( "clear" );
        func_clear(  );
    }

    virtual ::OSG::GeoPropertyTransitPtr clone(  ){
        bp::override func_clone = this->get_override( "clone" );
        return func_clone(  );
    }

    virtual ::OSG::UInt32 getDimension(  ) const {
        bp::override func_getDimension = this->get_override( "getDimension" );
        return func_getDimension(  );
    }

    virtual ::OSG::UInt32 getFormat(  ) const {
        bp::override func_getFormat = this->get_override( "getFormat" );
        return func_getFormat(  );
    }

    virtual ::OSG::UInt32 getFormatSize(  ) const {
        bp::override func_getFormatSize = this->get_override( "getFormatSize" );
        return func_getFormatSize(  );
    }

    virtual void getGenericValue( ::OSG::Vec4d & val, ::OSG::SizeT const index ) const {
        bp::override func_getGenericValue = this->get_override( "getGenericValue" );
        func_getGenericValue( boost::ref(val), index );
    }

    virtual bool getNormalize(  ) const {
        bp::override func_getNormalize = this->get_override( "getNormalize" );
        return func_getNormalize(  );
    }

    virtual ::OSG::UInt32 getStride(  ) const {
        bp::override func_getStride = this->get_override( "getStride" );
        return func_getStride(  );
    }

    virtual ::OSG::UInt32 getVectorType(  ) const {
        bp::override func_getVectorType = this->get_override( "getVectorType" );
        return func_getVectorType(  );
    }

    virtual void resize( ::OSG::SizeT newsize ){
        bp::override func_resize = this->get_override( "resize" );
        func_resize( newsize );
    }

    virtual void setGenericValue( ::OSG::Vec4d const & val, ::OSG::SizeT const index ){
        bp::override func_setGenericValue = this->get_override( "setGenericValue" );
        func_setGenericValue( boost::ref(val), index );
    }

    virtual ::OSG::SizeT size(  ) const {
        bp::override func_size = this->get_override( "size" );
        return func_size(  );
    }

    virtual ::OSG::UInt32 size32(  ) const {
        bp::override func_size32 = this->get_override( "size32" );
        return func_size32(  );
    }

};

void register_GeoMultiPropertyBase_class(){

    { //::OSG::GeoMultiPropertyBase
        typedef bp::class_< GeoMultiPropertyBase_wrapper, bp::bases< ::OSG::GeoVectorProperty >, boost::noncopyable > GeoMultiPropertyBase_exposer_t;
        GeoMultiPropertyBase_exposer_t GeoMultiPropertyBase_exposer = GeoMultiPropertyBase_exposer_t( "GeoMultiPropertyBase", bp::no_init );
        bp::scope GeoMultiPropertyBase_scope( GeoMultiPropertyBase_exposer );
        bp::scope().attr("ContainerFieldId") = (int)OSG::GeoMultiPropertyBase::ContainerFieldId;
        bp::scope().attr("OffsetFieldId") = (int)OSG::GeoMultiPropertyBase::OffsetFieldId;
        bp::scope().attr("IFormatFieldId") = (int)OSG::GeoMultiPropertyBase::IFormatFieldId;
        bp::scope().attr("IDimensionFieldId") = (int)OSG::GeoMultiPropertyBase::IDimensionFieldId;
        bp::scope().attr("ISizeFieldId") = (int)OSG::GeoMultiPropertyBase::ISizeFieldId;
        bp::scope().attr("INormalizeFieldId") = (int)OSG::GeoMultiPropertyBase::INormalizeFieldId;
        bp::scope().attr("IStrideFieldId") = (int)OSG::GeoMultiPropertyBase::IStrideFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::GeoMultiPropertyBase::NextFieldId;
        { //::OSG::GeoMultiPropertyBase::copyFromBin
        
            typedef void ( ::OSG::GeoMultiPropertyBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GeoMultiPropertyBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::GeoMultiPropertyBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::copyToBin
        
            typedef void ( ::OSG::GeoMultiPropertyBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GeoMultiPropertyBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::GeoMultiPropertyBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::create
        
            typedef ::OSG::GeoMultiPropertyTransitPtr ( *create_function_type )(  );
            
            GeoMultiPropertyBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::GeoMultiPropertyBase::create ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::createDependent
        
            typedef ::OSG::GeoMultiPropertyTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            GeoMultiPropertyBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::GeoMultiPropertyBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::createLocal
        
            typedef ::OSG::GeoMultiPropertyTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            GeoMultiPropertyBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::GeoMultiPropertyBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::GeoMultiPropertyBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            GeoMultiPropertyBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::GeoMultiPropertyBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            GeoMultiPropertyBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::GeoMultiPropertyBase::getClassGroupId ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            GeoMultiPropertyBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::GeoMultiPropertyBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::GeoMultiPropertyBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            GeoMultiPropertyBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::GeoMultiPropertyBase::getClassTypeId ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::getContainer
        
            typedef ::OSG::GeoMultiPropertyData * ( ::OSG::GeoMultiPropertyBase::*getContainer_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getContainer"
                , getContainer_function_type( &::OSG::GeoMultiPropertyBase::getContainer )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoMultiPropertyBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::GeoMultiPropertyBase::*getContainerSize_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::GeoMultiPropertyBase::getContainerSize ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::getIDimension
        
            typedef ::OSG::UInt32 ( ::OSG::GeoMultiPropertyBase::*getIDimension_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getIDimension"
                , getIDimension_function_type( &::OSG::GeoMultiPropertyBase::getIDimension ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::getIFormat
        
            typedef ::GLenum const & ( ::OSG::GeoMultiPropertyBase::*getIFormat_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getIFormat"
                , getIFormat_function_type( &::OSG::GeoMultiPropertyBase::getIFormat )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::GeoMultiPropertyBase::getINormalize
        
            typedef bool ( ::OSG::GeoMultiPropertyBase::*getINormalize_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getINormalize"
                , getINormalize_function_type( &::OSG::GeoMultiPropertyBase::getINormalize ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::getISize
        
            typedef ::OSG::UInt32 ( ::OSG::GeoMultiPropertyBase::*getISize_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getISize"
                , getISize_function_type( &::OSG::GeoMultiPropertyBase::getISize ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::getIStride
        
            typedef ::OSG::UInt32 ( ::OSG::GeoMultiPropertyBase::*getIStride_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getIStride"
                , getIStride_function_type( &::OSG::GeoMultiPropertyBase::getIStride ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::getOffset
        
            typedef ::OSG::UInt32 ( ::OSG::GeoMultiPropertyBase::*getOffset_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getOffset"
                , getOffset_function_type( &::OSG::GeoMultiPropertyBase::getOffset ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::getSFContainer
        
            typedef ::OSG::SFUnrecGeoMultiPropertyDataPtr const * ( ::OSG::GeoMultiPropertyBase::*getSFContainer_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getSFContainer"
                , getSFContainer_function_type( &::OSG::GeoMultiPropertyBase::getSFContainer )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoMultiPropertyBase::getSFIDimension
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::GeoMultiPropertyBase::*getSFIDimension_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getSFIDimension"
                , getSFIDimension_function_type( &::OSG::GeoMultiPropertyBase::getSFIDimension )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoMultiPropertyBase::getSFIFormat
        
            typedef ::OSG::SFGLenum const * ( ::OSG::GeoMultiPropertyBase::*getSFIFormat_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getSFIFormat"
                , getSFIFormat_function_type( &::OSG::GeoMultiPropertyBase::getSFIFormat )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoMultiPropertyBase::getSFINormalize
        
            typedef ::OSG::SFBool const * ( ::OSG::GeoMultiPropertyBase::*getSFINormalize_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getSFINormalize"
                , getSFINormalize_function_type( &::OSG::GeoMultiPropertyBase::getSFINormalize )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoMultiPropertyBase::getSFISize
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::GeoMultiPropertyBase::*getSFISize_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getSFISize"
                , getSFISize_function_type( &::OSG::GeoMultiPropertyBase::getSFISize )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoMultiPropertyBase::getSFIStride
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::GeoMultiPropertyBase::*getSFIStride_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getSFIStride"
                , getSFIStride_function_type( &::OSG::GeoMultiPropertyBase::getSFIStride )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoMultiPropertyBase::getSFOffset
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::GeoMultiPropertyBase::*getSFOffset_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getSFOffset"
                , getSFOffset_function_type( &::OSG::GeoMultiPropertyBase::getSFOffset )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoMultiPropertyBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::GeoMultiPropertyBase::*getType_function_type )(  ) ;
            
            GeoMultiPropertyBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GeoMultiPropertyBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoMultiPropertyBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::GeoMultiPropertyBase::*getType_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GeoMultiPropertyBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GeoMultiPropertyBase::setContainer
        
            typedef void ( ::OSG::GeoMultiPropertyBase::*setContainer_function_type )( ::OSG::GeoMultiPropertyData * const ) ;
            
            GeoMultiPropertyBase_exposer.def( 
                "setContainer"
                , setContainer_function_type( &::OSG::GeoMultiPropertyBase::setContainer )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::setIDimension
        
            typedef void ( ::OSG::GeoMultiPropertyBase::*setIDimension_function_type )( ::OSG::UInt32 const ) ;
            
            GeoMultiPropertyBase_exposer.def( 
                "setIDimension"
                , setIDimension_function_type( &::OSG::GeoMultiPropertyBase::setIDimension )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::setIFormat
        
            typedef void ( ::OSG::GeoMultiPropertyBase::*setIFormat_function_type )( ::GLenum const & ) ;
            
            GeoMultiPropertyBase_exposer.def( 
                "setIFormat"
                , setIFormat_function_type( &::OSG::GeoMultiPropertyBase::setIFormat )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::setINormalize
        
            typedef void ( ::OSG::GeoMultiPropertyBase::*setINormalize_function_type )( bool const ) ;
            
            GeoMultiPropertyBase_exposer.def( 
                "setINormalize"
                , setINormalize_function_type( &::OSG::GeoMultiPropertyBase::setINormalize )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::setISize
        
            typedef void ( ::OSG::GeoMultiPropertyBase::*setISize_function_type )( ::OSG::UInt32 const ) ;
            
            GeoMultiPropertyBase_exposer.def( 
                "setISize"
                , setISize_function_type( &::OSG::GeoMultiPropertyBase::setISize )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::setIStride
        
            typedef void ( ::OSG::GeoMultiPropertyBase::*setIStride_function_type )( ::OSG::UInt32 const ) ;
            
            GeoMultiPropertyBase_exposer.def( 
                "setIStride"
                , setIStride_function_type( &::OSG::GeoMultiPropertyBase::setIStride )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoMultiPropertyBase::setOffset
        
            typedef void ( ::OSG::GeoMultiPropertyBase::*setOffset_function_type )( ::OSG::UInt32 const ) ;
            
            GeoMultiPropertyBase_exposer.def( 
                "setOffset"
                , setOffset_function_type( &::OSG::GeoMultiPropertyBase::setOffset )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GeoVectorProperty::clear
        
            typedef void ( ::OSG::GeoVectorProperty::*clear_function_type )(  ) ;
            
            GeoMultiPropertyBase_exposer.def( 
                "clear"
                , bp::pure_virtual( clear_function_type(&::OSG::GeoVectorProperty::clear) ) );
        
        }
        { //::OSG::GeoProperty::clone
        
            typedef ::OSG::GeoPropertyTransitPtr ( ::OSG::GeoProperty::*clone_function_type )(  ) ;
            
            GeoMultiPropertyBase_exposer.def( 
                "clone"
                , bp::pure_virtual( clone_function_type(&::OSG::GeoProperty::clone) ) );
        
        }
        { //::OSG::GeoProperty::getDimension
        
            typedef ::OSG::UInt32 ( ::OSG::GeoProperty::*getDimension_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getDimension"
                , bp::pure_virtual( getDimension_function_type(&::OSG::GeoProperty::getDimension) ) );
        
        }
        { //::OSG::GeoProperty::getFormat
        
            typedef ::OSG::UInt32 ( ::OSG::GeoProperty::*getFormat_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getFormat"
                , bp::pure_virtual( getFormat_function_type(&::OSG::GeoProperty::getFormat) ) );
        
        }
        { //::OSG::GeoProperty::getFormatSize
        
            typedef ::OSG::UInt32 ( ::OSG::GeoProperty::*getFormatSize_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getFormatSize"
                , bp::pure_virtual( getFormatSize_function_type(&::OSG::GeoProperty::getFormatSize) ) );
        
        }
        { //::OSG::GeoVectorProperty::getGenericValue
        
            typedef void ( GeoMultiPropertyBase_wrapper::*getGenericValue_function_type )( ::OSG::Vec4d &,::OSG::SizeT const ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getGenericValue"
                , getGenericValue_function_type( &GeoMultiPropertyBase_wrapper::getGenericValue )
                , ( bp::arg("val"), bp::arg("index") ) );
        
        }
        { //::OSG::GeoVectorProperty::getNormalize
        
            typedef bool ( ::OSG::GeoVectorProperty::*getNormalize_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getNormalize"
                , bp::pure_virtual( getNormalize_function_type(&::OSG::GeoVectorProperty::getNormalize) ) );
        
        }
        { //::OSG::GeoProperty::getStride
        
            typedef ::OSG::UInt32 ( ::OSG::GeoProperty::*getStride_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getStride"
                , bp::pure_virtual( getStride_function_type(&::OSG::GeoProperty::getStride) ) );
        
        }
        { //::OSG::GeoProperty::getVectorType
        
            typedef ::OSG::UInt32 ( ::OSG::GeoProperty::*getVectorType_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "getVectorType"
                , bp::pure_virtual( getVectorType_function_type(&::OSG::GeoProperty::getVectorType) ) );
        
        }
        { //::OSG::GeoVectorProperty::resize
        
            typedef void ( ::OSG::GeoVectorProperty::*resize_function_type )( ::OSG::SizeT ) ;
            
            GeoMultiPropertyBase_exposer.def( 
                "resize"
                , bp::pure_virtual( resize_function_type(&::OSG::GeoVectorProperty::resize) )
                , ( bp::arg("newsize") ) );
        
        }
        { //::OSG::GeoVectorProperty::setGenericValue
        
            typedef void ( GeoMultiPropertyBase_wrapper::*setGenericValue_function_type )( ::OSG::Vec4d const &,::OSG::SizeT const ) ;
            
            GeoMultiPropertyBase_exposer.def( 
                "setGenericValue"
                , setGenericValue_function_type( &GeoMultiPropertyBase_wrapper::setGenericValue )
                , ( bp::arg("val"), bp::arg("index") ) );
        
        }
        { //::OSG::GeoVectorProperty::size
        
            typedef ::OSG::SizeT ( ::OSG::GeoVectorProperty::*size_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "size"
                , bp::pure_virtual( size_function_type(&::OSG::GeoVectorProperty::size) ) );
        
        }
        { //::OSG::GeoVectorProperty::size32
        
            typedef ::OSG::UInt32 ( ::OSG::GeoVectorProperty::*size32_function_type )(  ) const;
            
            GeoMultiPropertyBase_exposer.def( 
                "size32"
                , bp::pure_virtual( size32_function_type(&::OSG::GeoVectorProperty::size32) ) );
        
        }
        GeoMultiPropertyBase_exposer.staticmethod( "create" );
        GeoMultiPropertyBase_exposer.staticmethod( "createDependent" );
        GeoMultiPropertyBase_exposer.staticmethod( "createLocal" );
        GeoMultiPropertyBase_exposer.staticmethod( "getClassGroupId" );
        GeoMultiPropertyBase_exposer.staticmethod( "getClassType" );
        GeoMultiPropertyBase_exposer.staticmethod( "getClassTypeId" );
    }

}
