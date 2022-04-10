#include <iostream>

template<typename T> struct remove_pointer
{
	using type = T; // typedef T type;
};

template<typename T> struct remove_pointer<T*>
{
	using type = T;
};

template<typename T> 
void fn(const T& arg)
{
//	remove_pointer<int*>::type n1;

	typename remove_pointer<T>::type n1;

	std::cout << typeid(n1).name() << std::endl; // int
}

int main()
{
	int n = 10;
	fn(&n);
	fn(n);
}