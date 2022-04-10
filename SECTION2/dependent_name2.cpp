template<typename T> struct Object
{
	using type = int;

	template<typename U> 
	void mf() {	}
};

template<typename T>
void foo()
{
//	Object<int>::type t1; 
	typename Object<T>::type t1; 

//	Object<int> obj1;
	Object<T> obj1;
	obj1.template mf<int>();
}

int main()
{
	foo<int>();
}