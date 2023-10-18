#include <print>
#include <vector>

template<typename T>
concept container = requires(T& c)
{
//	c.begin();
//	c.end();
	std::begin(c);
	std::end(c);
};

int main()
{
	using T1 = std::vector<int>;
	using T2 = int[3];

	std::println("{}", container<T1>);
	std::println("{}", container<T2>);
}
