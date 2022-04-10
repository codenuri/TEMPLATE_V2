#include <iostream>
#include <type_traits>

// 1 ~ 32 bit를 관리하는 클래스

template<std::size_t N> struct Bit
{
//	unsigned int data;

	std::conditional< (N > 16), unsigned int,
								unsigned short>::type data;
};


int main()
{
	Bit<32> bit;

	std::cout << sizeof(bit) << std::endl;
}