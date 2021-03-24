#include <iostream>
#include <string>

int main()
{
	const int my_int_a{ 1 };
	const double my_double{ 2.71 };
	const std::string my_string{ "Hello" };

	const int my_int_b{ my_int_a };

	std::cout << "my_int_a: " << my_int_a << '\n';
	std::cout << "my_double: " << my_double << '\n';
	std::cout << "my_string: " << my_string << '\n';
	std::cout << "my_int_b: " << my_int_b << '\n';

	return 0;
}
