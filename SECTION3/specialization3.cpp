#include <iostream>

template<typename T> struct remove_pointer
{
	static void print()
	{
		std::cout << typeid(T).name() << std::endl;
	}
};

template<typename T> struct remove_pointer<T*> // 포인터의 경우 부분 특수화
{
	static void print()
	{
		std::cout << typeid(T).name() << std::endl;
	}
};

int main()
{
	remove_pointer<int>::print();
	remove_pointer<int*>::print();
}