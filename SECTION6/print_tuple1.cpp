#include <print>
#include <tuple>

template<typename Tuple>
void print_tuple(Tuple& tp)
{
	std::size_t sz = std::tuple_size_v<Tuple>;

	for (std::size_t i = 0; i < sz; i++)
	{
		std::print("{} ", std::get<i>(tp) );
	}
}

int main()
{
	std::tuple t{1, 3.4, 'A'};

	print_tuple(t);
}

