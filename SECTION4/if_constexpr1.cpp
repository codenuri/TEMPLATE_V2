#include <iostream>

template<typename T> struct is_pointer     { enum { value = false};};
template<typename T> struct is_pointer<T*> { enum { value = true}; };

template<typename T> 
void printv(const T& value)
{
	if ( is_pointer<T>::value )
		std::cout << value << " : " << *value << std::endl;
	else
		std::cout << value << std::endl;
}

int main()
{
	int n = 10;
	printv(&n); // ok
	printv(n);	// error
}