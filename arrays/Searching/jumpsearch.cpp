#include<iostream>
#include<cmath>
using namespace std;

int JumpSearch(int array[],int num,int size);

int main()
{
    int array[] = {1,3,5,7,9};
    int num{};
    int size{};
    int ind{};

    size = sizeof(array)/sizeof(array[0]);

    cout << "Enter the Number to search:";
    cin >> num;

    ind = JumpSearch(array,num,size);

    if(ind == -1)
    {
        cout << num << " is not present";
    }
    else
    {
        cout << num << " is present at index " << ind;
    }

    return 0;

}

int JumpSearch(int array[],int num,int size)
{
    int i{};
    int a{};
    int b{};
    int jump = sqrt(size);

    for(i=0;i<size;i += jump)
    {
        if(array[i] < num)
        {
            continue;
        }

        else if(array[i] > num)
        {
            a = i;
            break;
        }

        else
        {
            return i;
        }
    }

    b = a - jump;

    for(int j = b;j<a;j++)
    {
        if(array[j] == num)
        {
            return j;
        }
    }

    return -1;

}
