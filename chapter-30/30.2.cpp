#include <string>
#include <iostream>

class MyClass
{
public:

	static std::string my_string;
};

std::string MyClass::my_string{ "Hello" };

int main()
{
	std::cout << MyClass::my_string << '\n';
	
	MyClass::my_string = "Bye";
	std::cout << MyClass::my_string << '\n';

	return 0;
}
