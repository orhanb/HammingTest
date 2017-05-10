// HammingLibrary.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "HammingLibrary.h"



namespace HammingLibrary {

	int HammingDistanceCalculator::GetDistance(const byte * lhs, const byte * rhs, const size_t length) {

		// Function is not protected against unequal sized arrays
		int dist = 0;
		for (size_t i = 0; i < length; ++i) {
			char val = lhs[i] ^ rhs[i];
			while (val)
			{
				++dist;
				val &= val - 1;
			}
		}
		return dist;
	}

}
