#include <print>

template<typename T> 
concept C1 = sizeof(T) > 4;

template<typename T> 
concept C2 = requires 
{
	sizeof(T) > 4;
};

template<typename T>
concept C3 = requires 
{
	requires sizeof(T) > 4;
};

int main()
{
	std::println("{}", C1<int> ); // false
	std::println("{}", C2<int> ); // true
	std::println("{}", C3<int> ); // false

	class Object;
	std::println("{}", C2<Object> ); // false
}