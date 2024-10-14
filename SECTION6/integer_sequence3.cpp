#include <utility>
#include <print>

int main()
{
	std::integer_sequence<std::size_t, 0, 1, 2> s1;
	std::index_sequence<0, 1, 2> s2;

	std::make_integer_sequence<std::size_t, 3> s3;
	std::make_index_sequence<3>  s4;

	std::println("{} ", typeid(s1).name());
	std::println("{} ", typeid(s2).name());
	std::println("{} ", typeid(s3).name());
	std::println("{} ", typeid(s4).name());
}