#include <iostream>

template<std::size_t N> struct Factorial
{
	enum { value = N * Factorial<N-1>::value };
};

template<> struct Factorial<1>
{
	enum { value = 1 };
};

int main()
{
	int ret = Factorial<5>::value;
				// 	    5 * F<4>::v
				//			4 * F<3>::v
				//				3 * F<2>::v
				//					2 * F<1>::v
				//						1
				

	std::cout << ret << std::endl;
}