#include <thread>
#include <chrono>
#include <functional>
#include "stopwatch.h"
using namespace std::literals;

void f1(int a, int b) { std::this_thread::sleep_for(2s); }
void f2(double d)     { std::this_thread::sleep_for(3s); }

template<typename F, typename ... Ts>
decltype(auto) chronometry(F&& f, Ts&& ... args)
{
	stopwatch sw;
	return std::invoke( std::forward<F>(f),
				 		std::forward<Ts>(args)...);
}

int main()
{
	chronometry(f1, 5, 6);
	chronometry(f2, 3.4);
}