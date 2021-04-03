#include <iostream>
#include <memory>

int main()
{
	std::shared_ptr<int> my_int_shared_ptr_a{ std::make_shared<int>(123) };
	std::shared_ptr<int> my_int_shared_ptr_b{ my_int_shared_ptr_a };
	std::shared_ptr<int> my_int_shared_ptr_c{ my_int_shared_ptr_a };

	std::cout << "my_int_shared_ptr_a dereferenced: " << *my_int_shared_ptr_a << '\n';
	std::cout << "my_int_shared_ptr_b dereferenced: " << *my_int_shared_ptr_b << '\n';
	std::cout << "my_int_shared_ptr_c dereferenced: " << *my_int_shared_ptr_c << '\n';

	return 0;
}
