#include "tuple.h"
#include <print>

template<std::size_t N, typename TP>
struct tuple_element;

// N == 0
template<typename T, typename ... Ts>
struct tuple_element<0, tuple<T, Ts...>>
{
	using type = T;
	using tuple_type = tuple<T, Ts...>;
};

// N != 0
template<std::size_t N, typename T, typename ... Ts>
struct tuple_element<N, tuple<T, Ts...>>
{
	using type = typename tuple_element<N-1, tuple<Ts...>>::type;
	using tuple_type = typename tuple_element<N-1, tuple<Ts...>>::tuple_type;

};




template<typename TP>
void test(TP& tp)
{
//	typename tuple_element<2, TP>::type n;  
	typename tuple_element<2, TP>::tuple_type n;  

	std::println("{}", typeid(n).name() );	
					// tuple<char>
}

int main()
{
	tuple<int, double, char> t(3, 3.4, 'A'); 
	test(t);
}
