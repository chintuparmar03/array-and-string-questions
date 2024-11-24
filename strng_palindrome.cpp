#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"enter the word: ";
    cin>>str;
    string str2=str;
    int size = str.size();
    
     int j=size-1,i=0;
      char temp=0;
      
   
         while (i!=j&&i<j){
         temp=str[j];
         str[j]=str[i];
        str[i]=temp;
         i++;
         j--;
         
      }
        if(str2==str){
            cout<<"it is a palindrome";
        }
        else{
            cout<<"it not a palindrome";
        }
      
   return 0;
}