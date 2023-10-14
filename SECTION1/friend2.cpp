#include <iostream>

template<typename T>
class Point
{
	T x, y;
public:
	Point(T a, T b) : x(a), y(b) {}

	//												const Point<T>& pt);
	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const Point<T>& pt)
{
	std::cout << pt.x << ", " << pt.y << std::endl;
	return os;
}

int main()
{
	Point<int> p(1,2);

	std::cout << p << std::endl;
}