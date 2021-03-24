#include <iostream>

int main()
{
	int my_int{ 256 };

	if (my_int > 100 && my_int < 300)
	{
		std::cout << "my_int is between 100 and 300" << '\n';
	}

	bool boolean_a{ true };

	if (my_int > 100 || boolean_a)
	{
		std::cout << "my_int is greater than 100 or boolean_a is true" << '\n';
	}

	bool boolean_b{ !boolean_a };

	return 0;
}
