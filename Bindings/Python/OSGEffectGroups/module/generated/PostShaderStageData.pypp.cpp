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
#include "OSGEffectGroups_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "PostShaderStageData.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_PostShaderStageData_class(){

    { //::OSG::PostShaderStageData
        typedef bp::class_< OSG::PostShaderStageData, bp::bases< OSG::PostShaderStageDataBase >, OSG::PostShaderStageData::ObjRecPtr, boost::noncopyable > PostShaderStageData_exposer_t;
        PostShaderStageData_exposer_t PostShaderStageData_exposer = PostShaderStageData_exposer_t( "PostShaderStageData", bp::no_init );
        bp::scope PostShaderStageData_scope( PostShaderStageData_exposer );
        { //::OSG::PostShaderStageData::changed
        
            typedef void ( ::OSG::PostShaderStageData::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            PostShaderStageData_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::PostShaderStageData::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::PostShaderStageData::dump
        
            typedef void ( ::OSG::PostShaderStageData::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            PostShaderStageData_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::PostShaderStageData::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::PostShaderStageData >::execute();
        bp::implicitly_convertible< OSG::PostShaderStageData::ObjRecPtr, OSG::PostShaderStageData* >();
        bp::implicitly_convertible< OSG::PostShaderStageData::ObjRecPtr, OSG::PostShaderStageData::ObjCPtr >();
        bp::implicitly_convertible< OSG::PostShaderStageData::ObjRecPtr, OSG::StageData* >();
        bp::implicitly_convertible< OSG::PostShaderStageData::ObjRecPtr, OSG::StageData::ObjRecPtr >();
        bp::implicitly_convertible<OSG::PostShaderStageData::ObjRecPtr, OSG::StageData::ObjCPtr>();
    }

}
