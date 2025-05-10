#include<iostream>
using namespace std;
int main()
{
  int arr[5]={1,2,3,4,5};
  int size=5;
  int temp=0;
  int i=0;
  int j=size-1;
  for(int k=0;k<size/2;k++){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;

  }

  for(int i=0;i<5;i++){
    
    cout<<arr[i]<<" ";
  }
   return 0;
}