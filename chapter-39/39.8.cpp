#include <iostream>
#include <set>

int main()
{
	std::set<int> my_set{ 9, 6, 7, 4, 5, 0 };

	int value_to_find{ 4 };
	if (my_set.find(value_to_find) != my_set.end()) // value_to_find in my_set
	{
		my_set.erase(value_to_find);
	}

	for (auto element : my_set)
	{
		std::cout << element << '\n';
	}

	return 0;
}
