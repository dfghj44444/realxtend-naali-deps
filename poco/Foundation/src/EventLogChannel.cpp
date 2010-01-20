//
// EventLogChannel.cpp
//
// $Id: //poco/1.3/Foundation/src/EventLogChannel.cpp#3 $
//
// Library: Foundation
// Package: Logging
// Module:  EventLogChannel
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


#include "Poco/EventLogChannel.h"
#include "Poco/Message.h"
#include "Poco/String.h"
#include "pocomsg.h"
#if defined(POCO_WIN32_UTF8)
#include "Poco/UnicodeConverter.h"
#endif


namespace Poco {


const std::string EventLogChannel::PROP_NAME    = "name";
const std::string EventLogChannel::PROP_HOST    = "host";
const std::string EventLogChannel::PROP_LOGHOST = "loghost";
const std::string EventLogChannel::PROP_LOGFILE = "logfile";


EventLogChannel::EventLogChannel(): 
	_logFile("Application"),
	_h(0)
{
#if defined(POCO_WIN32_UTF8)
	wchar_t name[256];
	int n = GetModuleFileNameW(NULL, name, sizeof(name));
	if (n > 0)
	{
		wchar_t* end = name + n - 1;
		while (end > name && *end != '\\') --end;
		if (*end == '\\') ++end;
		std::wstring uname(end);
		UnicodeConverter::toUTF8(uname, _name);
	}
#else
	char name[256];
	int n = GetModuleFileNameA(NULL, name, sizeof(name));
	if (n > 0)
	{
		char* end = name + n - 1;
		while (end > name && *end != '\\') --end;
		if (*end == '\\') ++end;
		_name = end;
	}
#endif
}


EventLogChannel::EventLogChannel(const std::string& name): 
	_name(name), 
	_logFile("Application"),
	_h(0)
{
}


EventLogChannel::EventLogChannel(const std::string& name, const std::string& host): 
	_name(name), 
	_host(host),
	_logFile("Application"),
	_h(0)
{
}


EventLogChannel::~EventLogChannel()
{
	close();
}


void EventLogChannel::open()
{
	setUpRegistry();
#if defined(POCO_WIN32_UTF8)
	std::wstring uhost;
	UnicodeConverter::toUTF16(_host, uhost);
	std::wstring uname;
	UnicodeConverter::toUTF16(_name, uname);
	_h = RegisterEventSourceW(uhost.empty() ? NULL : uhost.c_str(), uname.c_str());
#else
	_h = RegisterEventSource(_host.empty() ? NULL : _host.c_str(), _name.c_str());
#endif
	if (!_h) throw SystemException("cannot register event source");
}


void EventLogChannel::close()
{
	if (_h) DeregisterEventSource(_h);
	_h = 0;
}


void EventLogChannel::log(const Message& msg)
{
	if (!_h) open();
#if defined(POCO_WIN32_UTF8)
	std::wstring utext;
	UnicodeConverter::toUTF16(msg.getText(), utext);
	const wchar_t* pMsg = utext.c_str();
	ReportEventW(_h, getType(msg), getCategory(msg), POCO_MSG_LOG, NULL, 1, 0, &pMsg, NULL); 
#else
	const char* pMsg = msg.getText().c_str();
	ReportEvent(_h, getType(msg), getCategory(msg), POCO_MSG_LOG, NULL, 1, 0, &pMsg, NULL); 
#endif
}


void EventLogChannel::setProperty(const std::string& name, const std::string& value)
{
	if (icompare(name, PROP_NAME) == 0)
		_name = value;
	else if (icompare(name, PROP_HOST) == 0)
		_host = value;
	else if (icompare(name, PROP_LOGHOST) == 0)
		_host = value;
	else if (icompare(name, PROP_LOGFILE) == 0)
		_logFile = value;
	else
		Channel::setProperty(name, value);
}


std::string EventLogChannel::getProperty(const std::string& name) const
{
	if (icompare(name, PROP_NAME) == 0)
		return _name;
	else if (icompare(name, PROP_HOST) == 0)
		return _host;
	else if (icompare(name, PROP_LOGHOST) == 0)
		return _host;
	else if (icompare(name, PROP_LOGFILE) == 0)
		return _logFile;
	else
		return Channel::getProperty(name);
}


int EventLogChannel::getType(const Message& msg)
{
	switch (msg.getPriority())
	{
	case Message::PRIO_TRACE:
	case Message::PRIO_DEBUG:
	case Message::PRIO_INFORMATION:
		return EVENTLOG_INFORMATION_TYPE;
	case Message::PRIO_NOTICE:
	case Message::PRIO_WARNING:
		return EVENTLOG_WARNING_TYPE;
	default:
		return EVENTLOG_ERROR_TYPE;
	}
}


int EventLogChannel::getCategory(const Message& msg)
{
	switch (msg.getPriority())
	{
	case Message::PRIO_TRACE:
		return POCO_CTG_TRACE;
	case Message::PRIO_DEBUG:
		return POCO_CTG_DEBUG;
	case Message::PRIO_INFORMATION:
		return POCO_CTG_INFORMATION;
	case Message::PRIO_NOTICE:
		return POCO_CTG_NOTICE;
	case Message::PRIO_WARNING:
		return POCO_CTG_WARNING;
	case Message::PRIO_ERROR:
		return POCO_CTG_ERROR;
	case Message::PRIO_CRITICAL:
		return POCO_CTG_CRITICAL;
	case Message::PRIO_FATAL:
		return POCO_CTG_FATAL;
	default:
		return 0;
	}
}


void EventLogChannel::setUpRegistry() const
{
	std::string key = "SYSTEM\\CurrentControlSet\\Services\\EventLog\\";
	key.append(_logFile);
	key.append("\\");
	key.append(_name);
	HKEY hKey;
	DWORD disp;
#if defined(POCO_WIN32_UTF8)
	std::wstring ukey;
	UnicodeConverter::toUTF16(key, ukey);
	DWORD rc = RegCreateKeyExW(HKEY_LOCAL_MACHINE, ukey.c_str(), 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &hKey, &disp);
#else
	DWORD rc = RegCreateKeyEx(HKEY_LOCAL_MACHINE, key.c_str(), 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &hKey, &disp);
#endif
	if (rc != ERROR_SUCCESS) return;
	
	if (disp == REG_CREATED_NEW_KEY)
	{
#if defined(POCO_WIN32_UTF8)
		std::wstring path;
		#if defined(POCO_DLL)
			#if defined(_DEBUG)
				path = findLibrary(L"PocoFoundationd.dll");
			#else
				path = findLibrary(L"PocoFoundation.dll");
			#endif
		#endif
		
		if (path.empty())
			path = findLibrary(L"PocoMsg.dll");
#else
		std::string path;
		#if defined(POCO_DLL)
			#if defined(_DEBUG)
				path = findLibrary("PocoFoundationd.dll");
			#else
				path = findLibrary("PocoFoundation.dll");
			#endif
		#endif
		
		if (path.empty())
			path = findLibrary("PocoMsg.dll");
#endif
		
		if (!path.empty())
		{
			DWORD count = 8;
			DWORD types = 7;
#if defined(POCO_WIN32_UTF8)
			RegSetValueExW(hKey, L"CategoryMessageFile", 0, REG_SZ, (const BYTE*) path.c_str(), (DWORD) sizeof(wchar_t)*(path.size() + 1));
			RegSetValueExW(hKey, L"EventMessageFile", 0, REG_SZ, (const BYTE*) path.c_str(), (DWORD) sizeof(wchar_t)*(path.size() + 1));
			RegSetValueExW(hKey, L"CategoryCount", 0, REG_DWORD, (const BYTE*) &count, (DWORD) sizeof(count));
			RegSetValueExW(hKey, L"TypesSupported", 0, REG_DWORD, (const BYTE*) &types, (DWORD) sizeof(types));
#else
			RegSetValueEx(hKey, "CategoryMessageFile", 0, REG_SZ, (const BYTE*) path.c_str(), (DWORD) path.size() + 1);
			RegSetValueEx(hKey, "EventMessageFile", 0, REG_SZ, (const BYTE*) path.c_str(), (DWORD) path.size() + 1);
			RegSetValueEx(hKey, "CategoryCount", 0, REG_DWORD, (const BYTE*) &count, (DWORD) sizeof(count));
			RegSetValueEx(hKey, "TypesSupported", 0, REG_DWORD, (const BYTE*) &types, (DWORD) sizeof(types));
#endif
		}
	}
	RegCloseKey(hKey);
}


#if defined(POCO_WIN32_UTF8)
std::wstring EventLogChannel::findLibrary(const wchar_t* name)
{
	std::wstring path;
	HMODULE dll = LoadLibraryW(name);
	if (dll)
	{
		wchar_t name[MAX_PATH + 1];
		int n = GetModuleFileNameW(dll, name, sizeof(name));
		if (n > 0) path = name;
		FreeLibrary(dll);
	}
	return path;
}
#else
std::string EventLogChannel::findLibrary(const char* name)
{
	std::string path;
	HMODULE dll = LoadLibraryA(name);
	if (dll)
	{
		char name[MAX_PATH + 1];
		int n = GetModuleFileNameA(dll, name, sizeof(name));
		if (n > 0) path = name;
		FreeLibrary(dll);
	}
	return path;
}
#endif


} // namespace Poco
