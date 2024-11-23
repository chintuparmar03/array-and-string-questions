#include <iostream>
#include <algorithm>
using namespace std;
int main (){
  int arr[5]={1,4,3,2,5};
  int arr2[5]={6,10,8,9,7};
  int j=0;
  int arr3[10];
  
  for(int i=0;i<5;i++){
      arr3[i]=arr[i];
  }
  for(int i=5;i<10;i++){
      
      arr3[i]=arr2[j];
      j++;
  }
  sort(arr3,arr3+10);
  for(int i=0;i<10;i++){
      cout<<arr3[i]<<" ";
  }
  return 0;
}