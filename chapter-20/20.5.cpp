#include <iostream>

int division(int int_a, int int_b);
double division(double double_a, double double_b);

int main()
{
	std::cout << division(9, 2) << '\n';
	std::cout << division(9.0, 2.0) << '\n';

	return 0;
}

int division(int int_a, int int_b)
{
	return int_a / int_b;
}

double division(double double_a, double double_b)
{
	return double_a / double_b;
}
