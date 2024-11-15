#include<iostream>
using namespace std;
int main(){
  int arr[5]={1,2,3,1,2};
  int temp;
  for(int i=0;i<=5;i++){
    for(int j=1;j<5;j++){
        if(arr[j]==arr[i]){
              cout<<arr[j];
        }
        
        
    }
  }

  
  return 0;
}