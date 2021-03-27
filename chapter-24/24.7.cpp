#include <iostream>

class MyClass
{
private:

	int my_int;
	double my_double;

public:

	MyClass(int my_int_init, double my_double_init);
	void print_data();
};

MyClass::MyClass(int my_int_init, double my_double_init)
	: my_int{ my_int_init }, my_double{ my_double_init }
{
	
}

void MyClass::print_data()
{
	std::cout << "my_int: " << my_int << '\n';
	std::cout << "my_double: " << my_double << '\n';
}

int main()
{
	MyClass my_object{ 12, 2.72 };

	my_object.print_data();

	return 0;
}
