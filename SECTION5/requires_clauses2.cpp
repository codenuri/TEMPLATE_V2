#include <print>

struct Point 
{ 
	int x, y;
};

template<typename T>
concept addable = requires(T& a, T& b)
{
	a + b;
};

template<typename T> requires addable<T>
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