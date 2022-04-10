#include <iostream>

template<typename T> struct remove_all_pointer
{
	using type = T; 
};

template<typename T> struct remove_all_pointer<T*> // int** *
{												   // int* *
//	using type = T;								   // int *	
	using type = typename remove_all_pointer<T>::type;								  
};

template<typename T>
using remove_all_pointer_t = typename remove_all_pointer<T>::type;

int main()
{
	std::cout << typeid(remove_all_pointer<int*>::type).name() << std::endl;
	std::cout << typeid(remove_all_pointer<int**>::type).name() << std::endl;
	std::cout << typeid(remove_all_pointer<int***>::type).name() << std::endl;
}