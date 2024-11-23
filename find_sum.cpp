#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,4,5};
    int n;
    cout<<"enter the sum :";
    cin>>n;

    for(int i=0;i<6;i++){
        if(arr[i]+arr[i+1]==n){
            cout<<arr[i]<<" "<<arr[i+1];
            break;
        }
    }
   return 0;
}