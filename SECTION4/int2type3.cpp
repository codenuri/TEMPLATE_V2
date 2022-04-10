template<int N> 
struct int2type
{
	enum { value = N };
};

int main()
{
	fn(0);
	fn(1);

	int2type<0> t0;
	int2type<1> t1;

	fn(t0);
	fn(t1);
}