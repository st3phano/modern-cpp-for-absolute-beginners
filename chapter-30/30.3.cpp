#include <iostream>

class MyClass
{
public:

	static void my_static_function();
	void my_regular_function();
};

void MyClass::my_static_function()
{
	std::cout << "Inside static function." << '\n';
}

void MyClass::my_regular_function()
{
	std::cout << "Inside regular function." << '\n';
}

int main()
{
	MyClass::my_static_function();

	MyClass my_object;
	my_object.my_regular_function();

	return 0;
}
