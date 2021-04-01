#include <iostream>

namespace MyNameSpace
{
	void my_function();
}

int main()
{
	MyNameSpace::my_function();

	return 0;
}

void MyNameSpace::my_function()
{
	std::cout << "Hello from my_function." << '\n';
}
