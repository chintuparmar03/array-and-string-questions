#include<stdio.h>
int main(){
    
    int arr[5]={3,5,7,4,2};
   int max=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
           }            
        }
       printf("%d",max);
    }
      