
template<typename T> 
T square(T a)
{
	return a * a;
}

int main()
{
	square<int>(3);	
	square<double>(3.3);

	square(3);	
	square(3.3);	
}

