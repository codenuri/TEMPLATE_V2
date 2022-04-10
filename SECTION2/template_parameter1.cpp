template<typename T> class list 
{
};

template<typename T, int N, template<typename> class C> 
class Object
{
};

int main()
{
	Object<int, 10, list > obj1;
}