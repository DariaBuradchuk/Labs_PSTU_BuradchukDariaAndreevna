#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 10, k = 10;
    double a = 0.1, b = 0.8, e = 0.0001, s = (b - a) / k;

    for (double x = a; x <= b; x += s) 
    {
        
        double s_n = 0.0; 
        for (int i = 1; i <= n; i++) 
        {
            s_n += pow(-1, i + 1) * pow(x, 2 * i) / ((2 * i) * (2 * i - 1.0));
        }
        double s_e = 0.0;
        double t = (x * x) / 2.0; 
        for (int i = 1; fabs(t) >= e; i++) 
        {
            s_e += t;  
            t = -t * (x * x) * (2.0 * i - 1.0) / ((2.0 * i + 2.0) * (2.0 * i + 1.0));
        }
        double y = x * atan(x) - log(pow(1 + pow(x, 2), 0.5));
        cout << "x= " << x << " | s_n= " << s_n << " | s_e= " << s_e << " | y= " << y << endl;
    }

    return 0;
}