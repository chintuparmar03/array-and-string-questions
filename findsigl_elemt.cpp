#include<iostream>
using namespace std;
int main(){
  int arr[10]={1,2,3,1,2,4,5,4,7,7};
  int sgl,count=0;
  for(int i=0;i<10;i++){
    count=0;
    sgl=arr[i];
    for(int j=0;j<10;j++){
      
      if(arr[j]==sgl&&i!=j){
          count++;
          
      }
    }
    if(count==0){
            cout<<arr[i]<<" ";
          }
    
   
  }
  

  
  return 0;
}