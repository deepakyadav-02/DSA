#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size = ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout << "Sorted array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}