#include <iostream>
#include <string>
#include <string_view>
#include <ranges>

int main()
{
	std::string s1 = "to be or not to be";
	std::string s2 = s1;

	std::string_view sv = s1;
	
	std::cout << std::ranges::enable_borrowed_range<std::string> << std::endl; // 0
	std::cout << std::ranges::enable_borrowed_range<std::string_view> << std::endl; // 1
}

// C++20의 enable_rorrowed_rangle, <ranges> 헤더
template <typename>
inline constexpr bool enable_borrowed_range = false;

template <typename T, typename Traits>
inline constexpr bool enable_borrowed_range<std::basic_string_view<T, Traits>> = true;
