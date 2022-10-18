#include<iostream>
using namespace std;

int InterpolationSearch(int array[],int num,int low,int high)
{
    int pos = low + ((num-array[low])*((double)(high-low)/(array[high]-array[low])));

    while(low<=high && num>=array[low] && num <=array[high])
    {
        if(low == high)
        {
            if(array[low] == num)
            {
                return low;
            }

            return -1;
        }

        if(array[pos] == num)
        {
            return pos;
        }

        if(array[pos] < num)
        {
            return InterpolationSearch(array,num,pos+1,high);
        }

        if(array[pos] > num)
        {
            return InterpolationSearch(array,num,low,pos-1);
        }
    }

    return -1;

}

int main()
{
    int array[] = {1,2,3,4,5,6};
    int num{};
    int size{};
    int ind{};

    size = sizeof(array)/sizeof(array[0]);

    cout << "Enter the Number to Search:";
    cin >> num;

    ind = InterpolationSearch(array,num,0,size);

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
