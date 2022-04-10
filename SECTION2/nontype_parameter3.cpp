#include <iostream>
#include <vector>
#include <array>

template<typename T, std::size_t N> 
struct array
{
	T arr[N];

	constexpr std::size_t size() const { return N;}

	T& operator[](int idx) {return arr[idx];}
	const T& operator[](int idx) const {return arr[idx];}

	using value_type = T;
	using iterator = T*;

	auto begin() { return arr;}
	auto end() { return arr+N;}
};

int main()
{
	int x[5] = {1,2,3,4,5};

	std::vector<int>   v = {1,2,3,4,5};
	
	array<int, 5> a = {1,2,3,4,5};

	std::cout << a.size() << std::endl;

	a[0] = 10;

	for( auto e : a)
		std::cout << e << std::endl;
}