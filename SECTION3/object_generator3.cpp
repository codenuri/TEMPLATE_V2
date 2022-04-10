#include <iostream>
#include <tuple>

template<typename T> void fn(const T& a) {}

int main()
{
	fn( std::pair<int, double>(3, 3.4) );
	fn( std::make_pair<int, double>(3, 3.4) );
	fn( std::make_pair(3, 3.4) );

	fn( std::tuple<int, double, int, char>(3, 3.4, 4, 'A') );
	fn( std::make_tuple(3, 3.4, 4, 'A') );

//	fn( std::tuple(3, 3.4, 4, 'A') ); // C++17
}