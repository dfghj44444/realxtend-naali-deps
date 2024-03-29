//
// NetworkInterface.cpp
//
// $Id: //poco/1.3/Net/src/NetworkInterface.cpp#10 $
//
// Library: Net
// Package: Sockets
// Module:  NetworkInterface
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


#include "Poco/Net/NetworkInterface.h"
#include "Poco/Net/DatagramSocket.h"
#include "Poco/Net/NetException.h"
#include "Poco/NumberFormatter.h"
#include "Poco/RefCountedObject.h"
#if defined(_WIN32) && defined(POCO_WIN32_UTF8)
#include "Poco/UnicodeConverter.h"
#endif
#include <cstring>


using Poco::NumberFormatter;
using Poco::FastMutex;


namespace Poco {
namespace Net {


//
// NetworkInterfaceImpl
//


class NetworkInterfaceImpl: public Poco::RefCountedObject
{
public:
	NetworkInterfaceImpl();
	NetworkInterfaceImpl(const std::string& name, const std::string& displayName, const IPAddress& address, int index = -1);
	NetworkInterfaceImpl(const std::string& name, const std::string& displayName, const IPAddress& address, const IPAddress& subnetMask, const IPAddress& broadcastAddress, int index = -1);

	int index() const;		
	const std::string& name() const;
	const std::string& displayName() const;
	const IPAddress& address() const;
	const IPAddress& subnetMask() const;
	const IPAddress& broadcastAddress() const;

protected:
	~NetworkInterfaceImpl();

private:	
	std::string _name;
	std::string _displayName;
	IPAddress   _address;
	IPAddress   _subnetMask;
	IPAddress   _broadcastAddress;
	int         _index;
};


NetworkInterfaceImpl::NetworkInterfaceImpl():
	_index(-1)
{
}


NetworkInterfaceImpl::NetworkInterfaceImpl(const std::string& name, const std::string& displayName, const IPAddress& address, int index):
	_name(name),
	_displayName(displayName),
	_address(address),
	_index(index)
{
#ifndef _WIN32
	if (index == -1) // IPv4
	{
		struct ifreq ifr;
		std::strncpy(ifr.ifr_name, name.c_str(), IFNAMSIZ);
		DatagramSocket ds(IPAddress::IPv4);
		ds.impl()->ioctl(SIOCGIFNETMASK, &ifr);
		if (ifr.ifr_addr.sa_family == AF_INET)
			_subnetMask = IPAddress(&reinterpret_cast<const struct sockaddr_in*>(&ifr.ifr_addr)->sin_addr, sizeof(struct in_addr));
		if (!address.isLoopback())
		{
			try
			{
				// Not every interface (e.g. loopback) has a broadcast address
				ds.impl()->ioctl(SIOCGIFBRDADDR, &ifr);
				if (ifr.ifr_addr.sa_family == AF_INET)
					_broadcastAddress = IPAddress(&reinterpret_cast<const struct sockaddr_in*>(&ifr.ifr_addr)->sin_addr, sizeof(struct in_addr));
			}
			catch (...)
			{
			}
		}
	}
#endif
}


NetworkInterfaceImpl::NetworkInterfaceImpl(const std::string& name, const std::string& displayName, const IPAddress& address, const IPAddress& subnetMask, const IPAddress& broadcastAddress, int index):
	_name(name),
	_displayName(displayName),
	_address(address),
	_subnetMask(subnetMask),
	_broadcastAddress(broadcastAddress),
	_index(index)
{
}


NetworkInterfaceImpl::~NetworkInterfaceImpl()
{
}


inline int NetworkInterfaceImpl::index() const
{
	return _index;
}


inline const std::string& NetworkInterfaceImpl::name() const
{
	return _name;
}


inline const std::string& NetworkInterfaceImpl::displayName() const
{
	return _displayName;
}


inline const IPAddress& NetworkInterfaceImpl::address() const
{
	return _address;
}


inline const IPAddress& NetworkInterfaceImpl::subnetMask() const
{
	return _subnetMask;
}


inline const IPAddress& NetworkInterfaceImpl::broadcastAddress() const
{
	return _broadcastAddress;
}


//
// NetworkInterface
//


FastMutex NetworkInterface::_mutex;


NetworkInterface::NetworkInterface():
	_pImpl(new NetworkInterfaceImpl)
{
}


NetworkInterface::NetworkInterface(const NetworkInterface& interfc):
	_pImpl(interfc._pImpl)
{
	_pImpl->duplicate();
}


NetworkInterface::NetworkInterface(const std::string& name, const std::string& displayName, const IPAddress& address, int index):
	_pImpl(new NetworkInterfaceImpl(name, displayName, address, index))
{
}


NetworkInterface::NetworkInterface(const std::string& name, const std::string& displayName, const IPAddress& address, const IPAddress& subnetMask, const IPAddress& broadcastAddress, int index):
	_pImpl(new NetworkInterfaceImpl(name, displayName, address, subnetMask, broadcastAddress, index))
{
}


NetworkInterface::NetworkInterface(const std::string& name, const IPAddress& address, int index):
	_pImpl(new NetworkInterfaceImpl(name, name, address, index))
{
}


NetworkInterface::NetworkInterface(const std::string& name, const IPAddress& address, const IPAddress& subnetMask, const IPAddress& broadcastAddress, int index):
	_pImpl(new NetworkInterfaceImpl(name, name, address, subnetMask, broadcastAddress, index))
{
}


NetworkInterface::~NetworkInterface()
{
	_pImpl->release();
}


NetworkInterface& NetworkInterface::operator = (const NetworkInterface& interfc)
{
	NetworkInterface tmp(interfc);
	swap(tmp);
	return *this;
}


void NetworkInterface::swap(NetworkInterface& other)
{
	using std::swap;
	swap(_pImpl, other._pImpl);
}


int NetworkInterface::index() const
{
	return _pImpl->index();
}


const std::string& NetworkInterface::name() const
{
	return _pImpl->name();
}


const std::string& NetworkInterface::displayName() const
{
	return _pImpl->displayName();
}


const IPAddress& NetworkInterface::address() const
{
	return _pImpl->address();
}


const IPAddress& NetworkInterface::subnetMask() const
{
	return _pImpl->subnetMask();
}


const IPAddress& NetworkInterface::broadcastAddress() const
{
	return _pImpl->broadcastAddress();
}


bool NetworkInterface::supportsIPv4() const
{
	return _pImpl->index() == -1;
}

	
bool NetworkInterface::supportsIPv6() const
{
	return _pImpl->index() != -1;
}


NetworkInterface NetworkInterface::forName(const std::string& name, bool requireIPv6)
{
#if defined(_WIN32)
	NetworkInterfaceList ifs = list();
	for (NetworkInterfaceList::const_iterator it = ifs.begin(); it != ifs.end(); ++it)
	{
		if (it->name() == name && ((requireIPv6 && it->supportsIPv6()) || !requireIPv6))
			return *it;
	}
	throw InterfaceNotFoundException(name);
#else
	FastMutex::ScopedLock lock(_mutex);

	struct ifreq ifr;
	std::strncpy(ifr.ifr_name, name.c_str(), IFNAMSIZ);
	DatagramSocket ds(requireIPv6 ? IPAddress::IPv6 : IPAddress::IPv4);
	ds.impl()->ioctl(SIOCGIFADDR, &ifr);
	IPAddress addr;
#if defined(POCO_HAVE_IPv6)
	if (ifr.ifr_addr.sa_family == AF_INET)
		addr = IPAddress(&reinterpret_cast<const struct sockaddr_in*>(&ifr.ifr_addr)->sin_addr, sizeof(struct in_addr));
	else if (ifr.ifr_addr.sa_family == AF_INET6)
		addr = IPAddress(&reinterpret_cast<const struct sockaddr_in6*>(&ifr.ifr_addr)->sin6_addr, sizeof(struct in6_addr));
	else
		throw InterfaceNotFoundException(addr.toString(), "interface has no IP address");
	int index = if_nametoindex(name.c_str());
#else
	if (ifr.ifr_addr.sa_family == AF_INET)
		addr = IPAddress(&reinterpret_cast<const struct sockaddr_in*>(&ifr.ifr_addr)->sin_addr, sizeof(struct in_addr));
	else
		throw InterfaceNotFoundException(addr.toString(), "interface has no IP address");
	int index = 0;
#endif
	return NetworkInterface(name, name, addr, index);
#endif
}

	
NetworkInterface NetworkInterface::forAddress(const IPAddress& addr)
{
	NetworkInterfaceList ifs = list();
	for (NetworkInterfaceList::const_iterator it = ifs.begin(); it != ifs.end(); ++it)
	{
		if (it->address() == addr)
			return *it;
	}
	throw InterfaceNotFoundException(addr.toString());
}


NetworkInterface NetworkInterface::forIndex(int i)
{
	if (i != 0)
	{
		NetworkInterfaceList ifs = list();
		for (NetworkInterfaceList::const_iterator it = ifs.begin(); it != ifs.end(); ++it)
		{
			if (it->index() == i)
				return *it;
		}
		throw InterfaceNotFoundException("#" + NumberFormatter::format(i));
	}
	else return NetworkInterface();
}


} } // namespace Poco::Net


//
// platform-specific code below
//


#if defined(POCO_OS_FAMILY_WINDOWS)
//
// Windows
//
#include <iphlpapi.h>


namespace Poco {
namespace Net {

	
NetworkInterface::NetworkInterfaceList NetworkInterface::list()
{
	FastMutex::ScopedLock lock(_mutex);
	NetworkInterfaceList result;
	DWORD rc;

#if defined(POCO_HAVE_IPv6)
	// On Windows XP/Server 2003 and later we use GetAdaptersAddresses.
	PIP_ADAPTER_ADDRESSES pAdapterAddresses;
	PIP_ADAPTER_ADDRESSES pAddress = 0;
	ULONG addrLen     = sizeof(IP_ADAPTER_ADDRESSES);
	pAdapterAddresses = reinterpret_cast<IP_ADAPTER_ADDRESSES*>(new char[addrLen]);
	// Make an initial call to GetAdaptersAddresses to get
	// the necessary size into addrLen
	rc = GetAdaptersAddresses(AF_UNSPEC, 0, 0, pAdapterAddresses, &addrLen);
	if (rc == ERROR_BUFFER_OVERFLOW) 
	{
		delete [] reinterpret_cast<char*>(pAdapterAddresses);
		pAdapterAddresses = reinterpret_cast<IP_ADAPTER_ADDRESSES*>(new char[addrLen]);
	}
	else if (rc != ERROR_SUCCESS)
	{
		throw NetException("cannot get network adapter list");
	}
	try
	{
		if (GetAdaptersAddresses(AF_UNSPEC, 0, 0, pAdapterAddresses, &addrLen) == NO_ERROR) 
		{
			pAddress = pAdapterAddresses;
			while (pAddress) 
			{
				if (pAddress->FirstUnicastAddress)
				{
					IPAddress addr;
					switch (pAddress->FirstUnicastAddress->Address.lpSockaddr->sa_family)
					{
					case AF_INET:
						addr = IPAddress(&reinterpret_cast<struct sockaddr_in*>(pAddress->FirstUnicastAddress->Address.lpSockaddr)->sin_addr, sizeof(in_addr));
						break;
					case AF_INET6:
						addr = IPAddress(&reinterpret_cast<struct sockaddr_in6*>(pAddress->FirstUnicastAddress->Address.lpSockaddr)->sin6_addr, sizeof(in6_addr));
						break;
					}
					std::string name(pAddress->AdapterName);
					std::string displayName;
#ifdef POCO_WIN32_UTF8
					Poco::UnicodeConverter::toUTF8(pAddress->Description, displayName);
#else
					char displayNameBuffer[1024];
					int rc = WideCharToMultiByte(CP_ACP, WC_DEFAULTCHAR, pAddress->Description, -1, displayNameBuffer, sizeof(displayNameBuffer), NULL, NULL);
					if (rc) displayName = displayNameBuffer;
#endif
					result.push_back(NetworkInterface(name, displayName, addr, pAddress->Ipv6IfIndex));
					pAddress = pAddress->Next;
				}
			}
		}
		else throw NetException("cannot get network adapter list");
	}
	catch (Poco::Exception&)
	{
		delete [] reinterpret_cast<char*>(pAdapterAddresses);
		throw;
	}
	delete [] reinterpret_cast<char*>(pAdapterAddresses);
	return result;
#endif

	// Add IPv4 loopback interface (not returned by GetAdaptersInfo)
	result.push_back(NetworkInterface("Loopback", "Loopback Interface", IPAddress("127.0.0.1"), IPAddress("255.0.0.0"), IPAddress(), -1));
	// On Windows 2000 we use GetAdaptersInfo.
	PIP_ADAPTER_INFO pAdapterInfo;
	PIP_ADAPTER_INFO pInfo = 0;
	ULONG infoLen = sizeof(IP_ADAPTER_INFO);
	pAdapterInfo  = reinterpret_cast<IP_ADAPTER_INFO*>(new char[infoLen]);
	// Make an initial call to GetAdaptersInfo to get
	// the necessary size into infoLen
	rc = GetAdaptersInfo(pAdapterInfo, &infoLen);
	if (rc == ERROR_BUFFER_OVERFLOW) 
	{
		delete [] reinterpret_cast<char*>(pAdapterInfo);
		pAdapterInfo = reinterpret_cast<IP_ADAPTER_INFO*>(new char[infoLen]);
	}
	else if (rc != ERROR_SUCCESS)
	{
		throw NetException("cannot get network adapter list");
	}
	try
	{
		if (GetAdaptersInfo(pAdapterInfo, &infoLen) == NO_ERROR) 
		{
			pInfo = pAdapterInfo;
			while (pInfo) 
			{
				IPAddress address(std::string(pInfo->IpAddressList.IpAddress.String));
				if (!address.isWildcard()) // only return interfaces that have an address assigned.
				{
					IPAddress subnetMask(std::string(pInfo->IpAddressList.IpMask.String));
					IPAddress broadcastAddress(address);
					broadcastAddress.mask(subnetMask, IPAddress("255.255.255.255"));
					std::string name(pInfo->AdapterName);
					std::string displayName(pInfo->Description);
					result.push_back(NetworkInterface(name, displayName, address, subnetMask, broadcastAddress));
				}
				pInfo = pInfo->Next;
			}
		}
		else throw NetException("cannot get network adapter list");
	}
	catch (Poco::Exception&)
	{
		delete [] reinterpret_cast<char*>(pAdapterInfo);
		throw;
	}
	delete [] reinterpret_cast<char*>(pAdapterInfo);

	return result;
}


} } // namespace Poco::Net


#elif defined(POCO_OS_FAMILY_BSD) || POCO_OS == POCO_OS_QNX
//
// BSD variants
//
#include <sys/types.h>
#include <sys/socket.h>
#include <ifaddrs.h>
#include <net/if_dl.h>


namespace Poco {
namespace Net {


NetworkInterface::NetworkInterfaceList NetworkInterface::list()
{
	FastMutex::ScopedLock lock(_mutex);
	NetworkInterfaceList result;

	struct ifaddrs* ifaphead;
	int rc = getifaddrs(&ifaphead);
	if (rc) throw NetException("cannot get network adapter list");

	for (struct ifaddrs* ifap = ifaphead; ifap; ifap = ifap->ifa_next) 
	{
		if (ifap->ifa_addr)
		{
			if (ifap->ifa_addr->sa_family == AF_INET)
			{
				std::string name(ifap->ifa_name);
				IPAddress addr(&reinterpret_cast<struct sockaddr_in*>(ifap->ifa_addr)->sin_addr, sizeof(struct in_addr));
				IPAddress subnetMask(&reinterpret_cast<struct sockaddr_in*>(ifap->ifa_netmask)->sin_addr, sizeof(struct in_addr));
				IPAddress broadcastAddr;
				if (ifap->ifa_flags & IFF_BROADCAST)
					broadcastAddr = IPAddress(&reinterpret_cast<struct sockaddr_in*>(ifap->ifa_dstaddr)->sin_addr, sizeof(struct in_addr));
				result.push_back(NetworkInterface(name, name, addr, subnetMask, broadcastAddr));
			}
#if defined(POCO_HAVE_IPv6)
			else if (ifap->ifa_addr->sa_family == AF_INET6)
			{
				IPAddress addr(&reinterpret_cast<struct sockaddr_in6*>(ifap->ifa_addr)->sin6_addr, sizeof(struct in6_addr));
				std::string name(ifap->ifa_name);
				result.push_back(NetworkInterface(name, name, addr, if_nametoindex(ifap->ifa_name)));
			}
#endif
		}
	}
	freeifaddrs(ifaphead);
	return result;
}


} } // namespace Poco::Net


#elif POCO_OS == POCO_OS_LINUX
//
// Linux
//


namespace Poco {
namespace Net {


NetworkInterface::NetworkInterfaceList NetworkInterface::list()
{
	FastMutex::ScopedLock lock(_mutex);
	NetworkInterfaceList result;
	DatagramSocket socket;
	// the following code is loosely based
	// on W. Richard Stevens, UNIX Network Programming, pp 434ff.
	int lastlen = 0;
	int len = 100*sizeof(struct ifreq);
	char* buf = 0;
	try
	{
		struct ifconf ifc;
		for (;;)
		{
			buf = new char[len];
			ifc.ifc_len = len;
			ifc.ifc_buf = buf;
			if (::ioctl(socket.impl()->sockfd(), SIOCGIFCONF, &ifc) < 0)
			{
				if (errno != EINVAL || lastlen != 0)
					throw NetException("cannot get network adapter list");
			}
			else
			{
				if (ifc.ifc_len == lastlen)
					break;
				lastlen = ifc.ifc_len;
			}
			len += 10*sizeof(struct ifreq);
			delete [] buf;
		}
		for (const char* ptr = buf; ptr < buf + ifc.ifc_len;)
		{
			const struct ifreq* ifr = reinterpret_cast<const struct ifreq*>(ptr);
			IPAddress addr;
			bool haveAddr = false;
			switch (ifr->ifr_addr.sa_family)
			{
#if defined(POCO_HAVE_IPv6)
			case AF_INET6:
				addr = IPAddress(&reinterpret_cast<const struct sockaddr_in6*>(&ifr->ifr_addr)->sin6_addr, sizeof(struct in6_addr));
				haveAddr = true;
				break;
#endif
			case AF_INET:
				addr = IPAddress(&reinterpret_cast<const struct sockaddr_in*>(&ifr->ifr_addr)->sin_addr, sizeof(struct in_addr));
				haveAddr = true;
				break;
			default:
				break;
			}
			if (haveAddr)
			{
#if defined(POCO_HAVE_IPv6)
				int index = if_nametoindex(ifr->ifr_name);
#else
				int index = -1;
#endif
				std::string name(ifr->ifr_name);
				result.push_back(NetworkInterface(name, name, addr, index));
			}
			ptr += sizeof(struct ifreq);
		}
	}
	catch (...)
	{
		delete [] buf;
		throw;
	}
	delete [] buf;
	return result;
}


} } // namespace Poco::Net


#else
//
// Non-BSD Unix variants
//


namespace Poco {
namespace Net {


NetworkInterface::NetworkInterfaceList NetworkInterface::list()
{
	FastMutex::ScopedLock lock(_mutex);
	NetworkInterfaceList result;
	DatagramSocket socket;
	// the following code is loosely based
	// on W. Richard Stevens, UNIX Network Programming, pp 434ff.
	int lastlen = 0;
	int len = 100*sizeof(struct ifreq);
	char* buf = 0;
	try
	{
		struct ifconf ifc;
		for (;;)
		{
			buf = new char[len];
			ifc.ifc_len = len;
			ifc.ifc_buf = buf;
			if (::ioctl(socket.impl()->sockfd(), SIOCGIFCONF, &ifc) < 0)
			{
				if (errno != EINVAL || lastlen != 0)
					throw NetException("cannot get network adapter list");
			}
			else
			{
				if (ifc.ifc_len == lastlen)
					break;
				lastlen = ifc.ifc_len;
			}
			len += 10*sizeof(struct ifreq);
			delete [] buf;
		}
		for (const char* ptr = buf; ptr < buf + ifc.ifc_len;)
		{
			const struct ifreq* ifr = reinterpret_cast<const struct ifreq*>(ptr);
#if defined(POCO_HAVE_SALEN)
			len = ifr->ifr_addr.sa_len;
			if (sizeof(struct sockaddr) > len) len = sizeof(struct sockaddr);
#else
			len = sizeof(struct sockaddr);
#endif
			IPAddress addr;
			bool haveAddr = false;
			switch (ifr->ifr_addr.sa_family)
			{
#if defined(POCO_HAVE_IPv6)
			case AF_INET6:
				if (len < sizeof(struct sockaddr_in6)) len = sizeof(struct sockaddr_in6);
				addr = IPAddress(&reinterpret_cast<const struct sockaddr_in6*>(&ifr->ifr_addr)->sin6_addr, sizeof(struct in6_addr));
				haveAddr = true;
				break;
#endif
			case AF_INET:
				if (len < sizeof(struct sockaddr_in)) len = sizeof(struct sockaddr_in);
				addr = IPAddress(&reinterpret_cast<const struct sockaddr_in*>(&ifr->ifr_addr)->sin_addr, sizeof(struct in_addr));
				haveAddr = true;
				break;
			default:
				break;
			}
			if (haveAddr)
			{
#if defined(POCO_HAVE_IPv6)
				int index = if_nametoindex(ifr->ifr_name);
#else
				int index = -1;
#endif
				std::string name(ifr->ifr_name);
				result.push_back(NetworkInterface(name, name, addr, index));
			}
			len += sizeof(ifr->ifr_name);
			ptr += len;
		}
	}
	catch (...)
	{
		delete [] buf;
		throw;
	}
	delete [] buf;
	return result;
}


} } // namespace Poco::Net


#endif
