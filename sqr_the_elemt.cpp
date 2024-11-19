#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main (){
    int arr[5]={3,6,7,9,2};
     int arr2[5];
     int temp=0;
    for(int i=0;i<5;i++){
        temp=pow( arr[i],2);
        arr2[i]= temp;
        temp=0;
    }
    sort(arr2,arr2+5);
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}