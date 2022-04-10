#include <iostream>

template<typename T, T N>
struct integral_constant 
{
    static constexpr T value = N;

    using value_type = T;
    using type = integral_constant; 
    
	constexpr operator value_type() const noexcept   { return value; }
    constexpr value_type operator()() const noexcept { return value; } 
};

int main()
{
	integral_constant<int, 34> t1;

	int n1 = t1;   // t1.operator int()   34
	int n2 = t1(); // t1.operator()()     34
	std::cout << n1 << ", " << n2 <<std::endl;
}