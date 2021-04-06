#include <iostream>
#include <vector>

int main()
{
	std::vector<int> my_vector{ 1, 2, 3, 4, 5 };
	my_vector.erase(my_vector.begin(), my_vector.begin() + 3); // erase first 3 elements

	for (auto element : my_vector)
	{
		std::cout << element << '\n';
	}

	return 0;
}
