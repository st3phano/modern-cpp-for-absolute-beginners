#include <memory>
#include <iostream>

int main()
{
	std::unique_ptr<int> my_int_ptr{ std::make_unique<int>(123) };
	std::cout << "my_int_ptr dereferenced: " << *my_int_ptr << '\n';

	return 0;
}
