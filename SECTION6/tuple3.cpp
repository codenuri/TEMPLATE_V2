#include <iostream>

template<typename ... Ts> struct tuple
{
	static constexpr int N = 0;
};

template<typename T, typename ... Ts> 
struct tuple<T, Ts...> : public tuple<Ts...>
{						//      tuple<double, char>
	T value;
	tuple() = default;
	tuple(const T& v) : value(v) {}
	static constexpr int N = tuple<Ts...>::N + 1;
};

int main()
{
//	tuple<> t0;

//	tuple<char> t1('A');
	
//	tuple<double, char> t2(3.4);
	
	tuple<int, double, char> t3(3);
}
