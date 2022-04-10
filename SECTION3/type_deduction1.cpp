#include <iostream>
#include "fname.h"

template<typename T> 
void fn(T arg)
{
	arg += 1;
	std::cout << _FNAME_ << std::endl;
}

int main()
{
	int 	n = 10;
	double 	d = 3.4;
	const int c = 10;

	fn<int>(3); // T = int
	fn(n);		// T = int
	fn(d);		// T = double
	fn(c);		// T = int
}