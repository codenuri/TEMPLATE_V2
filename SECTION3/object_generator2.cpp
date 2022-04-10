#include <iostream>

void foo() { std::cout << "foo" << std::endl; }

template<typename T> class scope_exit  
{
	T func;
public:
	scope_exit(const T& f) : func(f) {}

	~scope_exit() { func();	}
};

template<typename T> 
scope_exit<T> make_scope_exit(const T& f)
{
	return scope_exit<T>(f);
}

int main()
{
//	scope_exit<void(*)()> ce1(&foo);

//	auto ce1 = make_scope_exit<void(*)()>(&foo); 
	auto ce1 = make_scope_exit(&foo); 
	
	std::cout << "----" << std::endl;
}