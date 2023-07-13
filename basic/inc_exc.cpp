#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int c5 = 0;
    int c7 = 0;
    int c35 = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            c5++;
        }
        else if (i % 7 == 0)
        {
            c7++;
        }
        else if (i % 35 == 0)
        {
            c35++;
        }
    }
    int ans = c5 + c7 - c35;
    cout << ans << endl;

    return 0;
}