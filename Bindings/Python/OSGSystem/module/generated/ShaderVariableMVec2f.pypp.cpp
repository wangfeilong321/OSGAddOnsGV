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
#include "ShaderVariableMVec2f.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ShaderVariableMVec2f_class(){

    { //::OSG::ShaderVariableMVec2f
        typedef bp::class_< OSG::ShaderVariableMVec2f, bp::bases< OSG::ShaderVariableMVec2fBase >, OSG::ShaderVariableMVec2f::ObjRecPtr, boost::noncopyable > ShaderVariableMVec2f_exposer_t;
        ShaderVariableMVec2f_exposer_t ShaderVariableMVec2f_exposer = ShaderVariableMVec2f_exposer_t( "ShaderVariableMVec2f", bp::no_init );
        bp::scope ShaderVariableMVec2f_scope( ShaderVariableMVec2f_exposer );
        { //::OSG::ShaderVariableMVec2f::changed
        
            typedef void ( ::OSG::ShaderVariableMVec2f::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            ShaderVariableMVec2f_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::ShaderVariableMVec2f::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::ShaderVariableMVec2f::dump
        
            typedef void ( ::OSG::ShaderVariableMVec2f::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ShaderVariableMVec2f_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::ShaderVariableMVec2f::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::ShaderVariableMVec2f >::execute();
        bp::implicitly_convertible< OSG::ShaderVariableMVec2f::ObjRecPtr, OSG::ShaderVariableMVec2f* >();
        bp::implicitly_convertible< OSG::ShaderVariableMVec2f::ObjRecPtr, OSG::ShaderVariableMVec2f::ObjCPtr >();
        bp::implicitly_convertible< OSG::ShaderVariableMVec2f::ObjRecPtr, OSG::ShaderValueVariable* >();
        bp::implicitly_convertible< OSG::ShaderVariableMVec2f::ObjRecPtr, OSG::ShaderValueVariable::ObjRecPtr >();
        bp::implicitly_convertible<OSG::ShaderVariableMVec2f::ObjRecPtr, OSG::ShaderValueVariable::ObjCPtr>();
    }

}
