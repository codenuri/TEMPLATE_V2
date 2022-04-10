#include <iostream>
#include "fname.h"

template<typename T> void f2(T& arg)
{
	std::cout << _FNAME_ << std::endl;
}

int main()
{
	int  n = 10;
	int& r = n;
	const int  c = 10;
	const int& cr = c;

	f2(n); // T = int,       arg = int&
	f2(c); // T = const int, arg = const int&
	f2(r); // T = int      , arg = int&
	f2(cr);// T = const int, arg = const int&
}