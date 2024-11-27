#include<iostream>
#include<algorithm>
using namespace std;

int main(){
     int arr[10]={75,92,87,92,68,79,81,65,92,73};
     int arr2[3];
     int j=0;
    //   for (int i=0;i<10;i++){
    //     cin>>arr[i];
    //  }
     sort(arr,arr+10);
     for(int i=9;i>=5;i--){
        
        if(arr[i]>arr[i-1]){
            arr2[j]=arr[i];
            j=j+1;
        }

     }
     for(int i=0;i<3;i++){
         cout<<i+1<<"st position score:"<<arr2[i]<<endl;
     }
   
     return 0;
}
     



