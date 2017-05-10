#include "stdafx.h"
#include "CppUnitTest.h"
#include "HammingLibrary.h"
#include "HammingDistance.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace IntegrationTest_Hamming
{
	TEST_CLASS(IntegrationTest_Hamming)
	{
	public:

		TEST_METHOD(TestMethod3)
		{
			std::string first  = "111111";
			std::string second = "222222";

			Assert::AreEqual(12, GetDistanceString(first, second), L"compare equal sized strings", LINE_INFO());
		}

		TEST_METHOD(TestMethod4)
		{
			std::string first = "1111112";
			std::string second = "222222";

			Assert::AreEqual(-1, GetDistanceString(first, second), L"compare unequal sized strings", LINE_INFO());
		}
	};
}