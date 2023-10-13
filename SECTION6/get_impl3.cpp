#include "tuple.h"
#include <print>

template<std::size_t N, typename TP>
struct tuple_element;

// N == 0
template<typename T, typename ... Ts>
struct tuple_element<0, tuple<T, Ts...>>
{
	using type = T;
};


// N != 0
template<std::size_t N, typename T, typename ... Ts>
struct tuple_element<N, tuple<T, Ts...>>
{
	using type = typename tuple_element<N-1, tuple<Ts...>>::type;
};




template<typename TP>
void test(TP& tp)
{


	typename tuple_element<2, TP>::type n;  

	std::println("{}", typeid(n).name() );	// char
}

int main()
{
	tuple<int, double, char> t(3, 3.4, 'A'); 
	test(t);
}
