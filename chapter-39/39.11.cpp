#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<int, std::string> my_map{ {3, "Hi"}, {2, "World"}, {-1, "C++"} };
	int key_to_find{ -1 };

	if (my_map.find(key_to_find) != my_map.end()) // key_to_find is in my_map
	{
		my_map.erase(key_to_find);
	}

	for (const auto& element : my_map)
	{
		std::cout << element.first << " : " << element.second << '\n';
	}

	return 0;
}
