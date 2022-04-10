template<typename T, typename Ax = std::allocator<T>> 
class list
{
public:

	using value_type = T; // 핵심

	// ......
};

int main()
{
	std::list<int> s = {1,2,3};

	std::list<int>::value_type n = s.front();
	//				       int n = s.front()
}
