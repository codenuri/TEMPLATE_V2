template<typename T> 
void fn(T value)
{
//	if ( false )
	if constexpr ( false )
		*value = 10;
}

int main()
{
	int n = 10;
	fn(n);
}
