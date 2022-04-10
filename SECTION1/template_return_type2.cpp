#include <iostream>

template<typename R, typename T1, typename T2>
R add(const T1& a, const T2& b)
{
	return a + b;
}

int main()
{
//	std::cout << add<int, double>(3, 4.3) << std::endl;
//	std::cout << add(3, 4.3) << std::endl;

	std::cout << add<double, int, double>(3, 4.3) << std::endl;
	std::cout << add<double>(3, 4.3) << std::endl;
}