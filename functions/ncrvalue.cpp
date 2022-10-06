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

int main()
{
    int n, r;
    cin >> n >> r;
    int numer = fac(n);
    int a = n - r;
    int dec = fac(r) * fac(a);

    int ans = numer / dec;
    cout << ans << endl;
    return 0;
}
