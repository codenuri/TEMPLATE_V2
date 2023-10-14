#include <vector>
#include <queue>

template<typename T, typename C> class queue
{
	C c;
public:
	void push(const T& a) {	c.push_back(a);	}
	void pop() 			  {	c.pop_front();	}
};

int main()
{
//	queue<int, std::vector<int>> q;
	std::queue<int, std::vector<int>> q;
	q.push(10);
	q.pop();
}