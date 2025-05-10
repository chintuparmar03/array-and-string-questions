
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={0,1,0,1,1,0};
    int consi=0;
    int maxi=0;
     for(int i=0;i<6;i++){
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
