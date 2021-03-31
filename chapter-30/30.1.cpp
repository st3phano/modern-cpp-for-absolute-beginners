#include <iostream>

void my_function();

int main()
{
	for (int i{ 0 }; i < 10; ++i)
	{
		my_function();
	}

	return 0;
}

void my_function()
{
	static int function_call_counter{ 0 };
	++function_call_counter;
	std::cout << "my_function was called " << function_call_counter << " time(s)." << '\n';
}
