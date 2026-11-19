/*

#include <iostream>
#include <clocale>

double get_average1(const int* arr, int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
	}

	return static_cast<double>(sum) / n;
}

int get_sum(const int* begin, const int* end)
{
	int sum = 0;

	for (const int* iter = begin; iter != end; ++iter)
	{
		sum += *iter;	// iter = адрес, *iter = *(адрес) = переменная (число)
	}

	return sum;
}

double get_average2(const int* arr, int n)
{
	return static_cast<double>(get_sum(arr, arr + n)) / n;
}

int main()
{
	std::setlocale(LC_CTYPE, "rus");

	//С консоли вводится число n (<=1000), далее вводится n элементов массива...

	int marks[1000];

	int count;
	std::cin >> count; //6

	//чтение:
	for (int i = 0; i < count; ++i)
	{
		std::cin >> marks[i];
	}

	//рассчёт среднего арифметического (с помощью индексации [])
	std::cout << "Среднее = " << get_average1(marks, count) << std::endl;

	int* ptr = marks;	//имя массива = указатель на 0-й элемент
	*(ptr + 3) = 0;		//обращение к элементу под индексом 3
	ptr[3] = 0;			//обращение к элементу под индексом 3
	3[ptr] = 0;			//обращение к элементу под индексом 3
	*(3 + ptr) = 0;		//обращение к элементу под индексом 3

	//рассчёт среднего арифметического (с использованием арифметики указателей)
	//СМ. ФУНКЦИЮ get_sum

	std::cout << get_average2(marks, count) << std::endl; //4-я (i = 3) не оценивается

	//печать:
	for (int i = 0; i < count; ++i)
	{
		std::cout << marks[i] << " ";
	}
	std::cout << std::endl;

	//найти минимальный элемент массива и его позицию:

	int min = marks[0];
	int pos = 0;

	for (int i = 1; i < count; ++i)
	{
		if (marks[i] <= min)
		{
			min = marks[i];
			pos = i;
		}
	}

	std::cout << "Минимум = " << min << ", находится в позиции " << pos + 1 << std::endl;

	int pos_even = -1;
	for (int i = count - 1; i >= 0; --i)
	{
		if (marks[i] % 2 == 0)
		{
			pos_even = i;
			break;
		}
	}

	if (pos_even != -1)
	{
		std::cout << "Первое чётное число, встреченное с конца = " << marks[pos_even] << std::endl;
	}
	else
	{
		std::cout << "Чётных элементов в массиве нет." << std::endl;
	}

	return 0;
}

*/