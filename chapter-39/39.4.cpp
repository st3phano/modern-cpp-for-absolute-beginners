#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> my_vector{ 1, 2, 3, 4, 5, 6, 7 };

	int element_to_find{ 0 };
	// search for element_to_find in my_vector
	auto my_vector_iterator{ std::find(my_vector.begin(), my_vector.end(), element_to_find) };

	if (my_vector_iterator != my_vector.end()) // element_to_find was found, erase it
	{
		my_vector.erase(my_vector_iterator);
	}

	for (auto element : my_vector)
	{
		std::cout << element << '\n';
	}

	return 0;
}
