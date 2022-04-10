#include <iostream>
#include <concepts>

template<typename T> requires std::integral<T>
T square(T a)
{
	std::cout << "integral" << std::endl;
	return a * a;
}

template<typename T> requires (!std::integral<T>)
T square(T a)
{
	std::cout << "not integral" << std::endl;
	return a * a;
}

int main()
{
	square(3);  
	square(3.4);
}