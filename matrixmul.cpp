#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;

    // 1st matrix
    cout << "enter the size of 1st array: " << endl;
    cin >> n >> m;

    int arr[n][m];
    cout << "enter elements of 1st array" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)

        {
            cin >> arr[i][j];
        }
    }

    // 2nd matrix
    cout << "enter the size of 2st array: " << endl;
    cin >> a >> b;
    int arr[a][b];
    cout << "enter elements of 2st array" << endl;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)

        {
            cin >> arr[i][j];
        }
    }

    // multiplication of two matrix

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x = arr[i][j];
        }
    }

    return 0;
}