#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[10]={1,0,8,0,0,9,0,0,3,0};
  sort(arr,arr-10);
  for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
  }
   return 0;
}