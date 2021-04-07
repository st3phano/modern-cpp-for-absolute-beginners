#include <iostream>
#include <map>

int main()
{
	std::map<char, int> my_map{ {'z', 0}, {'b', 2}, {'c', 3}, {'d', 4}, {'a', 1} };
	my_map['z'] = 2;

	for (auto element : my_map)
	{
		std::cout << element.first << " : " << element.second << '\n';
	}

	return 0;
}
