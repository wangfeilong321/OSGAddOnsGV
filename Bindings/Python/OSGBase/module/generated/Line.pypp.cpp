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
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "Line.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_Line_class(){

    { //::OSG::Line
        typedef bp::class_< OSG::Line > Line_exposer_t;
        Line_exposer_t Line_exposer = Line_exposer_t( "Line", bp::init< >() );
        bp::scope Line_scope( Line_exposer );
        Line_exposer.def( bp::init< OSG::Line const & >(( bp::arg("obj") )) );
        Line_exposer.def( bp::init< OSG::Pnt3f const &, OSG::Pnt3f const & >(( bp::arg("p0"), bp::arg("p1") )) );
        Line_exposer.def( bp::init< OSG::Pnt3f const &, OSG::Vec3f const & >(( bp::arg("pos"), bp::arg("dir") )) );
        { //::OSG::Line::distance
        
            typedef ::OSG::Real32 ( ::OSG::Line::*distance_function_type )( ::OSG::Pnt3f const & ) const;
            
            Line_exposer.def( 
                "distance"
                , distance_function_type( &::OSG::Line::distance )
                , ( bp::arg("point") ) );
        
        }
        { //::OSG::Line::getClosestPoint
        
            typedef ::OSG::Pnt3f ( ::OSG::Line::*getClosestPoint_function_type )( ::OSG::Pnt3f const & ) const;
            
            Line_exposer.def( 
                "getClosestPoint"
                , getClosestPoint_function_type( &::OSG::Line::getClosestPoint )
                , ( bp::arg("point") ) );
        
        }
        { //::OSG::Line::getClosestPointT
        
            typedef ::OSG::Real32 ( ::OSG::Line::*getClosestPointT_function_type )( ::OSG::Pnt3f const & ) const;
            
            Line_exposer.def( 
                "getClosestPointT"
                , getClosestPointT_function_type( &::OSG::Line::getClosestPointT )
                , ( bp::arg("point") ) );
        
        }
        { //::OSG::Line::getClosestPoints
        
            typedef bool ( ::OSG::Line::*getClosestPoints_function_type )( ::OSG::Line const &,::OSG::Pnt3f &,::OSG::Pnt3f & ) const;
            
            Line_exposer.def( 
                "getClosestPoints"
                , getClosestPoints_function_type( &::OSG::Line::getClosestPoints )
                , ( bp::arg("line2"), bp::arg("ptOnThis"), bp::arg("ptOnLine2") ) );
        
        }
        { //::OSG::Line::getClosestPoints
        
            typedef bool ( ::OSG::Line::*getClosestPoints_function_type )( ::OSG::Line const &,::OSG::Real32 &,::OSG::Real32 & ) const;
            
            Line_exposer.def( 
                "getClosestPoints"
                , getClosestPoints_function_type( &::OSG::Line::getClosestPoints )
                , ( bp::arg("line2"), bp::arg("tOnThis"), bp::arg("tOnLine2") ) );
        
        }
        { //::OSG::Line::getDirection
        
            typedef ::OSG::Vec3f const & ( ::OSG::Line::*getDirection_function_type )(  ) const;
            
            Line_exposer.def( 
                "getDirection"
                , getDirection_function_type( &::OSG::Line::getDirection )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::Line::getPosition
        
            typedef ::OSG::Pnt3f const & ( ::OSG::Line::*getPosition_function_type )(  ) const;
            
            Line_exposer.def( 
                "getPosition"
                , getPosition_function_type( &::OSG::Line::getPosition )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::Line::intersect
        
            typedef bool ( ::OSG::Line::*intersect_function_type )( ::OSG::SphereVolume const & ) const;
            
            Line_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::Line::intersect )
                , ( bp::arg("sphere") ) );
        
        }
        { //::OSG::Line::intersect
        
            typedef bool ( ::OSG::Line::*intersect_function_type )( ::OSG::SphereVolume const &,::OSG::Real32 &,::OSG::Real32 & ) const;
            
            Line_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::Line::intersect )
                , ( bp::arg("sphere"), bp::arg("enter"), bp::arg("exit") ) );
        
        }
        { //::OSG::Line::intersect
        
            typedef bool ( ::OSG::Line::*intersect_function_type )( ::OSG::CylinderVolume const & ) const;
            
            Line_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::Line::intersect )
                , ( bp::arg("cyl") ) );
        
        }
        { //::OSG::Line::intersect
        
            typedef bool ( ::OSG::Line::*intersect_function_type )( ::OSG::CylinderVolume const &,::OSG::Real32 &,::OSG::Real32 & ) const;
            
            Line_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::Line::intersect )
                , ( bp::arg("cyl"), bp::arg("enter"), bp::arg("exit") ) );
        
        }
        { //::OSG::Line::intersect
        
            typedef bool ( ::OSG::Line::*intersect_function_type )( ::OSG::FrustumVolume const & ) const;
            
            Line_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::Line::intersect )
                , ( bp::arg("frustum") ) );
        
        }
        { //::OSG::Line::intersect
        
            typedef bool ( ::OSG::Line::*intersect_function_type )( ::OSG::FrustumVolume const &,::OSG::Real32 &,::OSG::Real32 & ) const;
            
            Line_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::Line::intersect )
                , ( bp::arg("frustum"), bp::arg("enter"), bp::arg("exit") ) );
        
        }
        { //::OSG::Line::intersect
        
            typedef bool ( ::OSG::Line::*intersect_function_type )( ::OSG::BoxVolume const &,::OSG::Real32 &,::OSG::Real32 & ) const;
            
            Line_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::Line::intersect )
                , ( bp::arg("box"), bp::arg("enter"), bp::arg("exit") ) );
        
        }
        { //::OSG::Line::intersect
        
            typedef bool ( ::OSG::Line::*intersect_function_type )( ::OSG::Real32,::OSG::BoxVolume const & ) const;
            
            Line_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::Line::intersect )
                , ( bp::arg("angle"), bp::arg("box") ) );
        
        }
        { //::OSG::Line::intersect
        
            typedef bool ( ::OSG::Line::*intersect_function_type )( ::OSG::Real32,::OSG::Vec3f const & ) const;
            
            Line_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::Line::intersect )
                , ( bp::arg("angle"), bp::arg("point") ) );
        
        }
        { //::OSG::Line::intersect
        
            typedef bool ( ::OSG::Line::*intersect_function_type )( ::OSG::Real32,::OSG::Vec3f const &,::OSG::Vec3f const &,::OSG::Vec3f & ) const;
            
            Line_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::Line::intersect )
                , ( bp::arg("angle"), bp::arg("v0"), bp::arg("v1"), bp::arg("pt") ) );
        
        }
        { //::OSG::Line::intersect
        
            typedef bool ( ::OSG::Line::*intersect_function_type )( ::OSG::Pnt3f const &,::OSG::Pnt3f const &,::OSG::Pnt3f const &,::OSG::Real32 &,::OSG::Vec3f * ) const;
            
            Line_exposer.def( 
                "intersect"
                , intersect_function_type( &::OSG::Line::intersect )
                , ( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("t"), bp::arg("normal")=0l ) );
        
        }
        Line_exposer.def( bp::self != bp::self );
        Line_exposer.def( bp::self == bp::self );
        { //::OSG::Line::setValue
        
            typedef void ( ::OSG::Line::*setValue_function_type )( ::OSG::Pnt3f const &,::OSG::Pnt3f const & ) ;
            
            Line_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::Line::setValue )
                , ( bp::arg("p0"), bp::arg("p1") ) );
        
        }
        { //::OSG::Line::setValue
        
            typedef void ( ::OSG::Line::*setValue_function_type )( ::OSG::Pnt3f const &,::OSG::Vec3f const & ) ;
            
            Line_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::Line::setValue )
                , ( bp::arg("pos"), bp::arg("dir") ) );
        
        }
        { //::OSG::Line::transform
        
            typedef void ( ::OSG::Line::*transform_function_type )( ::OSG::Matrix4f const & ) ;
            
            Line_exposer.def( 
                "transform"
                , transform_function_type( &::OSG::Line::transform )
                , ( bp::arg("mat") ) );
        
        }
    }

}
