#include <iostream>

template<typename T>
T sum_two_numbers(T number_a, T number_b);

int main()
{
	int sum_of_ints{ sum_two_numbers<int>(12, 34) };
	std::cout << "sum_of_ints: " << sum_of_ints << '\n';

	double sum_of_doubles{ sum_two_numbers<double>(3.14, 2.71) };
	std::cout << "sum_of_doubles: " << sum_of_doubles << '\n';

	return 0;
}

template<typename T>
T sum_two_numbers(T number_a, T number_b)
{
	return number_a + number_b;
}
