#include <iostream>

template<typename>
inline constexpr int made_year = -1;

class AAA {};
template<>
inline constexpr int made_year<AAA> = 2020;

class BBB {};
template<>
inline constexpr int made_year<BBB> = 2022;

int main()
{
	std::cout << made_year<AAA> <<std::endl;
	std::cout << made_year<BBB> <<std::endl;
	std::cout << made_year<int> <<std::endl;
	
}



