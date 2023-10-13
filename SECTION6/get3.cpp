#include "tuple.h"
#include <print>

int main()
{
//	tuple<>
//	tuple<	    	   char>	// 'A'
//	tuple<	   double, char>	// 3.4
	tuple<int, double, char> t(3, 3.4, 'A'); // 3

	std::println("{}", t.value); // 3
	std::println("{}", 
		static_cast<tuple<char>&>(t).value); // 'A'

	auto n = get<0>(t);

	get<0>(t) = 10;
	
}
