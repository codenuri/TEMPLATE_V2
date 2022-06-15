#include <vector>
#include <iostream>

template<typename T> class view_interface
{
	const T& Cast() const { return static_cast<const T&>(*this);}
public:
	bool empty() const 
	{
		auto& Derived = Cast();
		return Derived.begin() == Derived.end();
	}
};

template<typename T>
class transparent_view : public view_interface<transparent_view<T>>
{
	T& range;
public:
	transparent_view(T& r) : range(r) {}
	auto begin() const { return range.begin();}
	auto end()   const { return range.end();}
};

int main()
{
	std::vector<int> v = {1};
	transparent_view tv(v);
	std::cout << tv.empty() << std::endl;
}