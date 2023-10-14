template<typename T>
class Point
{
	T x, y;
public:
	Point(const T& a, const T& b) : x(a), y(b) {}

//	Point(const Point& p) {}
//	Point(const Point<T>& p) {}
//	Point(const Point<int>& p) {}

	template<typename U>
	Point(const Point<U>& p) : x(p.x), y(p.y) {}

	template<typename> friend class Point;
};

int main()
{
	Point<int> p1(1, 2);  // ok
	Point<int> p2 = p1;   // ok

	Point<double> p3 = p1;// ?? 

}