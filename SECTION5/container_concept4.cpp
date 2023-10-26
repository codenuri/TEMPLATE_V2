#include <print>
#include <algorithm>
#include <ranges>

template<typename T>
concept container = requires( T& c )
{
	std::ranges::begin(c);
	std::ranges::end(c);
};

int main()
{
	std::println("{}", container<int[3]>); 
	std::println("{}", std::ranges::range<int[3]>); 
}
