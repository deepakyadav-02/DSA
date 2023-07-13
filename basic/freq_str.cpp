#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    cin >> str;

    int count[26];

    for (int i = 0; i < 26; i++)

    {
        count[i] = 0;
        /* code */
    }

    for (int i = 0; i < str.size(); i++)
    {
        count[str[i] - 'a']++;
        /* code */
    }
    int maxf = 0;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > maxf)
        {
            maxf = count[i];
        }
        /* code */
    }
    cout << maxf << endl;
    for (int i = 0; i < 26; i++)
    {
        cout << count[i];
        /* code */
    }

    return 0;
}
