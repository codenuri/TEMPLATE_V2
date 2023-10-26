#include <print>
#include <vector>
#include <iterator>

template<typename T>
concept container = requires( T& c )
{
//	std::begin(c);
//	std::end(c);

	{std::begin(c)} -> std::input_or_output_iterator;
	{std::end(c)}   -> std::input_or_output_iterator;
};

struct MyType
{
	void begin() {}
	void end()   {}
};

int main()
{
	using T1 = std::vector<int>;
	using T2 = MyType;
	
	std::println("{}", container<T1>);
	std::println("{}", container<T2>);
}
