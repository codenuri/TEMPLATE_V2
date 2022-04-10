#include <iostream>

template<typename T> struct is_pointer     { enum { value = false};};
template<typename T> struct is_pointer<T*> { enum { value = true}; };

template<typename T> 
void pointer(const T& value)
{
	std::cout << value << " : " << *value << std::endl;
}

template<typename T> 
void not_pointer(const T& value)
{
	std::cout << value << std::endl;
}

template<typename T> 
void printv(const T& value)
{
	if ( is_pointer<T>::value )
		pointer(value);
	else
		not_pointer(value);
}

int main()
{
	int n = 10;
	printv(n);	
}