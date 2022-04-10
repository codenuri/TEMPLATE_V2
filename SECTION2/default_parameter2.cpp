#include <algorithm>
#include <functional>
#include <vector>

int main()
{
	std::vector<int> v = {1,2,3,4,5};

	std::sort(v.begin(), v.end(), std::less<int>() );
	std::sort(v.begin(), v.end(), std::less() );
	std::sort(v.begin(), v.end(), std::less{} );
}
