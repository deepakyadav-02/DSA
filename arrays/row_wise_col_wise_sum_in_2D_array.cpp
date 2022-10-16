  #include <iostream>
using namespace std;
  
void printRowSum(int arr [][3], int i , int j){
     for(int i=0; i<3; i++){
         int sum =0;
         for(int j=0; j<3; j++){
             
             sum += arr[i][j];
         }
         cout<<" Row wise sum is:  "<< sum<<endl;
     }
    
    
}

void printColSum(int arr [][3], int i , int j){
     for(int j=0; j<3; j++){
         int sum =0;
         for(int i=0; i<3; i++){
             
             sum += arr[i][j];
         }
         cout<<" col wise sum is:  "<< sum<<endl;
     }
    
    
}



int main()
{
     int arr[3][3];
     
     for(int i=0; i<3; i++){
         for(int j=0; j<3; j++){
             cin>> arr[i][j];
         }
     }
     
     for(int i=0; i<3; i++){
         for(int j=0; j<3; j++){
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
     }
     
      printRowSum(arr, 3,3);
      printColSum(arr,3,3);
     

    return 0;
}
