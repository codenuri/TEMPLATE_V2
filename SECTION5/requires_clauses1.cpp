#include <print>

struct Point 
{ 
	int x, y;
};

template<typename T>
T add(const T& a, const T& b)
{
	return a + b;
}

int main()
{
	Point pt1{1, 1};
	Point pt2{1, 1};
	auto pt3 = add(pt1, pt2);
}