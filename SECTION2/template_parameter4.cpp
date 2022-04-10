#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <deque>

template<typename T> class List
{
	T temp = 0;
public:
	void push_back(const T& a) {}
	void pop_back() {}
	T&   back() { return temp; };
};

template<typename T,  
		template<typename> class C = std::deque> 
class stack
{
	C<T> c;
public:
	void push(const T& value) 	{ c.push_back(value); }
	void pop()            		{ c.pop_back(); }
	T&   top()            		{ return c.back(); }
};

int main()
{
	stack<int, List > s1;
	s1.push(10);
}

