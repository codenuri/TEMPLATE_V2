#include <string>
#include <type_traits>

template<typename T>
class Point
{
	T x, y;
public:
	Point(const T& a, const T& b) : x(a), y(b) {}

	template<typename U> 
	requires std::is_convertible_v<U, T>
	Point(const Point<U>& p) : x(p.x), y(p.y) {}

	template<typename> friend class Point;
};

int main()
{
	Point<std::string> p1("1", "2");  

	Point<int> p2 = p1;
}

