#include <bits/stdc++.h>
using namespace std;

void check(int n)
{
    if ((n & (1 << 0)) != 0)
    {
        cout << "no it is not factor of 2" << endl;
    }
    else
    {
        cout << "yes it is factor of 2" << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    check(n);
    /* code */
    return 0;
}
