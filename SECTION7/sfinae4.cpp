#include <print>

template<typename T> 
void foo( T ) 
{ 
	typename T::type n; // error
}

void foo(...) 
{ 
	std::println("..."); 
}

int main()
{
	foo(3); // error. 
}