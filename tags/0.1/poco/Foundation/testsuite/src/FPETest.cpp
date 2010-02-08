//
// FPETest.cpp
//
// $Id: //poco/1.3/Foundation/testsuite/src/FPETest.cpp#1 $
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


#include "FPETest.h"
#include "CppUnit/TestCaller.h"
#include "CppUnit/TestSuite.h"
#include "Poco/FPEnvironment.h"


using Poco::FPE;


FPETest::FPETest(const std::string& name): CppUnit::TestCase(name)
{
}


FPETest::~FPETest()
{
}


void FPETest::testClassify()
{
	{
		float a = 0.0f;
		float b = 0.0f;
		float nan = a/b;
		float inf = 1.0f/b;
		
		assert (FPE::isNaN(nan));
		assert (!FPE::isNaN(a));
		assert (FPE::isInfinite(inf));
		assert (!FPE::isInfinite(a));
	}
	{
		double a = 0;
		double b = 0;
		double nan = a/b;
		double inf = 1.0/b;
		
		assert (FPE::isNaN(nan));
		assert (!FPE::isNaN(a));
		assert (FPE::isInfinite(inf));
		assert (!FPE::isInfinite(a));
	}
}


#if defined(__HP_aCC)
#pragma OPTIMIZE OFF
#elif defined(_MSC_VER)
#pragma optimize("", off)
#endif


double mult(double a, double b)
{
	return a*b;
}


double div(double a, double b)
{
	return a/b;
}


void FPETest::testFlags()
{
	FPE::clearFlags();

	// some compilers are intelligent enough to optimize the calculations below away.
	// unfortunately this leads to a failing test, so we have to trick out the
	// compiler's optimizer a little bit by doing something with the results.
	double a = 10;
	double b = 0;
	double c = div(a, b);

	assert (FPE::isFlag(FPE::FP_DIVIDE_BY_ZERO));
	assert (FPE::isInfinite(c)); 

	FPE::clearFlags();
	a = 1.23456789e210;
	b = 9.87654321e210;
	c = mult(a, b);
	assert (FPE::isFlag(FPE::FP_OVERFLOW));
	assertEqualDelta(c, c, 0);

	FPE::clearFlags();
	a = 1.23456789e-99;
	b = 9.87654321e210;
	c = div(a, b);	
	assert (FPE::isFlag(FPE::FP_UNDERFLOW));
	assertEqualDelta(c, c, 0);
}


#if defined(__HP_aCC)
#pragma OPTIMIZE ON
#elif defined(_MSC_VER)
#pragma optimize("", on)
#endif


void FPETest::testRound()
{
	#if !defined(__osf__) && !defined(__VMS)
	FPE::setRoundingMode(FPE::FP_ROUND_TONEAREST);			
	assert (FPE::getRoundingMode() == FPE::FP_ROUND_TONEAREST);
	{
		FPE env(FPE::FP_ROUND_TOWARDZERO);
		assert (FPE::getRoundingMode() == FPE::FP_ROUND_TOWARDZERO);
	}
	assert (FPE::getRoundingMode() == FPE::FP_ROUND_TONEAREST);	
	#endif
}


void FPETest::setUp()
{
}


void FPETest::tearDown()
{
}


CppUnit::Test* FPETest::suite()
{
	CppUnit::TestSuite* pSuite = new CppUnit::TestSuite("FPETest");

	CppUnit_addTest(pSuite, FPETest, testClassify);
	CppUnit_addTest(pSuite, FPETest, testFlags);
	CppUnit_addTest(pSuite, FPETest, testRound);

	return pSuite;
}
