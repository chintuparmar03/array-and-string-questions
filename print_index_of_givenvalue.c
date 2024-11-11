#include<stdio.h>
int main (){

    int arr[]={1,2,3,4,5};

    int n;
    printf("enter the elemnt to search :",n);
    scanf("%d",&n);

    for(int i=0;i<5;i++){
        if(arr[i]==n){
            printf(" it is present in the array at index : %d ",i );
        }
    }

    return 0;
}
   