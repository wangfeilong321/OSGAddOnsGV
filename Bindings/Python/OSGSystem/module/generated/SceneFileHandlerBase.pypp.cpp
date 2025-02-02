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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SceneFileHandlerBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

namespace
{

OSG::NodeTransitPtr sfh_custom_read(OSG::SceneFileHandlerBase& sfh,
                                    const std::string& fileName)
{
   return sfh.read(fileName.c_str());
}

bp::list wrapGetSuffixList(OSG::SceneFileHandlerBase& sfh,
                           const OSG::UInt32 flags)
{
   std::list<const OSG::Char8*> list;
   sfh.getSuffixList(list, flags);
   bp::list python_list;

   typedef std::list<const OSG::Char8*>::iterator iter_type;
   for ( iter_type i = list.begin(); i != list.end(); ++i )
   {
      python_list.append(*i);
   }

   return python_list;
}

OSG::FieldContainer* globalResolverCallback(bp::object callable,
                                            const OSG::Char8* s)
{
   OSG::FieldContainerRecPtr fc =
      bp::extract<OSG::FieldContainerRecPtr>(callable(s));
   return fc.get();
}
/*
bp::object wrapGetGlobalResolver(const OSG::SceneFileHandlerBase& sfh)
{
   OSG::SceneFileType::Resolver res(sfh.getGlobalResolver());
   return bp::make_function(res, bp::return_value_policy<bp::reference_existing_object>());
}
*/
void wrapSetGlobalResolver(OSG::SceneFileHandlerBase* sfh,
                           bp::object callable)
{
   sfh->setGlobalResolver(boost::bind(globalResolverCallback, callable, _1));
}

}

void register_SceneFileHandlerBase_class(){

    { //::OSG::SceneFileHandlerBase
        typedef bp::class_< OSG::SceneFileHandlerBase, boost::noncopyable > SceneFileHandlerBase_exposer_t;
        SceneFileHandlerBase_exposer_t SceneFileHandlerBase_exposer = SceneFileHandlerBase_exposer_t( "SceneFileHandlerBase", bp::no_init );
        bp::scope SceneFileHandlerBase_scope( SceneFileHandlerBase_exposer );
        { //::OSG::SceneFileHandlerBase::getFileType
        
            typedef ::OSG::SceneFileType * ( ::OSG::SceneFileHandlerBase::*getFileType_function_type )( ::OSG::Char8 const * ) ;
            
            SceneFileHandlerBase_exposer.def( 
                "getFileType"
                , getFileType_function_type( &::OSG::SceneFileHandlerBase::getFileType )
                , ( bp::arg("fileNameOrExtension") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SceneFileHandlerBase::getOption
        
            typedef bool ( ::OSG::SceneFileHandlerBase::*getOption_function_type )( ::std::string const &,::std::string const &,::std::string & ) ;
            
            SceneFileHandlerBase_exposer.def( 
                "getOption"
                , getOption_function_type( &::OSG::SceneFileHandlerBase::getOption )
                , ( bp::arg("suffix"), bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SceneFileHandlerBase::popOptions
        
            typedef void ( ::OSG::SceneFileHandlerBase::*popOptions_function_type )( ::std::string const & ) ;
            
            SceneFileHandlerBase_exposer.def( 
                "popOptions"
                , popOptions_function_type( &::OSG::SceneFileHandlerBase::popOptions )
                , ( bp::arg("suffix") ) );
        
        }
        { //::OSG::SceneFileHandlerBase::print
        
            typedef void ( ::OSG::SceneFileHandlerBase::*print_function_type )(  ) ;
            
            SceneFileHandlerBase_exposer.def( 
                "print"
                , print_function_type( &::OSG::SceneFileHandlerBase::print ) );
        
        }
        { //::OSG::SceneFileHandlerBase::pushOptions
        
            typedef void ( ::OSG::SceneFileHandlerBase::*pushOptions_function_type )( ::std::string const &,bool ) ;
            
            SceneFileHandlerBase_exposer.def( 
                "pushOptions"
                , pushOptions_function_type( &::OSG::SceneFileHandlerBase::pushOptions )
                , ( bp::arg("suffix"), bp::arg("copyTop")=(bool)(true) ) );
        
        }
        { //::OSG::SceneFileHandlerBase::setDefaultGraphOp
        
            typedef void ( ::OSG::SceneFileHandlerBase::*setDefaultGraphOp_function_type )( ::OSG::GraphOpSeq * ) ;
            
            SceneFileHandlerBase_exposer.def( 
                "setDefaultGraphOp"
                , setDefaultGraphOp_function_type( &::OSG::SceneFileHandlerBase::setDefaultGraphOp )
                , ( bp::arg("graphOpSeq") ) );
        
        }
        { //::OSG::SceneFileHandlerBase::setOption
        
            typedef bool ( ::OSG::SceneFileHandlerBase::*setOption_function_type )( ::std::string const &,::std::string const &,::std::string const & ) ;
            
            SceneFileHandlerBase_exposer.def( 
                "setOption"
                , setOption_function_type( &::OSG::SceneFileHandlerBase::setOption )
                , ( bp::arg("suffix"), bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SceneFileHandlerBase::setPathHandler
        
            typedef void ( ::OSG::SceneFileHandlerBase::*setPathHandler_function_type )( ::OSG::PathHandler * ) ;
            
            SceneFileHandlerBase_exposer.def( 
                "setPathHandler"
                , setPathHandler_function_type( &::OSG::SceneFileHandlerBase::setPathHandler )
                , ( bp::arg("pathHandler") ) );
        
        }
        { //::OSG::SceneFileHandlerBase::unsetOption
        
            typedef bool ( ::OSG::SceneFileHandlerBase::*unsetOption_function_type )( ::std::string const &,::std::string const & ) ;
            
            SceneFileHandlerBase_exposer.def( 
                "unsetOption"
                , unsetOption_function_type( &::OSG::SceneFileHandlerBase::unsetOption )
                , ( bp::arg("suffix"), bp::arg("name") ) );
        
        }
        { //::OSG::SceneFileHandlerBase::updateReadProgress
        
            typedef void ( ::OSG::SceneFileHandlerBase::*updateReadProgress_function_type )(  ) ;
            
            SceneFileHandlerBase_exposer.def( 
                "updateReadProgress"
                , updateReadProgress_function_type( &::OSG::SceneFileHandlerBase::updateReadProgress ) );
        
        }
        { //::OSG::SceneFileHandlerBase::updateReadProgress
        
            typedef void ( ::OSG::SceneFileHandlerBase::*updateReadProgress_function_type )( ::OSG::UInt32 ) ;
            
            SceneFileHandlerBase_exposer.def( 
                "updateReadProgress"
                , updateReadProgress_function_type( &::OSG::SceneFileHandlerBase::updateReadProgress )
                , ( bp::arg("p") ) );
        
        }
        { //::OSG::SceneFileHandlerBase::updateWriteProgress
        
            typedef void ( ::OSG::SceneFileHandlerBase::*updateWriteProgress_function_type )( ::OSG::UInt32 ) ;
            
            SceneFileHandlerBase_exposer.def( 
                "updateWriteProgress"
                , updateWriteProgress_function_type( &::OSG::SceneFileHandlerBase::updateWriteProgress )
                , ( bp::arg("p") ) );
        
        }
        { //::OSG::SceneFileHandlerBase::write
        
            typedef bool ( ::OSG::SceneFileHandlerBase::*write_function_type )( ::OSG::Node * const,::std::ostream &,::OSG::Char8 const *,bool ) ;
            
            SceneFileHandlerBase_exposer.def( 
                "write"
                , write_function_type( &::OSG::SceneFileHandlerBase::write )
                , ( bp::arg("node"), bp::arg("os"), bp::arg("ext"), bp::arg("compress")=(bool)(false) ) );
        
        }
        { //::OSG::SceneFileHandlerBase::write
        
            typedef bool ( ::OSG::SceneFileHandlerBase::*write_function_type )( ::OSG::Node * const,::OSG::Char8 const *,bool ) ;
            
            SceneFileHandlerBase_exposer.def( 
                "write"
                , write_function_type( &::OSG::SceneFileHandlerBase::write )
                , ( bp::arg("node"), bp::arg("fileName"), bp::arg("compress")=(bool)(false) ) );
        
        }
        SceneFileHandlerBase_exposer.def("read",sfh_custom_read);
        SceneFileHandlerBase_exposer.def("setGlobalResolver",wrapSetGlobalResolver);
        SceneFileHandlerBase_exposer.def("getSuffixList", wrapGetSuffixList,
                  (bp::arg("flags") = OSG::SceneFileType::OSG_READ_SUPPORTED |
                                      OSG::SceneFileType::OSG_WRITE_SUPPORTED));
    }

}
