#include <bits/stdc++.h>
using namespace std;

void decimaltohexadecimal(int n)
{
    string hexa[32];
    int i = 0;
    while (n > 0)
    {
        if (n % 16 <= 9)
        {
            hexa[i] = to_string(n % 16);
            i++;
            n /= 16;
        }
        else
        {
            hexa[i] = 'A' + (n % 16) - 10;
            i++;
            n /= 16;
        }
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << hexa[j];
    }
}
int main()
{
    int n;
    cout << "enter decimal no = ";
    cin >> n;
    decimaltohexadecimal(n);
    return 0;
}
