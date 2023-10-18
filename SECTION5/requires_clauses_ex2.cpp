#include <string>
#include <type_traits>

class Person
{
	std::string name;
public:
	template<typename T>
		requires std::convertible_to<T, std::string>
	void set_name(T&& n)
	{
		name = std::forward<T>(n);
	}
};

int main()
{
	Person p;
	p.set_name(10);
//	p.set_name("AAA");

//	std::string s1 = 10; // error
//	std::string s2;
//	s2 = 10;		// ok
}

