int main()
{
	int x{ 12 };
	int* int_ptr{ new int{ x } };

	delete int_ptr;

	return 0;
}
