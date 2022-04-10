#include <iostream>
#include <type_traits>

template<typename T>
using remove_pointer_t = typename std::remove_pointer<T>::type;

template<typename T>
void fn(const T& arg)
{
//	typename std::remove_pointer<T>::type n;

//	remove_pointer_t<T> n;

	std::remove_pointer_t<T> n;

	std::cout << typeid(n).name() << std::endl;
}

int main()
{
	int n = 0;
	fn(&n);
}