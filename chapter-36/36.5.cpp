#include <iostream>
#include <memory>

class MyBaseClass
{
public:

	virtual void my_function() const = 0;
	virtual ~MyBaseClass()
	{

	}
};

class MyDerivedClass : public MyBaseClass
{
public:

	void my_function() const override
	{
		std::cout << "Hello from MyDerivedClass." << '\n';
	}
};

int main()
{
	std::unique_ptr<MyBaseClass> my_object_unique_ptr{ std::make_unique<MyDerivedClass>() };
	my_object_unique_ptr->my_function();

	return 0;
}
