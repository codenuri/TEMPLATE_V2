template<typename ... Ts>
void f(Ts ... args)
{
}

template<typename ... Ts > class tuple
{
public:
	void mf() {}
};

int main()
{	
	f(3);
	f(3, 3.4);

	tuple<int> t1;
	tuple<int, double> t2; 
	
}

