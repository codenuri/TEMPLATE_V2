#include <print>

template<typename T>
//int foo(T) 
typename T::type foo(T) 
//     int::type
{ 
	std::println(" T "); 
	return 0;
}

int foo(...) 
{ 
	std::println("..."); 
	return 0;
}

int main()
{
	foo(3);
}