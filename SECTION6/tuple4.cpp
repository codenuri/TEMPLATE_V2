#include <iostream>

template<typename ... Ts> struct tuple
{
	static constexpr int N = 0;
};

template<typename T, typename ... Ts> 
struct tuple<T, Ts...> : public tuple<Ts...>
{	
	using base = tuple<Ts...>;

	T value;
	tuple() = default;

//	tuple(const T& v, const Ts& ... args ) : value(v), base(args...) {}
	  // (const int& v, const double&, const char&) ....

//	template<typename ... Types>
//	tuple(const T& v, const Types& ... args ) : value(v), base(args...) {}


	template<typename A, typename ... Types>
	tuple(A&& v, Types&& ... args ) 
		: value(std::forward<A>(v)), base(std::forward<Types>(args)...) {}


	static constexpr int N = base::N + 1;
};

int main()
{
	tuple<int, double, char> t1(3, 3.4, 'A');
	tuple<int, double, char> t2(3, 3.4);
}
