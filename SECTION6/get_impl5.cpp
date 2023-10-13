#include "tuple.h"
#include <print>

template<std::size_t N, typename TP>
struct tuple_element;

template<typename T, typename ... Ts>
struct tuple_element<0, tuple<T, Ts...>>
{
	using type = T;
	using tuple_type = tuple<T, Ts...>;
};

template<std::size_t N, typename T, typename ... Ts>
struct tuple_element<N, tuple<T, Ts...>>
{
	using type = typename tuple_element<N-1, tuple<Ts...>>::type;
	using tuple_type = typename tuple_element<N-1, tuple<Ts...>>::tuple_type;
};


template<std::size_t N, typename TP>
typename tuple_element<N, TP>::type&
get(TP& t)
{
	return static_cast<typename tuple_element<N, TP>::tuple_type&>(t).value;
}


int main()
{
	tuple<int, double, char> t(3, 3.4, 'A'); 
	
	get<0>(t) = 10;

	std::println("{}", get<0>(t)); // 10
	std::println("{}", get<1>(t)); // 3.4
	std::println("{}", get<2>(t)); // 'A'
}


