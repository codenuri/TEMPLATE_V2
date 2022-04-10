#include <iostream>

constexpr std::size_t factorial(std::size_t n)
{
	return n == 1 ? 1 : n * factorial(n-1);
}

int main()
{
	constexpr std::size_t ret = factorial(5);

	std::cout << ret << std::endl;
}