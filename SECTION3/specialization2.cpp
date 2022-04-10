#include <iostream>

template<typename T, typename U> struct Object
{
	static void fn() { std::cout << "T, U" << std::endl; }
};

// specialization(특수화)
template<> struct Object<int, short>
{
	static void fn() { std::cout << "int, short" << std::endl; }
};

template<typename T, typename U> struct Object<T*, U>
{
	static void fn() { std::cout << "T*, U" << std::endl; }
};

template<typename T> struct Object<T, T>
{
	static void fn() { std::cout << "T, T" << std::endl; }
};

template<typename U> struct Object<int, U>
{
	static void fn() { std::cout << "int, U" << std::endl; }
};

template<typename A, typename B, typename C> struct Object<A, Object<B, C>>
{
	static void fn() { std::cout << "A, Object<B, C>" << std::endl; }
};

int main()
{
	Object<char, double>::fn();	  // T, U
	Object<int,  short>::fn();	  // int, short
	Object<short*, double>::fn(); // T*, U
	Object<float,  float>::fn();  // T, T
	Object<int,    float>::fn();  // int, U

	Object<long, Object<char, short>>::fn(); // A, Object<B, C>
}