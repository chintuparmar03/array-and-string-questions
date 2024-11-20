#include<iostream>
using namespace std;
int main()
{
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int start=0;
    int end=10;
    int mid,key;
    cout<<"enter the element :";
    cin>>key;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==key){
            cout<<"index="<<mid;
            break;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            cout<<"element not found";
        }
    }

   return 0;
}