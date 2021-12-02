#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab13.1/var.h"
#include "../Lab13.1/var.cpp"
#include "../Lab13.1/dod.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsDod;
using namespace nsVar;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			a = 1;
			x = 1;
			n = 0;
			nsDod::dod();
			Assert::AreEqual(a, 0.);

		}
	};
}
