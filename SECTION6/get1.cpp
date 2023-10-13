#include <tuple>
#include <print>

int main()
{
	std::tuple<int, double, char> t(3, 3.4, 'A');

	std::println("{}", std::get<0>(t)); // 3
	std::println("{}", std::get<1>(t)); // 3.4
	std::println("{}", std::get<2>(t)); // 'A'

	std::get<0>(t) = 20;

	std::println("{}", std::get<0>(t)); // 20
}
