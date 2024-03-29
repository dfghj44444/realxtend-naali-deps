//
// QuotedPrintableEncoder.cpp
//
// $Id: //poco/1.3/Net/src/QuotedPrintableEncoder.cpp#2 $
//
// Library: Net
// Package: Messages
// Module:  QuotedPrintableEncoder
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


#include "Poco/Net/QuotedPrintableEncoder.h"
#include "Poco/NumberFormatter.h"


using Poco::UnbufferedStreamBuf;
using Poco::NumberFormatter;


namespace Poco {
namespace Net {


QuotedPrintableEncoderBuf::QuotedPrintableEncoderBuf(std::ostream& ostr): 
	_pending(-1),
	_lineLength(0),
	_ostr(ostr)
{
}


QuotedPrintableEncoderBuf::~QuotedPrintableEncoderBuf()
{
	try
	{
		close();
	}
	catch (...)
	{
	}
}


int QuotedPrintableEncoderBuf::writeToDevice(char c)
{
	if (_pending != -1)
	{
		if (_pending == '\r' && c == '\n')
			writeRaw((char) _pending);
		else if (c == '\r' || c == '\n')
			writeEncoded((char) _pending);
		else
			writeRaw((char) _pending);
		_pending = -1;
	}
	if (c == '\t' || c == ' ')
	{
		_pending = charToInt(c);
		return _pending;
	}
	else if (c == '\r' || c == '\n' || (c > 32 && c < 127 && c != '='))
	{
		writeRaw(c);
	}
	else
	{
		writeEncoded(c);
	}
	return charToInt(c);
}


void QuotedPrintableEncoderBuf::writeEncoded(char c)
{
	if (_lineLength >= 73)
	{
		_ostr << "=\r\n";
		_lineLength = 3;
	}
	else _lineLength += 3;
	_ostr << '=' << NumberFormatter::formatHex((unsigned) charToInt(c), 2);
}


void QuotedPrintableEncoderBuf::writeRaw(char c)
{
	if (c == '\r' || c == '\n')
	{
		_ostr.put(c);
		_lineLength = 0;
	}
	else if (_lineLength < 75)
	{
		_ostr.put(c);
		++_lineLength;
	}
	else
	{
		_ostr << "=\r\n" << c;
		_lineLength = 1;
	}
}


int QuotedPrintableEncoderBuf::close()
{
	sync();
	return _ostr ? 0 : -1;
}


QuotedPrintableEncoderIOS::QuotedPrintableEncoderIOS(std::ostream& ostr): _buf(ostr)
{
	poco_ios_init(&_buf);
}


QuotedPrintableEncoderIOS::~QuotedPrintableEncoderIOS()
{
}


int QuotedPrintableEncoderIOS::close()
{
	return _buf.close();
}


QuotedPrintableEncoderBuf* QuotedPrintableEncoderIOS::rdbuf()
{
	return &_buf;
}


QuotedPrintableEncoder::QuotedPrintableEncoder(std::ostream& ostr): 
	QuotedPrintableEncoderIOS(ostr), 
	std::ostream(&_buf)
{
}


QuotedPrintableEncoder::~QuotedPrintableEncoder()
{
}


} } // namespace Poco::Net
