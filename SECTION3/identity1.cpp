#include <iostream>

template<typename T>
struct type_identity
{
	using type = T;
};

template<typename T> void f1(T arg) {}
template<typename T> void f2(typename std::type_identity<T>::type arg) {}

int main()
{
	f1<int>(3);
	f1(3);

	f2<int>(3); // ok
//	f2(3);		// error

	type_identity<int>::type n; // int n
}