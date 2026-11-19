#include <iostream>
#include <iomanip>

void print(int arr[][10], int n, int m)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << std::setw(5) << arr[i][j];
		}
		std::cout << std::endl;
	}
}

//read с использованием индексации
void read(int arr[][10], int n, int m)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> arr[i][j];
		}
	}
	std::cout << std::endl;
}

// read с использованием арифметики указателей 
// (работает правильно, только если размеры матрицы заданы КОНСТАНТАМИ, не переменными m и n)
void read(int* start, int* end)
{
	for (int* ptr = start; ptr != end; ++ptr)
	{
		std::cin >> *ptr;
	}
}

//print с использованием арифметики указателей
void print(int (*start)[10], int (*end) [10], int m)
{
	for (int (*str)[10] = start; str != end; ++str)
	{
		int* first = reinterpret_cast<int*>(str);		//начало строки = первый элемент строки
		int* last = reinterpret_cast<int*>(str) + m;	//конец строки  = первый элемент + m

		for (int* elem = first; elem != last; ++elem)
		{
			std::cout << *elem << " ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	int matrix[10][10];

	int n, m;

	std::cout << "Enter n&m:" << std::endl;
	std::cin >> n >> m;
	std::cout << std::endl;

	std::cout << "Enter matrix:" << std::endl;

	//сработает верно только при количестве элементов, совпадающем с размерностью матрицы:
	read(reinterpret_cast<int*>(matrix), reinterpret_cast<int*> (matrix) + n * m);

	std::cout << "MATRIX:" << std::endl;
	print(matrix, n, m);
	std::cout << std::endl;

	std::cout << "MATRIX:" << std::endl;
	print(matrix, matrix + n, m);
	std::cout << std::endl;

	return 0;
}