#include "stdafx.h"
#include "CppUnitTest.h"
#include "HammingLibrary.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_Hamming
{		
	TEST_CLASS(UnitTest_Hamming)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const unsigned char lhs = '1';
			const unsigned char rhs = '2';

			auto res = HammingLibrary::HammingDistanceCalculator::GetDistance(&lhs, &rhs, 1);
			Assert::AreEqual(2, res, L"single unsigned char comparison", LINE_INFO() );
		
		}

		TEST_METHOD(TestMethod2)
		{
			const unsigned char lhs[] = "100000010000";
			const unsigned char rhs[] = "200000020000";

			auto res = HammingLibrary::HammingDistanceCalculator::GetDistance(&lhs[0], &rhs[0], 12);
			Assert::AreEqual(4, res, L"unsigned char array comparison", LINE_INFO());

		}

	};
}