#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// задание 1
	//float
	cout << "Задание 1." << endl;
	float a1 = 1000.0f;
	float b1 = 0.0001f;
	float d1 = pow(a1 + b1, 3);
	cout << "float:" << endl;
	cout << "Результат действия 1: " << d1 << endl;
	float d2 = pow(a1, 3);
	cout << "Результат действия 2: " << d2 << endl;
	float d3 = d1 - d2;
	cout << "Результат действия 3: " << d3 << endl;
	float d4 = 3 * a1 * pow(b1, 2);
	cout << "Результат действия 4: " << d4 << endl;
	float d5 = pow(b1, 3);
	cout << "Результат действия 5: " << d5 << endl;
	float d6 = 3 * pow(a1, 2) * b1;
	cout << "Результат действия 6: " << d6 << endl;
	float d7 = d4 + d5 + d6;
	cout << "Результат действия 7: " << d7 << endl;
	float result1 = d3 / d7;
	cout << "Результат выражения (float): " << result1 << endl;
	cout << endl;
	cout << "double:" << endl;
	double a2 = 1000.0f;
	double b2 = 0.0001f;
	double d1_2 = pow(a2 + b2, 3);
	cout << "Результат действия 1: " << d1_2 << endl;
	double d2_2 = pow(a2, 3);
	cout << "Результат действия 2: " << d2_2 << endl;
	double d3_2 = d1_2 - d2_2;
	cout << "Результат действия 3: " << d3_2 << endl;
	double d4_2 = 3 * a2 * pow(b2, 2);
	cout << "Результат действия 4: " << d4_2 << endl;
	double d5_2 = pow(b2, 3);
	cout << "Результат действия 5: " << d5_2 << endl;
	double d6_2 = 3 * pow(a2, 2) * b2;
	cout << "Результат действия 6: " << d6_2 << endl;
	double d7_2 = d4_2 + d5_2 + d6_2;
	cout << "Результат действия 7: " << d7_2 << endl;
	double result2 = d3_2 / d7_2;
	cout << "Результат выражения: " << result2 << endl;

	//задание 2
	int n;
	int m;
	cout << endl;
	cout << "Задание 2." << endl;
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
