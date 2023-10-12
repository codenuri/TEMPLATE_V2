template<typename ... Ts>
auto sum(Ts ... args)
{
	auto s1 = ( args + ... );
			// (1+(2+(3+(4+5))))

	auto s2 = ( ... + args );	
			// ((((1+2)+3)+4)+5)

	auto s3 = ( args + ... + 0 );	
			// (1+(2+(3+(4+(5+0)))))			

	auto s4 = ( 0    + ... + args );
			// ((((0+1)+2)+3)+4)+5))

	return s1;
}

int main()
{
	auto ret = sum(1, 2, 3, 4, 5);
}
