#include <iostream>
#include <string>

int main()
{
	std::string my_string{ "Hello C++ World." };
	std::string substring_to_find{ "C++" };
	auto substring_found{ my_string.find(substring_to_find) };

	if (substring_found != std::string::npos)
	{
		std::cout << substring_to_find << " first appears at position " << substring_found << '\n';
	}
	else
	{
		std::cout << "Unable to find substring \"" << substring_to_find << "\" in your string" << '\n';
	}

	return 0;
}
