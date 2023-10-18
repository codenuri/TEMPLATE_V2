#include <print>
#include <type_traits>

template<typename T>
concept pointer = std::is_pointer_v<T>;

template<typename T> 
concept C1 = requires(T a, T b)
{
//	{a + b} -> int;					// error
//	{a + b} -> std::is_pointer_v;	// error
	
	{a + b} -> pointer;				// ok

	{a.f1()} -> std::same_as<int>;
	{b.f2()} -> std::convertible_to<bool>;
};

int main()
{
	using T = double;

	std::println("{}", pointer<T> );
	std::println("{}", std::same_as<T, int> );
	std::println("{}", std::convertible_to<T, bool> );
}

