#include <iostream>
using namespace std;

int octaltodecimal(int n)
{
    int ans = 0;
    int x = 1;

    while (n > 0)
    {
        int a = n % 10;
        ans += a * x;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter octal no = ";
    cin >> n;
    cout << octaltodecimal(n) << endl;
    return 0;
}