#include <iostream>

class MyClass
{
public:

	void print_message();
};

void MyClass::print_message()
{
	std::cout << "Hello World" << '\n';
}

int main()
{
	MyClass my_object;

	my_object.print_message();

	return 0;
}
