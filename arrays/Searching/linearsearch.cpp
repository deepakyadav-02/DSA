#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array = ";
    cin >> n;

    cout << "Enter array elements:" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter Element to be searched = ";
    cin >> key;

    for (int j = 0; j < n; j++)
    {
        if (key == arr[j])
        {
            cout << "element is present at position " << j << endl;
        }
        else
        {
            j++;
        }
    }
    return 0;
}