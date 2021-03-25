int main()
{
	int* int_ptr{ new int{ 12 } };

	delete int_ptr;

	return 0;
}
