#include<stdio.h>
int main(){
    int n;
    printf("enter then element to insert: ",n);
    scanf("%d",&n);

    int pos;
    printf("enter the index for insertion: ",pos);
    scanf("%d",&pos);

   int arr[5]={1,2,3,4,5};

   arr[pos]=n;

    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
   

   return 0;
}