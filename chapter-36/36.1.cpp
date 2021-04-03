#include <iostream>

int main()
{
	int my_int{ 123 };
	double my_double{ 2.71 };
	bool my_bool{ true };

	bool my_bool_from_int{ static_cast<bool>(my_int) };
	std::cout << "my_bool_from_int: " << my_bool_from_int << '\n';

	int my_int_from_double{ static_cast<int>(my_double) };
	std::cout << "my_int_from_double: " << my_int_from_double << '\n';

	double my_double_from_bool{ static_cast<double>(my_bool) };
	std::cout << "my_double_from_bool: " << my_double_from_bool << '\n';

	return 0;
}
