#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int depth = 0;
			Assert::AreEqual(6, f(123, depth));
			Assert::AreEqual(3, depth);

			depth = 0;
			Assert::AreEqual(0, f(0, depth));
			Assert::AreEqual(0, depth);

			depth = 0;
			Assert::AreEqual(15, f(12345, depth));
			Assert::AreEqual(5, depth);
		}
	};
}
