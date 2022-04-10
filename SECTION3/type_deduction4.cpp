#include <iostream>
#include "fname.h"

template<typename T> void f3(T&& arg)
{
	std::cout << _FNAME_ << std::endl;
}

int main()
{
	int  n = 10;
	int& r = n;
	const int  c = 10;
	const int& cr = c;

	f3(3); // T = int,        arg = int&&
	f3(n); // T = int&,       arg = int& 
	f3(c); // T = const int&  arg = const int&
	f3(r); // T = int&,       arg = int&
	f3(cr);// T = const int&  arg = const int&

}