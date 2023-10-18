#include <concepts>

class Animal {};
class Dog : public Animal {};

template<typename T>
class smart_pointer
{
	T* obj;
public:
	explicit smart_pointer(T* p = nullptr) : obj{p} {}

	template<typename U> 
		requires std::convertible_to<U*, T*>
	smart_pointer(const smart_pointer<U>& other) 
		: obj{other.obj} {}

	template<typename> friend class smart_pointer;
};

int main()
{
	smart_pointer<Dog> sp1{ new Dog };
	smart_pointer<Animal> sp2 = sp1;

//	smart_pointer<int> sp3 = sp1;
}

