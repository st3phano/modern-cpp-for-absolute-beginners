#include <iostream>

class MyClass
{
public:

	MyClass();
	~MyClass();
};

MyClass::MyClass()
{
	std::cout << "Constructor was called" << '\n';
}

MyClass::~MyClass()
{
	std::cout << "Destructor was called" << '\n';
}

int main()
{
	MyClass my_object;

	return 0;
}
