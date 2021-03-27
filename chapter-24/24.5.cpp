#include <iostream>

class MyClass
{
private:

	int x;

public:

	void set_x(int my_value)
	{
		x = my_value;
	}

	int get_x()
	{
		return x;
	}
};

int main()
{
	MyClass my_object;
	my_object.set_x(12);

	std::cout << "my_object.x: " << my_object.get_x() << '\n';

	return 0;
}
