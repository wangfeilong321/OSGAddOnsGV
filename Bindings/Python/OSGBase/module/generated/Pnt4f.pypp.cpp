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
#include "Pnt4f.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_Pnt4f_class(){

    { //::OSG::Point< float, 4u >
        typedef bp::class_< OSG::Point< float, 4u >, bp::bases< OSG::VecStorage4< float > > > Pnt4f_exposer_t;
        Pnt4f_exposer_t Pnt4f_exposer = Pnt4f_exposer_t( "Pnt4f", bp::init< >() );
        bp::scope Pnt4f_scope( Pnt4f_exposer );
        Pnt4f_exposer.def( bp::init< float const * >(( bp::arg("pVals") )) );
        bp::implicitly_convertible< float const *, OSG::Point< float, 4u > >();
        Pnt4f_exposer.def( bp::init< float * >(( bp::arg("pVals") )) );
        bp::implicitly_convertible< float *, OSG::Point< float, 4u > >();
        Pnt4f_exposer.def( bp::init< OSG::Point< float, 4u > const & >(( bp::arg("source") )) );
        Pnt4f_exposer.def( bp::init< float >(( bp::arg("rVal1") )) );
        bp::implicitly_convertible< float const, OSG::Point< float, 4u > >();
        Pnt4f_exposer.def( bp::init< float, float >(( bp::arg("rVal1"), bp::arg("rVal2") )) );
        Pnt4f_exposer.def( bp::init< float, float, float >(( bp::arg("rVal1"), bp::arg("rVal2"), bp::arg("rVal3") )) );
        Pnt4f_exposer.def( bp::init< float, float, float, float >(( bp::arg("rVal1"), bp::arg("rVal2"), bp::arg("rVal3"), bp::arg("rVal4") )) );
        { //::OSG::Point< float, 4u >::dist
        
            typedef OSG::Point< float, 4u > exported_class_t;
            typedef ::OSG::Real32 ( exported_class_t::*dist_function_type )( ::OSG::Point< float, 4u > const & ) const;
            
            Pnt4f_exposer.def( 
                "dist"
                , dist_function_type( &::OSG::Point< float, 4u >::dist )
                , ( bp::arg("pnt") ) );
        
        }
        { //::OSG::Point< float, 4u >::dist2
        
            typedef OSG::Point< float, 4u > exported_class_t;
            typedef ::OSG::Real32 ( exported_class_t::*dist2_function_type )( ::OSG::Point< float, 4u > const & ) const;
            
            Pnt4f_exposer.def( 
                "dist2"
                , dist2_function_type( &::OSG::Point< float, 4u >::dist2 )
                , ( bp::arg("pnt") ) );
        
        }
        { //::OSG::Point< float, 4u >::equals
        
            typedef OSG::Point< float, 4u > exported_class_t;
            typedef bool ( exported_class_t::*equals_function_type )( ::OSG::Point< float, 4u > const &,float const ) const;
            
            Pnt4f_exposer.def( 
                "equals"
                , equals_function_type( &::OSG::Point< float, 4u >::equals )
                , ( bp::arg("pnt"), bp::arg("tolerance") ) );
        
        }
        { //::OSG::Point< float, 4u >::isZero
        
            typedef OSG::Point< float, 4u > exported_class_t;
            typedef bool ( exported_class_t::*isZero_function_type )(  ) const;
            
            Pnt4f_exposer.def( 
                "isZero"
                , isZero_function_type( &::OSG::Point< float, 4u >::isZero ) );
        
        }
        { //::OSG::Point< float, 4u >::maxDim
        
            typedef OSG::Point< float, 4u > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*maxDim_function_type )(  ) const;
            
            Pnt4f_exposer.def( 
                "maxDim"
                , maxDim_function_type( &::OSG::Point< float, 4u >::maxDim ) );
        
        }
        { //::OSG::Point< float, 4u >::maxDimAbs
        
            typedef OSG::Point< float, 4u > exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*maxDimAbs_function_type )(  ) const;
            
            Pnt4f_exposer.def( 
                "maxDimAbs"
                , maxDimAbs_function_type( &::OSG::Point< float, 4u >::maxDimAbs ) );
        
        }
        { //::OSG::Point< float, 4u >::maxValue
        
            typedef OSG::Point< float, 4u > exported_class_t;
            typedef ::OSG::Real32 ( exported_class_t::*maxValue_function_type )(  ) const;
            
            Pnt4f_exposer.def( 
                "maxValue"
                , maxValue_function_type( &::OSG::Point< float, 4u >::maxValue ) );
        
        }
        { //::OSG::Point< float, 4u >::negate
        
            typedef OSG::Point< float, 4u > exported_class_t;
            typedef void ( exported_class_t::*negate_function_type )(  ) ;
            
            Pnt4f_exposer.def( 
                "negate"
                , negate_function_type( &::OSG::Point< float, 4u >::negate ) );
        
        }
        Pnt4f_exposer.def( bp::self != bp::self );
        Pnt4f_exposer.def( bp::self * bp::other< float >() );
        Pnt4f_exposer.def( bp::self *= bp::other< float >() );
        Pnt4f_exposer.def( bp::self + bp::other< OSG::Vector< float, 4u > >() );
        Pnt4f_exposer.def( bp::self += bp::other< OSG::Vector< float, 4u > >() );
        Pnt4f_exposer.def( bp::self - bp::self );
        Pnt4f_exposer.def( bp::self - bp::other< OSG::Vector< float, 4u > >() );
        Pnt4f_exposer.def( -bp::self );
        Pnt4f_exposer.def( bp::self -= bp::other< OSG::Vector< float, 4u > >() );
        Pnt4f_exposer.def( bp::self / bp::other< float >() );
        Pnt4f_exposer.def( bp::self /= bp::other< float >() );
        Pnt4f_exposer.def( bp::self < bp::self );
        Pnt4f_exposer.def( bp::self == bp::self );
        { //::OSG::Point< float, 4u >::operator[]
        
            typedef OSG::Point< float, 4u > exported_class_t;
            typedef float & ( exported_class_t::*__getitem___function_type )( ::OSG::UInt32 const ) ;
            
            Pnt4f_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::OSG::Point< float, 4u >::operator[] )
                , ( bp::arg("uiVal") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::OSG::Point< float, 4u >::operator[]
        
            typedef OSG::Point< float, 4u > exported_class_t;
            typedef float const & ( exported_class_t::*__getitem___function_type )( ::OSG::UInt32 const ) const;
            
            Pnt4f_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::OSG::Point< float, 4u >::operator[] )
                , ( bp::arg("uiVal") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::Point< float, 4u >::setNull
        
            typedef OSG::Point< float, 4u > exported_class_t;
            typedef void ( exported_class_t::*setNull_function_type )(  ) ;
            
            Pnt4f_exposer.def( 
                "setNull"
                , setNull_function_type( &::OSG::Point< float, 4u >::setNull ) );
        
        }
        { //::OSG::Point< float, 4u >::setValue
        
            typedef OSG::Point< float, 4u > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::Point< float, 4u > const & ) ;
            
            Pnt4f_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::Point< float, 4u >::setValue )
                , ( bp::arg("pnt") ) );
        
        }
        { //::OSG::Point< float, 4u >::setValue
        
            typedef OSG::Point< float, 4u > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( float const * ) ;
            
            Pnt4f_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::Point< float, 4u >::setValue )
                , ( bp::arg("pVals") ) );
        
        }
        { //::OSG::Point< float, 4u >::setValue
        
            typedef OSG::Point< float, 4u > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( float * ) ;
            
            Pnt4f_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::Point< float, 4u >::setValue )
                , ( bp::arg("pVals") ) );
        
        }
        { //::OSG::Point< float, 4u >::setValueFromCString
        
            typedef OSG::Point< float, 4u > exported_class_t;
            typedef void ( exported_class_t::*setValueFromCString_function_type )( ::OSG::Char8 const * ) ;
            
            Pnt4f_exposer.def( 
                "setValueFromCString"
                , setValueFromCString_function_type( &::OSG::Point< float, 4u >::setValueFromCString )
                , ( bp::arg("szString") ) );
        
        }
        { //::OSG::Point< float, 4u >::setValueFromCString
        
            typedef OSG::Point< float, 4u > exported_class_t;
            typedef void ( exported_class_t::*setValueFromCString_function_type )( ::OSG::Char8 * ) ;
            
            Pnt4f_exposer.def( 
                "setValueFromCString"
                , setValueFromCString_function_type( &::OSG::Point< float, 4u >::setValueFromCString )
                , ( bp::arg("szString") ) );
        
        }
        { //::OSG::Point< float, 4u >::subZero
        
            typedef OSG::Point< float, 4u > exported_class_t;
            typedef ::OSG::Vector< float, 4u > & ( exported_class_t::*subZero_function_type )(  ) ;
            
            Pnt4f_exposer.def( 
                "subZero"
                , subZero_function_type( &::OSG::Point< float, 4u >::subZero )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Point< float, 4u >::subZero
        
            typedef OSG::Point< float, 4u > exported_class_t;
            typedef ::OSG::Vector< float, 4u > const & ( exported_class_t::*subZero_function_type )(  ) const;
            
            Pnt4f_exposer.def( 
                "subZero"
                , subZero_function_type( &::OSG::Point< float, 4u >::subZero )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        Pnt4f_exposer.def("getValues",osgwrap::getValues4<OSG::Pnt4f>);
        Pnt4f_exposer.def("__setitem__",osgwrap::setArrayElement<OSG::Pnt4f,OSG::Pnt4f::ValueType>);
        Pnt4f_exposer.def(boost::python::self_ns::str(boost::python::self));
    }

}
