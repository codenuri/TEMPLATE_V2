#include <memory>

class Animal { int age; };

class Dog : public Animal {};

int main()
{
	std::shared_ptr<Dog> p1(new Dog);
	
	std::shared_ptr<Animal> p2 = p1;
}
