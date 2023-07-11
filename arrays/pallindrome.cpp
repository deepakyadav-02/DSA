#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr;
    bool check = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[n - 1 - i])
        {
            continue;
        }
        else
        {
            check = 0;
            break;
        }

        /* code */
    }
    if (check)
    {
        cout << "yes it is pallindrome" << endl;
    }
    else
        cout << "it is not" << endl;

    return 0;
}