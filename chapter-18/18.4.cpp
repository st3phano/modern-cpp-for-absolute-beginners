#include <iostream>

int main()
{
	int counter_limit{ 15 };
	for (int counter{ 0 }; counter < counter_limit; ++counter)
	{
		std::cout << "counter: " << counter << '\n';
	}

	return 0;
}
