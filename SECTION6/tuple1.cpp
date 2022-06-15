#include <iostream>

template<typename ... Ts>
struct tuple
{
	static constexpr int N = 0;
};

int main()
{
	tuple<> t0;

	tuple<char> t1;
	
	tuple<double, char> t2;
	
	tuple<int, double, char> t3;
}
