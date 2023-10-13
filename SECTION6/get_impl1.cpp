#include "tuple.h"
#include <print>

template<std::size_t N, typename TP>
struct tuple_element 
{
	using type = ?; // TP의 N번째 타입
};


template<typename TP>
void test(TP& tp)
{
	// TP : tuple<int, double, char>

	typename tuple_element<0, TP>::type n;  

	std::println("{}", typeid(n).name() );	// int
}

int main()
{
	tuple<int, double, char> t(3, 3.4, 'A'); 
	test(t);
}
