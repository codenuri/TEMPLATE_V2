#include <tuple>
#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v{1,2,3};

	std::tuple<int, double, char> t(3, 3.4, 'A');

	std::get<1>(t) = 9.9;

	std::cout << std::get<0>(t) << std::endl; // 3
	std::cout << std::get<1>(t) << std::endl; // 9.9
}
