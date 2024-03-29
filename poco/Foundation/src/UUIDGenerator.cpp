//
// UUIDGenerator.cpp
//
// $Id: //poco/1.3/Foundation/src/UUIDGenerator.cpp#4 $
//
// Library: Foundation
// Package: UUID
// Module:  UUID
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#include "Poco/UUIDGenerator.h"
#include "Poco/Thread.h"
#include "Poco/RandomStream.h"
#include "Poco/DigestEngine.h"
#include "Poco/MD5Engine.h"
#include "Poco/SingletonHolder.h"
#include <cstring>


namespace Poco {


UUIDGenerator::UUIDGenerator(): _ticks(0), _haveNode(false)
{
}


UUIDGenerator::~UUIDGenerator()
{
}


UUID UUIDGenerator::create()
{
	FastMutex::ScopedLock lock(_mutex);

	if (!_haveNode)
	{
		Environment::nodeId(_node);
		_haveNode = true;
	}
	Timestamp::UtcTimeVal tv = timeStamp();
	UInt32 timeLow = UInt32(tv & 0xFFFFFFFF);
	UInt16 timeMid = UInt16((tv >> 32) & 0xFFFF);
	UInt16 timeHiAndVersion = UInt16((tv >> 48) & 0x0FFF) + (UUID::UUID_TIME_BASED << 12);
	UInt16 clockSeq = (UInt16(_random.next() >> 4) & 0x3FFF) | 0x8000;
	return UUID(timeLow, timeMid, timeHiAndVersion, clockSeq, _node);
}


UUID UUIDGenerator::createFromName(const UUID& nsid, const std::string& name)
{
	MD5Engine md5;
	return createFromName(nsid, name, md5);
}


UUID UUIDGenerator::createFromName(const UUID& nsid, const std::string& name, DigestEngine& de)
{
	poco_assert_dbg (de.digestLength() >= 16);

	UUID netNsid = nsid;
	netNsid.toNetwork();
	de.reset();
	de.update(&netNsid, sizeof(netNsid));
	de.update(name);
	char buffer[16];
	const DigestEngine::Digest& d = de.digest();
	for (int i = 0; i < 16; ++i)
	{
		buffer[i] = d[i];
	}
	return UUID(buffer, UUID::UUID_NAME_BASED);
}

	
UUID UUIDGenerator::createRandom()
{
	char buffer[16];
	RandomInputStream ris;
	ris.read(buffer, sizeof(buffer));
	return UUID(buffer, UUID::UUID_RANDOM);
}


Timestamp::UtcTimeVal UUIDGenerator::timeStamp()
{
	Timestamp now;
	for (;;)
	{
		if (now != _lastTime)
		{
			_lastTime = now;
			_ticks = 0;
			break;
		}
		if (_ticks < 100)
		{
			++_ticks;
			break;
		}
		now.update();
	}
	Timestamp::UtcTimeVal tv = now.utcTime();
	return tv + _ticks;
}


UUID UUIDGenerator::createOne()
{
	try
	{
		return create();
	}
	catch (Exception&)
	{
		return createRandom();
	}
}


UUIDGenerator& UUIDGenerator::defaultGenerator()
{
	static SingletonHolder<UUIDGenerator> sh;
	return *sh.get();
}


} // namespace Poco
