#include <iostream>

int main()
{
	int int_division{ 9 / 2 };
	double double_division_int{ 9 / 2 };
	double double_division_double{ 9.0 / 2 };

	std::cout << "int_division: " << int_division << '\n';
	std::cout << "double_division_int: " << double_division_int << '\n';
	std::cout << "double_division_double: " << double_division_double << '\n';

	return 0;
}
