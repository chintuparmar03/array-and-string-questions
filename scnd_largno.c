#include<stdio.h>
int main(){
   
    int arr[5]={1,6,3,4,5};
    int max=arr[0];
    int max2=arr[0];
    for(int i=1;i<5;i++){
           if(arr[i]>max){
              max=arr[i];
           }   
    }

    for( int j=1;j<5;j++){
        if(arr[j]>max2 && arr[j]!=max){
            max2=arr[j];
        }
    }
     printf(" the first largest no :%d\n",max);
      printf("the second largest no :%d",max2);

    return 0;
}