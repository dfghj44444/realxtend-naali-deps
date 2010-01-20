//
// MulticastEchoServer.cpp
//
// $Id: //poco/1.3/Net/testsuite/src/MulticastEchoServer.cpp#1 $
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


#include "MulticastEchoServer.h"
#include "Poco/Timespan.h"
#include <iostream>


using Poco::Net::Socket;
using Poco::Net::DatagramSocket;
using Poco::Net::SocketAddress;
using Poco::Net::IPAddress;
using Poco::Net::NetworkInterface;


MulticastEchoServer::MulticastEchoServer():
	_group("239.255.1.2", 12345),
	_if(findInterface()),
	_thread("MulticastEchoServer"),
	_stop(false)
{
	_socket.bind(SocketAddress(IPAddress(), _group.port()), true);
	_socket.joinGroup(_group.host(), _if);
	_thread.start(*this);
	_ready.wait();
}


MulticastEchoServer::~MulticastEchoServer()
{
	_stop = true;
	_thread.join();
	_socket.leaveGroup(_group.host(), _if);
}


Poco::UInt16 MulticastEchoServer::port() const
{
	return _socket.address().port();
}


void MulticastEchoServer::run()
{
	_ready.set();
	Poco::Timespan span(250000);
	while (!_stop)
	{
		if (_socket.poll(span, Socket::SELECT_READ))
		{
			try
			{
				char buffer[256];
				SocketAddress sender;
				int n = _socket.receiveFrom(buffer, sizeof(buffer), sender);
				_socket.sendTo(buffer, n, sender);
			}
			catch (Poco::Exception& exc)
			{
				std::cerr << "MulticastEchoServer: " << exc.displayText() << std::endl;
			}
		}
	}
}


const SocketAddress& MulticastEchoServer::group() const
{
	return _group;
}


const NetworkInterface& MulticastEchoServer::interface() const
{
	return _if;
}


Poco::Net::NetworkInterface MulticastEchoServer::findInterface()
{
	NetworkInterface::NetworkInterfaceList ifs = NetworkInterface::list();
	for (NetworkInterface::NetworkInterfaceList::const_iterator it = ifs.begin(); it != ifs.end(); ++it)
	{
		if (it->supportsIPv4() && it->address().isUnicast() && !it->address().isLoopback())
			return *it;
	}
	return NetworkInterface();
}
