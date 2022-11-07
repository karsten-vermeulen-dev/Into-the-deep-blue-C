#include <iostream>
#include <string>
#include <vector>

void ParseString(std::string& string, std::vector<std::string>& words, char token)
{
	size_t start = 0;
	size_t end = 0;

	if (string.empty())
	{
		std::cout << "The string is empty." << std::endl;
	}

	else
	{
		while (end != std::string::npos)
		{
			end = string.find(token, start);
			if ((end - start) > 0)
			{
				words.push_back(string.substr(start, end - start));
			}
			start = end + 1;
		}
	}
}

void main()
{
	std::vector<std::string> words;
	std::string sentence("Hello world how are you ?");

	ParseString(sentence, words, ' ');

	for (const auto& word : words)
	{
		std::cout << word << std::endl;
	}

	system("pause");
}