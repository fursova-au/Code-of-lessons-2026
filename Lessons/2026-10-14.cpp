/*

#include <iostream>
#include <iomanip>

int main()
{
	int a, b;

	std::cin >> a >> b; //std::cin >> a; b;

	std::cout << a << " + " << b << " = " << a + b << std::endl;

	double res = 1.0 * a / b;

	std::cout << a << " / " << b << " = " << res << std::endl;

	a = a + 1;
	a += 1;
	a++;	//постфиксный инкремент = увеличение значения переменной на 1
	++a;	//префиксный инкремент = увеличение значения переменной на 1

	a = a / 2;
	a /= 2;

	a = -7;

	//const int q; //ОШИБКА: константный мусор
	
	const int q = 17;

	//q += 15; //ОШИБКА

	std::cout << (a > b ? "MAX = a" : "MAX = b") << std::endl; //ок, но дублирование

	std::cout << "MAX = " << (a > b ? "a" : "b") << std::endl; //лучше

	std::cout << "RESULT = " << res << std::endl;

	std::cout << "RESULT = " << std::scientific << res << std::endl;
	std::cout << std::setprecision(2);
	std::cout << "RESULT = " << std::fixed << res << std::endl;
	std::cout << "RESULT = " << std::defaultfloat << res << std::endl;

	std::cout.setf(std::ios::boolalpha | std::ios::right);
	std::cout << "BOOL = " << std::setw(10) << (a > b) << std::endl;

	return 0;
}

*/