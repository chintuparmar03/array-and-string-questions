#include<iostream>
#include<algorithm>
using namespace std;
int main (){
    int arr[5]={10,15,8,3,9};
  int rank=1;
    sort(arr,arr+5);
    for(int i=4;i>=0;i--){
        cout<<"marks="<<arr[i]<<" "<<"rank="<<rank<<endl;
        rank++;
    }
    return 0;
}