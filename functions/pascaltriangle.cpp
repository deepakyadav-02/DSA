#include <iostream>
using namespace std;

int fac(int num)
{
    int factorial = 1;
    for (int i = 2; i <= num; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int ans(int n, int r)
{
    int s = n - r;
    int ans = fac(n) / (fac(r) * fac(s));
    return ans;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ans(i, j);
        }
        cout << endl;
    }
    return 0;
}