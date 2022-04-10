#include <type_traits>

// 1. class template 을 먼저 만들고 
template<typename T> struct is_pointer     : std::false_type {}; 
template<typename T> struct is_pointer<T*> : std::true_type {};
template<typename T> struct is_pointer<T* const> : std::true_type {};
template<typename T> struct is_pointer<T* volatile> : std::true_type {};
template<typename T> struct is_pointer<T* const volatile> : std::true_type {};

// 2. class template 을 사용해서 variable template 구현
template<typename T>
constexpr bool is_pointer_v = is_pointer<T>::value;
//---------------------------------------------------------

template<typename T> constexpr bool is_pointer_v = false;
template<typename T> constexpr bool is_pointer_v<T*> = true;
template<typename T> constexpr bool is_pointer_v<T* const > = true;
template<typename T> constexpr bool is_pointer_v<T* volatile > = true;
template<typename T> constexpr bool is_pointer_v<T* const volatile > = true;

template<typename T> 
struct is_pointer : std::integral_constant<bool, is_pointer_v<T>>;

