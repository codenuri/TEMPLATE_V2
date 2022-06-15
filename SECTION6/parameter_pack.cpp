#include <iostream>

template<typename ... Ts>
void fn(const Ts& ... args )
{
	std::cout << sizeof...(Ts) << std::endl;
	std::cout << sizeof...(args) << std::endl;
//	std::cout << sizeof... args << std::endl;
}

int main()
{
	fn(1, 3.4, 'A'); // fn(int, double, char)

	fn(); // fn()

}