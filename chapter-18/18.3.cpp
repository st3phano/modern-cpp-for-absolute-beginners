#include <iostream>

int main()
{
	int my_int{ 3 };

	switch (my_int)
	{
	case 1:
		std::cout << "my_int is 1" << '\n';
		break;
	case 2:
		std::cout << "my_int is 2" << '\n';
		break;
	case 3:
		std::cout << "my_int is 3" << '\n';
		break;
	case 4:
		std::cout << "my_int is 4" << '\n';
		break;
	default:
		std::cout << "my_int is not 1, 2, 3 or 4" << '\n';
	}

	return 0;
}
