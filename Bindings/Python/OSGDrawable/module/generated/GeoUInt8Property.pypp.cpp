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
#include "GeoUInt8Property.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list TypedGeoIntegralProperty_OSG__GeoUInt8PropertyDesc__getFieldPtr(OSG::TypedGeoIntegralProperty<OSG::GeoUInt8PropertyDesc> *self)
{
   boost::python::list result;
   OSG::MFUInt8 const * mf_data = self->getFieldPtr();
   const OSG::UInt32 size(mf_data->size());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list TypedGeoIntegralProperty_OSG__GeoUInt8PropertyDesc__getField(OSG::TypedGeoIntegralProperty<OSG::GeoUInt8PropertyDesc> *self)
{
   boost::python::list result;
   OSG::MFUInt8 const & mf_data = self->getField();
   const OSG::UInt32 size(mf_data.size());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(mf_data[i]);
   }
   return result;
}

void register_GeoUInt8Property_class(){

    { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >
        typedef bp::class_< OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >, bp::bases< OSG::GeoIntegralProperty >, OSG::TypedGeoIntegralProperty<OSG::GeoUInt8PropertyDesc>::ObjRecPtr, boost::noncopyable > GeoUInt8Property_exposer_t;
        GeoUInt8Property_exposer_t GeoUInt8Property_exposer = GeoUInt8Property_exposer_t( "GeoUInt8Property", bp::no_init );
        bp::scope GeoUInt8Property_scope( GeoUInt8Property_exposer );
        bp::scope().attr("GeoPropDataFieldId") = (int)OSG::TypedGeoIntegralProperty<OSG::GeoUInt8PropertyDesc>::GeoPropDataFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::TypedGeoIntegralProperty<OSG::GeoUInt8PropertyDesc>::NextFieldId;
        { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::clone
        
            typedef OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > exported_class_t;
            typedef ::OSG::TransitPtr< OSG::GeoProperty > ( exported_class_t::*clone_function_type )(  ) ;
            
            GeoUInt8Property_exposer.def( 
                "clone"
                , clone_function_type( &::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::clone ) );
        
        }
        { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::create
        
            typedef OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > exported_class_t;
            typedef ::OSG::TransitPtr< OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > > ( *create_function_type )(  );
            
            GeoUInt8Property_exposer.def( 
                "create"
                , create_function_type( &::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::create ) );
        
        }
        { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::createDependent
        
            typedef OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > exported_class_t;
            typedef ::OSG::TransitPtr< OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > > ( *createDependent_function_type )( ::OSG::BitVector );
            
            GeoUInt8Property_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::createLocal
        
            typedef OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > exported_class_t;
            typedef ::OSG::TransitPtr< OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > > ( *createLocal_function_type )( ::OSG::BitVector );
            
            GeoUInt8Property_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::dump
        
            typedef OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > exported_class_t;
            typedef void ( exported_class_t::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            GeoUInt8Property_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getClassGroupId
        
            typedef OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( *getClassGroupId_function_type )(  );
            
            GeoUInt8Property_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getClassGroupId ) );
        
        }
        { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getClassType
        
            typedef OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > exported_class_t;
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            GeoUInt8Property_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getClassTypeId
        
            typedef OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            GeoUInt8Property_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getClassTypeId ) );
        
        }
        { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getContainerSize
        
            typedef OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getContainerSize_function_type )(  ) const;
            
            GeoUInt8Property_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getContainerSize ) );
        
        }
        { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getFormat
        
            typedef OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getFormat_function_type )(  ) const;
            
            GeoUInt8Property_exposer.def( 
                "getFormat"
                , getFormat_function_type( &::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getFormat ) );
        
        }
        { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getFormatSize
        
            typedef OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getFormatSize_function_type )(  ) const;
            
            GeoUInt8Property_exposer.def( 
                "getFormatSize"
                , getFormatSize_function_type( &::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getFormatSize ) );
        
        }
        { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getStride
        
            typedef OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*getStride_function_type )(  ) const;
            
            GeoUInt8Property_exposer.def( 
                "getStride"
                , getStride_function_type( &::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getStride ) );
        
        }
        { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getType
        
            typedef OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > exported_class_t;
            typedef ::OSG::FieldContainerType & ( exported_class_t::*getType_function_type )(  ) ;
            
            GeoUInt8Property_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getType
        
            typedef OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > exported_class_t;
            typedef ::OSG::FieldContainerType const & ( exported_class_t::*getType_function_type )(  ) const;
            
            GeoUInt8Property_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getValue
        
            typedef OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > exported_class_t;
            typedef ::OSG::UInt8 ( exported_class_t::*getValue_function_type )( ::OSG::UInt32 const ) const;
            
            GeoUInt8Property_exposer.def( 
                "getValue"
                , getValue_function_type( &::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getValue )
                , ( bp::arg("index") ) );
        
        }
        { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getValue
        
            typedef OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > exported_class_t;
            typedef void ( exported_class_t::*getValue_function_type )( ::OSG::UInt8 &,::OSG::UInt32 const ) const;
            
            GeoUInt8Property_exposer.def( 
                "getValue"
                , getValue_function_type( &::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::getValue )
                , ( bp::arg("val"), bp::arg("index") ) );
        
        }
        { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::operator[]
        
            typedef OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > exported_class_t;
            typedef unsigned char const & ( exported_class_t::*__getitem___function_type )( ::OSG::UInt32 ) const;
            
            GeoUInt8Property_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::operator[] )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::operator[]
        
            typedef OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc > exported_class_t;
            typedef unsigned char & ( exported_class_t::*__getitem___function_type )( ::OSG::UInt32 ) ;
            
            GeoUInt8Property_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::OSG::TypedGeoIntegralProperty< OSG::GeoUInt8PropertyDesc >::operator[] )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        GeoUInt8Property_exposer.staticmethod( "create" );
        GeoUInt8Property_exposer.staticmethod( "createDependent" );
        GeoUInt8Property_exposer.staticmethod( "createLocal" );
        GeoUInt8Property_exposer.staticmethod( "getClassGroupId" );
        GeoUInt8Property_exposer.staticmethod( "getClassType" );
        GeoUInt8Property_exposer.staticmethod( "getClassTypeId" );
        GeoUInt8Property_exposer.def("getFieldPtr",TypedGeoIntegralProperty_OSG__GeoUInt8PropertyDesc__getFieldPtr);
        GeoUInt8Property_exposer.def("getField",TypedGeoIntegralProperty_OSG__GeoUInt8PropertyDesc__getField);
        pyopensg::register_transit< OSG::TypedGeoIntegralProperty<OSG::GeoUInt8PropertyDesc> >::execute();
        bp::implicitly_convertible< OSG::TypedGeoIntegralProperty<OSG::GeoUInt8PropertyDesc>::ObjRecPtr, OSG::TypedGeoIntegralProperty<OSG::GeoUInt8PropertyDesc>* >();
        bp::implicitly_convertible< OSG::TypedGeoIntegralProperty<OSG::GeoUInt8PropertyDesc>::ObjRecPtr, OSG::TypedGeoIntegralProperty<OSG::GeoUInt8PropertyDesc>::ObjCPtr >();
        bp::implicitly_convertible< OSG::TypedGeoIntegralProperty<OSG::GeoUInt8PropertyDesc>::ObjRecPtr, OSG::GeoIntegralProperty* >();
        bp::implicitly_convertible< OSG::TypedGeoIntegralProperty<OSG::GeoUInt8PropertyDesc>::ObjRecPtr, OSG::GeoIntegralProperty::ObjRecPtr >();
        bp::implicitly_convertible<OSG::TypedGeoIntegralProperty<OSG::GeoUInt8PropertyDesc>::ObjRecPtr, OSG::GeoIntegralProperty::ObjCPtr>();
    }

}
