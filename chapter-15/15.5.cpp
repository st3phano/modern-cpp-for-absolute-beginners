#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter your full name: ";
	
	std::string full_name{};
	std::getline(std::cin, full_name);

	std::cout << full_name << '\n';

	return 0;
}
