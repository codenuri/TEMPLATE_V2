#include <print>
#include <concepts>
#include <type_traits>

template<typename T>
std::enable_if_t< std::is_pointer_v<T>> 
printv(const T& value)
{
	std::println("pointer");
}

template<typename T>
std::enable_if_t< !std::is_pointer_v<T>> 
printv(const T& value)
{
	std::println("not pointer");
}

int main()
{
	int n = 0;
	printv(n); // not pointer
	printv(&n);// pointer
}