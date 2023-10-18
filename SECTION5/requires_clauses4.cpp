#include <concepts>

template<typename T> requires std::integral<T>		
void f1(T a) 
{	
}

template<typename T> 		
void f2(T a) requires std::integral<T>
{	
}

int main()
{

}