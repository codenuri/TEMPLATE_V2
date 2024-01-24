#include <print>
#include <concepts>

template<typename T> requires std::integral<T>
void foo( T ) 
{ 
	std::println(" T ");
}

void foo(...) 
{ 
	std::println("..."); 
}

int main()
{
	foo(3.4);
}