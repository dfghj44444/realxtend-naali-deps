//
// IntValidator.cpp
//
// $Id: //poco/1.3/Util/src/IntValidator.cpp#1 $
//
// Library: Util
// Package: Options
// Module:  IntValidator
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
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


#include "Poco/Util/IntValidator.h"
#include "Poco/Util/Option.h"
#include "Poco/Util/OptionException.h"
#include "Poco/NumberParser.h"
#include "Poco/Format.h"


using Poco::NumberParser;
using Poco::format;


namespace Poco {
namespace Util {


IntValidator::IntValidator(int min, int max):
	_min(min),
	_max(max)
{
}


IntValidator::~IntValidator()
{
}


void IntValidator::validate(const Option& option, const std::string& value)
{
	int n;
	if (NumberParser::tryParse(value, n))
	{
		if (n < _min || n > _max)
			throw InvalidArgumentException(format("argument for %s must be in range %d to %d", option.fullName(), _min, _max));
	}
	else throw InvalidArgumentException(format("argument for %s must be an integer", option.fullName()));
}


} } // namespace Poco::Util
