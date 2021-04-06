#include <iostream>
#include <vector>

int main()
{
	std::vector<int> my_vector{ 1, 2, 3, 4, 5 };
	my_vector.push_back(10);
	my_vector.push_back(20);

	for (auto element : my_vector)
	{
		std::cout << element << '\n';
	}

	return 0;
}
