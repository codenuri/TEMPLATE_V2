#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <deque>

template<typename T,  
		template<typename, typename> class C = std::deque,
		typename Ax = std::allocator<T> > 
class stack
{
	C<T, Ax > c;
public:
	void push(const T& value) 	{ c.push_back(value); }
	void pop()            		{ c.pop_back(); }
	T&   top()            		{ return c.back(); }
};

int main()
{
//	stack<int, std::vector > s1;
//	stack<int, std::list > s1;
	stack<int> s1;
	s1.push(10);
}

