// ConsoleApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "HammingLibrary.h"
#include "HammingDistance.h"
#include <iostream>
#include <string>

int main()
{
	while (true)
	{
		std::string first, second;

		std::cout << "Please enter the first string:" << std::endl;
		std::getline(std::cin, first);

		std::cout << "Please enter the second string:" << std::endl;
		std::getline(std::cin, second);

		auto res = GetDistanceString(first, second);

		if (res < 0 ) {
			std::cout << "Length of strings  should be same in order to calculate Hamming Distance.";
			continue;
		}
		
		std::cout << "Hamming distance : " << res  << std::endl;
	}
	
}

