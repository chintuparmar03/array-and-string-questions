
#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,1,0,1,1,1};
    int consi=0;
     for(int i=0;i<6;i++){
          if(arr[i]==1){
            consi=consi+1;
          }
          else{
            consi=0;
          }
     }
    
     cout<<consi;
}
