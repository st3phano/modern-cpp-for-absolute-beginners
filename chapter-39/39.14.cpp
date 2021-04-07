#include <iostream>

int main()
{
	int my_int{ 35 };
	std::cout << "my_int: " << my_int << '\n';

	auto my_lambda{
		[&my_int](int new_int)
		{
			my_int = new_int;
		}
	}; // replace my_int value with new_int value

	my_lambda(42);
	std::cout << "my_int: " << my_int << '\n';

	return 0;
}
