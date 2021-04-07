#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> my_vector{ 5, 3, 89, 4, -1, 99, 0, -34 };
	std::sort(my_vector.begin(), my_vector.end(),
		[](int element_a, int element_b)
		{
			return element_a > element_b;
		}
	); // rearrange my_vector in a descending way

	for (auto element : my_vector)
	{
		std::cout << element << '\n';
	}

	return 0;
}
