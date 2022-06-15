#include <iostream>

template<typename T> void print(const T& value)
{
	std::cout << value << std::endl;
}

template<typename ... Ts> void fn(Ts ... args )
{
	int a[0];
//	print( args... ); // print( 3, 3.4, 'A') - error
	
//	print( args )...; // print(3), print(3.4), print('A')- error

	int dummy[] = {0, (print(args), 0)... }; // { (print(3),0), (print(3.4),0), (print('A'),0) }
}

int main()
{
//	fn(3, 3.4, 'A');
	fn();
}