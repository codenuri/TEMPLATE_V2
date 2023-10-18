#include <print>
#include <functional>

template<typename T>
concept C1 = requires
{
//	typename T::value_type;
	typename std::less<T>;
};

class AAA{};

/*
template<>
struct std::less<AAA>
{
};
*/
int main()
{
	std::println("{}", C1<int>);
	std::println("{}", C1<double>);
	std::println("{}", C1<AAA>);
}