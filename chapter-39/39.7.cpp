#include <iostream>
#include <set>

int main()
{
	std::set<int> my_set{ 3, 4, 1, 5, 2 };
	std::cout << "my_set size: " << my_set.size() << '\n';
	std::cout << "Is my_set empty? " << std::boolalpha << my_set.empty() << '\n';

	my_set.clear();
	std::cout << "my_set size: " << my_set.size() << '\n';
	std::cout << "Is my_set empty? " << std::boolalpha << my_set.empty() << '\n';

	return 0;
}
