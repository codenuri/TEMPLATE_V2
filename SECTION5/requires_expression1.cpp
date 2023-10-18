#include <print>
#include <type_traits>

template<typename T> 
concept addable = requires( T a, T b)
{
	a + b;
};

template<typename T>
void test(const T& arg)
{
	std::print("{}", addable<T>); // true

	constexpr bool ret = requires( T a, T b){ a + b;};

	static_assert( addable<T>, "not addable");
	static_assert( requires( T a, T b){ a + b;}, "not addable");
}

int main()
{
	test(5);
}