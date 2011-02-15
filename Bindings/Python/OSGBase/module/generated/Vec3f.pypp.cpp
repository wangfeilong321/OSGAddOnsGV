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
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "Vec3f.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_Vec3f_class(){

    { //::OSG::Vector< float, 3u >
        typedef bp::class_< OSG::Vector< float, 3u >, bp::bases< OSG::Point< float, 3u > > > Vec3f_exposer_t;
        Vec3f_exposer_t Vec3f_exposer = Vec3f_exposer_t( "Vec3f", bp::init< >() );
        bp::scope Vec3f_scope( Vec3f_exposer );
        Vec3f_exposer.def( bp::init< float const * >(( bp::arg("pVals") )) );
        bp::implicitly_convertible< float const *, OSG::Vector< float, 3u > >();
        Vec3f_exposer.def( bp::init< float * >(( bp::arg("pVals") )) );
        bp::implicitly_convertible< float *, OSG::Vector< float, 3u > >();
        Vec3f_exposer.def( bp::init< OSG::Vector< float, 3u > const & >(( bp::arg("source") )) );
        Vec3f_exposer.def( bp::init< float >(( bp::arg("rVal1") )) );
        bp::implicitly_convertible< float const, OSG::Vector< float, 3u > >();
        Vec3f_exposer.def( bp::init< float, float >(( bp::arg("rVal1"), bp::arg("rVal2") )) );
        Vec3f_exposer.def( bp::init< float, float, float >(( bp::arg("rVal1"), bp::arg("rVal2"), bp::arg("rVal3") )) );
        Vec3f_exposer.def( bp::init< float, float, float, float >(( bp::arg("rVal1"), bp::arg("rVal2"), bp::arg("rVal3"), bp::arg("rVal4") )) );
        { //::OSG::Vector< float, 3u >::addToZero
        
            typedef OSG::Vector< float, 3u > exported_class_t;
            typedef ::OSG::Point< float, 3u > const & ( exported_class_t::*addToZero_function_type )(  ) const;
            
            Vec3f_exposer.def( 
                "addToZero"
                , addToZero_function_type( &::OSG::Vector< float, 3u >::addToZero )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Vector< float, 3u >::addToZero
        
            typedef OSG::Vector< float, 3u > exported_class_t;
            typedef ::OSG::Point< float, 3u > & ( exported_class_t::*addToZero_function_type )(  ) ;
            
            Vec3f_exposer.def( 
                "addToZero"
                , addToZero_function_type( &::OSG::Vector< float, 3u >::addToZero )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Vector< float, 3u >::cross
        
            typedef OSG::Vector< float, 3u > exported_class_t;
            typedef ::OSG::Vector< float, 3u > ( exported_class_t::*cross_function_type )( ::OSG::Vector< float, 3u > const & ) const;
            
            Vec3f_exposer.def( 
                "cross"
                , cross_function_type( &::OSG::Vector< float, 3u >::cross )
                , ( bp::arg("vec") ) );
        
        }
        { //::OSG::Vector< float, 3u >::crossThis
        
            typedef OSG::Vector< float, 3u > exported_class_t;
            typedef void ( exported_class_t::*crossThis_function_type )( ::OSG::Vector< float, 3u > const & ) ;
            
            Vec3f_exposer.def( 
                "crossThis"
                , crossThis_function_type( &::OSG::Vector< float, 3u >::crossThis )
                , ( bp::arg("vec") ) );
        
        }
        { //::OSG::Vector< float, 3u >::dot
        
            typedef OSG::Vector< float, 3u > exported_class_t;
            typedef float ( exported_class_t::*dot_function_type )( ::OSG::Vector< float, 3u > const & ) const;
            
            Vec3f_exposer.def( 
                "dot"
                , dot_function_type( &::OSG::Vector< float, 3u >::dot )
                , ( bp::arg("vec") ) );
        
        }
        { //::OSG::Vector< float, 3u >::dot
        
            typedef OSG::Vector< float, 3u > exported_class_t;
            typedef float ( exported_class_t::*dot_function_type )( ::OSG::Point< float, 3u > const & ) const;
            
            Vec3f_exposer.def( 
                "dot"
                , dot_function_type( &::OSG::Vector< float, 3u >::dot )
                , ( bp::arg("pnt") ) );
        
        }
        { //::OSG::Vector< float, 3u >::enclosedAngle
        
            typedef OSG::Vector< float, 3u > exported_class_t;
            typedef ::OSG::Real32 ( exported_class_t::*enclosedAngle_function_type )( ::OSG::Vector< float, 3u > const & ) const;
            
            Vec3f_exposer.def( 
                "enclosedAngle"
                , enclosedAngle_function_type( &::OSG::Vector< float, 3u >::enclosedAngle )
                , ( bp::arg("vec") ) );
        
        }
        { //::OSG::Vector< float, 3u >::length
        
            typedef OSG::Vector< float, 3u > exported_class_t;
            typedef ::OSG::Real32 ( exported_class_t::*length_function_type )(  ) const;
            
            Vec3f_exposer.def( 
                "length"
                , length_function_type( &::OSG::Vector< float, 3u >::length ) );
        
        }
        { //::OSG::Vector< float, 3u >::normalize
        
            typedef OSG::Vector< float, 3u > exported_class_t;
            typedef void ( exported_class_t::*normalize_function_type )(  ) ;
            
            Vec3f_exposer.def( 
                "normalize"
                , normalize_function_type( &::OSG::Vector< float, 3u >::normalize ) );
        
        }
        Vec3f_exposer.def( bp::self != bp::self );
        Vec3f_exposer.def( bp::self % bp::self );
        Vec3f_exposer.def( bp::self * bp::self );
        Vec3f_exposer.def( bp::self * bp::other< OSG::Point< float, 3u > >() );
        Vec3f_exposer.def( bp::self * bp::other< float >() );
        Vec3f_exposer.def( bp::self + bp::self );
        Vec3f_exposer.def( bp::self - bp::self );
        Vec3f_exposer.def( -bp::self );
        Vec3f_exposer.def( bp::self / bp::other< float >() );
        Vec3f_exposer.def( bp::self < bp::self );
        Vec3f_exposer.def( bp::self == bp::self );
        { //::OSG::Vector< float, 3u >::projectTo
        
            typedef OSG::Vector< float, 3u > exported_class_t;
            typedef ::OSG::Real32 ( exported_class_t::*projectTo_function_type )( ::OSG::Vector< float, 3u > const & ) ;
            
            Vec3f_exposer.def( 
                "projectTo"
                , projectTo_function_type( &::OSG::Vector< float, 3u >::projectTo )
                , ( bp::arg("toVec") ) );
        
        }
        { //::OSG::Vector< float, 3u >::reflect
        
            typedef OSG::Vector< float, 3u > exported_class_t;
            typedef ::OSG::Vector< float, 3u > ( exported_class_t::*reflect_function_type )( ::OSG::Vector< float, 3u > const & ) const;
            
            Vec3f_exposer.def( 
                "reflect"
                , reflect_function_type( &::OSG::Vector< float, 3u >::reflect )
                , ( bp::arg("Normal") ) );
        
        }
        { //::OSG::Vector< float, 3u >::squareLength
        
            typedef OSG::Vector< float, 3u > exported_class_t;
            typedef ::OSG::Real32 ( exported_class_t::*squareLength_function_type )(  ) const;
            
            Vec3f_exposer.def( 
                "squareLength"
                , squareLength_function_type( &::OSG::Vector< float, 3u >::squareLength ) );
        
        }
        { //::OSG::Vector< float, 3u >::subZero
        
            typedef OSG::Vector< float, 3u > exported_class_t;
            typedef ::OSG::Vector< float, 3u > & ( exported_class_t::*subZero_function_type )(  ) ;
            
            Vec3f_exposer.def( 
                "subZero"
                , subZero_function_type( &::OSG::Vector< float, 3u >::subZero )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Vector< float, 3u >::subZero
        
            typedef OSG::Vector< float, 3u > exported_class_t;
            typedef ::OSG::Vector< float, 3u > const & ( exported_class_t::*subZero_function_type )(  ) const;
            
            Vec3f_exposer.def( 
                "subZero"
                , subZero_function_type( &::OSG::Vector< float, 3u >::subZero )
                , bp::return_internal_reference< >() );
        
        }
        Vec3f_exposer.def("__setitem__",osgwrap::setArrayElement<OSG::Vec3f,OSG::Vec3f::ValueType>);
        Vec3f_exposer.def(boost::python::self_ns::str(boost::python::self));
    }

}
