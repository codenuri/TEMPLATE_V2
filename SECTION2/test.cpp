#include <vector>

template<typename A,typename B> class list{};

template<typename T, 
		 template<typename, typename> class C = std::vector>
class Stack
{
	C<T, std::allocator<T> > c;
};
int main()
{
//	Stack<int, std::vector > s;
	Stack<int> s;
	Stack<int, list> s2;
}