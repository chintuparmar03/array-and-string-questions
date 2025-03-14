#include<iostream>
using namespace std;
int main(){
  int arr[10]={1,2,3,4,6,8,79,25,64};
  int n;
  cout<<"enter the key"<<endl;
  cin>>n;
  for(int i=0;i<10;i++){
    if(arr[i]==n){
        cout<<"element found at index "<<i;
    }
  }
  



    return 0;
}