#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;
   int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
  cout<<endl;
  for(int i=0;i<n;i++){
    if(arr[i]!=i+1){
        cout<<"the missing element is "<<i+1;
        break;
    }
  }
}