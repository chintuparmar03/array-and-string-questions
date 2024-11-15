#include<iostream>
using namespace std;
int main (){

    int arr[10]={1,3,4,2,4,5,7,9,6,67};
    int d,temp,count=0;
    cout<<"enter the no to search :";
    cin>>d;
    for(int i=0;i<10;i++){
        if(arr[i]==d){
            temp=i;
            count++;
        } 
    }
    if(count>0){
        cout<<"element fount at index "<<temp;
    }
    else{
        cout<<"element not found";
    }
      
    return 0;
}