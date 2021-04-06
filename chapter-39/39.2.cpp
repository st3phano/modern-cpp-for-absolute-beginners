#include <iostream>
#include <vector>

int main()
{
	std::vector<int> my_vector{ 1, 2, 3, 4, 5 };
	my_vector.erase(my_vector.begin() + 1); // erase 2nd element

	for (auto element : my_vector)
	{
		std::cout << element << '\n';
	}

	return 0;
}
