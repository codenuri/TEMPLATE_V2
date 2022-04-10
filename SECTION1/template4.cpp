#include <iostream>
#include <source_location>

template<typename T> 
T square(T a)
{
	std::source_location s = std::source_location::current();

	std::cout << s.function_name() << std::endl;

	return a * a;
}

int main()
{
	square<int>(3);	
	square<double>(3.3);
	square(3);
}

