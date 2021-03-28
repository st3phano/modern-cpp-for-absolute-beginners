#include <iostream>

class MyClass
{
private:

	int my_int;
	int* my_int_ptr;

public:

	MyClass(int my_int_init, int my_int_ptr_init);
	~MyClass();
	MyClass(const MyClass& copy_from);
	void print_data();
};

// constructor
MyClass::MyClass(int my_int_init, int my_int_ptr_init)
	: my_int{ my_int_init },
	my_int_ptr{ new int{ my_int_ptr_init } }
{

}

//destructor
MyClass::~MyClass()
{
	delete my_int_ptr;
}

// copy constructor
MyClass::MyClass(const MyClass& copy_from)
	: my_int{ copy_from.my_int },
	my_int_ptr{ new int{ *(copy_from.my_int_ptr) } } // deep copy of my_int_ptr
{

}

void MyClass::print_data()
{
	std::cout << "my_int: " << my_int << '\n';
	std::cout << "my_int_ptr: 0x" << std::hex << my_int_ptr << '\n';
	std::cout << "my_int_ptr dereferenced: " << std::dec << *my_int_ptr << '\n';
}

int main()
{
	MyClass o1{ 12, 34 };
	o1.print_data();

	MyClass o2{ o1 };
	o2.print_data();

	return 0;
}
