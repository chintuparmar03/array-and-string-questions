#include<stdio.h>
int main(){

    int n;
     printf("enter the index of element to delete: ",n);
     scanf("%d",&n);

     int arr[5]={1,2,3,4,5};

     for(int i=n;i<5-1;i++){
         
            arr[i]=arr[i+1];

            
          }
          arr[5-1]=0;
     
     for(int i=0;i<5;i++){
        printf("%d",arr[i]);
     }
     return 0;
}
