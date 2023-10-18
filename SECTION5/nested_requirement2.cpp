#include <print>
#include <memory>
#include <concepts>

template<typename T> 
concept C1 = requires( T a )
{
	requires std::same_as<std::remove_reference_t<decltype(*a)>, 
						  std::remove_pointer_t<T>>;
};

template<typename T> 
concept C2 = requires( T a )
{
	std::same_as<std::remove_reference_t<decltype(*a)>, 
				 std::remove_pointer_t<T>>;
};

int main()
{
	std::println("{}", C1<int*> ); 	// true
	std::println("{}", C1<std::shared_ptr<int>> ); // false
	
	std::println("{}", C2<int*> ); 	// true
	std::println("{}", C2<std::shared_ptr<int>> ); 	// true
}