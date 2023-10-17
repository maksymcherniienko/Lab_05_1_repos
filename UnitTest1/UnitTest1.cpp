#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_1/Lab_05_1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			
			double a, b, c, result;
			
			a = 1;
			b = 4;
			c = 1;

			result = (a * a) + (b * b) - (c * c);
			double ExpectedValue = g(a, b, c);
			Assert::AreEqual(result, ExpectedValue, 18);

		}
	};
}
