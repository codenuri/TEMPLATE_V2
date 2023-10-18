#include <type_traits>
#include <print>

/*
template<typename T>
void printv(const T& a)
{
	if constexpr ( std::is_pointer_v<T> )
		std::println("pointer");	
	else 
		std::println("not pointer");
}
*/

template<typename T> requires std::is_pointer_v<T>
void printv(const T& a)
{
	std::println("pointer");	
}

template<typename T> requires (!std::is_pointer_v<T>)
void printv(const T& a)
{
	std::println("not pointer");
}

int main()
{
	int n = 0;
	printv(n);
	printv(&n);
}