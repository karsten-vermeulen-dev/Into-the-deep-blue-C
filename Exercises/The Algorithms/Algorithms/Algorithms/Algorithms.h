#pragma once
#include <algorithm>
#include <deque>
#include <iostream>
#include <string>
#include <vector>

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

void Algorithm2()
{
	std::vector<std::string> names
	{
		"Chair",
		"Apple",
		"Orange",
		"Table",
		"Gun",
		"Ammunition",
		"Axe"
	};

	auto IsVowel = [](const std::string& name)
	{
		char vowels[] = { 'A', 'E', 'I', 'O', 'U' };

		for (auto vowel : vowels)
		{
			if (name[0] == vowel)
			{
				return true;
			}
		}

		return false;
	};

	auto it = std::remove_if(names.begin(), names.end(), IsVowel);
	names.erase(it, names.end());

	for (const auto& name : names)
	{
		std::cout << name << std::endl;
	}
}

void Algorithm5()
{
	std::string sentence = "Hello, how are you? I am fine!";

	auto RemovePuntuation = [](char letter)
	{
		char punctuation[] = { '.', ',', '?', '!', ':', ' ' };

		for (auto p : punctuation)
		{
			if (letter == p)
			{
				return true;
			}
		}

		return false;
	};

	auto it = std::remove_if(sentence.begin(), sentence.end(), RemovePuntuation);
	sentence.erase(it, sentence.end());

	std::cout << sentence << std::endl;
}