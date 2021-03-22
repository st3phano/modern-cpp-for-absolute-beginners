#include <iostream>

int main()
{
	std::cout << "Enter two integers: ";
	
	int int_a{};
	int int_b{};
	std::cin >> int_a >> int_b;

	std::cout << "int_a: " << int_a << '\n';
	std::cout << "int_b: " << int_b << '\n';

	return 0;
}
