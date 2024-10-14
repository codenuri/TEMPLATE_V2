#include <utility>
#include <print>

int main()
{
    std::integer_sequence<int, 0, 1, 2, 3, 4> s1;
	std::integer_sequence<std::size_t,  0, 1> s2;
//	std::integer_sequence<double, 1.11, 2.22> s3; // error

    std::println("{}", s1.size() ); // 5
	std::println("{}", s2.size() ); // 2

    std::println("{}", sizeof(s1) ); // 1
	std::println("{}", sizeof(s2) ); // 1
}
