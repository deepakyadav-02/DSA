#include <iostream>
using namespace std;

void fibonacci(int num)
{

    int t1 = 0;
    int t2 = 1;
    for (int i = 1; i <= num; i++)
    {
        cout << t1 << endl;
        int next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
}

int main()
{
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}