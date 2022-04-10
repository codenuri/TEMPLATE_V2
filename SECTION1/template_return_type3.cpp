#include <iostream>

template<typename T1, typename T2>
//decltype(a + b) add(const T1& a, const T2& b)
//auto add(const T1& a, const T2& b) -> decltype(a + b) // C++11
auto add(const T1& a, const T2& b)  // C++14
{
	return a + b;
}

int main()
{
	std::cout << add(3, 4.3) << std::endl;
}