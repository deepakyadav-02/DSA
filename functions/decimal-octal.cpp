#include <bits/stdc++.h>
using namespace std;

void decimaltoOctal(int n)
{
    int octal[32];

    int i = 0;
    while (n > 0)
    {
        octal[i] = n % 8;
        n /= 8;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << octal[j];
    }
}
int main()
{
    int n;
    cout << "enter decimal no = ";
    cin >> n;

    decimaltoOctal(n);
    return 0;
}