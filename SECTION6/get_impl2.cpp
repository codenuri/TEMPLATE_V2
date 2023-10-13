#include "tuple.h"
#include <print>

template<std::size_t N, typename TP>
struct tuple_element;

/*
template<std::size_t N, typename ... Ts>
struct tuple_element<N, tuple<Ts...>>
{
	// 현재 코드는 N 번째 타입을 구할수 없다.
	// 잘못된 부분 특수화..
	using type = ?;
};

template<typename ... Ts>
struct tuple_element<0, tuple<Ts...>>
{
	// 현재 코드는 0 번째 타입을 구할수 없다.
	// 잘못된 부분 특수화..
	using type = ?;
};
*/

template<typename T, typename ... Ts>
struct tuple_element<0, tuple<T, Ts...>>
{
	using type = T;
};


template<typename TP>
void test(TP& tp)
{


	typename tuple_element<0, TP>::type n;  

	std::println("{}", typeid(n).name() );	// int
}

int main()
{
	tuple<int, double, char> t(3, 3.4, 'A'); 
	test(t);
}
