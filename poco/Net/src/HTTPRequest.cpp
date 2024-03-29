//
// HTTPRequest.cpp
//
// $Id: //poco/1.3/Net/src/HTTPRequest.cpp#7 $
//
// Library: Net
// Package: HTTP
// Module:  HTTPRequest
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


#include "Poco/Net/HTTPRequest.h"
#include "Poco/Net/HTTPSession.h"
#include "Poco/Net/NetException.h"
#include "Poco/Net/NameValueCollection.h"
#include "Poco/NumberFormatter.h"
#include <cctype>


using Poco::NumberFormatter;


namespace Poco {
namespace Net {


const std::string HTTPRequest::HTTP_GET      = "GET";
const std::string HTTPRequest::HTTP_HEAD     = "HEAD";
const std::string HTTPRequest::HTTP_PUT      = "PUT";
const std::string HTTPRequest::HTTP_POST     = "POST";
const std::string HTTPRequest::HTTP_OPTIONS  = "OPTIONS";
const std::string HTTPRequest::HTTP_DELETE   = "DELETE";
const std::string HTTPRequest::HTTP_TRACE    = "TRACE";
const std::string HTTPRequest::HTTP_CONNECT  = "CONNECT";
const std::string HTTPRequest::HOST          = "Host";
const std::string HTTPRequest::COOKIE        = "Cookie";
const std::string HTTPRequest::AUTHORIZATION = "Authorization";


HTTPRequest::HTTPRequest():
	_method(HTTP_GET),
	_uri("/")
{
}

	
HTTPRequest::HTTPRequest(const std::string& version):
	HTTPMessage(version),
	_method(HTTP_GET),
	_uri("/")
{
}

	
HTTPRequest::HTTPRequest(const std::string& method, const std::string& uri):
	_method(method),
	_uri(uri)
{
}


HTTPRequest::HTTPRequest(const std::string& method, const std::string& uri, const std::string& version):
	HTTPMessage(version),
	_method(method),
	_uri(uri)
{
}


HTTPRequest::~HTTPRequest()
{
}


void HTTPRequest::setMethod(const std::string& method)
{
	_method = method;
}


void HTTPRequest::setURI(const std::string& uri)
{
	_uri = uri;
}


void HTTPRequest::setHost(const std::string& host)
{
	set(HOST, host);
}

	
void HTTPRequest::setHost(const std::string& host, Poco::UInt16 port)
{
	std::string value(host);
	if (port != HTTPSession::HTTP_PORT)
	{
		value.append(":");
		NumberFormatter::append(value, port);
	}
	setHost(value);
}

	
const std::string& HTTPRequest::getHost() const
{
	return get(HOST);
}


void HTTPRequest::setCookies(const NameValueCollection& cookies)
{
	std::string cookie;
	cookie.reserve(64);
	for (NameValueCollection::ConstIterator it = cookies.begin(); it != cookies.end(); ++it)
	{
		if (it != cookies.begin())
			cookie.append("; ");
		cookie.append(it->first);
		cookie.append("=");
		cookie.append(it->second);
	}
	add(COOKIE, cookie);
}

	
void HTTPRequest::getCookies(NameValueCollection& cookies) const
{
	NameValueCollection::ConstIterator it = find(COOKIE);
	while (it != end() && it->first == COOKIE)
	{
		splitParameters(it->second.begin(), it->second.end(), cookies);
		++it;
	}
}


bool HTTPRequest::hasCredentials() const
{
	return has(AUTHORIZATION);
}

	
void HTTPRequest::getCredentials(std::string& scheme, std::string& authInfo) const
{
	scheme.clear();
	authInfo.clear();
	if (has(AUTHORIZATION))
	{
		const std::string& auth = get(AUTHORIZATION);
		std::string::const_iterator it  = auth.begin();
		std::string::const_iterator end = auth.end();
		while (it != end && std::isspace(*it)) ++it;
		while (it != end && !std::isspace(*it)) scheme += *it++;
		while (it != end && std::isspace(*it)) ++it;
		while (it != end) authInfo += *it++;
	}
	else throw NotAuthenticatedException();
}

	
void HTTPRequest::setCredentials(const std::string& scheme, const std::string& authInfo)
{
	std::string auth(scheme);
	auth.append(" ");
	auth.append(authInfo);
	set(AUTHORIZATION, auth);
}


void HTTPRequest::write(std::ostream& ostr) const
{
	ostr << _method << " " << _uri << " " << getVersion() << "\r\n";
	HTTPMessage::write(ostr);
	ostr << "\r\n";
}


void HTTPRequest::read(std::istream& istr)
{
	static const int eof = std::char_traits<char>::eof();

	std::string method;
	std::string uri;
	std::string version;
	method.reserve(16);
	uri.reserve(64);
	version.reserve(16);
	int ch = istr.get();
	if (ch == eof) throw NoMessageException();
	while (std::isspace(ch)) ch = istr.get();
	if (ch == eof) throw MessageException("No HTTP request header");
	while (!std::isspace(ch) && ch != eof && method.length() < MAX_METHOD_LENGTH) { method += (char) ch; ch = istr.get(); }
	if (!std::isspace(ch)) throw MessageException("HTTP request method invalid or too long");
	while (std::isspace(ch)) ch = istr.get();
	while (!std::isspace(ch) && ch != eof && uri.length() < MAX_URI_LENGTH) { uri += (char) ch; ch = istr.get(); }
	if (!std::isspace(ch)) throw MessageException("HTTP request URI invalid or too long");
	while (std::isspace(ch)) ch = istr.get();
	while (!std::isspace(ch) && ch != eof && version.length() < MAX_VERSION_LENGTH) { version += (char) ch; ch = istr.get(); }
	if (!std::isspace(ch)) throw MessageException("Invalid HTTP version string");
	while (ch != '\n' && ch != eof) { ch = istr.get(); }
	HTTPMessage::read(istr);
	ch = istr.get();
	while (ch != '\n' && ch != eof) { ch = istr.get(); }
	setMethod(method);
	setURI(uri);
	setVersion(version);
}


} } // namespace Poco::Net
