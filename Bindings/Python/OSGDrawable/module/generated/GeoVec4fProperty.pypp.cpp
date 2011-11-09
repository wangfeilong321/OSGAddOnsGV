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

#include "boost/python.hpp"
#include "OSGDrawable_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "GeoVec4fProperty.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list TypedGeoVectorProperty_OSG__GeoVec4fPropertyDesc__getFieldPtr(OSG::TypedGeoVectorProperty<OSG::GeoVec4fPropertyDesc> *self)
{
   boost::python::list result;
   OSG::MFVec4f const * mf_data = self->getFieldPtr();
   const OSG::UInt32 size(mf_data->size());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list TypedGeoVectorProperty_OSG__GeoVec4fPropertyDesc__getField(OSG::TypedGeoVectorProperty<OSG::GeoVec4fPropertyDesc> *self)
{
   boost::python::list result;
   OSG::MFVec4f const & mf_data = self->getField();
   const OSG::UInt32 size(mf_data.size());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(mf_data[i]);
   }
   return result;
}

void register_GeoVec4fProperty_class(){

    { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >
        typedef bp::class_< OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >, bp::bases< ::OSG::GeoVectorProperty >, OSG::TypedGeoVectorProperty<OSG::GeoVec4fPropertyDesc>::ObjRecPtr, boost::noncopyable > GeoVec4fProperty_exposer_t;
        GeoVec4fProperty_exposer_t GeoVec4fProperty_exposer = GeoVec4fProperty_exposer_t( "GeoVec4fProperty", bp::no_init );
        bp::scope GeoVec4fProperty_scope( GeoVec4fProperty_exposer );
        bp::scope().attr("GeoPropDataFieldId") = (int)OSG::TypedGeoVectorProperty<OSG::GeoVec4fPropertyDesc>::GeoPropDataFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::TypedGeoVectorProperty<OSG::GeoVec4fPropertyDesc>::NextFieldId;
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::clone
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef ::OSG::TransitPtr< OSG::GeoProperty > ( exported_class_t::*clone_function_type )(  ) ;
            
            GeoVec4fProperty_exposer.def( 
                "clone"
                , clone_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::clone ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::create
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef ::OSG::TransitPtr< OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > > ( *create_function_type )(  );
            
            GeoVec4fProperty_exposer.def( 
                "create"
                , create_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::create ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::createDependent
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef ::OSG::TransitPtr< OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > > ( *createDependent_function_type )( ::OSG::BitVector );
            
            GeoVec4fProperty_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::createLocal
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef ::OSG::TransitPtr< OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > > ( *createLocal_function_type )( ::OSG::BitVector );
            
            GeoVec4fProperty_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::dump
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef void ( exported_class_t::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            GeoVec4fProperty_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getClassGroupId
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( *getClassGroupId_function_type )(  );
            
            GeoVec4fProperty_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getClassGroupId ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getClassType
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            GeoVec4fProperty_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getClassTypeId
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            GeoVec4fProperty_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getClassTypeId ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getContainerSize
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getContainerSize_function_type )(  ) const;
            
            GeoVec4fProperty_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getContainerSize ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getFormat
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getFormat_function_type )(  ) const;
            
            GeoVec4fProperty_exposer.def( 
                "getFormat"
                , getFormat_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getFormat ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getFormatSize
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getFormatSize_function_type )(  ) const;
            
            GeoVec4fProperty_exposer.def( 
                "getFormatSize"
                , getFormatSize_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getFormatSize ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getStride
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getStride_function_type )(  ) const;
            
            GeoVec4fProperty_exposer.def( 
                "getStride"
                , getStride_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getStride ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getType
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef ::OSG::FieldContainerType & ( exported_class_t::*getType_function_type )(  ) ;
            
            GeoVec4fProperty_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getType
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef ::OSG::FieldContainerType const & ( exported_class_t::*getType_function_type )(  ) const;
            
            GeoVec4fProperty_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getValue
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef ::OSG::Vec4f ( exported_class_t::*getValue_function_type )( ::OSG::UInt32 const ) const;
            
            GeoVec4fProperty_exposer.def( 
                "getValue"
                , getValue_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getValue )
                , ( bp::arg("index") ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getValue
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef void ( exported_class_t::*getValue_function_type )( ::OSG::Vec4f &,::OSG::UInt32 const ) const;
            
            GeoVec4fProperty_exposer.def( 
                "getValue"
                , getValue_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getValue )
                , ( bp::arg("val"), bp::arg("index") ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getVectorType
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getVectorType_function_type )(  ) const;
            
            GeoVec4fProperty_exposer.def( 
                "getVectorType"
                , getVectorType_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::getVectorType ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::operator[]
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef ::OSG::Vector< float, 4u > const & ( exported_class_t::*__getitem___function_type )( ::OSG::UInt32 ) const;
            
            GeoVec4fProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::operator[] )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::operator[]
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc > exported_class_t;
            typedef ::OSG::Vector< float, 4u > & ( exported_class_t::*__getitem___function_type )( ::OSG::UInt32 ) ;
            
            GeoVec4fProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoVec4fPropertyDesc >::operator[] )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        GeoVec4fProperty_exposer.staticmethod( "create" );
        GeoVec4fProperty_exposer.staticmethod( "createDependent" );
        GeoVec4fProperty_exposer.staticmethod( "createLocal" );
        GeoVec4fProperty_exposer.staticmethod( "getClassGroupId" );
        GeoVec4fProperty_exposer.staticmethod( "getClassType" );
        GeoVec4fProperty_exposer.staticmethod( "getClassTypeId" );
        GeoVec4fProperty_exposer.def("getFieldPtr",TypedGeoVectorProperty_OSG__GeoVec4fPropertyDesc__getFieldPtr);
        GeoVec4fProperty_exposer.def("getField",TypedGeoVectorProperty_OSG__GeoVec4fPropertyDesc__getField);
        pyopensg::register_transit< OSG::TypedGeoVectorProperty<OSG::GeoVec4fPropertyDesc> >::execute();
        bp::implicitly_convertible< OSG::TypedGeoVectorProperty<OSG::GeoVec4fPropertyDesc>::ObjRecPtr, OSG::TypedGeoVectorProperty<OSG::GeoVec4fPropertyDesc>* >();
        bp::implicitly_convertible< OSG::TypedGeoVectorProperty<OSG::GeoVec4fPropertyDesc>::ObjRecPtr, OSG::TypedGeoVectorProperty<OSG::GeoVec4fPropertyDesc>::ObjCPtr >();
        bp::implicitly_convertible< OSG::TypedGeoVectorProperty<OSG::GeoVec4fPropertyDesc>::ObjRecPtr, OSG::GeoVectorProperty* >();
        bp::implicitly_convertible< OSG::TypedGeoVectorProperty<OSG::GeoVec4fPropertyDesc>::ObjRecPtr, OSG::GeoVectorProperty::ObjRecPtr >();
        bp::implicitly_convertible<OSG::TypedGeoVectorProperty<OSG::GeoVec4fPropertyDesc>::ObjRecPtr, OSG::GeoVectorProperty::ObjCPtr>();
    }

}
