#include <iostream>
using namespace std;

int factorial(int num)
{
    int factorial = 1;

    for (int i = 2; i <= num; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int main()
{
    int n;
    cin >> n;

    cout << factorial(n) << endl;

    return 0;
}