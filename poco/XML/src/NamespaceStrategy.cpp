//
// NamespaceStrategy.cpp
//
// $Id: //poco/1.3/XML/src/NamespaceStrategy.cpp#3 $
//
// Library: XML
// Package: XML
// Module:  NamespaceStrategy
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


#include "Poco/XML/NamespaceStrategy.h"
#include "Poco/SAX/AttributesImpl.h"
#include "Poco/SAX/ContentHandler.h"
#include "Poco/XML/XMLException.h"
#include "Poco/XML/Name.h"


namespace Poco {
namespace XML {


const XMLString NamespaceStrategy::NOTHING;


NamespaceStrategy::~NamespaceStrategy()
{
}


void NamespaceStrategy::splitName(const XMLChar* qname, XMLString& uri, XMLString& localName)
{
	for (const XMLChar* p = qname; *p; ++p)
	{
		if (*p == '\t')
		{
			uri.assign(qname, p - qname);
			localName.assign(p + 1);
			return;
		}
	}
	localName = qname;
}


void NamespaceStrategy::splitName(const XMLChar* qname, XMLString& uri, XMLString& localName, XMLString& prefix)
{
	const XMLChar* p = qname;
	while (*p && *p != '\t') ++p;
	if (*p)
	{
		uri.assign(qname, p - qname);
		++p;
		const XMLChar* loc = p;
		while (*p && *p != '\t') ++p;
		localName.assign(loc, p - loc);
		if (*p)
			prefix.assign(++p);
		else
			prefix.assign(XML_LIT(""));
	}
	else 
	{
		uri.assign(XML_LIT(""));
		localName = qname;
		prefix.assign(XML_LIT(""));
	}	
}


NoNamespacesStrategy::NoNamespacesStrategy()
{
	_attrs.reserve(32);
}


NoNamespacesStrategy::~NoNamespacesStrategy()
{
}


void NoNamespacesStrategy::startElement(const XMLChar* name, const XMLChar** atts, int specifiedCount, ContentHandler* pContentHandler)
{
	poco_assert_dbg (name && atts && pContentHandler);

	_attrs.clear();
	for (int i = 0; *atts; ++i)
	{
		AttributesImpl::Attribute& attr = _attrs.addAttribute();
		attr.qname.assign(*atts++);
		attr.value.assign(*atts++);
		attr.specified = i < specifiedCount;
	}
	_name.assign(name);
	pContentHandler->startElement(NOTHING, NOTHING, _name, _attrs);
}


void NoNamespacesStrategy::endElement(const XMLChar* name, ContentHandler* pContentHandler)
{
	poco_assert_dbg (name && pContentHandler);

	_name.assign(name);
	pContentHandler->endElement(NOTHING, NOTHING, _name);
}


NoNamespacePrefixesStrategy::NoNamespacePrefixesStrategy()
{
	_attrs.reserve(32);
}


NoNamespacePrefixesStrategy::~NoNamespacePrefixesStrategy()
{
}


void NoNamespacePrefixesStrategy::startElement(const XMLChar* name, const XMLChar** atts, int specifiedCount, ContentHandler* pContentHandler)
{
	poco_assert_dbg (name && atts && pContentHandler);

	_attrs.clear();
	for (int i = 0; *atts; ++i)
	{
		const XMLChar* attrName  = *atts++;
		const XMLChar* attrValue = *atts++;
		AttributesImpl::Attribute& attr = _attrs.addAttribute();
		splitName(attrName, attr.namespaceURI, attr.localName);
		attr.value.assign(attrValue);
		attr.specified = i < specifiedCount;
	}
	splitName(name, _uri, _local);
	pContentHandler->startElement(_uri, _local, NOTHING, _attrs);
}


void NoNamespacePrefixesStrategy::endElement(const XMLChar* name, ContentHandler* pContentHandler)
{
	poco_assert_dbg (name && pContentHandler);

	splitName(name, _uri, _local);
	pContentHandler->endElement(_uri, _local, NOTHING);
}


NamespacePrefixesStrategy::NamespacePrefixesStrategy()
{
	_attrs.reserve(32);
}


NamespacePrefixesStrategy::~NamespacePrefixesStrategy()
{
}


void NamespacePrefixesStrategy::startElement(const XMLChar* name, const XMLChar** atts, int specifiedCount, ContentHandler* pContentHandler)
{
	poco_assert_dbg (name && atts && pContentHandler);

	_attrs.clear();
	for (int i = 0; *atts; ++i)
	{
		const XMLChar* attrName  = *atts++;
		const XMLChar* attrValue = *atts++;
		AttributesImpl::Attribute& attr = _attrs.addAttribute();
		splitName(attrName, attr.namespaceURI, attr.localName, attr.qname);
		if (!attr.qname.empty()) attr.qname += ':';
		attr.qname.append(attr.localName);
		attr.value.assign(attrValue);
		attr.specified = i < specifiedCount;
	}
	splitName(name, _uri, _local, _qname);
	if (!_qname.empty()) _qname += ':';
	_qname.append(_local);
	pContentHandler->startElement(_uri, _local, _qname, _attrs);
}


void NamespacePrefixesStrategy::endElement(const XMLChar* name, ContentHandler* pContentHandler)
{
	poco_assert_dbg (name && pContentHandler);

	splitName(name, _uri, _local, _qname);
	if (!_qname.empty()) _qname += ':';
	_qname.append(_local);
	pContentHandler->endElement(_uri, _local, _qname);
}


} } // namespace Poco::XML
