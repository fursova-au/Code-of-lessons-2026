/*
#include <iostream>


void print_info(float* pointer)
{
	std::cout << "adr = " << pointer << std::endl; //address
	if (pointer != 0)
		std::cout << "value = " << *pointer << std::endl; //value
	else
		std::cout << "NULLPTR" << std::endl;

	std::cout << std::endl;
}

void test_func(float* p) //p - копия указателя (хранит адрес)
{
	std::cout << "TEST\n" << std::endl;
	//p = nullptr;
	*p = -1.7;
}

int main()
{
	float a = 5.2;

	float* ptr;

	ptr = 0;
	int test1 = 0;
	//ptr = 1; //syntax error (C++)

	ptr = NULL; //C
	int test2 = NULL;

	ptr = nullptr; //C++
	//int test3 = nullptr; //syntax error (C++)

	print_info(ptr);
	print_info(nullptr);

	ptr = &a;

	print_info(ptr);
	test_func(ptr);
	print_info(ptr);

	return 0;
}

*/

#include <iostream>

void printArray(const int* mas, int n)
{
	//std::cout << "SIZE OF MAS[9] = " << sizeof(mas) << " bytes" << std::endl;

	for (int i = 0; i < n; ++i)
	{
		std::cout << mas[i] << " ";
	}

	std::cout << std::endl;
}

int main()
{
	int arr[9];

	for (int i = 0; i < 9; ++i)
	{
		arr[i] = 7;
	}

	arr[1] = -1;
	arr[8] = -2;

	int k;

	//arr = &k; //SE: const pointer

	std::cout << arr << std::endl;	//адрес 0-го элемента
	std::cout << *arr << std::endl;	//0-й элемент

	std::cout << "SIZE OF ARR[9] = " << sizeof(arr) << " bytes" << std::endl;
	printArray(arr, 9); //адрес 0-го элемента

	return 0;
}