#include <iostream>
#include <clocale>
#include <utility>

//ПРИМЕР ОФОРМЛЕНИЯ ФУНКЦИИ, ВОЗВРАЩАЮЩЕЙ ПАРУ
std::pair<double, int> get_result(double x)
{
	std::pair<double, int> answer;

	//...

	answer.first = 12.5;
	answer.second = 3;
	
	//...

	return answer;
}

int main()
{
	std::setlocale(LC_CTYPE, "rus");

	int n;
	std::cin >> n;

	{
		std::cout << "НЕЭФФЕКТИВНО" << std::endl;
		double sum = 0.0;
		for (int i = 0; i <= n; ++i)
		{
			sum += std::exp(i); //sum = sum + exp;
		}
		std::cout << sum << std::endl;
		std::cout << std::endl;
	}

	{
		std::cout << "ЭФФЕКТИВНО" << std::endl;
		double sum = 0.0;
		double slag = 1;
		const double EXP = std::exp(1);
		for (int i = 0; i <= n; ++i)
		{
			sum += slag;
			slag *= EXP;
		}
		std::cout << sum << std::endl;
		std::cout << std::endl;
	}

	{
		std::cout << "ФАКТОРИАЛ" << std::endl;
		unsigned long long fact = 1;
		for (int i = 1; i <= n; ++i)
		{
			fact *= i;
			std::cout << fact << std::endl;

		}
		std::cout << std::endl;
	}

	{
		double x = 1.7;

		double sum = 0.0;
		const double EPS = 1e-3; //1 * 10^(-3) = 0.001

		double mult = 1;
		unsigned long long fact = 1;

		double slag;
		int i = 0;
		do {
			slag = mult / fact; //static_cast<double> (mult) / fact;
			sum += slag;
			i += 1;
			mult *= x;
			fact *= i;
		} while (slag >= EPS);//(std::fabs(slag) >= EPS);

		std::cout << "SUM(X) = " << sum << std::endl;
		std::cout << "EXP(X) = " << std::exp(x) << std::endl;
		std::cout << std::endl;
	}
	
	std::pair<double, int> something = get_result(5.7);
	std::cout << something.first << " " << something.second << std::endl;

	return 0;
}