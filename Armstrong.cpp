#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int orignal = n;
    while (n > 0)
    {
        int last = n % 10;
        sum = sum + pow(last, 3);
        n = n / 10;
    }
    if (sum == orignal)
    {
        cout << "number is armstrong" << endl;
    }
    else
    {
        cout << "numer is not armstrong" << endl;
    }
    return 0;
}