#pragma once
#include <algorithm>
#include <deque>
#include <iostream>

void Algorithm1()
{
	std::deque<int> numbers = { 11, 20, 34, 5, 10, 44, 7, 6 };

	auto IsEven = [](int number)
	{
		return (number % 2 == 0);
	};

	//this will sort the deque to be 20, 30, 40, 50 10, 10, 10, 10
	auto it = std::remove_if(numbers.begin(), numbers.end(),
		[](int number) { return (number % 2 == 0); });

	numbers.erase(it, numbers.end());

	for (const auto& n : numbers)
	{
		std::cout << n << ", ";
	}
}