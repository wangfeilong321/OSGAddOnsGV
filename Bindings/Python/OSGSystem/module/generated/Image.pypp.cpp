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
#include "__call_policies.pypp.hpp"
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "Image.pypp.hpp"

using namespace std;
namespace bp = boost::python;

static boost::python::object write_5b99e6d786e89389727b1b2d409008f3( ::OSG::Image & inst, ::OSG::Char8 const * fileName ){
    PyThreadState* _save = PyEval_SaveThread();
    bool result = inst.write(fileName);
    PyEval_RestoreThread(_save);
    return bp::object( result );
}

namespace
{

class ImageData : boost::noncopyable
{
public:
   ImageData(const OSG::UInt8* data, const size_t size)
      : mData(NULL)
      , mSize(size)
   {
      if ( NULL != data && size > 0 )
      {
         mData = reinterpret_cast<OSG::UInt8*>(std::malloc(size));
         std::memcpy(mData, data, size);
      }
   }

   explicit ImageData(const size_t size)
      : mData(NULL)
      , mSize(size)
   {
      if ( size > 0 )
      {
         mData = reinterpret_cast<OSG::UInt8*>(std::malloc(size));
      }
   }

   ~ImageData()
   {
      if ( NULL != mData )
      {
         std::free(mData);
         mData = NULL;
      }
   }

   const OSG::UInt8* getData() const
   {
      return mData;
   }

   OSG::UInt8* edit()
   {
      return mData;
   }

   size_t size() const
   {
      return mSize;
   }

   const std::string toString() const
   {
      return std::string(reinterpret_cast<const char*>(mData), mSize);
   }

   operator std::string() const
   {
      return toString();
   }

   operator const OSG::UInt8*() const
   {
      return getData();
   }

   bool operator==(const ImageData& other) const
   {
      return mData == other.mData;
   }

private:
   OSG::UInt8* mData;
   const size_t mSize;

   ImageData(const ImageData &other);
   void operator =(const ImageData &other);
};

typedef boost::shared_ptr<ImageData> ImageDataPtr;

ImageDataPtr wrapGetData(const OSG::Image* image, const OSG::UInt32 mipmapNum,
                         const OSG::UInt32 frameNum, const OSG::UInt32 sideNum)
{
   const bool with_mipmap(mipmapNum == 0);
   const bool with_frame_num(mipmapNum == 0);
   const bool with_side_count(mipmapNum == 0);
   const unsigned long size(image->getSize(with_mipmap, with_frame_num,
                                           with_side_count));
   return ImageDataPtr(
      new ImageData(image->getData(mipmapNum, frameNum, sideNum), size)
   );
}

bool wrapSet(OSG::Image& image, const OSG::UInt32 pixelFormat,
             const OSG::Int32 width, const OSG::Int32 height,
             const OSG::Int32 depth, const OSG::Int32 mipmapCount,
             const OSG::Int32 frameCount, const OSG::Time frameDelay,
             ImageDataPtr data, const OSG::Int32 type, const bool allocMem,
             const OSG::Int32 sideCount)
{
   const OSG::UInt8* data_ptr(NULL);
   if ( data.get() != NULL )
   {
      data_ptr = data->getData();
   }

   return image.set(pixelFormat, width, height, depth, mipmapCount,
                    frameCount, frameDelay, data_ptr, type, allocMem,
                    sideCount);
}

bool wrapSetData(OSG::Image& image, ImageDataPtr data)
{
   if ( data.get() == NULL )
   {
      return image.setData();
   }
   else
   {
      return image.setData(*data);
   }
}

bool wrapSetSubData(OSG::Image& image, const OSG::Int32 offX,
                    const OSG::Int32 offY, const OSG::Int32 offZ,
                    const OSG::Int32 srcW, const OSG::Int32 srcH,
                    const OSG::Int32 srcD, ImageDataPtr data)
{
   return image.setSubData(offX, offY, offZ, srcW, srcH, srcD, *data);
}

ImageDataPtr wrapStore(OSG::Image& image, const OSG::Char8* mimeType,
                       const OSG::Int32 memSize)
{
   const unsigned long size(image.getSize());
   ImageDataPtr data(new ImageData(size));
   image.store(mimeType, data->edit(), memSize);
   return data;
}

}

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS( Image_createMipmap_overloads, OSG::Image::createMipmap, 0, 2 )

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS( Image_mirror_overloads, OSG::Image::mirror, 2, 4 )

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS( Image_scale_overloads, OSG::Image::scale, 1, 4 )

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS( Image_reformat_overloads, OSG::Image::reformat, 1, 3 )

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS( Image_subImage_overloads, OSG::Image::subImage, 6, 7 )

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS( Image_slice_overloads, OSG::Image::slice, 0, 4 )

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS( Image_scaleNextPower2_overloads, OSG::Image::scaleNextPower2, 0, 1 )

void register_Image_class(){

    { //::OSG::Image
        typedef bp::class_< OSG::Image, bp::bases< OSG::ImageBase >, OSG::Image::ObjRecPtr, boost::noncopyable > Image_exposer_t;
        Image_exposer_t Image_exposer = Image_exposer_t( "Image", bp::no_init );
        bp::scope Image_scope( Image_exposer );
        { //::OSG::Image::createMipmap
        
            typedef bool ( ::OSG::Image::*createMipmap_function_type )( ::OSG::Int32,::OSG::Image * ) ;
            
            Image_exposer.def( 
                "createMipmap"
                , createMipmap_function_type( &::OSG::Image::createMipmap )
                , Image_createMipmap_overloads( 
                        bp::args( "level", "destination" ) ) );
        
        }
        { //::OSG::Image::mirror
        
            typedef bool ( ::OSG::Image::*mirror_function_type )( bool,bool,bool,::OSG::Image * ) ;
            
            Image_exposer.def( 
                "mirror"
                , mirror_function_type( &::OSG::Image::mirror )
                , Image_mirror_overloads( 
                        bp::args( "horizontal", "vertical", "flipDepth", "destination" ) ) );
        
        }
        { //::OSG::Image::scale
        
            typedef bool ( ::OSG::Image::*scale_function_type )( ::OSG::Int32,::OSG::Int32,::OSG::Int32,::OSG::Image * ) ;
            
            Image_exposer.def( 
                "scale"
                , scale_function_type( &::OSG::Image::scale )
                , Image_scale_overloads( 
                        bp::args( "width", "height", "depth", "destination" ) ) );
        
        }
        { //::OSG::Image::reformat
        
            typedef bool ( ::OSG::Image::*reformat_function_type )( ::OSG::Image::PixelFormat const,::OSG::Image *,::OSG::Int32 ) ;
            
            Image_exposer.def( 
                "reformat"
                , reformat_function_type( &::OSG::Image::reformat )
                , Image_reformat_overloads( 
                        bp::args( "pixelFormat", "destination", "iCompressionFlags" ) ) );
        
        }
        { //::OSG::Image::subImage
        
            typedef bool ( ::OSG::Image::*subImage_function_type )( ::OSG::Int32,::OSG::Int32,::OSG::Int32,::OSG::Int32,::OSG::Int32,::OSG::Int32,::OSG::Image * ) ;
            
            Image_exposer.def( 
                "subImage"
                , subImage_function_type( &::OSG::Image::subImage )
                , Image_subImage_overloads( 
                        bp::args( "offX", "offY", "offZ", "destW", "destH", "destD", "destination" ) ) );
        
        }
        { //::OSG::Image::slice
        
            typedef bool ( ::OSG::Image::*slice_function_type )( ::OSG::Int32,::OSG::Int32,::OSG::Int32,::OSG::Image * ) ;
            
            Image_exposer.def( 
                "slice"
                , slice_function_type( &::OSG::Image::slice )
                , Image_slice_overloads( 
                        bp::args( "offX", "offY", "offZ", "destination" ) ) );
        
        }
        { //::OSG::Image::scaleNextPower2
        
            typedef bool ( ::OSG::Image::*scaleNextPower2_function_type )( ::OSG::Image * ) ;
            
            Image_exposer.def( 
                "scaleNextPower2"
                , scaleNextPower2_function_type( &::OSG::Image::scaleNextPower2 )
                , Image_scaleNextPower2_overloads( 
                        bp::args( "destination" ) ) );
        
        }
        bp::enum_< OSG::Image::PixelFormat>("PixelFormat")
            .value("OSG_INVALID_PF", OSG::Image::OSG_INVALID_PF)
            .value("OSG_A_PF", OSG::Image::OSG_A_PF)
            .value("OSG_I_PF", OSG::Image::OSG_I_PF)
            .value("OSG_L_PF", OSG::Image::OSG_L_PF)
            .value("OSG_LA_PF", OSG::Image::OSG_LA_PF)
            .value("OSG_RGB_PF", OSG::Image::OSG_RGB_PF)
            .value("OSG_RGBA_PF", OSG::Image::OSG_RGBA_PF)
            .value("OSG_BGR_PF", OSG::Image::OSG_BGR_PF)
            .value("OSG_BGRA_PF", OSG::Image::OSG_BGRA_PF)
            .value("OSG_RGB_DXT1", OSG::Image::OSG_RGB_DXT1)
            .value("OSG_RGBA_DXT1", OSG::Image::OSG_RGBA_DXT1)
            .value("OSG_RGBA_DXT3", OSG::Image::OSG_RGBA_DXT3)
            .value("OSG_RGBA_DXT5", OSG::Image::OSG_RGBA_DXT5)
            .value("OSG_DEPTH_PF", OSG::Image::OSG_DEPTH_PF)
            .value("OSG_DEPTH_STENCIL_PF", OSG::Image::OSG_DEPTH_STENCIL_PF)
            .value("OSG_ALPHA_INTEGER_PF", OSG::Image::OSG_ALPHA_INTEGER_PF)
            .value("OSG_RGB_INTEGER_PF", OSG::Image::OSG_RGB_INTEGER_PF)
            .value("OSG_RGBA_INTEGER_PF", OSG::Image::OSG_RGBA_INTEGER_PF)
            .value("OSG_BGR_INTEGER_PF", OSG::Image::OSG_BGR_INTEGER_PF)
            .value("OSG_BGRA_INTEGER_PF", OSG::Image::OSG_BGRA_INTEGER_PF)
            .value("OSG_LUMINANCE_INTEGER_PF", OSG::Image::OSG_LUMINANCE_INTEGER_PF)
            .value("OSG_LUMINANCE_ALPHA_INTEGER_PF", OSG::Image::OSG_LUMINANCE_ALPHA_INTEGER_PF)
            .export_values()
            ;
        bp::enum_< OSG::Image::ResUnit>("ResUnit")
            .value("OSG_RESUNIT_INVALID", OSG::Image::OSG_RESUNIT_INVALID)
            .value("OSG_RESUNIT_NONE", OSG::Image::OSG_RESUNIT_NONE)
            .value("OSG_RESUNIT_INCH", OSG::Image::OSG_RESUNIT_INCH)
            .export_values()
            ;
        bp::enum_< OSG::Image::Type>("Type")
            .value("OSG_INVALID_IMAGEDATATYPE", OSG::Image::OSG_INVALID_IMAGEDATATYPE)
            .value("OSG_UINT8_IMAGEDATA", OSG::Image::OSG_UINT8_IMAGEDATA)
            .value("OSG_UINT16_IMAGEDATA", OSG::Image::OSG_UINT16_IMAGEDATA)
            .value("OSG_UINT32_IMAGEDATA", OSG::Image::OSG_UINT32_IMAGEDATA)
            .value("OSG_FLOAT16_IMAGEDATA", OSG::Image::OSG_FLOAT16_IMAGEDATA)
            .value("OSG_FLOAT32_IMAGEDATA", OSG::Image::OSG_FLOAT32_IMAGEDATA)
            .value("OSG_INT16_IMAGEDATA", OSG::Image::OSG_INT16_IMAGEDATA)
            .value("OSG_INT32_IMAGEDATA", OSG::Image::OSG_INT32_IMAGEDATA)
            .value("OSG_UINT24_8_IMAGEDATA", OSG::Image::OSG_UINT24_8_IMAGEDATA)
            .export_values()
            ;
        { //::OSG::Image::addValue
        
            typedef bool ( ::OSG::Image::*addValue_function_type )( ::OSG::Char8 const * ) ;
            
            Image_exposer.def( 
                "addValue"
                , addValue_function_type( &::OSG::Image::addValue )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::Image::attachmentCount
        
            typedef ::OSG::UInt32 ( ::OSG::Image::*attachmentCount_function_type )(  ) const;
            
            Image_exposer.def( 
                "attachmentCount"
                , attachmentCount_function_type( &::OSG::Image::attachmentCount ) );
        
        }
        { //::OSG::Image::calcFrameNum
        
            typedef ::OSG::UInt32 ( ::OSG::Image::*calcFrameNum_function_type )( ::OSG::Time,bool ) const;
            
            Image_exposer.def( 
                "calcFrameNum"
                , calcFrameNum_function_type( &::OSG::Image::calcFrameNum )
                , ( bp::arg("time"), bp::arg("loop")=(bool)(true) ) );
        
        }
        { //::OSG::Image::calcIsAlphaBinary
        
            typedef bool ( ::OSG::Image::*calcIsAlphaBinary_function_type )(  ) ;
            
            Image_exposer.def( 
                "calcIsAlphaBinary"
                , calcIsAlphaBinary_function_type( &::OSG::Image::calcIsAlphaBinary ) );
        
        }
        { //::OSG::Image::calcMipmapLevelCount
        
            typedef ::OSG::UInt32 ( ::OSG::Image::*calcMipmapLevelCount_function_type )(  ) const;
            
            Image_exposer.def( 
                "calcMipmapLevelCount"
                , calcMipmapLevelCount_function_type( &::OSG::Image::calcMipmapLevelCount ) );
        
        }
        { //::OSG::Image::calcMipmapLevelSize
        
            typedef ::OSG::UInt32 ( ::OSG::Image::*calcMipmapLevelSize_function_type )( ::OSG::UInt32,::OSG::UInt32,::OSG::UInt32,::OSG::UInt32 ) const;
            
            Image_exposer.def( 
                "calcMipmapLevelSize"
                , calcMipmapLevelSize_function_type( &::OSG::Image::calcMipmapLevelSize )
                , ( bp::arg("mipmapNum"), bp::arg("w"), bp::arg("h"), bp::arg("d") ) );
        
        }
        { //::OSG::Image::calcMipmapLevelSize
        
            typedef ::OSG::UInt32 ( ::OSG::Image::*calcMipmapLevelSize_function_type )( ::OSG::UInt32 ) const;
            
            Image_exposer.def( 
                "calcMipmapLevelSize"
                , calcMipmapLevelSize_function_type( &::OSG::Image::calcMipmapLevelSize )
                , ( bp::arg("mipmapNum") ) );
        
        }
        { //::OSG::Image::calcMipmapSumSize
        
            typedef ::OSG::UInt32 ( ::OSG::Image::*calcMipmapSumSize_function_type )( ::OSG::UInt32,::OSG::UInt32,::OSG::UInt32,::OSG::UInt32 ) const;
            
            Image_exposer.def( 
                "calcMipmapSumSize"
                , calcMipmapSumSize_function_type( &::OSG::Image::calcMipmapSumSize )
                , ( bp::arg("mipmapNum"), bp::arg("w"), bp::arg("h"), bp::arg("d") ) );
        
        }
        { //::OSG::Image::calcMipmapSumSize
        
            typedef ::OSG::UInt32 ( ::OSG::Image::*calcMipmapSumSize_function_type )( ::OSG::UInt32 ) const;
            
            Image_exposer.def( 
                "calcMipmapSumSize"
                , calcMipmapSumSize_function_type( &::OSG::Image::calcMipmapSumSize )
                , ( bp::arg("mipmapNum") ) );
        
        }
        { //::OSG::Image::changed
        
            typedef void ( ::OSG::Image::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            Image_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::Image::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::Image::clear
        
            typedef void ( ::OSG::Image::*clear_function_type )( ::OSG::UChar8 ) ;
            
            Image_exposer.def( 
                "clear"
                , clear_function_type( &::OSG::Image::clear )
                , ( bp::arg("pixelValue")=(::OSG::UChar8)(0) ) );
        
        }
        { //::OSG::Image::clearData
        
            typedef void ( ::OSG::Image::*clearData_function_type )(  ) ;
            
            Image_exposer.def( 
                "clearData"
                , clearData_function_type( &::OSG::Image::clearData ) );
        
        }
        { //::OSG::Image::clearFloat
        
            typedef void ( ::OSG::Image::*clearFloat_function_type )( ::OSG::Real32 ) ;
            
            Image_exposer.def( 
                "clearFloat"
                , clearFloat_function_type( &::OSG::Image::clearFloat )
                , ( bp::arg("pixelValue")=0.0 ) );
        
        }
        { //::OSG::Image::convertDataTypeTo
        
            typedef bool ( ::OSG::Image::*convertDataTypeTo_function_type )( ::OSG::Int32 ) ;
            
            Image_exposer.def( 
                "convertDataTypeTo"
                , convertDataTypeTo_function_type( &::OSG::Image::convertDataTypeTo )
                , ( bp::arg("destDataType")=(::OSG::Int32)(::OSG::Int32(::OSG::Image::OSG_UINT8_IMAGEDATA)) ) );
        
        }
        { //::OSG::Image::dump
        
            typedef void ( ::OSG::Image::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            Image_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::Image::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::Image::findAttachmentField
        
            typedef ::std::string const * ( ::OSG::Image::*findAttachmentField_function_type )( ::std::string const & ) const;
            
            Image_exposer.def( 
                "findAttachmentField"
                , findAttachmentField_function_type( &::OSG::Image::findAttachmentField )
                , ( bp::arg("key") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Image::flipDepthFrameData
        
            typedef bool ( ::OSG::Image::*flipDepthFrameData_function_type )(  ) ;
            
            Image_exposer.def( 
                "flipDepthFrameData"
                , flipDepthFrameData_function_type( &::OSG::Image::flipDepthFrameData ) );
        
        }
        { //::OSG::Image::getComponents
        
            typedef ::OSG::UInt8 ( ::OSG::Image::*getComponents_function_type )(  ) const;
            
            Image_exposer.def( 
                "getComponents"
                , getComponents_function_type( &::OSG::Image::getComponents ) );
        
        }
        { //::OSG::Image::getHash
        
            typedef ::OSG::SizeT ( ::OSG::Image::*getHash_function_type )( bool ) const;
            
            Image_exposer.def( 
                "getHash"
                , getHash_function_type( &::OSG::Image::getHash )
                , ( bp::arg("force")=(bool)(false) ) );
        
        }
        { //::OSG::Image::getSize
        
            typedef long unsigned int ( ::OSG::Image::*getSize_function_type )( bool,bool,bool ) const;
            
            Image_exposer.def( 
                "getSize"
                , getSize_function_type( &::OSG::Image::getSize )
                , ( bp::arg("withMipmap")=(bool)(true), bp::arg("withFrames")=(bool)(true), bp::arg("withSides")=(bool)(true) ) );
        
        }
        { //::OSG::Image::hasAlphaChannel
        
            typedef bool ( ::OSG::Image::*hasAlphaChannel_function_type )(  ) ;
            
            Image_exposer.def( 
                "hasAlphaChannel"
                , hasAlphaChannel_function_type( &::OSG::Image::hasAlphaChannel ) );
        
        }
        { //::OSG::Image::hasAttachment
        
            typedef bool ( ::OSG::Image::*hasAttachment_function_type )(  ) const;
            
            Image_exposer.def( 
                "hasAttachment"
                , hasAttachment_function_type( &::OSG::Image::hasAttachment ) );
        
        }
        { //::OSG::Image::hasColorChannel
        
            typedef bool ( ::OSG::Image::*hasColorChannel_function_type )(  ) ;
            
            Image_exposer.def( 
                "hasColorChannel"
                , hasColorChannel_function_type( &::OSG::Image::hasColorChannel ) );
        
        }
        { //::OSG::Image::hasCompressedData
        
            typedef bool ( ::OSG::Image::*hasCompressedData_function_type )(  ) ;
            
            Image_exposer.def( 
                "hasCompressedData"
                , hasCompressedData_function_type( &::OSG::Image::hasCompressedData ) );
        
        }
        { //::OSG::Image::isAlphaBinary
        
            typedef bool ( ::OSG::Image::*isAlphaBinary_function_type )(  ) ;
            
            Image_exposer.def( 
                "isAlphaBinary"
                , isAlphaBinary_function_type( &::OSG::Image::isAlphaBinary ) );
        
        }
        { //::OSG::Image::isValid
        
            typedef bool ( ::OSG::Image::*isValid_function_type )(  ) const;
            
            Image_exposer.def( 
                "isValid"
                , isValid_function_type( &::OSG::Image::isValid ) );
        
        }
        { //::OSG::Image::read
        
            typedef bool ( ::OSG::Image::*read_function_type )( ::OSG::Char8 const * ) ;
            
            Image_exposer.def( 
                "read"
                , read_function_type( &::OSG::Image::read )
                , ( bp::arg("fileName") ) );
        
        }
        { //::OSG::Image::removeMipmap
        
            typedef bool ( ::OSG::Image::*removeMipmap_function_type )(  ) ;
            
            Image_exposer.def( 
                "removeMipmap"
                , removeMipmap_function_type( &::OSG::Image::removeMipmap ) );
        
        }
        { //::OSG::Image::set
        
            typedef bool ( ::OSG::Image::*set_function_type )( ::OSG::Image * ) ;
            
            Image_exposer.def( 
                "set"
                , set_function_type( &::OSG::Image::set )
                , ( bp::arg("image") ) );
        
        }
        { //::OSG::Image::setAttachmentField
        
            typedef void ( ::OSG::Image::*setAttachmentField_function_type )( ::std::string const &,::std::string const & ) ;
            
            Image_exposer.def( 
                "setAttachmentField"
                , setAttachmentField_function_type( &::OSG::Image::setAttachmentField )
                , ( bp::arg("key"), bp::arg("data") ) );
        
        }
        { //::OSG::Image::swapDataEndian
        
            typedef void ( ::OSG::Image::*swapDataEndian_function_type )(  ) ;
            
            Image_exposer.def( 
                "swapDataEndian"
                , swapDataEndian_function_type( &::OSG::Image::swapDataEndian ) );
        
        }
        { //::OSG::Image::write
        
            typedef boost::python::object ( *write_function_type )( ::OSG::Image &,::OSG::Char8 const * );
            
            Image_exposer.def( 
                "write"
                , write_function_type( &write_5b99e6d786e89389727b1b2d409008f3 )
                , ( bp::arg("inst"), bp::arg("fileName") ) );
        
        }
        pyopensg::register_transit< OSG::Image >::execute();
        bp::implicitly_convertible< OSG::Image::ObjRecPtr, OSG::Image* >();
        bp::implicitly_convertible< OSG::Image::ObjRecPtr, OSG::Image::ObjCPtr >();
        bp::implicitly_convertible< OSG::Image::ObjRecPtr, OSG::AttachmentContainer* >();
        bp::implicitly_convertible< OSG::Image::ObjRecPtr, OSG::AttachmentContainer::ObjRecPtr >();
        bp::implicitly_convertible<OSG::Image::ObjRecPtr, OSG::AttachmentContainer::ObjCPtr>();
        Image_exposer.def("getData", wrapGetData,
                  (bp::arg("inst"), bp::arg("mipmapNum") = 0,
                   bp::arg("frameNum") = 0, bp::arg("sideNum") = 0));
        Image_exposer.def("set", wrapSet,
                  (bp::arg("inst"), bp::arg("pixelFormat"),
                   bp::arg("width"), bp::arg("height") = (OSG::Int32) 1,
                   bp::arg("depth") = (OSG::Int32) 1,
                   bp::arg("mipmapCount") = (OSG::Int32) 1,
                   bp::arg("frameCount") = (OSG::Int32) 1,
                   bp::arg("frameDelay") = (OSG::Time) 0.0,
                   bp::arg("data") = ImageDataPtr(),
                   bp::arg("type") = (OSG::Int32) OSG::Image::OSG_UINT8_IMAGEDATA,
                   bp::arg("allocMem") = (bool) true,
                   bp::arg("sidecount") = (OSG::Int32) 1));
        Image_exposer.def("setData", wrapSetData,
                  (bp::arg("inst"), bp::arg("data") = ImageDataPtr()));
        Image_exposer.def("setSubData", wrapSetSubData,
                  (bp::arg("inst"), bp::arg("offX"), bp::arg("offY"),
                   bp::arg("offZ"), bp::arg("srcW"), bp::arg("srcH"),
                   bp::arg("srcD"), bp::arg("data")));
        Image_exposer.def("store", wrapStore,
                  (bp::arg("inst"), bp::arg("mimeType"), bp::arg("memSize") = -1));
        bp::class_<ImageData, ImageDataPtr, boost::noncopyable>("ImageData", bp::no_init)
                  .def("size", &ImageData::size)
                  .def("toString", &ImageData::toString)
                  .def(bp::self == bp::self)
                  .def(bp::self_ns::str(bp::self))
                  ;
              bp::implicitly_convertible<ImageData, const OSG::UInt8*>();
    }

}
