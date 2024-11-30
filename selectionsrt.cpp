#include<iostream>
using namespace std;
int main()
{
    int arr[6]={10,5,8,2,9,4};
    int temp=0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<6;j++){
            
            if(arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int k=0;k<6;k++){
        cout<<arr[k]<<" ";
    }
   return 0;
}