#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> my_vector{ 5, 3, 89, 4, -1, 99, 0, -34 };
	auto my_vector_even_amount{ std::count_if(my_vector.begin(), my_vector.end(),
		[](int element)
		{
			return element % 2 == 0;
		}
	) };

	std::cout << "Even numbers in my_vector: " << my_vector_even_amount << '\n';

	return 0;
}
