#include <iostream>
#include <set>

int main()
{
	std::set<int> my_set{ 5, 2, 1, 3, 4 };

	for (auto element : my_set)
	{
		std::cout << element << '\n';
	}

	return 0;
}
