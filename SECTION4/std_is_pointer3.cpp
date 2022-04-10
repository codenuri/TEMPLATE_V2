#include <iostream>
#include <type_traits>

template<typename T> 
void fn_imp(const T& value, std::true_type ) {}

template<typename T> 
void fn_imp(const T& value, std::false_type ) {}

template<typename T> 
void fn(const T& value )
{
	// 1. 
	if constexpr ( std::is_pointer_v<T> ) 
//	if constexpr ( std::is_pointer<T>::value )
	{
		// *value
	}
	else
	{
	}
	// 2. 
	fn_imp(value, std::is_pointer<T>() );
}

int main()
{
	int n = 0;
	fn(n);
}