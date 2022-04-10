#include <iostream>
#include <vector>
#include <list>

// void print_first_element(const std::vector<int>& v)
// {
// 	int n = v.front();
// 	std::cout << n << std::endl;
// }

// template<typename T>
// void print_first_element(const std::vector<T>& v)
// {
// 	T n = v.front();

// 	std::cout << n << std::endl;
// }

template<typename T>
void print_first_element(const T& v)
{
	// T : list<double>
    // T::value_type =>  list<double>::value_type => double

//	typename T::value_type n = v.front();

	auto n = v.front();

	std::cout << n << std::endl;
}

int main()
{
//	std::vector<int> c = {1,2,3,4,5};
//	std::vector<double> c = {1,2,3,4,5};
	std::list<double> c = {1,2,3,4,5};

	print_first_element(c);
}