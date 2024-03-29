//
// DateTimeParser.cpp
//
// $Id: //poco/1.3/Foundation/src/DateTimeParser.cpp#6 $
//
// Library: Foundation
// Package: DateTime
// Module:  DateTimeParser
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


#include "Poco/DateTimeParser.h"
#include "Poco/DateTimeFormat.h"
#include "Poco/DateTime.h"
#include "Poco/Exception.h"
#include <cctype>


namespace Poco {


#define SKIP_JUNK() \
	while (it != end && !std::isdigit(*it)) ++it


#define PARSE_NUMBER(var) \
	while (it != end && std::isdigit(*it)) var = var*10 + ((*it++) - '0')


#define PARSE_NUMBER_N(var, n) \
	{ int i = 0; while (i++ < n && it != end && std::isdigit(*it)) var = var*10 + ((*it++) - '0'); }


void DateTimeParser::parse(const std::string& fmt, const std::string& str, DateTime& dateTime, int& timeZoneDifferential)
{
	int year   = 0;
	int month  = 0;
	int day    = 0;
	int hour   = 0;
	int minute = 0;
	int second = 0;
	int millis = 0;
	int micros = 0;
	int tzd    = 0;

	std::string::const_iterator it   = str.begin();
	std::string::const_iterator end  = str.end();
	std::string::const_iterator itf  = fmt.begin();
	std::string::const_iterator endf = fmt.end();

	while (itf != endf && it != end)
	{
		if (*itf == '%')
		{
			if (++itf != endf)
			{
				switch (*itf)
				{
				case 'w':
				case 'W':
					while (it != end && std::isspace(*it)) ++it;
					while (it != end && std::isalpha(*it)) ++it;
					break;
				case 'b':
				case 'B':
					month = parseMonth(it, end);
					break;
				case 'd':
				case 'e':
				case 'f':
					SKIP_JUNK();
					PARSE_NUMBER_N(day, 2);
					break;
				case 'm':
				case 'n':
				case 'o':
					SKIP_JUNK();
					PARSE_NUMBER_N(month, 2);
					break;					 
				case 'y':
					SKIP_JUNK();
					PARSE_NUMBER_N(year, 2);
					if (year >= 70) 
						year += 1900;
					else
						year += 2000;
					break;
				case 'Y':
					SKIP_JUNK();
					PARSE_NUMBER_N(year, 4);
					break;
				case 'H':
				case 'h':
					SKIP_JUNK();
					PARSE_NUMBER_N(hour, 2);
					break;
				case 'a':
				case 'A':
					hour = parseAMPM(it, end, hour);
					break;
				case 'M':
					SKIP_JUNK();
					PARSE_NUMBER_N(minute, 2);
					break;
				case 'S':
					SKIP_JUNK();
					PARSE_NUMBER_N(second, 2);
					break;
				case 'i':
					SKIP_JUNK();
					PARSE_NUMBER_N(millis, 3);
					break;
				case 'c':
					SKIP_JUNK();
					PARSE_NUMBER_N(millis, 1);
					millis *= 100;
					break;
				case 'F':
					SKIP_JUNK();
					PARSE_NUMBER_N(millis, 3);
					PARSE_NUMBER_N(micros, 3);
					break;
				case 'z':
				case 'Z':
					tzd = parseTZD(it, end);
					break;
				}
				++itf;
			}
		}
		else ++itf;
	}
	if (month == 0) month = 1;
	if (day == 0) day = 1;
	if (DateTime::isValid(year, month, day, hour, minute, second, millis, micros))
		dateTime.assign(year, month, day, hour, minute, second, millis, micros);
	else 
		throw SyntaxException("date/time component out of range");
	timeZoneDifferential = tzd;
}


DateTime DateTimeParser::parse(const std::string& fmt, const std::string& str, int& timeZoneDifferential)
{
	DateTime result;
	parse(fmt, str, result, timeZoneDifferential);
	return result;
}

	
bool DateTimeParser::tryParse(const std::string& fmt, const std::string& str, DateTime& dateTime, int& timeZoneDifferential)
{
	try
	{
		parse(fmt, str, dateTime, timeZoneDifferential);
	}
	catch (Exception&)
	{
		return false;
	}
	return true;
}


void DateTimeParser::parse(const std::string& str, DateTime& dateTime, int& timeZoneDifferential)
{
	if (!tryParse(str, dateTime, timeZoneDifferential))
		throw SyntaxException("Unsupported or invalid date/time format");
}

	
DateTime DateTimeParser::parse(const std::string& str, int& timeZoneDifferential)
{
	DateTime result;
	if (tryParse(str, result, timeZoneDifferential))
		return result;
	else
		throw SyntaxException("Unsupported or invalid date/time format");
}

	
bool DateTimeParser::tryParse(const std::string& str, DateTime& dateTime, int& timeZoneDifferential)
{
	if (str.length() < 4) return false;
	
	if (str[3] == ',')
		return tryParse(DateTimeFormat::RFC822_FORMAT, str, dateTime, timeZoneDifferential);
	else if (str[3] == ' ')
		return tryParse(DateTimeFormat::ASCTIME_FORMAT, str, dateTime, timeZoneDifferential);
	else if (str.find(',') != std::string::npos)
		return tryParse(DateTimeFormat::RFC850_FORMAT, str, dateTime, timeZoneDifferential);
	else if (std::isdigit(str[0]))
	{
		if (str.find(' ') != std::string::npos || str.length() == 10)
			return tryParse(DateTimeFormat::SORTABLE_FORMAT, str, dateTime, timeZoneDifferential);
		else
			return tryParse(DateTimeFormat::ISO8601_FORMAT, str, dateTime, timeZoneDifferential);
	}
	else return false;
}


int DateTimeParser::parseTZD(std::string::const_iterator& it, const std::string::const_iterator& end)
{
	struct Zone
	{
		const char* designator;
		int         timeZoneDifferential;
	};

	static Zone zones[] =
	{
		{"Z",           0},
		{"UT",          0},
		{"GMT",         0},
		{"BST",    1*3600},
		{"IST",    1*3600},
		{"WET",         0},
		{"WEST",   1*3600},
		{"CET",    1*3600},
		{"CEST",   2*3600},
		{"EET",    2*3600},
		{"EEST",   3*3600},
		{"MSK",    3*3600},
		{"MSD",    4*3600},
		{"NST",   -3*3600-1800},
		{"NDT",   -2*3600-1800},
		{"AST",   -4*3600},
		{"ADT",   -3*3600},
		{"EST",   -5*3600},
		{"EDT",   -4*3600},
		{"CST",   -6*3600},
		{"CDT",   -5*3600},
		{"MST",   -7*3600},
		{"MDT",   -6*3600},
		{"PST",   -8*3600},
		{"PDT",   -7*3600},
		{"AKST",  -9*3600},
		{"AKDT",  -8*3600},
		{"HST",  -10*3600},
		{"AEST",  10*3600},
		{"AEDT",  11*3600},
		{"ACST",   9*3600+1800},
		{"ACDT",  10*3600+1800},
		{"AWST",   8*3600},
		{"AWDT",   9*3600}
	};

	while (it != end && std::isspace(*it)) ++it;
	if (it != end)
	{
		if (std::isalpha(*it))
		{
			std::string designator;
			designator += *it++;
			if (it != end && std::isalpha(*it)) designator += *it++;
			if (it != end && std::isalpha(*it)) designator += *it++;
			if (it != end && std::isalpha(*it)) designator += *it++;
			for (unsigned i = 0; i < sizeof(zones)/sizeof(Zone); ++i)
			{
				if (designator == zones[i].designator)
					return zones[i].timeZoneDifferential;
			}
		}
		else if (*it == '+' || *it == '-')
		{
			int sign = *it == '+' ? 1 : -1;
			++it;
			int hours = 0;
			PARSE_NUMBER_N(hours, 2);
			if (it != end && *it == ':') ++it;
			int minutes = 0;
			PARSE_NUMBER_N(minutes, 2);
			return sign*(hours*3600 + minutes*60);
		}
	}
	return 0;
}


int DateTimeParser::parseMonth(std::string::const_iterator& it, const std::string::const_iterator& end)
{
	std::string month;
	while ((it != end && std::isspace(*it)) || std::ispunct(*it)) ++it;
	bool isFirst = true;
	while (it != end && std::isalpha(*it)) 
	{
		char ch = (*it++);
		if (isFirst) { month += std::toupper(ch); isFirst = false; }
		else month += std::tolower(ch);
	}
	if (month.length() < 3) throw SyntaxException("Month name must be at least three characters long", month);
	for (int i = 0; i < 12; ++i) 
	{
		if (DateTimeFormat::MONTH_NAMES[i].find(month) == 0)
			return i + 1;
	}
	throw SyntaxException("Not a valid month name", month);
}


int DateTimeParser::parseDayOfWeek(std::string::const_iterator& it, const std::string::const_iterator& end)
{
	std::string dow;
	while ((it != end && std::isspace(*it)) || std::ispunct(*it)) ++it;
	bool isFirst = true;
	while (it != end && std::isalpha(*it)) 
	{
		char ch = (*it++);
		if (isFirst) { dow += std::toupper(ch); isFirst = false; }
		else dow += std::tolower(ch);
	}
	if (dow.length() < 3) throw SyntaxException("Weekday name must be at least three characters long", dow);
	for (int i = 0; i < 7; ++i) 
	{
		if (DateTimeFormat::WEEKDAY_NAMES[i].find(dow) == 0)
			return i;
	}
	throw SyntaxException("Not a valid weekday name", dow);
}


int DateTimeParser::parseAMPM(std::string::const_iterator& it, const std::string::const_iterator& end, int hour)
{
	std::string ampm;
	while ((it != end && std::isspace(*it)) || std::ispunct(*it)) ++it;
	while (it != end && std::isalpha(*it)) 
	{
		char ch = (*it++);
		ampm += std::toupper(ch);
	}
	if (ampm == "AM")
	{
		if (hour == 12)
			return 0;
		else
			return hour;
	}
	else if (ampm == "PM")
	{
		if (hour < 12)
			return hour + 12;
		else
			return hour;
	}
	else throw SyntaxException("Not a valid AM/PM designator", ampm);
}


} // namespace Poco
