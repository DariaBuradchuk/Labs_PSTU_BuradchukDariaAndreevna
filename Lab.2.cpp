#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int sum = 0;

	for (int i = 21; i < 100; ++i) 
	{
		if (i % 3 == 0) 
		{
			sum += i;
		}
	}
	cout << "Сумма чисел = " << sum << endl;

	return 0;
}