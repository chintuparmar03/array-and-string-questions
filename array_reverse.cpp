#include<iostream>
using namespace std;
int main(){ 
   int arr[5]={1,2,3,4,5};
   int temp=0;
   for(int i=1;i<=5;i++){
       temp=arr[i];
     for(int j=0;j<=5;j++){
          temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
     }
    
      }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    return 0;
 }