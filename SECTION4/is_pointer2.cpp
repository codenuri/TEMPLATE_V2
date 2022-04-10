#include <iostream>
#include <type_traits>

template<typename T> 
void fn(T& arg)
{
	std::cout << std::is_const<T>::value << std::endl;
	std::cout << std::is_array<T>::value << std::endl;
}
int main()
{
	int n = 0;
	int x[3] = {1,2,3};
	const int c = 0;	
	const int y[3] = {1,2,3};

	fn(n); // 0, 0
	fn(c); // 1, 0
	fn(x); // 0, 1
	fn(y); // 1, 1
}