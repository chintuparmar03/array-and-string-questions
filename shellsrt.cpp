#include<iostream>
using namespace std;
int main()
{
    int arr[10]={77,62,14,9,30,21,80,25,70,55};
    int gap;
    int n=10;
    gap=n/2;
    int temp=0;
    while(gap>0){
    for(int i=gap;i<n;i++ ){
        temp=arr[i];
        int j=i;
        while(j>=gap&& arr[j-gap]>temp){
           arr[j]=arr[j-gap];
           j=j-gap;
        }
       arr[j]=temp;
    }
     gap=gap/2;
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}