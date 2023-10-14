template<typename T> void fn(T value, int)
{
	*value = 10;
}

template<typename T> void fn(T value, double)
{
}

int main()
{
//	fn(1, 3);
	fn(1, 3.4);
}