#include <print>
#include <vector>
#include <type_traits>
#include <iterator>

template<typename T>
concept container = requires(T c)
{
	c.begin();
	c.end();
};

template<typename T>
void foo(const T& arg)
{
//	bool b = std::is_pointer_v<T>;
//	bool b = container<T>;
	bool b = std::input_or_output_iterator<T>;

	std::println("{}", b);
}

int main()
{
	std::vector v{ 1,2,3 };
//	foo(v);
	foo(v.begin());

}




