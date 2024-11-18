#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int n;
    cout<<"enter the sum :";
    cin>>n;
  int arr[5]={1,4,3,2,5};
  for(int i=0;i<5;i++)
     if(arr[i]+arr[i+1]==n){
         cout<<arr[i]<<" "<<arr[i+1]<<endl;
     }
 
  return 0;
}