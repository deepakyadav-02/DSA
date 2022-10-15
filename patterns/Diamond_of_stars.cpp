
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int i=1;
    int space =N/2;
    while(i<=((N/2)+1))
    {
        int sp = space;
        while(sp>=1)
        {
            cout<<" ";
        	sp--;
        }
        int j=1;
        while(j<=i)
        {
            cout<<"*";
        	j++;
        }
        j=i-1;
        while(j>=1)
        {
            cout<<"*";
        	j--;
        }
        cout<<endl;
        i++;
        space--;
    }
    i=(N/2);
	space = 1;
    while(i>=1){
        int sp = space;
        while(sp>0)
        {
            cout<<" ";
        	sp--;
        }
        int j=1;
        while(j<=i)
        {
            cout<<"*";
        	j++;
        }
        j=i-1;
        while(j>=1)
        {
            cout<<"*";
        	j--;
        }
        cout<<endl;
        i--;
        space++;
    }
}
