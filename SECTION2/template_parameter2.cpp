#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <deque>

template<typename T, typename C = std::deque<T> > 
class stack
{
	C c;
public:
	void push(const T& value) 	{ c.push_back(value); }
	void pop()            		{ c.pop_back(); }
	T&   top()            		{ return c.back(); }
};
int main()
{
	std::stack<int, std::list<int> > s1;
	stack<int, std::vector<int> > s2;
	stack<int> s3;
	s1.push(10);

}

