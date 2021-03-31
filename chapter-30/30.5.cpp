#include <iostream>

template<typename T>
class MyClass
{
public:

	MyClass(T my_data_member_init)
		: my_data_member{ my_data_member_init }
	{

	}

	T get_my_data_member() const
	{
		return my_data_member;
	}

	void set_my_data_member(T my_data_member_set)
	{
		my_data_member = my_data_member_set;
	}

private:

	T my_data_member;
};

int main()
{
	MyClass<int> my_int_object{ 12 };
	std::cout << "my_data_member<int>: " << my_int_object.get_my_data_member() << '\n';
	my_int_object.set_my_data_member(34);
	std::cout << "my_data_member<int>: " << my_int_object.get_my_data_member() << '\n';

	MyClass<double> my_double_object{ 3.14 };
	std::cout << "my_data_member<double>: " << my_double_object.get_my_data_member() << '\n';
	my_double_object.set_my_data_member(2.71);
	std::cout << "my_data_member<double>: " << my_double_object.get_my_data_member() << '\n';

	return 0;
}
