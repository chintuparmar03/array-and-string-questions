#include<iostream>
using namespace std;
int main()
{
    int arr[10]={8,2,3,4,15,6,7,1,9,5};

    int sml=1;
    int larg=0;

    for(int i=0;i<10;i++){
        if(arr[i]>arr[i+1]&&arr[i]>larg){
            larg=arr[i];
          
        }
        if(arr[i]<arr[i+1]&&arr[i]<=sml){
            sml=arr[i];
        }
    }
    cout<<"largest no : "<<larg<<endl<<"smallest no : "<<sml;
   return 0;
}