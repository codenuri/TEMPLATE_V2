class Object
{
	int value;
public:
	void mf()
	{
		*value = 10; // error
	}
};

int main()
{
	Object obj;
}
