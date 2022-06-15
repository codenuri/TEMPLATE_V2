template<typename ... Ts> struct Outer
{	
	// < int value, double value>
	template<Ts ... value> // 6 
	struct Inner {};
};

Outer<int, double>::Inner<3, 3.4> in;



class A{};
class B{};

template<typename... Ts>
class X : public Ts... // 7  X : public A, public B
{
public:
    X(const Ts&... args) : Ts(args)... {}
					//   : A(e1), B(e2) {}
};

int main()
{
	A a; 
	B b;
	X<A, B> x( a, b );
}

