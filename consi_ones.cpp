
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"enter the size:";
  cin>>n;
    int arr[n];
    cout<<"enter the element:";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int consi=0;
    int maxi=0;
     for(int i=0;i<n;i++){
          if(arr[i]==1){
            consi=consi+1;
            maxi=max(maxi,consi);
          }
          else{
            consi=0;
          }
     }
     cout<<maxi;
}
