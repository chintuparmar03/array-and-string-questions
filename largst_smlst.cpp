#include<iostream>
using namespace std;
int main (){
    int arr[10]={1,3,4,7,2,8,10,6,12,4};
    int l=0;
    for(int i=0;i<10;i++){
        
        if(arr[i]>arr[i+1]){
           l=arr[i];
        }
        l=0;
    }
    cout<<arr[l]<<endl;
    return 0;
}