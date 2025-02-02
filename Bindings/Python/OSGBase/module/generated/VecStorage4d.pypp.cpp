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
#include "VecStorage4d.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_VecStorage4d_class(){

    { //::OSG::VecStorage4< double >
        typedef bp::class_< OSG::VecStorage4< double >, boost::noncopyable > VecStorage4d_exposer_t;
        VecStorage4d_exposer_t VecStorage4d_exposer = VecStorage4d_exposer_t( "VecStorage4d", bp::init< >() );
        bp::scope VecStorage4d_scope( VecStorage4d_exposer );
        { //::OSG::VecStorage4< double >::setValues
        
            typedef OSG::VecStorage4< double > exported_class_t;
            typedef void ( exported_class_t::*setValues_function_type )( double const,double const,double const,double const ) ;
            
            VecStorage4d_exposer.def( 
                "setValues"
                , setValues_function_type( &::OSG::VecStorage4< double >::setValues )
                , ( bp::arg("rVal1"), bp::arg("rVal2"), bp::arg("rVal3"), bp::arg("rVal4") ) );
        
        }
        { //::OSG::VecStorage4< double >::w
        
            typedef OSG::VecStorage4< double > exported_class_t;
            typedef double ( exported_class_t::*w_function_type )(  ) const;
            
            VecStorage4d_exposer.def( 
                "w"
                , w_function_type( &::OSG::VecStorage4< double >::w ) );
        
        }
        { //::OSG::VecStorage4< double >::x
        
            typedef OSG::VecStorage4< double > exported_class_t;
            typedef double ( exported_class_t::*x_function_type )(  ) const;
            
            VecStorage4d_exposer.def( 
                "x"
                , x_function_type( &::OSG::VecStorage4< double >::x ) );
        
        }
        { //::OSG::VecStorage4< double >::y
        
            typedef OSG::VecStorage4< double > exported_class_t;
            typedef double ( exported_class_t::*y_function_type )(  ) const;
            
            VecStorage4d_exposer.def( 
                "y"
                , y_function_type( &::OSG::VecStorage4< double >::y ) );
        
        }
        { //::OSG::VecStorage4< double >::z
        
            typedef OSG::VecStorage4< double > exported_class_t;
            typedef double ( exported_class_t::*z_function_type )(  ) const;
            
            VecStorage4d_exposer.def( 
                "z"
                , z_function_type( &::OSG::VecStorage4< double >::z ) );
        
        }
        VecStorage4d_exposer.def("getSeparateValues",&osgwrap::VecStorage4_getSeparateValues_tuple<OSG::Real64>);
    }

}
