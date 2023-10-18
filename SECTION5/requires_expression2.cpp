#include <print>

template<typename T> 
concept C1 = requires
{
	T{};
};
template<typename T> 
concept C2 = requires(T a)
{
	*a;
};
class AAA 
{
private: 
	AAA() {}
};
int main()
{
	std::println("{}, {}", C1<int>, C1<AAA>);	// t, f
	std::println("{}, {}", C2<int>, C2<int*>);	// f, t	
}