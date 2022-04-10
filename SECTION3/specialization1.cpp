#include <iostream>

template<typename T> class Vector
{
	T*  ptr;
	std::size_t size;
public:
	Vector(std::size_t sz) : size(sz)
	{
		 ptr = new T[sz];
	}
	~Vector() { delete[] ptr;}
};

template<> class Vector<bool>
{
	int*  ptr;
	std::size_t size;
public:
	Vector(std::size_t sz) : size(sz)
	{
		 ptr = new int[(sz/32) + 1];
	}
	~Vector() { delete[] ptr;}
};


template<typename T> class Vector<T*>
{
	T*  ptr;
	std::size_t size;
public:
	Vector(std::size_t sz) : size(sz)
	{
		 ptr = new T[sz];
	}
	~Vector() { delete[] ptr;}
};


int main()
{
	Vector<int>    v1(5);
	Vector<double> v2(5);
	Vector<bool>   v3(5);
}

