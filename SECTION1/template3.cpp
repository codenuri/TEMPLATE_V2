#include <iostream>

template<typename T> 
T square(T a)
{
//	std::cout << __FUNCTION__ << std::endl;
//	std::cout << __FUNCSIG__ << std::endl;
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	return a * a;
}

int main()
{
	square<int>(3);	
	square<double>(3.3);
	square(3);
}

