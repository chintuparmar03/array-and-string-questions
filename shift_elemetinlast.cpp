#include<iostream>
using namespace std;
int main (){
     

     int arr[5]={1,2,3,4,5};
     int d;
     cout<<"enter the digit to swap :";
     cin>>d;
    int temp=0; 
    for(int j=1;j<=d;j++){
     for(int i=0;i<=5;i++){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
          
     }
     temp=0;
    }
     for(int i=0;i<5;i++){
        
        cout<<arr[i];
     }

    return 0;
}