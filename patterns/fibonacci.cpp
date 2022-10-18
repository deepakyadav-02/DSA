#include<iostream>
using namespace std;

int Fibonaaci(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return Fibonaaci(n-1)+Fibonaaci(n-2);
    }
}

int main(){
    int i{};
    cin >> i;
    cout << Fibonaaci(i);
    return 0;
}