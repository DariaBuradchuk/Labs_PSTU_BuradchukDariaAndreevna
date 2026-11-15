#include <iostream>
#include <clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int x, y;
    cout << "Введите два целых числа: ";
    cin >> x >> y;
    cout << "Разность: " << x - y << endl;
    double r1, compl1, r2, compl2;
    cout << "Введите действительную и мнимую части первого комплексного числа: ";
    cin >> r1 >> compl1;
    cout << "Введите действительную и мнимую части второго комплексного числа: ";
    cin >> r2 >> compl2;
    double resultR = r1 - r2;
    double resultCompl = compl1 - compl2;
    cout << "Разность комплексных чисел: " << resultR << (resultCompl < 0 ? " - " : " + ") << (resultCompl < 0 ? -resultCompl : resultCompl) << "i" << endl;
    return 0;
}