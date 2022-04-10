#include <iostream>
#include <type_traits>

auto add(const auto& a, const auto& b)  
{
	return a + b;
}

int main()
{
	std::cout << add(3, 4.3) << std::endl;
}