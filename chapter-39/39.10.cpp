#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<std::string, int> my_map{ {"C++", 10}, {"!!!", 7} };
	my_map.insert({"Hello", 3});
	my_map["World"] = -1;

	for (const auto& element : my_map)
	{
		std::cout << element.first << " : " << element.second << '\n';
	}

	return 0;
}
