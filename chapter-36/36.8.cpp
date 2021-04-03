#include <iostream>

int main()
{
	try
	{
		bool int_exception{ false };
		bool double_exception{ true };
		
		if (int_exception)
		{
			std::cout << "Throwing an int exception..." << '\n';
			throw 200;
		}
		else if (double_exception)
		{
			std::cout << "Throwing a double exception..." << '\n';
			throw 3.14;
		}
	}
	catch (int exception)
	{
		std::cout << "Caught an int exception of value " << exception << '\n';
	}
	catch (double exception)
	{
		std::cout << "Caught a double exception of value " << exception << '\n';
	}

	return 0;
}
