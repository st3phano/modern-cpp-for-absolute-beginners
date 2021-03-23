#include <iostream>
#include <string>

int main()
{
	std::string my_string{ "Hello C++ World." };
	char char_to_find{ 'C' };
	auto char_found{ my_string.find(char_to_find) };

	if (char_found != std::string::npos)
	{
		std::cout << "Character '" << char_to_find << "' first appears at position " << char_found << '\n';
	}
	else
	{
		std::cout << "Unable to find '" << char_to_find << "' in your string" << '\n';
	}

	return 0;
}
