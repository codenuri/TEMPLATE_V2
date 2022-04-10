#include <iostream>
#include "fname.h"

template<typename T> void f1(T arg)
{
	std::cout << _FNAME_ << std::endl;
}

int main()
{
	int  n = 10;
	int& r = n;
	const int  c = 10;
	const int& cr = c;

	f1(n); // T = int
	f1(c); // T = int
	f1(r); // T = int
	f1(cr);// T = int
}