#include <print>
#include <vector>

template<typename T, typename ... Ts>
void push_vec(std::vector<T>& v, Ts&& ... args)
{
 	(v.push_back(std::forward<Ts>(args)), ...);
}

int main()
{
	std::vector<int> v;

	push_vec(v, 1,2,3,4,5);

	for( auto e : v)
		std::print("{}, ", e);
}
