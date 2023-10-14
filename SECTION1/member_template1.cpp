template<typename T>
class Object
{
public:
	void mf1(int n) {}
	void mf2(T   n) {}

	template<typename U> 
	void mf3(U n);
};

template<typename T> template<typename U> 
void Object<T>::mf3(U n)
{

}


int main()
{
	Object<int>    obj1;
	Object<double> obj2;

	obj1.mf1(3);
	obj2.mf1(3);

	obj1.mf2(3);
	obj2.mf2(3.4);

	obj1.mf3(3);
	obj1.mf3(3.4);
}