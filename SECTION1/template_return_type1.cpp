#include <iostream>

template<typename T>
T add(const T& a, const T& b)
{
	return a + b;
}

int main()
{
	std::cout << add(3, 4) 		<< std::endl;
	std::cout << add(3.1, 4.3) 	<< std::endl;

//	std::cout << add(3, 4.3) << std::endl;
	std::cout << add<double>(3, 4.3) << std::endl;
}



