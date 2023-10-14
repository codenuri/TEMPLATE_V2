template<typename T1, typename T2>
struct Object
{
	T1 first;
	T2 second;
	static int cnt;

	Object(const T1& a, const T2& b);
};

//int Object::cnt = 0; // error

template<typename T1, typename T2>
int Object<T1, T2>::cnt = 0; // 

template<typename T1, typename T2>
Object<T1, T2>::Object(const T1& a, const T2& b) : first(a), second(b) 
{
}

int main()
{
	Object<int, double> obj1(1, 3.4);
}