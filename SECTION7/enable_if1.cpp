#include <print>
#include <concepts>
#include <type_traits>

void foo(...) { std::println("..."); }

/*
template<typename T> requires std::integral<T>
void foo(T a) 
{ 
	std::println("T"); 
}
*/

template<typename T> 
std::enable_if_t< std::is_integral_v<T> > 
foo(T a) 
{ 
	std::println("T"); 
}


int main()
{
	foo(3);		// T
	foo(3.4);	// ...
}