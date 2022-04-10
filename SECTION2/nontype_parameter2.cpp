#include <iostream>

template<int N, double D, auto A> 
struct Triple
{
	Triple()
	{
		std::cout << N << std::endl;
		std::cout << D << std::endl;
		std::cout << A << std::endl;
	}
};

int main()
{
	static int n = 0;

	Triple<10, 3.4, 10> t1;
	Triple<10, 3.4, 3.4> t2;
	Triple<10, 3.4, &n> t3;
}