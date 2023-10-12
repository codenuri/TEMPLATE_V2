#include <print>

void print() {}

template<typename T, typename ... Ts>
void print(T value, Ts ... args)
{
	std::print("{} ", value);

	print(args...);
}

int main()
{
	print(1, 2, 3, 4, 5);
}