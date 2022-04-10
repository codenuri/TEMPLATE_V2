#include <iostream>
#include <type_traits>

template<typename T>
void fn(const T& value)
{
//	T n;

	std::remove_pointer_t<T> n;

	std::cout << typeid(n).name() << std::endl;
}

int main()
{
	int n = 0;
	fn(n);
	fn(&n);
}