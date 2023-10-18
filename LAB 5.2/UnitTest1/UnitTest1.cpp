#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB 5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double c;
			int n = 0;
			c = S(1, 0.00001, n, 1);
			Assert::AreEqual(c, 0.841471, 0.000001);
		}
		TEST_METHOD(TestMethod2)
		{
			double a;
			int n = 0;
			a = A(1, 6, 1);
			Assert::AreEqual(a, -0.00641026, 0.000001);
		}
	};
}
