#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
     int j=size-1,i=0;
      char temp=0;
      
   
         while (i!=j&&i<j){
         temp=arr[j];
         arr[j]=arr[i];
        arr[i]=temp;
         i++;
         j--;
         
      }
      for(int i=0;i<size;i++){
        cout<<arr[i];
      }
      
   return 0;
}