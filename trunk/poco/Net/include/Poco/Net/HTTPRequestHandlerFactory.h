//
// HTTPRequestHandlerFactory.h
//
// $Id: //poco/1.3/Net/include/Poco/Net/HTTPRequestHandlerFactory.h#3 $
//
// Library: Net
// Package: HTTPServer
// Module:  HTTPRequestHandlerFactory
//
// Definition of the HTTPRequestHandlerFactory class.
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


#ifndef Net_HTTPRequestHandlerFactory_INCLUDED
#define Net_HTTPRequestHandlerFactory_INCLUDED


#include "Poco/Net/Net.h"
#include "Poco/SharedPtr.h"


namespace Poco {
namespace Net {


class HTTPServerRequest;
class HTTPServerResponse;
class HTTPRequestHandler;


class Net_API HTTPRequestHandlerFactory
	/// A factory for HTTPRequestHandler objects.
	/// Subclasses must override the createRequestHandler()
	/// method.
{
public:
	typedef Poco::SharedPtr<HTTPRequestHandlerFactory> Ptr;
	
	HTTPRequestHandlerFactory();
		/// Creates the HTTPRequestHandlerFactory.

	virtual ~HTTPRequestHandlerFactory();
		/// Destroys the HTTPRequestHandlerFactory.

	virtual HTTPRequestHandler* createRequestHandler(const HTTPServerRequest& request) = 0;
		/// Must be overridden by sublasses.
		///
		/// Creates a new request handler for the given HTTP request.

private:
	HTTPRequestHandlerFactory(const HTTPRequestHandlerFactory&);
	HTTPRequestHandlerFactory& operator = (const HTTPRequestHandlerFactory&);
};


} } // namespace Poco::Net


#endif // Net_HTTPRequestHandlerFactory_INCLUDED
