#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include "../Lab6.2/Lab6.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab62
{
	TEST_CLASS(UnitTestLab62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[4]{2,3,0,0};
			COUTI(a, 4);
			Assert::AreEqual(, SWAPI(a, 4));
		}
	};
}
