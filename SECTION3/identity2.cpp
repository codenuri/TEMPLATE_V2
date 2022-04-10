#include <iostream>

template<typename T> void f1(typename std::type_identity<T>::type arg) {}

template<typename T> void f2(T arg1, typename std::type_identity<T>::type arg2) {}

template<typename T> void f3(T arg1, T arg2) {}


int main()
{
//	f1(3);		// error
	f1<int>(3); // ok

	f2(3, 4);	// ok

	f3(1, 2);   // ok

//	f3(1, 2.2); // error
	f2(1, 2.2); // ok.. f2(int, int )
}