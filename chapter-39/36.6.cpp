#include <iostream>
#include <set>

int main()
{
	std::set<int> my_set{ 5, 2, 1, 3, 4 };
	my_set.insert(42);
	my_set.insert(34);
	my_set.erase(1);

	for (auto element : my_set)
	{
		std::cout << element << '\n';
	}

	return 0;
}
