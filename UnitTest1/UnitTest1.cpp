#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\3.3 d\3.3 d\PubReal.cpp"
#include "C:\Users\Misha\source\repos\3.3 d\3.3 d\Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			PubReal a;
			int n = 2;
			Number x(16);
			double t = a.Root(n, x);
			Assert::AreEqual(t, 4.);
		}
	};
}
