//
// DialogSocketTest.cpp
//
// $Id: //poco/1.3/Net/testsuite/src/DialogSocketTest.cpp#1 $
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


#include "DialogSocketTest.h"
#include "CppUnit/TestCaller.h"
#include "CppUnit/TestSuite.h"
#include "EchoServer.h"
#include "Poco/Net/DialogSocket.h"
#include "Poco/Net/SocketAddress.h"


using Poco::Net::DialogSocket;
using Poco::Net::SocketAddress;


DialogSocketTest::DialogSocketTest(const std::string& name): CppUnit::TestCase(name)
{
}


DialogSocketTest::~DialogSocketTest()
{
}


void DialogSocketTest::testDialogSocket()
{
	EchoServer echoServer;
	DialogSocket ds;
	ds.connect(SocketAddress("localhost", echoServer.port()));

	ds.sendMessage("Hello, world!");
	std::string str;
	ds.receiveMessage(str);
	assert (str == "Hello, world!");

	ds.sendString("Hello, World!\n");
	ds.receiveMessage(str);
	assert (str == "Hello, World!");
	
	ds.sendMessage("EHLO", "appinf.com");
	ds.receiveMessage(str);
	assert (str == "EHLO appinf.com");
	
	ds.sendMessage("PUT", "local.txt", "remote.txt");
	ds.receiveMessage(str);
	assert (str == "PUT local.txt remote.txt");

	ds.sendMessage("220 Hello, world!");
	int status = ds.receiveStatusMessage(str);
	assert (status == 220);
	assert (str == "220 Hello, world!");
	
	ds.sendString("220-line1\r\n220 line2\r\n");
	status = ds.receiveStatusMessage(str);
	assert (status == 220);
	assert (str == "220-line1\n220 line2");
	
	ds.sendString("220-line1\r\nline2\r\n220 line3\r\n");
	status = ds.receiveStatusMessage(str);
	assert (status == 220);
	assert (str == "220-line1\nline2\n220 line3");

	ds.sendMessage("Hello, world!");
	status = ds.receiveStatusMessage(str);
	assert (status == 0);
	assert (str == "Hello, world!");
}


void DialogSocketTest::setUp()
{
}


void DialogSocketTest::tearDown()
{
}


CppUnit::Test* DialogSocketTest::suite()
{
	CppUnit::TestSuite* pSuite = new CppUnit::TestSuite("DialogSocketTest");

	CppUnit_addTest(pSuite, DialogSocketTest, testDialogSocket);

	return pSuite;
}
