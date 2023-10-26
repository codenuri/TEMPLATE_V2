#include <algorithm>

struct MyType1 { int* begin() { return 0; }	};
struct MyType2 { void begin() {} };

int main()
{
	MyType1 mt1;
	MyType2 mt2;

	auto p1 = std::ranges::begin(mt1); // ok
//	auto p2 = std::ranges::begin(mt2); // error
}
