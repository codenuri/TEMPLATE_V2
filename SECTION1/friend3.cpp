#include <iostream>

template<typename T> 
void fn(T a)   { std::cout << "T" << std::endl; }

void fn(int n);// { std::cout << "int" << std::endl;}

int main()
{
	fn(3);
}