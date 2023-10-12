#include <print>

template<typename ... Ts>
auto sum_fold(Ts ... args)
{
	return ( 0 + ... + args );
}

int main()
{
	auto ret = sum_fold(1, 2, 3, 4, 5);

	std::println("{}", ret);
}
