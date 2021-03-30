#include <iostream>
#include <string>

class Person
{
private:

	std::string name;

public:
	
	// single parameter constructor, using explicit to avoid implicit conversions
	explicit Person(const std::string& name_init);
	std::string get_name() const; // does not modify data members, marking as const
};

Person::Person(const std::string& name_init)
	: name{ name_init }
{

}

std::string Person::get_name() const
{
	return name;
}

class Student : public Person
{
private:

	int semester;

public:

	Student(const std::string& name_init, int semester_init);	
	int get_semester() const; // does not modify data members, marking as const
};

Student::Student(const std::string& name_init, int semester_init)
	: Person::Person{ name_init }, semester{ semester_init }
{

}

int Student::get_semester() const
{
	return semester;
}

int main()
{
	Person person_a{ "Number 1" };
	std::cout << person_a.get_name() << '\n';

	Student person_b{ "Number 2", 4 };
	std::cout << person_b.get_name() << '\n';
	std::cout << "semester: " << person_b.get_semester() << '\n';

	return 0;
}
