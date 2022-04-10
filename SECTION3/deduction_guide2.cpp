#include <vector>

template<typename T> class List 
{
public:
	List() = default;
	List(std::initializer_list<T> e) {}

	template<typename C>
	List(const C& c) {} 

	template<typename IT>
	List(IT first, IT last) {} 	
};

template<typename C>
List(const C&) -> List< typename C::value_type >;

template<typename IT>
List(IT, IT)-> List<typename IT::value_type>;

int main()
{
	std::vector<int> v = {1,2,3,4};

	List<int> s1;  	// ok
//	List s2;		// error
	List s3 = {1,2,3,4};
	List s4(v);
	List s5(v.begin(), v.end());

	std::vector v1 = {1,2,3,4};
}