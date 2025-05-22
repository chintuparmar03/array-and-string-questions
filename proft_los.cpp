#include<iostream>
using namespace std;
int main (){
    int arr[6]={7,1,5,3,6,4};
    int arr2[5];
    int sub=0; 
    int temp=0;
    for(int i=1;i<6;i++){
        if(arr[i]<arr[i+1]){
              sub=arr[i+1]-arr[i];
             
              arr2[i]=sub;
              temp=i;
            
        }
    }
     cout<<"day="<<arr[temp];
   cout<<"profit="<<arr2[sub];
    return 0;
}