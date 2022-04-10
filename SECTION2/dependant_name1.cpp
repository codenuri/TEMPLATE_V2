struct Object
{
	using type = int;

	static constexpr int value = 10;

	template<typename T> struct rebind
	{
	};
};

template<typename T> 
void foo(T obj)
{
	// Object::value * 10;    // 10 * 10
	// Object::type  * p1;	   // int* p1
	// Object::rebind<int> a; // 

	T::value * 10;    // 10 * 10
	typename T::type  * p1;	   // int* p1
	typename T::template rebind<int> a; // 	
}

int main()
{
	Object obj;
	foo(obj);
}