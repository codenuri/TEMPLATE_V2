#include <iostream>

void foo() { std::cout << "foo" << std::endl; }


template<typename T> class scope_exit  
{
	T func;
public:
	scope_exit(const T& f) : func(f) {}

	~scope_exit() { func();	}
};

int main()
{
//	scope_exit ce1(&foo);
//	scope_exit<void(*)()> ce1(&foo);
	scope_exit<? > ce1([](){} );

	std::cout << "----" << std::endl;
}