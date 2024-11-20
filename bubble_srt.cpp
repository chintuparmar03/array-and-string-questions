#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,1,9,3,7,4,8,10,5,6};
    int count=1;
    int temp=0;
    while(count<10-1){
        for(int i=0;i<10-count;i++){
            if(arr[i+1]<arr[i]){
                 temp=arr[i];
                 arr[i]=arr[i+1];
                 arr[i+1]=temp;
            }
        }
        count++;
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}