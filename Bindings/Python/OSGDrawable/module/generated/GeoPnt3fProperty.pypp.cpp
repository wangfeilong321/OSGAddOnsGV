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
#include "GeoPnt3fProperty.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list TypedGeoVectorProperty_OSG__GeoPnt3fPropertyDesc__getFieldPtr(OSG::TypedGeoVectorProperty<OSG::GeoPnt3fPropertyDesc> *self)
{
   boost::python::list result;
   OSG::MFPnt3f const * mf_data = self->getFieldPtr();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list TypedGeoVectorProperty_OSG__GeoPnt3fPropertyDesc__getField(OSG::TypedGeoVectorProperty<OSG::GeoPnt3fPropertyDesc> *self)
{
   boost::python::list result;
   OSG::MFPnt3f const & mf_data = self->getField();
   const OSG::UInt32 size(mf_data.size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(mf_data[i]);
   }
   return result;
}

void register_GeoPnt3fProperty_class(){

    { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >
        typedef bp::class_< OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >, bp::bases< ::OSG::GeoVectorProperty >, OSG::TypedGeoVectorProperty<OSG::GeoPnt3fPropertyDesc>::ObjRecPtr, boost::noncopyable > GeoPnt3fProperty_exposer_t;
        GeoPnt3fProperty_exposer_t GeoPnt3fProperty_exposer = GeoPnt3fProperty_exposer_t( "GeoPnt3fProperty", bp::no_init );
        bp::scope GeoPnt3fProperty_scope( GeoPnt3fProperty_exposer );
        bp::scope().attr("GeoPropDataFieldId") = (int)OSG::TypedGeoVectorProperty<OSG::GeoPnt3fPropertyDesc>::GeoPropDataFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::TypedGeoVectorProperty<OSG::GeoPnt3fPropertyDesc>::NextFieldId;
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::clone
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef ::OSG::TransitPtr< OSG::GeoProperty > ( exported_class_t::*clone_function_type )(  ) ;
            
            GeoPnt3fProperty_exposer.def( 
                "clone"
                , clone_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::clone ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::create
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef ::OSG::TransitPtr< OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > > ( *create_function_type )(  );
            
            GeoPnt3fProperty_exposer.def( 
                "create"
                , create_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::create ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::createDependent
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef ::OSG::TransitPtr< OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > > ( *createDependent_function_type )( ::OSG::BitVector );
            
            GeoPnt3fProperty_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::createLocal
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef ::OSG::TransitPtr< OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > > ( *createLocal_function_type )( ::OSG::BitVector );
            
            GeoPnt3fProperty_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::dump
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef void ( exported_class_t::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            GeoPnt3fProperty_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getClassGroupId
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( *getClassGroupId_function_type )(  );
            
            GeoPnt3fProperty_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getClassGroupId ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getClassType
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            GeoPnt3fProperty_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getClassTypeId
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            GeoPnt3fProperty_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getClassTypeId ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getContainerSize
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getContainerSize_function_type )(  ) const;
            
            GeoPnt3fProperty_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getContainerSize ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getFormat
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getFormat_function_type )(  ) const;
            
            GeoPnt3fProperty_exposer.def( 
                "getFormat"
                , getFormat_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getFormat ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getFormatSize
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getFormatSize_function_type )(  ) const;
            
            GeoPnt3fProperty_exposer.def( 
                "getFormatSize"
                , getFormatSize_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getFormatSize ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getStride
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getStride_function_type )(  ) const;
            
            GeoPnt3fProperty_exposer.def( 
                "getStride"
                , getStride_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getStride ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getType
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef ::OSG::FieldContainerType & ( exported_class_t::*getType_function_type )(  ) ;
            
            GeoPnt3fProperty_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getType
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef ::OSG::FieldContainerType const & ( exported_class_t::*getType_function_type )(  ) const;
            
            GeoPnt3fProperty_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getValue
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef ::OSG::Pnt3f ( exported_class_t::*getValue_function_type )( ::OSG::SizeT const ) const;
            
            GeoPnt3fProperty_exposer.def( 
                "getValue"
                , getValue_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getValue )
                , ( bp::arg("index") ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getValue
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef void ( exported_class_t::*getValue_function_type )( ::OSG::Pnt3f &,::OSG::SizeT const ) const;
            
            GeoPnt3fProperty_exposer.def( 
                "getValue"
                , getValue_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getValue )
                , ( bp::arg("val"), bp::arg("index") ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getVectorType
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getVectorType_function_type )(  ) const;
            
            GeoPnt3fProperty_exposer.def( 
                "getVectorType"
                , getVectorType_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::getVectorType ) );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::operator[]
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef ::OSG::Point< float, 3u > const & ( exported_class_t::*__getitem___function_type )( ::OSG::SizeT ) const;
            
            GeoPnt3fProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::operator[] )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::operator[]
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef ::OSG::Point< float, 3u > & ( exported_class_t::*__getitem___function_type )( ::OSG::SizeT ) ;
            
            GeoPnt3fProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::operator[] )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::size32
        
            typedef OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*size32_function_type )(  ) const;
            
            GeoPnt3fProperty_exposer.def( 
                "size32"
                , size32_function_type( &::OSG::TypedGeoVectorProperty< OSG::GeoPnt3fPropertyDesc >::size32 ) );
        
        }
        GeoPnt3fProperty_exposer.staticmethod( "create" );
        GeoPnt3fProperty_exposer.staticmethod( "createDependent" );
        GeoPnt3fProperty_exposer.staticmethod( "createLocal" );
        GeoPnt3fProperty_exposer.staticmethod( "getClassGroupId" );
        GeoPnt3fProperty_exposer.staticmethod( "getClassType" );
        GeoPnt3fProperty_exposer.staticmethod( "getClassTypeId" );
        GeoPnt3fProperty_exposer.def("getFieldPtr",TypedGeoVectorProperty_OSG__GeoPnt3fPropertyDesc__getFieldPtr);
        GeoPnt3fProperty_exposer.def("getField",TypedGeoVectorProperty_OSG__GeoPnt3fPropertyDesc__getField);
        pyopensg::register_transit< OSG::TypedGeoVectorProperty<OSG::GeoPnt3fPropertyDesc> >::execute();
        bp::implicitly_convertible< OSG::TypedGeoVectorProperty<OSG::GeoPnt3fPropertyDesc>::ObjRecPtr, OSG::TypedGeoVectorProperty<OSG::GeoPnt3fPropertyDesc>* >();
        bp::implicitly_convertible< OSG::TypedGeoVectorProperty<OSG::GeoPnt3fPropertyDesc>::ObjRecPtr, OSG::TypedGeoVectorProperty<OSG::GeoPnt3fPropertyDesc>::ObjCPtr >();
        bp::implicitly_convertible< OSG::TypedGeoVectorProperty<OSG::GeoPnt3fPropertyDesc>::ObjRecPtr, OSG::GeoVectorProperty* >();
        bp::implicitly_convertible< OSG::TypedGeoVectorProperty<OSG::GeoPnt3fPropertyDesc>::ObjRecPtr, OSG::GeoVectorProperty::ObjRecPtr >();
        bp::implicitly_convertible<OSG::TypedGeoVectorProperty<OSG::GeoPnt3fPropertyDesc>::ObjRecPtr, OSG::GeoVectorProperty::ObjCPtr>();
    }

}
