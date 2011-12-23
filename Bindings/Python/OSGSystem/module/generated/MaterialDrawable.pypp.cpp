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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "MaterialDrawable.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct MaterialDrawable_wrapper : OSG::MaterialDrawable, bp::wrapper< OSG::MaterialDrawable > {



};

void register_MaterialDrawable_class(){

    { //::OSG::MaterialDrawable
        typedef bp::class_< MaterialDrawable_wrapper, bp::bases< OSG::MaterialDrawableBase >, boost::noncopyable > MaterialDrawable_exposer_t;
        MaterialDrawable_exposer_t MaterialDrawable_exposer = MaterialDrawable_exposer_t( "MaterialDrawable", bp::no_init );
        bp::scope MaterialDrawable_scope( MaterialDrawable_exposer );
        { //::OSG::MaterialDrawable::changed
        
            typedef void ( ::OSG::MaterialDrawable::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            MaterialDrawable_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::MaterialDrawable::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::MaterialDrawable::drawPrimitives
        
            typedef void ( ::OSG::MaterialDrawable::*drawPrimitives_function_type )( ::OSG::DrawEnv * ) ;
            
            MaterialDrawable_exposer.def( 
                "drawPrimitives"
                , drawPrimitives_function_type( &::OSG::MaterialDrawable::drawPrimitives )
                , ( bp::arg("pEnv") ) );
        
        }
        { //::OSG::MaterialDrawable::dump
        
            typedef void ( ::OSG::MaterialDrawable::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            MaterialDrawable_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::MaterialDrawable::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::MaterialDrawable::renderActionEnterHandler
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::MaterialDrawable::*renderActionEnterHandler_function_type )( ::OSG::Action * ) ;
            
            MaterialDrawable_exposer.def( 
                "renderActionEnterHandler"
                , renderActionEnterHandler_function_type( &::OSG::MaterialDrawable::renderActionEnterHandler )
                , ( bp::arg("action") ) );
        
        }
        { //::OSG::MaterialDrawable::renderActionLeaveHandler
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::MaterialDrawable::*renderActionLeaveHandler_function_type )( ::OSG::Action * ) ;
            
            MaterialDrawable_exposer.def( 
                "renderActionLeaveHandler"
                , renderActionLeaveHandler_function_type( &::OSG::MaterialDrawable::renderActionLeaveHandler )
                , ( bp::arg("action") ) );
        
        }
        { //::OSG::Drawable::fill
        
            typedef void ( ::OSG::Drawable::*fill_function_type )( ::OSG::DrawableStatsAttachment * ) ;
            
            MaterialDrawable_exposer.def( 
                "fill"
                , fill_function_type( &::OSG::Drawable::fill )
                , ( bp::arg("pStat") ) );
        
        }
        pyopensg::register_transit< OSG::MaterialDrawable >::execute();
        bp::register_ptr_to_python< OSG::MaterialDrawable::ObjRecPtr >();
        bp::implicitly_convertible< OSG::MaterialDrawable::ObjRecPtr, OSG::MaterialDrawable* >();
        bp::implicitly_convertible< OSG::MaterialDrawable::ObjRecPtr, OSG::MaterialDrawable::ObjCPtr >();
        bp::implicitly_convertible< OSG::MaterialDrawable::ObjRecPtr, OSG::Drawable* >();
        bp::implicitly_convertible< OSG::MaterialDrawable::ObjRecPtr, OSG::Drawable::ObjRecPtr >();
        bp::implicitly_convertible<OSG::MaterialDrawable::ObjRecPtr, OSG::Drawable::ObjCPtr>();
    }

}
