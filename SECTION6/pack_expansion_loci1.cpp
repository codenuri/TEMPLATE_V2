#include <iostream>
#include <algorithm>

template<typename ... Ts> void fn(Ts ... args )
{
	// Ts   : int, int
	// args : 1, 2

	int arr[] = { args... };		// 1

	int ret = std::min( args... ); 	// 2
	
	std::pair<Ts...> p1( args... );	// 3, 4

	auto f1 = [args...] { return std::min(args...);}; // 5
};

int main()
{
	fn(1, 2); 
}





