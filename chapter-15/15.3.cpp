#include <iostream>

int main()
{
	double my_double{ 3.14 };
	auto& my_reference{ my_double };

	my_reference = 1.2;
	std::cout << "my_double: " << my_double << '\n';
	std::cout << "my_reference: " << my_reference << '\n';

	my_reference = 7.9;
	std::cout << "my_double: " << my_double << '\n';
	std::cout << "my_reference: " << my_reference << '\n';

	return 0;
}
