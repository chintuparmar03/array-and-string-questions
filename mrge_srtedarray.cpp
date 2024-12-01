#include<iostream>
using namespace std;
int main(){
       
       int arr1[]={1,2,3};
       int arr2[]={3,4,5};
       int arr3[6];
        int j=3;

       for(int i=0;i<3;i++){
         if(arr1[i]<=arr2[i]){
            arr3[i]=arr1[i];
            arr3[j]=arr2[i];
         }
         j++;
       
              
       }
       for(int i=0;i<6;i++){
        cout<<arr3[i]<<" ";
       }

    return 0;
}