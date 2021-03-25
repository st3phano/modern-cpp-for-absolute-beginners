#include <iostream>

int multiplication(int int_a, int int_b);

int main()
{
	int my_int{ multiplication(12, 34) };

	std::cout << "my_int: " << my_int << '\n';

	return 0;
}

int multiplication(int int_a, int int_b)
{
	return int_a * int_b;
}
