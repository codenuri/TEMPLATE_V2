#include <iostream>

template<typename T> 
class Base
{
public:
	void fn()
	{
		// 여기서 파생 클래스 이름(Derived)을 사용할수 없을까 ?
		T obj; // Derived obj;

		std::cout << typeid(T).name() << std::endl;
	}
};

class Derived : public Base< Derived >
{

};

int main()
{
	Derived  d;
	d.fn();
}





