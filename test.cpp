#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, value;
    cin >> n >> value;

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[n];
        /* code */
    }
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == value)
        {
            count++;
        }
        /* code */
    }

    cout << n - count << endl;
    return 0;
}