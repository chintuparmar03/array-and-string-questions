#include<iostream>
using namespace std;
int main (){
    int n;
    int arr[10]={1,2,3,4,5,6,7,8,7,10};
    int count=1;
    for(int i=0;i<10;i++){
        if(arr[i]!=count){
            cout<<"the missing number is :"<<count;
        }
        count++;
    }
    return 0;
}