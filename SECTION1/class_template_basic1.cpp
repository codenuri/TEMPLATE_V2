#include <iostream>

template<typename T>
class Vector
{
	T* ptr;
	std::size_t  size;
public:
	Vector(std::size_t sz) : size(sz)
	{
		ptr = new T[sz];
	}
	~Vector() { delete[] ptr; }

	T& operator[](std::size_t idx) { return ptr[idx];}
	
	Vector(const Vector&) = delete;
//	Vector(const Vector<T>&) = delete;
};

//void fn(const Vector& v) {} // error
void fn(const Vector<int>& v) {} // ok

int main()
{
//	Vector v(10); // error
	Vector<int> v(10); // ok
	v[0] = 10;
	fn(v);
}