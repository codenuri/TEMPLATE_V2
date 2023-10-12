#include <print>

int sum() { return 0; }

template<typename T, typename ... Ts>
auto sum(T value, Ts ... args)
{
	return value + sum(args...);
}

int main()
{
	auto s = sum(1, 2, 3, 4, 5);

	std::println("{}", s);
}