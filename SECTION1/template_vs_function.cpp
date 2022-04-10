#include <iostream>

template<typename T> 
T square(T a)
{
	return a * a;
}

int main()
{
//	printf("%p\n", &square );
	printf("%p\n", &square<int> );
	printf("%p\n", &square<double> );
}

