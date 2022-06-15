#include <iostream>

template<typename T> 
class Singleton
{
public:
	static T& getInstance()
	{
		static T instance;
		return instance;
	}
};
class Cursor : public Singleton<Cursor>
{
private:
	Cursor() {}
	Cursor(const Cursor&) = delete;
	Cursor& operator==(const Cursor&) = delete;

	friend class Singleton<Cursor>;
};

int main()
{
	Cursor& c = Cursor::getInstance();
}