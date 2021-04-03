#include <iostream>
#include <memory>

class MyBaseClass
{
public:

	virtual void my_function() const = 0;
	~MyBaseClass()
	{

	}
};

class MyDerivedClassA : public MyBaseClass
{
public:

	void my_function() const override
	{
		std::cout << "Hello from MyDerivedClassA." << '\n';
	}
};

class MyDerivedClassB : public MyBaseClass
{
public:

	void my_function() const override
	{
		std::cout << "Hello from MyDerivedClassB." << '\n';
	}
};

int main()
{
	std::unique_ptr<MyBaseClass> my_object_a_unique_ptr{ std::make_unique<MyDerivedClassA>() };
	std::unique_ptr<MyBaseClass> my_object_b_unique_ptr{ std::make_unique<MyDerivedClassB>() };

	my_object_a_unique_ptr->my_function();
	my_object_b_unique_ptr->my_function();

	return 0;
}
