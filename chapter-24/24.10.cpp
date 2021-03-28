#include <iostream>

class MyClass
{
private:

	int my_int;

public:

	MyClass(int my_int_init)
		: my_int{ my_int_init }
	{

	}

	MyClass& operator-=(const MyClass& rhs)
	{
		this->my_int -= rhs.my_int;
		return *this;
	}

	friend MyClass operator-(MyClass lhs, const MyClass& rhs)
	{
		lhs -= rhs;
		return lhs; // uses the move constructor
	}


	void print_data()
	{
		std::cout << "my_int: " << my_int << '\n';
	}
};

int main()
{
	MyClass my_object_a{ 12 };
	my_object_a.print_data();

	MyClass my_object_b{ 56 };
	my_object_b.print_data();

	MyClass my_object_c{ my_object_a - my_object_b };
	my_object_c.print_data();

	return 0;
}
