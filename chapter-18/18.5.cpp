#include <iostream>

int main()
{
	constexpr int my_array_size{ 5 };
	int my_array[my_array_size] = { 34, 43, 1234, 345, 95 };

	for (int counter{ 0 }; counter < my_array_size; ++counter)
	{
		std::cout << "my_array[" << counter << "]: " << my_array[counter] << '\n';
	}

	return 0;
}
