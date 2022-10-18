#include<iostream>
#include<cmath>
using namespace std;

int BinarySearch(int array[],int num,int low,int high)
{
    int mid{};

    while(high >= low)
    {

        mid = low + ((high-low)/2);

        if(array[mid] == num)
        {
            return mid;
        }

        if(array[mid] < num)
        {
            return BinarySearch(array,num,mid + 1,high);
        }

        if(array[mid] > num)
        {
            return BinarySearch(array,num,low,mid-1);
        }
    }

    return -1;
}

int ExponentialSearch(int array[],int num,int size)
{
    int i{1};

    if(array[0] == num)
    {
        return 0;
    }

    while(i<size && array[i] <=num)
    {
        i *= 2;
    }

    return BinarySearch(array,num,i/2,min(i, size-1));
}

int main()
{
    int array[] = {1,2,3,4,5};
    int num{};
    int size{};
    int ind{};

    size = sizeof(array)/sizeof(array[0]);

    cout << "Enter the number to search:";
    cin >> num;

    ind = ExponentialSearch(array,num,size);

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
