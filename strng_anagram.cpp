#include<iostream>
using namespace std;
int main()
{
    string str,str2;
    
    int count=0;
    cout<<"enter the word : ";
    cin>>str;
    cout<<"enter the other word :";
    cin>>str2;
    int size= str.size();

    for(int i=0;i<size;i++){
          for(int j=0;j<size;j++){
            if(str[i]==str2[j]){
                count++;
            }
          }
    }
    if(count==size){
        cout<<"it is anagram";
    }
    else{
        cout<<"it is not an anagram";
    }

   return 0;
}