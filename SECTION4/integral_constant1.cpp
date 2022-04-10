#include <iostream>

template<int N> struct int2type
{
	enum { value = N };
};

template<typename T, T N> 
struct integral_constant
{
	static constexpr T value = N;
};

int main()
{
	int2type<0> t1;
	int2type<1> t2;

	integral_constant<int, 0> n0; // int2type<0> n0
	integral_constant<int, 1> n1;
	integral_constant<short, 1> n2;
	integral_constant<bool, true> n2;

}