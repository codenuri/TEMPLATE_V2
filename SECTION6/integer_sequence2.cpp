#include <print>
#include <tuple>

template<typename Tuple, std::size_t ... idx >
void print_tuple(Tuple& tp,
				 std::integer_sequence<std::size_t, idx...> arg )
{
	( std::print("{} ", std::get<idx>(tp) ), ... );
}

int main()
{
	std::tuple t{1, 3.4, 'A'};

	print_tuple(t, std::integer_sequence<std::size_t,0, 1, 2>{} );
}

