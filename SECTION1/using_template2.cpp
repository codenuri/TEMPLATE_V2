#include <queue>
#include <functional>

template<typename T, typename Pred>
using pqueue = std::priority_queue<T, std::vector<T>, Pred>;

int main()
{
	std::priority_queue<int> pq1;

	std::priority_queue<int, std::vector<int>, std::less<int>> pq2;
	std::priority_queue<int, std::vector<int>, std::greater<int>> pq3;

	pqueue<int, std::greater<int>> pq4;
}

