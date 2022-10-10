#include <bits/stdc++.h>
using namespace std;

void decimaltobinary(int n)
{
    int i = 0;
    int binary[32];

    while (n > 0)
    {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }
}

int main()
{
    int n;
    cout << "enter decimal no = ";
    cin >> n;
    decimaltobinary(n);
}