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

using true_type  = integral_constant<bool, true>;
using false_type = integral_constant<bool, false>;


template<typename T> struct is_pointer     : false_type{}; // value = false
template<typename T> struct is_pointer<T*> : true_type{};


void fn( true_type)  { std::cout << "true" << std::endl; }
void fn( false_type) { std::cout << "false" << std::endl; }

int main()
{
	fn( is_pointer<int>() );
	fn( is_pointer<int*>() );
}
