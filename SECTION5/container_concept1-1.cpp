#include <print>
#include <type_traits>

void f1(int c[3])
{
	std::println("{}", typeid(c).name() );
}

void f2(int(&c)[3])
{
	std::println("{}", typeid(c).name() );
}

int main()
{
	int x[3] = {1,2,3};

	f1(x);
	f2(x);
}
