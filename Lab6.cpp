#include <iostream>
using namespace std;

int main() {
    char s[256];
    gets(s);
    int i = 0, st = 0, ct = 0;
    while (s[i] != '.') 
    {
        if (s[i] >= '0' && s[i] <= '9')
            ct++;
        if (s[i] == ' ' || s[i + 1] == '.') 
        {
            int c = i;
            if (s[i] == ' ')
                c = i - 1;
            if (ct == 1) 
            {
                for (int j = st; j <= c; j++)
                {
                    cout << s[j];
                    cout << endl;
                }
            }
            ct = 0;
            st = i + 1;
        }
        i++;
    }
    return 0;
}