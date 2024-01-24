#include <type_traits>

class Animal {};
class Dog : public Animal{};

template<typename T>
class smart_ptr
{
	T* obj;
public:
	smart_ptr(T* p = nullptr) : obj { p } {}

	template<typename U,
			 typename X = std::enable_if_t< std::is_convertible_v<U*, T*>   > >
	smart_ptr(const smart_ptr<U>& other) 
		: obj{other.obj} {}

	template<typename> friend class smart_ptr;
};

int main()
{
	smart_ptr<Dog>    sp1{new Dog};
	smart_ptr<Animal> sp2 = sp1;

	smart_ptr<int> sp3 = sp1;
}