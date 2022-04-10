template<typename T> 
void fn(T arg) // T arg = 함수인자(c)
{

}

int main()
{
	const int c = 10;
	fn(c);

	auto   a1 = c; // auto = int
	auto&  a2 = c; // auto = const int
				   // a2   = const int&

	int n = 10;
	auto&& a3 = 3; // auto = int,
				   // a3 = int&&
	auto&& a4 = n; // auto = int&
				   // a4 = int&
}