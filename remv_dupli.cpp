#include<iostream>
using namespace std;
int main(){

    int arr[6]={1,2,2,2,3,3};
    int d;

    for(int i=0;i<6;i++){
          if(arr[i]==arr[i+1]){
             d=i;
           
          }
    }
    for(int i=d;i<6-1;i++){
        arr[i]=arr[i+1];
    }

    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
  return 0;
}