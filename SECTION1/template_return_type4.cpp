#include <iostream>
#include <type_traits>

template<typename T1, typename T2>
typename std::common_type<T1, T2>::type  add(const T1& a, const T2& b)  
{
	return a + b;
}

int main()
{
	std::cout << add(3, 4.3) << std::endl;
}