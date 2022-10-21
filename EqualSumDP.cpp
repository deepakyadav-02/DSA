#include<iostream>
using namespace std;

bool EqualSum(int arr[],int n,int num){
    if(num==0){
        return true;
    }
    if(n==0){
        return false;
    }

    if(arr[n-1] <= num){
        return (EqualSum(arr,n-1,num-arr[n-1])||EqualSum(arr,n-1,num));
    }
    else if(arr[n-1] > num){
        return EqualSum(arr,n-1,num);
    }

    return false;
}

int main(){
    int arr[] = {6,7,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum{};
    int i{};
    for(i=0;i<n;i++){
        sum += arr[i];
    }

    if(sum%2!=0){
        cout << "0";
        return 0;
    }

    cout << EqualSum(arr,n,sum/2);
}
