#include <iostream>
#include <type_traits>

template<typename T>
constexpr bool is_pointer_v = std::is_pointer<T>::value;

template<typename T> 
void fn(const T& arg)
{
	bool b1 = std::is_pointer<T>::value;
	bool b2 = is_pointer_v<T>;
	bool b3 = std::is_pointer_v<T>;

}

int main()
{
	int n = 10;
	fn(n);
}



