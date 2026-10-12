#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// задание 1
	//float
	float a1 = 1000.0f;
	float b1 = 0.0001f;
	float d1 = pow(a1 + b1, 3);
	float d2 = pow(a1, 3);
	float d3 = d1 - d2;
	float d4 = 3 * a1 * pow(b1, 2);
	float d5 = pow(b1, 3);
	float d6 = 3 * pow(a1, 2) * b1;
	float d7 = d4 + d5 + d6;
	float result1 = d3 / d7;
	cout << "Результат1: " << result1 << endl;

	double a2 = 1000.0f;
	double b2 = 0.0001f;
	double d1_2 = pow(a2 + b2, 3);
	double d2_2 = pow(a2, 3);
	double d3_2 = d1_2 - d2_2;
	double d4_2 = 3 * a2 * pow(b2, 2);
	double d5_2 = pow(b2, 3);
	double d6_2 = 3 * pow(a2, 2) * b2;
	double d7_2 = d4_2 + d5_2 + d6_2;
	double result2 = d3_2 / d7_2;
	cout << "Результат2: " << result2 << endl;

	//задание 2
	int n;
	int m;
	cout << "Введите значение n: ";
	cin >> n;
	cout << "Введите значение m: ";
	cin >> m;

	int result_1 = n++ * m;
	cout << "1. " << result_1 << ", n = " << n << ", m = " << m << "\n";
	int result_2 = n++ < m;
	cout << "2. " << result_2 << ", n = " << n << ", m = " << m << "\n";
	int result_3 = n-- > m;
	cout << "3. " << result_3 << ", n = " << n << ", m = " << m << "\n";
	return 0;
}



