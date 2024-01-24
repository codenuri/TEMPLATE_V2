#include <print>

void foo(...) { std::println("..."); }

// #1. using return type
template<typename T> 
typename T::type foo(T a) { }

// #2. using parameter
template<typename T> 
void foo(T a, typename T::type  = 0 ) { }

// #3. using template parameter
template<typename T,
		 typename = typename T::type> 
void foo(T a ) { }

template<typename T,
		 typename T::type = 0 > 
void foo(T a ) { }


int main()
{
	foo(3);
}