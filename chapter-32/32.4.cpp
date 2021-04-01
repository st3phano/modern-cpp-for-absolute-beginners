#include <iostream>

namespace A
{
	namespace B
	{
		void my_function();
	}
}

int main()
{
	A::B::my_function();

	using namespace A::B;
	my_function();

	return 0;
}

void A::B::my_function()
{
	std::cout << "Hello from my_function." << '\n';
}
