#include <bits/stdc++.h>

using namespace std;

void Pow(int n)
{
    if ((n & n - 1) == 0)
    {
        cout << "yes it is power of 2" << endl;
    }
    else
        cout << "no it is not power of 2" << endl;
}

int main()
{
    int n;

    cin >> n;
    Pow(n);

    return 0;
}