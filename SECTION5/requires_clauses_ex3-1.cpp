#include <concepts>

template<typename T>
class Object
{
public:
	void f1() {	}
	void f2() requires std::integral<T> { }
};

int main()
{
	Object<int>    o1;
	Object<double> o2;

	o1.f1();
	o1.f2();
	o2.f1();
//	o2.f2();	// error
}