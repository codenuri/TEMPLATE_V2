#include <print>
#include <vector>
#include <algorithm>

template<typename T>
concept container = requires( T& c )
{
	std::ranges::begin(c);
	std::ranges::end(c);
};

class MyType
{
public:
	void begin() {}
	void end()   {}
};

int main()
{
	using T1 = std::vector<int>;
	using T2 = MyType;
	
	std::println("{}", container<T1>); // true
	std::println("{}", container<T2>); // false
}
