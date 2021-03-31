#include <iostream>

enum class MyEnum
{
	a = 10,
	b = 20,
	c = 30
};

int main()
{
	MyEnum my_enum_object{ MyEnum::b };

	switch (my_enum_object)
	{
	case MyEnum::a:
		std::cout << "my_enum_object: " << static_cast<int>(MyEnum::a) << '\n';
		break;
	case MyEnum::b:
		std::cout << "my_enum_object: " << static_cast<int>(MyEnum::b) << '\n';
		break;
	case MyEnum::c:
		std::cout << "my_enum_object: " << static_cast<int>(MyEnum::c) << '\n';
		break;
	default:
		std::cout << "my_enum_object is not defined." << '\n';
	}

	return 0;
}
