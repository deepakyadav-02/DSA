#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = ((log2(n)) + 1);
    int count = 0;
    for (int i = 0; i < k; i++)
    {
        if ((n & (1 << i)) != 0)
        {
            count++;
        }
        /* code */
    }
    cout << count << endl;

    return 0;
}