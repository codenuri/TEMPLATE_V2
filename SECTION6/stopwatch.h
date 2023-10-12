#pragma once

#include <iostream>
#include <chrono>

class stopwatch
{
public:
	stopwatch() : start(std::chrono::system_clock::now()) {}

	~stopwatch()
	{
		end = std::chrono::system_clock::now();

		std::chrono::duration<double> elapsed = end - start;
		std::chrono::nanoseconds nano = end - start;
	
		std::cout << elapsed.count() << " seconds..." << std::endl;
	}
private:
	std::chrono::system_clock::time_point start;
	std::chrono::system_clock::time_point end;
};