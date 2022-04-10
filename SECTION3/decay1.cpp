#include <iostream>
#include "fname.h"

template<typename T> void f1(T arg)  // int*
{ 
	std::cout << _FNAME_ << std::endl; 
}
template<typename T> void f2(T& arg)
{ 
	std::cout << _FNAME_ << std::endl; 
}

int main()
{
	int x[3] = {1,2,3};
	f1(x); // T = int*, arg = int*
	f2(x); // T = int[3], arg = int(&)[3]


	auto  a1 = x; // auto = int*,  int* a1 = x;

	auto& a2 = x; // auto = int[3], 
				  // a2   = int(&)[3]	
}