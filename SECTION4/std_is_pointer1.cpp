#include <iostream>
#include <type_traits>

/*
namespace mystd
{
	template<typename T> struct is_pointer     : std::false_type {}; 
	template<typename T> struct is_pointer<T*> : std::true_type {};
	template<typename T> struct is_pointer<T* const> : std::true_type {};
	template<typename T> struct is_pointer<T* volatile> : std::true_type {};
	template<typename T> struct is_pointer<T* const volatile> : std::true_type {};
}
*/
namespace mystd
{
	namespace detail
	{
		template<typename T> struct is_pointer     : std::false_type {}; 
		template<typename T> struct is_pointer<T*> : std::true_type {};
	}
	template<typename T>
	using is_pointer = detail::is_pointer< std::remove_cv_t<T> >;
}



int main()
{
//	namespace X = std;
	namespace X = mystd;

	std::cout << X::is_pointer<int>::value 			<< std::endl;
	std::cout << X::is_pointer<int*>::value 		<< std::endl;
	std::cout << X::is_pointer<int* const>::value 	<< std::endl;
	std::cout << X::is_pointer<int* volatile>::value << std::endl;
	std::cout << X::is_pointer<int* const volatile>::value << std::endl;
}



