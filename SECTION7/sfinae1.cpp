#include <print>

//template<typename T>
//void foo( T )    { std::println(" T ");}
void foo( int )  { std::println("int");}
void foo( ... )  { std::println("...");}
//void foo(float)  { std::println("float");}
void foo(double) { std::println("double");}

int main()
{
	foo( 3.4f );
}