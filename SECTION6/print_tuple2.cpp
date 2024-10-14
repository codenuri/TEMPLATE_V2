#include <print>
#include <tuple>

template<typename Tuple, typename ... Ts>
void print_tuple(Tuple& tp, Ts ... idx )
{
	( std::print("{} ", std::get<idx>(tp) ), ... );
}

int main()
{
	std::tuple t{1, 3.4, 'A'};

	print_tuple(t, 0, 1, 2);
}

