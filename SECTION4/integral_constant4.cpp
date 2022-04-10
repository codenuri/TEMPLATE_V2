// C++ 표준(<type_traits>)에 있는 내용

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

template<typename T> struct is_pointer     : false_type {}; 
template<typename T> struct is_pointer<T*> : true_type {};

