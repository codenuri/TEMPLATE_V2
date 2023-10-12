#include <print>

template<typename ... Ts>
auto sum(Ts ... args)
{
//	auto s = ( ... + args );
	auto s = ( 0 + ... + args );

	return s;
}

int main()
{
//	auto ret = sum(1, 2, 3, 4, 5);
	auto ret = sum();

	std::println("{}", ret);
}
