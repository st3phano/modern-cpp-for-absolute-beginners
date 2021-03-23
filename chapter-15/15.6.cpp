#include <iostream>
#include <string>

int main()
{
	std::string full_name{ "John Doe" };
	std::cout << "Full name: " << full_name << '\n';

	std::string first_name{ full_name.substr(0, 4) };
	std::cout << "First name: " << first_name << '\n';

	std::string last_name{ full_name.substr(5, 3) };
	std::cout << "Last name: " << last_name << '\n';

	return 0;
}
