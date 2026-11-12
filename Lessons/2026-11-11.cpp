/*

#include <iostream>

int getMiddle(int, int*);

int main()
{
	int k;

	std::cin >> k;

	int mid = 0;

	std::cout << mid << std::endl;

	if (getMiddle(k, &mid) != 0)
	{
		std::cout << "Error! Input odd number!" << std::endl;
		return 0;
	}

	std::cout << mid << std::endl;

	return 0;
}

int getMiddle(int size, int* adr)
{
	if (size < 0)
	{
		return -1;
	}

	if (size == 0)
	{
		return -2;
	}

	if (size % 2 == 0)
	{
		return -3;
	}

	*adr = size / 2;
	return 0;
}

*/

/*
#include <iostream>

void print(int* a, int* b)
{
	std::cout << "address of x = " << (int)a << std::endl;
	std::cout << "address of y = " << (int)b << std::endl;
}

int main(){
	
	int x = 7;
	int y = 12;

	print(&x, &y);

	return 0;
}

*/