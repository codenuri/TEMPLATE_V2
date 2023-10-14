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

struct Object
{
	instance_member m1;
	static static_member m2; 
};
static_member Object::m2;

int main()
{
	std::cout << "--------" << std::endl;
	Object obj;
	std::cout << "--------" << std::endl;
}