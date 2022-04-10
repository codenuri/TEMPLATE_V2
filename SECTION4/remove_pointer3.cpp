#include <iostream>

template<typename T> struct remove_pointer
{
	using type = T; 
};
template<typename T> struct remove_pointer<T*>
{
	using type = T;
};
template<typename T> struct remove_pointer<T* const>
{
	using type = T;
};
template<typename T> struct remove_pointer<T* volatile >
{
	using type = T;
};
template<typename T> struct remove_pointer<T* const volatile>
{
	using type = T;
};
int main()
{
	std::cout << typeid(remove_pointer<int*>::type).name() 				  << std::endl;
	std::cout << typeid(remove_pointer<int* const>::type).name() 		  << std::endl;
	std::cout << typeid(remove_pointer<int* volatile>::type).name() 	  << std::endl;
	std::cout << typeid(remove_pointer<int* const volatile>::type).name() << std::endl;
}