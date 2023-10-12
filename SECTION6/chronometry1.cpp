#include <thread>
#include <chrono>
#include "stopwatch.h"
using namespace std::literals;

void f1(int n)    { std::this_thread::sleep_for(2s); }
void f2(double d) { std::this_thread::sleep_for(3s); }

int main()
{
	{
		stopwatch sw;
		f1(5);
	}

	{
		stopwatch sw;
		f2(3.4);
	}
}