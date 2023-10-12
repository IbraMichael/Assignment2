#include "pch.h"
#include "CppUnitTest.h"

extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);
extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
	TEST_CLASS(BCSRecTests)
	{
	public:

		TEST_METHOD(PerimeterTest)
		{
			int l = 1;
			int w = 3;
			int expected = 8;
			int actual = getPerimeter(&l, &w);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(AreaTest)
		{

			int l = 5;
			int w = 2;
			int expected = 10;
			int actual = getArea(&l, &w);
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(LengthTest01)
		{
			int l = 0;
			int input = 42;
			int expected = 42;
			setLength(input, &l);
			Assert::AreEqual(expected, l);

	
		}

		TEST_METHOD(LengthTest02)
		{
			int l = 1 ;
			int input = -2;
			int expected = 1;
			setLength(input, &l);
			Assert::AreEqual(expected, l);
		}

		TEST_METHOD(LengthTest03)
		{
			int l = 99;
			int input = 100;
			int expected = 99;
			setLength(input, &l);
			Assert::AreEqual(expected, l);
		}

		TEST_METHOD(testWidth01)
		{
			int w = 0;
			int input = 63;
			int expected = 63;
			setLength(input, &w);
			Assert::AreEqual(expected, w);

		}

		TEST_METHOD(testWidth02)
		{
			int w = -5;
			int input = -99;
			int expected = -5;
			setLength(input, &w);
			Assert::AreEqual(expected, w);
		}

		TEST_METHOD(testWidth03)
		{
			int w = 20;
			int input = 47;
			setWidth(input, &w);
			int expected = 47;
			Assert::AreEqual(expected, w);

		}
	};
}



