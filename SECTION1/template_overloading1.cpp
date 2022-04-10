#include <iostream>

template<typename T> 
T square(T a)
{
	std::cout << "T" << std::endl;
	return a * a;
}

int square(int a)
{
	std::cout << "int" << std::endl;
	return a * a;
}

int main()
{
	square(3);   // int
	square(3.4); // T

	square<int>(3); 
	square<>(3); 
}