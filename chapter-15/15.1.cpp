#include <iostream>

int main()
{
	double array[5] = { 0.1, 0.2, 0.3, 0.4, 0.5 };

	array[0] = 1.0;
	array[4] = 2.4;

	std::cout << "array[0]: " << array[0] << '\n';
	std::cout << "array[4]: " << array[4] << '\n';

	return 0;
}
