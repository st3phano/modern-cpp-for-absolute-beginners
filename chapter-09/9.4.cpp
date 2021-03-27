#include <iostream>

int main()
{
	std::cout << "Enter two integers: ";

	int int_a{};
	int int_b{};
	std::cin >> int_a >> int_b;

	int int_sum{ int_a + int_b };

	std::cout << "The result of " << int_a << " + " << int_b << " is " << int_sum << '\n';

	return 0;
}
