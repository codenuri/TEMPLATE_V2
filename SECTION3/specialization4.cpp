#include <iostream>

template<typename T1, typename T2 = T1 > 
struct Object
{
	static void print() 
	{
		 std::cout << typeid(T1).name() << ", " 
		           << typeid(T2).name() << std::endl;
	}
};

template<typename T1, typename T2> 
struct Object<T1*, T2>
{
	static void print() 
	{
		 std::cout << typeid(T1).name() << ", " 
		           << typeid(T2).name() << std::endl;
	}
};

int main()
{
	Object<int*>::print();	// int*, short
							// int, short
							// int, int*
}