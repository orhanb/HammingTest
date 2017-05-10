#pragma once

#ifdef HAMMINGLIBRARY_EXPORTS  
#define HAMMINGLIBRARY_API __declspec(dllexport)   
#else  
#define HAMMINGLIBRARY_API __declspec(dllimport)   
#endif

typedef unsigned char byte;

namespace HammingLibrary {

	class HammingDistanceCalculator {

	public:

		static HAMMINGLIBRARY_API int GetDistance(const byte * lhs, const byte * rhs, const size_t length);

	};

}