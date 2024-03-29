//
// HTTPServerResponseImpl.cpp
//
// $Id: //poco/1.3/Net/src/HTTPServerResponseImpl.cpp#5 $
//
// Library: Net
// Package: HTTPServer
// Module:  HTTPServerResponseImpl
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


#include "Poco/Net/HTTPServerResponseImpl.h"
#include "Poco/Net/HTTPServerSession.h"
#include "Poco/Net/HTTPHeaderStream.h"
#include "Poco/Net/HTTPStream.h"
#include "Poco/Net/HTTPFixedLengthStream.h"
#include "Poco/Net/HTTPChunkedStream.h"
#include "Poco/File.h"
#include "Poco/Timestamp.h"
#include "Poco/NumberFormatter.h"
#include "Poco/StreamCopier.h"
#include "Poco/CountingStream.h"
#include "Poco/Exception.h"
#include "Poco/FileStream.h"
#include "Poco/DateTimeFormatter.h"
#include "Poco/DateTimeFormat.h"


using Poco::File;
using Poco::Timestamp;
using Poco::NumberFormatter;
using Poco::StreamCopier;
using Poco::OpenFileException;
using Poco::DateTimeFormatter;
using Poco::DateTimeFormat;


namespace Poco {
namespace Net {


HTTPServerResponseImpl::HTTPServerResponseImpl(HTTPServerSession& session):
	_session(session),
	_pStream(0)
{
}


HTTPServerResponseImpl::~HTTPServerResponseImpl()
{
	delete _pStream;
}


void HTTPServerResponseImpl::sendContinue()
{
	HTTPHeaderOutputStream hs(_session);
	hs << getVersion() << " 100 Continue\r\n\r\n";
}


std::ostream& HTTPServerResponseImpl::send()
{
	poco_assert (!_pStream);

	if (getChunkedTransferEncoding())
	{
		HTTPHeaderOutputStream hs(_session);
		write(hs);
		_pStream = new HTTPChunkedOutputStream(_session);
	}
	else if (getContentLength() != HTTPMessage::UNKNOWN_CONTENT_LENGTH)
	{
		Poco::CountingOutputStream cs;
		write(cs);
		_pStream = new HTTPFixedLengthOutputStream(_session, getContentLength() + cs.chars());
		write(*_pStream);
	}
	else
	{
		_pStream = new HTTPOutputStream(_session);
		setKeepAlive(false);
		write(*_pStream);
	}
	return *_pStream;
}


void HTTPServerResponseImpl::sendFile(const std::string& path, const std::string& mediaType)
{
	poco_assert (!_pStream);

	File f(path);
	Timestamp dateTime    = f.getLastModified();
	File::FileSize length = f.getSize();
	set("Last-Modified", DateTimeFormatter::format(dateTime, DateTimeFormat::HTTP_FORMAT));
	setContentLength(static_cast<int>(length));
	setContentType(mediaType);
	setChunkedTransferEncoding(false);

	Poco::FileInputStream istr(path);
	if (istr.good())
	{
		_pStream = new HTTPHeaderOutputStream(_session);
		write(*_pStream);
		StreamCopier::copyStream(istr, *_pStream);
	}
	else throw OpenFileException(path);
}


void HTTPServerResponseImpl::sendBuffer(const void* pBuffer, std::size_t length)
{
	poco_assert (!_pStream);

	setContentLength(static_cast<int>(length));
	setChunkedTransferEncoding(false);
	
	_pStream = new HTTPHeaderOutputStream(_session);
	write(*_pStream);
	_pStream->write(static_cast<const char*>(pBuffer), static_cast<std::streamsize>(length));
}


void HTTPServerResponseImpl::redirect(const std::string& uri)
{
	poco_assert (!_pStream);

	setStatusAndReason(HTTPResponse::HTTP_FOUND);
	set("Location", uri);

	_pStream = new HTTPHeaderOutputStream(_session);
	write(*_pStream);
}


void HTTPServerResponseImpl::requireAuthentication(const std::string& realm)
{
	poco_assert (!_pStream);
	
	setStatusAndReason(HTTPResponse::HTTP_UNAUTHORIZED);
	std::string auth("Basic realm=\"");
	auth.append(realm);
	auth.append("\"");
	set("WWW-Authenticate", auth);
}


} } // namespace Poco::Net
