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

/** @file RingBuffer.h
	@brief The RingBuffer class stores a fast raw byte buffer queue storage. */

#include <vector>

namespace kNet
{

/// Implements a byte-based ring buffer (of sorts) of raw bytes.
class RingBuffer
{
public:
	std::vector<char> data;
	int start; ///< Points to the first used byte.
	int end; ///< Points to the first unused byte.

	explicit RingBuffer(int capacity)
	{
		data.resize(capacity);
		start = 0;
		end = 0;
	}

	/// Returns the number of bytes filled in the ring buffer.
	int Size() const { return end - start; }

	/// Compacts the ring buffer, i.e. moves all bytes to the beginning of the array.
	void Compact()
	{
		// If already compacted, do nothing.
		if (start == 0)
			return;

		const int numBytes = Size();
		for(int i = 0; i < numBytes; ++i)
			data[i] = data[start+i];

		start = 0;
		end = numBytes;
	}

	void Clear()
	{
		start = end = 0;
	}

	/// Returns a pointer to the first byte of actual data.
	char *Begin() { return &data[start]; }

	/// Returns a pointer to one past the last byte of actual data.
	char *End() { return &data[end]; }

	int StartIndex() const { return start; }

	/// Call after having inserted the given amount of bytes to the buffer.
	void Inserted(int numBytes)
	{ 
		end += numBytes; 
		assert(end <= (int)data.size());
	}

	/// Call after having processed the given number of bytes from the buffer.
	void Consumed(int numBytes)
	{ 
		start += numBytes; 
		assert(start <= end); 
		if (start == end) // Free compact?
			start = end = 0;
	}

	/// Returns the total number of bytes that can be filled in this structure after compacting.
	int TotalFreeBytesLeft() const { return data.size() - Size(); }

	/// Returns the number of bytes that can be added to this structure contiguously, without having to compact.
	int ContiguousFreeBytesLeft() const { return data.size() - end; }
};

} // ~kNet
