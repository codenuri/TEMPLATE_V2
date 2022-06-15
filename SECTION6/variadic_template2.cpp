template<typename T1, typename T2>
void f1(T1 arg1, T2 arg2)
{
}

template<typename ... Ts>
//void f2(Ts ... args)
void f2(const Ts& ... args)
{
}

void f3( ... ) {}

int main()
{
//	f1<int>(3); // error
	f1<int, double>(3, 3.4); // ok 	
	f1(3, 3.4); // ok
	

	f2<int>(3);
	f2<int, double, char>(3, 3.4, 'A');		

	f2(3);
	f2(3, 3.4, 'A'); // Ts   : int, double, char
					 // args : 3, 3.4, 'A'

	f3(3);
	f3(3, 3.4, 'A');					 	
}

