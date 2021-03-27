#include <iostream>

int main()
{
	int x{ 123 };
	x++;
	x += 20;

	std::cout << "x: " << x << '\n';

	return 0;
}
