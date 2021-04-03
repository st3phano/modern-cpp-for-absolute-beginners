#include <iostream>
#include <memory>

class MyClass
{
public:

	MyClass(int my_int_init, double my_double_init, int my_int_ptr_init)
		: my_int{ my_int_init },
		  my_double{ my_double_init },
		  my_int_ptr{ std::make_unique<int>(my_int_ptr_init) }
	{
		
	}

	void print_my_data() const
	{
		std::cout << "my_int: " << my_int << '\n';
		std::cout << "my_double: " << my_double << '\n';
		std::cout << "my_int_ptr dereferenced: " << *my_int_ptr << '\n';
	}

private:

	int my_int;
	double my_double;
	std::unique_ptr<int> my_int_ptr;
};

int main()
{
	std::unique_ptr<MyClass> my_object_ptr{ std::make_unique<MyClass>(123, 3.14, 32) };

	my_object_ptr->print_my_data();

	return 0;
}
