#include<iostream>
using namespace std;
int main()
{
    string str= "CHINTU";
    
    
     int j=5,i=0;
      char temp=0;
      
   
         while (i!=j&&i<j){
         temp=str[j];
         str[j]=str[i];
        str[i]=temp;
         i++;
         j--;
         
      }
        cout<<str;
      
   return 0;
}