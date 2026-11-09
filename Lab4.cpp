#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int n = 6, m = 5;
void del(int a[n][m], int k) {
    for (int i = k; i < n - 1; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = a[i + 1][j];
    for (int j = 0; j < m; j++)
        a[n - 1][j] = 0;
}
int main() {
    srand(time(0));
    int M[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            M[i][j] = rand() % 21 - 10;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << M[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
    for (int k = 3; k >= 1; k--)
        del(M, k);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << M[i][j] << "\t";
        cout << endl;
    }
    return 0;
}
