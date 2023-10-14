#include <iostream>

struct static_member
{
	static_member()  { std::cout << "static_member()"  << std::endl;}
	~static_member() { std::cout << "~static_member()" << std::endl;}
};
struct instance_member
{
	instance_member()  { std::cout << "instance_member()" << std::endl;}
	~instance_member() { std::cout << "~instance_member()" << std::endl;}
};

template<typename T> 
struct Object
{
	instance_member m1;
	static static_member m2; 
};
template<typename T> static_member Object<T>::m2;

int main()
{
	std::cout << "--------" << std::endl;
	Object<int> obj;
//	obj.m2;
	std::cout << "--------" << std::endl;
}