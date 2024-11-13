#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,0,0,3,5};
    int j=0;
    for(int i=0;i<6;i++)
    if(arr[i]==0){
        arr[5-j]=arr[i];
        j++;
    }
  for(int i=0;i<6;i++){
    cout<<arr[i];
  }
    return 0;
    }