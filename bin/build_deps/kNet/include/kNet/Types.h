/* Copyright 2010 Jukka Jyl�nki

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. */
#pragma once

/** @file Types.h
	@brief Provides platform-independent fixed size types. */
/*
namespace kNet
{
///\todo C99.
typedef unsigned char byte;
typedef unsigned short word;
typedef unsigned long dword;

typedef unsigned char u8; ///< a single byte: 0-255.
typedef unsigned short u16; ///< 2 bytes: 0 - 65535.
typedef unsigned int u32; ///< 4 bytes: 0 - 4,294,967,295 ~ 4000 million or 4e9.
typedef unsigned long long u64; ///< 8 bytes: 18,446,744,073,709,551,615 ~1.8e19.

typedef signed char s8; ///< a single byte: -128 - 127.
typedef signed short s16; ///< 2 bytes: -32768 - 32767.
typedef signed int s32; ///< 4 bytes signed: max 2,147,483,647 ~ 2000 million or 2e9.

typedef unsigned long ulong;
typedef unsigned int uint;

} // ~kNet
*/
typedef signed long long s64; ///< 8 bytes signed. 9,223,372,036,854,775,807 ~ 9e18.
typedef unsigned long long u64; ///< 8 bytes: 18,446,744,073,709,551,615 ~1.8e19.
