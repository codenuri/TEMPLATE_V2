#include <type_traits>
#include <print>

template<typename T> concept C1 = std::convertible_to<T, bool>;
template<typename T> concept C2 = sizeof(T) > 2;
template<typename T> concept C3 = std::integral<T>;

template<typename T> concept C4 = C1<T> && C2<T>;
template<typename T> concept C5 = C1<T> && C2<T> && C3<T>;

template<typename T> requires C1<T>
void f1(T a) { std::println("f1-C1");}

template<typename T> requires C4<T>
void f1(T a) { std::println("f1-C4");}

template<typename T> requires C5<T>
void f1(T a) { std::println("f1-C5");}

int main()
{
	f1(10);
	f1(3.4);
	f1('A');
}