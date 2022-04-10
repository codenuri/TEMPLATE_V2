#include <iostream>
#include <type_traits>

template<bool, typename T1, typename T2> struct conditional;

template<typename T1, typename T2> struct conditional<true, T1, T2>
{
	using type = T1;
};

template<typename T1, typename T2> struct conditional<false, T1, T2>
{
	using type = T2;
};

int main()
{
//	std::conditional<true,  int, double>::type v1;
//	std::conditional<false, int, double>::type v2;

	conditional<true,  int, double>::type v1;
	conditional<false, int, double>::type v2;


	std::cout << typeid(v1).name() << std::endl; // int
	std::cout << typeid(v2).name() << std::endl; // double
}












