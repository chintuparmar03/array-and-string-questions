#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[6]={0,2,0,0,3,5};
   int  temp=0;
    int d=0;
    sort(arr,arr+6);
    for(int i=0;i<6;i++){
      if(arr[i]==0){
        d=d+1;
        
      }
    }
    
     for(int i=1;i<=d;i++){
      for(int j=0;j<6;j++){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
      temp=0;
     }
     for(int i=0;i<6;i++){
      cout<<arr[i];
     }
  
    return 0;
    }