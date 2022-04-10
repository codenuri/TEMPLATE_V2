#include <type_traits>
#include <iostream>

int main()
{
	std::integral_constant<double, 3.4> t;

//	std::cout << typeid(t.value_type).name() << std::endl;

	std::cout << t() << std::endl;
}