#include<iostream>
using namespace std;
int main()
{
  int arr[7];
  for(int i=0;i<7;i++){
    cin>>arr[i];
  }
   int sum=0;
  int  max=0;
  for(int j=0;j<7;j++){
    sum=sum+arr[j];
    if(sum>max){
      max=sum;
    }
    else{
      sum=0;
    }
  }
  cout<<max;
   return 0;
}