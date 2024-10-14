#include <print>
#include <tuple>
#include <utility>

template<typename Tuple, std::size_t ... idx >
void print_tuple_impl(Tuple& tp,
				 std::index_sequence< idx...> arg )
{
	( std::print("{} ", std::get<idx>(tp) ), ... );
}

template<typename Tuple>
void print_tuple(Tuple& tp )
{
	print_tuple_impl(tp, 
					std::make_index_sequence< std::tuple_size_v<Tuple> >{} );
}

int main()
{
	std::tuple t{1, 3.4, 'A', 33};

	print_tuple(t );
}

