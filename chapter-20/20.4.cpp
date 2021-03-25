#include <iostream>
#include <string>

void custom_message(const std::string& message);

int main()
{
	std::string my_string{ "Hello World!" };

	custom_message(my_string);

	return 0;
}

void custom_message(const std::string& message)
{
	std::cout << message << '\n';
}
