#pragma once
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

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

void Algorithm2()
{
	auto it = std::remove_if(names.begin(), names.end(), IsVowel);
	names.erase(it, names.end());

	for (const auto& name : names)
	{
		std::cout << name << std::endl;
	}
}