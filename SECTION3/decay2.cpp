#include <iostream>
#include "fname.h"

template<typename T>
void f1(T s1, T s2) // f1(const char*, const char*)
{
	std::cout << _FNAME_ <<  std::endl;
}

template<typename T>
void f2(const T& s1, const T& s2)
{
	std::cout << _FNAME_ << std::endl;
}

int main()
{
	f1("banana", "apple"); // f1(char[7], char[6])
//	f2("banana", "apple"); // f2(char[7], char[6])
	f2("banana", "applea"); // f2(char[7], char[7])
}