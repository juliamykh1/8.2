#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include "../82/82.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test82
{
	TEST_CLASS(test82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string input = "SoMe-bAsIc-STRING with spaces";
			std::string result = "somebasicstring";

			foo(input);

			std::cout << input << std::endl;

			Assert::AreEqual(result, input);
		}
	};
}
