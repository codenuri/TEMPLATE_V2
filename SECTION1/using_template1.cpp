#include <unordered_set>

//typedef std::unordered_set<int> SET;
//typedef std::unordered_set<double> SETD;

// type alias
// using SET = std::unordered_set<int>;


template<typename T> 
using SET = std::unordered_set<T>;


int main()
{
//	std::unordered_set<int> s1;
//	std::unordered_set<double> s2;

	SET<int> s1;
	SET<double> s2;
}