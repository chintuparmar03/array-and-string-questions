#include<iostream>
using namespace std;
int main()
{
   string str="loveleetcode";
   char uni;
   int count=0;

   int size= str.length();
   for(int i=0;i<size;i++){
    count=0;
    for(int j=0;j<size;j++){
        if(str[i]==str[j]){
            count=count+1;
        }
    }
    if(count==1){
           uni=str[i];
           break;
    }
   }
   cout<<uni;

     return 0;
}