#include <print>
#include <type_traits>

constexpr bool yes() { return true; }

template<typename T> 
concept C1 = true;
// concept C1 = 1;	// error

template<typename T> 
concept C2 = yes();

template<typename T> 
concept C3 = sizeof(T) > 4;

template<typename T> 
concept C4 = std::is_integral_v<T>;

template<typename T> 
concept C5 = C3<T> || C4<T>;

template<typename T> 
concept C6 = requires(T& c)
{
	c.begin();
};

int main()
{
	std::println("{}", C1<int> ); // true
	std::println("{}", C2<int> ); // true
	std::println("{}", C3<int> ); // false
	std::println("{}", C4<int> ); // true
	std::println("{}", C5<int> ); // true
	std::println("{}", C6<int> ); // false 
}