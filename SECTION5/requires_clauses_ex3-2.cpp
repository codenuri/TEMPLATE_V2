#include <concepts>

template<typename T>
concept F2 = requires 
{
	typename T::i_want_f2;
};

template<typename T>
class Base
{
public:
	void f1() {	}
	void f2() requires F2<T> { }
};

class D1 : public Base<D1> 
{	
};

class D2 : public Base<D2>
{
public:
	using i_want_f2 = void;
};

int main()
{
	D1 d1;
	D2 d2;

	d1.f1();
//	d1.f2(); // error
	d2.f1();
	d2.f2();
}