#include <iostream>

template<typename T> struct is_pointer     { enum { value = false};};
template<typename T> struct is_pointer<T*> { enum { value = true}; };

template<typename T> 
void printv_imp(const T& value, YES )
{
	std::cout << value << " : " << *value << std::endl;
}

template<typename T> 
void printv_imp(const T& value, NO )
{
	std::cout << value << std::endl;
}

template<typename T> 
void printv(const T& value)
{
	printv_imp(value, is_pointer<T>::value );
					// true  => 1
					// false => 0

//	if ( is_pointer<T>::value )
//		pointer(value);
//	else
//		not_pointer(value);
}

int main()
{
	int n = 10;
	printv(n);	
}