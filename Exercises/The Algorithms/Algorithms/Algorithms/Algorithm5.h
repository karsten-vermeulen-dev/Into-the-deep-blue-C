#pragma once
#include <algorithm>
#include <iostream>
#include <string>

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