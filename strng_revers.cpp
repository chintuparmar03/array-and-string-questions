#include<iostream>
using namespace std;
int main()
{
    string str= "rishi";
    int size = str.size();
    cout<<size;
     int j=4,i=0;
      char temp;
   
         while (i!=j){
         temp=str[j];
         str[j]=str[i];
        str[i]=temp;
         i++;
         j--;
         
      }
        cout<<str;
      
   return 0;
}