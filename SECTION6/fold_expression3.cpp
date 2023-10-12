#include <print>
#include <iostream>

template<typename ... Ts>
void show(Ts ... args)
{
//	( std::cout << ... << args );

	( std::print("{} ", args) , ...  );
}

int main()
{
	show(1, 2, 3);
}
