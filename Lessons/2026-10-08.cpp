#include <iostream>
#include <cmath>

int main()
{
	std::cout << "Check-check" << std::endl;

	std::cout << 5 + 3 << std::endl;

	//std::cout << 5^3 << std::endl; //НЕ ВОЗВЕДЕНИЕ в степень

	std::cout << std::pow(5, 2) << std::endl;

	int x; //целочисленная переменная

	//x = 7;

	std::cin >> x;

	std::cout << x << std::endl;

	std::cout << std::exp(x) << std::endl; // e^x
	std::cout << std::log10(x) << std::endl; // log10(x)
	std::cout << std::sqrt(x) << std::endl; // square root(x)
	std::cout << std::pow(x, 1.0 / 3) << std::endl; // x^(1/3)
	std::cout << std::sin(x) << std::endl; // sin(x)

	return 0;
}