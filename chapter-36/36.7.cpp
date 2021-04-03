#include <iostream>

int main()
{
	try
	{
		std::cout << "Throwing an int exception..." << '\n';
		throw 100;
	}
	catch (int exception)
	{
		std::cout << "Caught an int exception of value " << exception << '\n';
	}

	return 0;
}
