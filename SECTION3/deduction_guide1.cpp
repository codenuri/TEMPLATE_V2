template<typename T> T square(T a) 
{
	 return a * a;
}

template<typename T, typename U> struct PAIR
{
	T first;
	U second;

	PAIR() = default;

	PAIR(const T& a, const U& b) : first(a), second(b) {}
};

// class template type deduction guide
PAIR()->PAIR<int, int>;

int main()
{
	square<int>(3);
	square(3);

	PAIR<int, double> p1(3, 3.4);
	PAIR p2(3, 3.4);

	PAIR p3;
}