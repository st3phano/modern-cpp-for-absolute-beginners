#include <iostream>
#include <string>

int main()
{
	std::string string_a{ "Hello " };
	std::string string_b{ "World!" };
	std::string string_c{ string_a + string_b };

	std::cout << string_c << '\n';

	return 0;
}
