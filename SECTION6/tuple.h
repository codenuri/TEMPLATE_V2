// tuple.h
#include <utility>

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

	template<typename A, typename ... Types>
	tuple(A&& v, Types&& ... args ) 
		: value(std::forward<A>(v)), base(std::forward<Types>(args)...) {}

	static constexpr int N = base::N + 1;
};

