#include <iostream>

class MyClass
{
private:

	int my_int;
	int* my_int_ptr;

public:

	MyClass(int my_int_init, int my_int_ptr_init)
		: my_int{ my_int_init },
		  my_int_ptr{ new int{ my_int_ptr_init } }
	{

	}

	// move constructor
	MyClass(MyClass&& move_from)
		: my_int{ std::move(move_from.my_int) },
		  my_int_ptr{ std::move(move_from.my_int_ptr) }
	{

	}

	void print_data()
	{
		std::cout << "my_int: " << my_int << '\n';
		std::cout << "my_int_ptr: 0x" << std::hex << my_int_ptr << '\n';
		std::cout << "my_int_ptr dereferenced: " << std::dec << *my_int_ptr << '\n';
	}
};

int main()
{
	MyClass my_object_a{ 12, 34 };
	my_object_a.print_data();

	MyClass my_object_b{ std::move(my_object_a) };
	my_object_b.print_data();

	my_object_a.print_data();

	return 0;
}
