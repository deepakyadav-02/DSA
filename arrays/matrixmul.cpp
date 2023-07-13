#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;

    // 1st matrix
    cout << "enter the size of 1st array: " << endl;
    cin >> n >> a;

    int arr1[n][a];
    cout << "enter elements of 1st array" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a; j++)

        {
            cin >> arr1[i][j];
        }
    }
    cout << "1st matrix:" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a; j++)

        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    // 2nd matrix
    cout << "enter the size of 2st array: " << endl;
    cin >> a >> m;
    int arr2[a][m];
    cout << "enter elements of 2st array" << endl;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < m; j++)

        {
            cin >> arr2[i][j];
        }
    }
    cout << "2st matrix:" << endl;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < m; j++)

        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    // multiplication of two matrix
    int ans[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)

        {
            ans[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < a; k++)
            {
                ans[i][j] += arr1[i][k] * arr2[k][j];
                /* code */
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}