//
// Path_WIN32.cpp
//
// $Id: //poco/1.3/Foundation/src/Path_WIN32.cpp#3 $
//
// Library: Foundation
// Package: Filesystem
// Module:  Path
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


#include "Poco/Path_WIN32.h"
#include "Poco/Environment_WIN32.h"
#include "Poco/UnWindows.h"


namespace Poco {


std::string PathImpl::currentImpl()
{
	char buffer[_MAX_PATH];
	DWORD n = GetCurrentDirectoryA(sizeof(buffer), buffer);
	if (n > 0 && n < sizeof(buffer))
	{
		std::string result(buffer, n);
		if (result[n - 1] != '\\')
			result.append("\\");
		return result;
	}
	else throw SystemException("Cannot get current directory");
}


std::string PathImpl::homeImpl()
{
	std::string result = EnvironmentImpl::getImpl("HOMEDRIVE");
	result.append(EnvironmentImpl::getImpl("HOMEPATH"));
	std::string::size_type n = result.size();
	if (n > 0 && result[n - 1] != '\\')
		result.append("\\");
	return result;
}


std::string PathImpl::tempImpl()
{
	char buffer[_MAX_PATH];
	DWORD n = GetTempPathA(sizeof(buffer), buffer);
	if (n > 0 && n < sizeof(buffer))
	{
		std::string result(buffer, n);
		if (result[n - 1] != '\\')
			result.append("\\");
		return result;
	}
	else throw SystemException("Cannot get current directory");
}


std::string PathImpl::nullImpl()
{
	return "NUL:";
}


std::string PathImpl::expandImpl(const std::string& path)
{
	char buffer[_MAX_PATH];
	DWORD n = ExpandEnvironmentStringsA(path.c_str(), buffer, sizeof(buffer));
	if (n > 0 && n < sizeof(buffer))
		return std::string(buffer, n - 1);
	else
		return path;
}


void PathImpl::listRootsImpl(std::vector<std::string>& roots)
{
	roots.clear();
	char buffer[128];
	DWORD n = GetLogicalDriveStrings(sizeof(buffer) - 1, buffer);
	char* it = buffer;
	char* end = buffer + (n > sizeof(buffer) ? sizeof(buffer) : n);
	while (it < end)
	{
		std::string dev;
		while (it < end && *it) dev += *it++;
		roots.push_back(dev);
		++it;
	}
}


} // namespace Poco
