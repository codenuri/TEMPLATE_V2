#include <iostream>

void foo(int a, int b, int c)
{
	std::cout << a << ", " << b << ", " << c << std::endl;
}

template<typename ... Ts>
void fn(Ts ... args )
{
	// args : 1, 2, -3

//	foo( args ); // error

	foo ( args... ); // foo( 1, 2, -3);

	foo ( (++args)... );  // foo( ++e1, ++e2, ++e3)
						  // foo( 2, 3, -2)

//	foo( abs(args...) ); // foo(abs(2, 3, -2)) 
	foo( abs(args)... ); // foo(abs(2), abs(3), abs(-2))
}

int main()
{
	fn(1, 2, -3);
}