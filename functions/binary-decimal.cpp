#include <iostream>
using namespace std;

int binarytodecimal(int n)
{
    int x = 1;
    int ans = 0;
    while (n > 0)
    {
        int a = n % 10;
        ans += a * x;
        x = 2 * x;
        n = n / 10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter binary no = ";
    cin >> n;
    cout << binarytodecimal(n) << endl;
}