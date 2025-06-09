#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int m=9;
    int sum=0;
    cout<<"enetr the number for series:";
    cin>>n;
    int p=pow(10,n);
    p=p-1;
 for(int i=0;i<n;i++){
      for(int j=0;j<i+1;j++){
        cout<<m;
      }
       if(i<4){
         cout<<"+";
        }
    }
    cout<<endl;
   for(int i=0;i<n;i++){
       sum=sum+p;
       p=p/10;
   }
   cout<<"sum:"<<sum;
    return 0;
}