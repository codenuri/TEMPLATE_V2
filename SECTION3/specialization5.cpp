template<typename T, int N>
struct Object;

template<typename T>
struct Object<T, 1>
{	
};

template<typename T>
struct Object<T, 2>
{	
};

int main()
{
	Object<int, 1> obj1;
	Object<int, 2> obj2;
	Object<int, 3> obj3; // error
}