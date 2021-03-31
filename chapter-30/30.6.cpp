#include <iostream>

enum class DaysOfWeek
{
	Sunday = 1,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday
};

int main()
{
	DaysOfWeek my_day{ DaysOfWeek::Monday };
	std::cout << "my_day: " << static_cast<int>(my_day) << '\n';

	if (my_day == DaysOfWeek::Monday)
	{
		my_day = DaysOfWeek::Friday;
	}

	std::cout << "my_day: " << static_cast<int>(my_day) << '\n';

	return 0;
}
