#include<iostream>
#include<map>
using namespace std;
int main(){
    int size;
    cout<<"enter the size:";
    cin>>size;
    int arr[size];
    cout<<"enter the elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int n=0,middle=0;
    map<int ,int>m1;
    for(int i=0;i<size;i++){
        n=0;
        middle=0;
        n=arr[i]/10;
        middle=n%10;
         m1.insert({middle,arr[i]});
    }
    cout<<"acending order :";
    for(auto& p:m1){
        cout<<p.second<<" ";
    }
    return 0;
}