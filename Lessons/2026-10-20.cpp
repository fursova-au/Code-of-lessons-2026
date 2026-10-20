/*

#include <iostream>
#include <iomanip>

int main()
{
	int coefficient = std::cout.precision();

	std::cout << std::setprecision(2) << std::fixed;

	//std::cout << ...;

	std::cout << std::setprecision(coefficient);

	return 0;
}

*/

#include <iostream>

//глобальное пространство имён

//int x = 12; //плохо, моветон

//функция для расчёта среднего арифметического
double q(int n, int m)
{
	int sum = n + m;
	double average = static_cast<double>(sum) / 2;

	return average;
}

int main()
{
	//локальное пространство функции main

	int a, b;

	std::cin >> a >> b;

	std::cout << "Average = " << q(a, b) << std::endl;

	return 0;
}