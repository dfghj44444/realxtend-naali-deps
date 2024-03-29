//
// HTTPSession.cpp
//
// $Id: //poco/1.3/Net/src/HTTPSession.cpp#5 $
//
// Library: Net
// Package: HTTP
// Module:  HTTPSession
//
// Copyright (c) 2005-2006, Applied Informatics Software Engineering GmbH.
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


#include "Poco/Net/HTTPSession.h"
#include "Poco/Net/HTTPBufferAllocator.h"
#include "Poco/Net/NetException.h"
#include <cstring>


using Poco::TimeoutException;


namespace Poco {
namespace Net {


HTTPSession::HTTPSession():
	_pBuffer(0),
	_pCurrent(0),
	_pEnd(0),
	_keepAlive(false),
	_timeout(HTTP_DEFAULT_TIMEOUT),
	_pException(0)
{
}


HTTPSession::HTTPSession(const StreamSocket& socket):
	_socket(socket),
	_pBuffer(0),
	_pCurrent(0),
	_pEnd(0),
	_keepAlive(false),
	_timeout(HTTP_DEFAULT_TIMEOUT),
	_pException(0)
{
}


HTTPSession::HTTPSession(const StreamSocket& socket, bool keepAlive):
	_socket(socket),
	_pBuffer(0),
	_pCurrent(0),
	_pEnd(0),
	_keepAlive(keepAlive),
	_timeout(HTTP_DEFAULT_TIMEOUT),
	_pException(0)
{
}


HTTPSession::~HTTPSession()
{
	if (_pBuffer) HTTPBufferAllocator::deallocate(_pBuffer, HTTPBufferAllocator::BUFFER_SIZE);
	close();
	delete _pException;
}


void HTTPSession::setKeepAlive(bool keepAlive)
{
	_keepAlive = keepAlive;
}


void HTTPSession::setTimeout(const Poco::Timespan& timeout)
{
	_timeout = timeout;
}


int HTTPSession::get()
{
	if (_pCurrent == _pEnd)
		refill();
	
	if (_pCurrent < _pEnd)
		return *_pCurrent++;
	else
		return std::char_traits<char>::eof();
}

	
int HTTPSession::peek()
{
	if (_pCurrent == _pEnd)
		refill();

	if (_pCurrent < _pEnd)
		return *_pCurrent;
	else
		return std::char_traits<char>::eof();
}

	
int HTTPSession::read(char* buffer, std::streamsize length)
{
	if (_pCurrent < _pEnd)
	{
		int n = (int) (_pEnd - _pCurrent);
		if (n > length) n = (int) length;
		std::memcpy(buffer, _pCurrent, n);
		_pCurrent += n;
		return n;
	}
	else return receive(buffer, (int) length);
}


int HTTPSession::write(const char* buffer, std::streamsize length)
{
	try
	{
		return _socket.sendBytes(buffer, (int) length);
	}
	catch (Poco::Exception& exc)
	{
		setException(exc);
		throw;
	}
}


int HTTPSession::receive(char* buffer, int length)
{
	try
	{
		return _socket.receiveBytes(buffer, length);
	}
	catch (Poco::Exception& exc)
	{
		setException(exc);
		throw;
	}
}


void HTTPSession::refill()
{
	if (!_pBuffer)
	{
		_pBuffer = HTTPBufferAllocator::allocate(HTTPBufferAllocator::BUFFER_SIZE);
	}
	_pCurrent = _pEnd = _pBuffer;
	int n = receive(_pBuffer, HTTPBufferAllocator::BUFFER_SIZE);
	_pEnd += n;
}


bool HTTPSession::connected() const
{
	return _socket.impl()->initialized();
}


void HTTPSession::connect(const SocketAddress& address)
{
	_socket.connect(address, _timeout);
	_socket.setReceiveTimeout(_timeout);
	_socket.setNoDelay(true);
}


void HTTPSession::abort()
{
	_socket.shutdown();
	close();
}


void HTTPSession::close()
{
	_socket.close();
}


void HTTPSession::setException(const Poco::Exception& exc)
{
	delete _pException;
	_pException = exc.clone();
}


StreamSocket HTTPSession::detachSocket()
{
	StreamSocket oldSocket(_socket);
	StreamSocket newSocket;
	_socket = newSocket;
	return oldSocket;
}


void HTTPSession::attachSocket(const StreamSocket& socket)
{
	_socket = socket;
}


} } // namespace Poco::Net
