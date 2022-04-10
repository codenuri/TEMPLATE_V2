#include <iostream>
#include <type_traits>

template<typename T> 
void fn(const T& arg)
{
	bool b1 = std::is_pointer<T>::value;
	bool b2 = std::is_pointer_v<T>;

	typename std::remove_pointer<T>::type n1;
	std::remove_pointer_t<T> n2;
}

int main()
{
	int n = 0;
	fn(n);
	fn(&n);
}