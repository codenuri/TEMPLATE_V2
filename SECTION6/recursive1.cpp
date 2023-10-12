#include <print>

template<typename T, typename ... Ts>
void print(T value, Ts ... args)
{
	std::print("{} ", value);

	if constexpr ( sizeof...(args) > 0 )
		print(args...); // print(2, 3)
						// print(3)
				
}

int main()
{
	print(1, 2, 3); // value : 1
					// args  : 2, 3
}
