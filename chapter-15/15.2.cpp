#include <iostream>

int main()
{
	double my_double{ 3.14 };
	double* my_double_ptr{ &my_double };

	std::cout << "my_double: " << *my_double_ptr << '\n';

	return 0;
}
