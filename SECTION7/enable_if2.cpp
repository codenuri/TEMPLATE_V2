template<bool B, typename T = void>
struct enable_if 
{	
};
 
template<typename T>
struct enable_if<true, T> 
{ 
	using type = T; 
};

int main()
{	
	enable_if<true,  int>::type n1; // int n1
	enable_if<true		>::type n2; // void n2, error
	enable_if<false, int>::type n3; // type 없음.
	enable_if<false     >::type n4; // type 없음.
}