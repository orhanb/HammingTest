#pragma once
#include "HammingLibrary.h"
#include <iostream>

int GetDistanceString(std::string & first, std::string & second) 
{
	if (first.length() != second.length())
		return -1;

	auto lhs = reinterpret_cast<const unsigned char *> (first.c_str());
	auto rhs = reinterpret_cast<const unsigned char *> (second.c_str());
	return HammingLibrary::HammingDistanceCalculator::GetDistance(lhs, rhs, first.length());
}