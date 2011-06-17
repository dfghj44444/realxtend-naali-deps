#pragma once
/******************************************************************************
 *
 *    This file is based on a work of 
 *      * Aliaksandr Ivaniuk aka Rride (c) 2011
 *      * openDarkEngine team (C) 2009: http://opde.svn.sourceforge.net/viewvc/opde/trunk/thirdparty/NullRenderer/
 *      * xyzzy @ ogre3d.org forum.
 *
 *    This program is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *
 *	  $Id: NullTexture.h 1182 2009-04-17 15:56:42Z volca $
 *
 *****************************************************************************/

#include "stdafx.h"

using namespace Ogre;

class NULLHardwarePixelBuffer: public HardwarePixelBuffer
{
public:
    /// Should be called by HardwareBufferManager
    NULLHardwarePixelBuffer(size_t mWidth, size_t mHeight, size_t mDepth, PixelFormat mFormat,
            HardwareBuffer::Usage usage, bool useSystemMemory, bool useShadowBuffer);
    ~NULLHardwarePixelBuffer();
        
	virtual RenderTexture *getRenderTarget(size_t slice){return mRenderTexture;}

    virtual void blitFromMemory(const PixelBox &src, const Image::Box &dstBox);
    virtual void blitToMemory(const Image::Box &srcBox, const PixelBox &dst);

protected:
	vector<int8>::type _data;
	
    virtual PixelBox lockImpl(const Image::Box lockBox,  LockOptions options);
    virtual void unlockImpl(void);

    void _updateRenderTexture( bool enable );

	RenderTexture*	mRenderTexture;
	friend class RenderTexture;
};


/// RenderTexture implementation for D3D9
