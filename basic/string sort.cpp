#include <bits/stdc++.h>
using namespace std;

int main()
{

    // SORTING STRING IN DESCENDING ORDER
    string str = "548398";
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = i + 1; j < str.size(); j++)
        {
            if (str[j] >= str[i])
            {
                int temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
        }
    }
    cout << str << endl;

    return 0;
}