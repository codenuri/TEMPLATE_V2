#include <type_traits>
#include <concepts>

template<typename T> requires true 					// bool literal
void f1(T a) {}


template<typename T> requires std::is_pointer_v<T>	// type traits
void f2(T a) 
{	
}

template<typename T> requires std::convertible_to<T, bool> // standard concept
void f3(T a) 
{	
}

template<typename T> requires (sizeof(T) > 4)
void f4(T a) 
{	
}

template<typename T> requires requires( T a, T b) 
							  { 
									{a + b} -> std::same_as<T>;
							  }
void f5(T a) 
{	
}


int main()
{

}