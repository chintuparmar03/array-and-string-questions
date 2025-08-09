#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[10]={0,0,8,0,0,9,0,0,3,0};
  int pos=0;
  int temp=0;
  for(int i=0;i<10;i++){
    if (arr[i]!=0){
        temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
        pos++;
    }
  }
  for(int i=0;i<10;i++){
    cout<<arr[i];
  }
   return 0;
}