#include <print>

struct Base 
{
	double value = 3.4;
};

struct Derived : Base 
{
	int value = 10;
};

int main()
{
	Derived d;

	std::println("{}", d.value ); // 10
	std::println("{}", 
			static_cast<Base&>(d).value ); // 3.4
}