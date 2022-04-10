#include <iostream>

//constexpr double pi = 3.141592;

template<typename T>
constexpr T pi = static_cast<T>(3.141592);

int main()
{
//	double area1 = 3 * 3 * pi;

	double area1 = 3 * 3 * pi<double>;
					//static_cast<double>(3.141592);

	double area2 = 3 * 3 * pi<float>;
}