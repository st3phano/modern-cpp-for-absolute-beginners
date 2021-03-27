#include <iostream>

int main()
{
	std::cout << "Enter a char, an int and a double: ";

	char my_char{};
	int my_int{};
	double my_double{};
	std::cin >> my_char >> my_int >> my_double;

	std::cout << "my_char: " << my_char << '\n';
	std::cout << "my_int: " << my_int << '\n';
	std::cout << "my_double: " << my_double << '\n';
	
	return 0;
}
