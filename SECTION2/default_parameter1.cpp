#include <iostream>

template<typename T1 = char, typename T2 = float>
struct Object
{
	Object()
	{
		std::cout << typeid(T1).name() << std::endl;
		std::cout << typeid(T2).name() << std::endl;
	}
};

int main()
{
	Object<int, double> obj1;
	Object<int> obj2;
	Object<> obj3;
	Object obj4; // C++17 표기법
}