template<typename T> class Object
{
	T value;
public:
	void mf()
	{
		*value = 10; // error
	}
};

int main()
{
	Object<int> obj;

	obj.mf();
}
