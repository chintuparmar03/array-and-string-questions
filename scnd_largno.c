#include<stdio.h>
int main(){
   
    int arr[5];
     for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
     }
    int max=arr[0];
    int max2=-1;
    for(int i=1;i<5;i++){

           if(arr[i]>max){
              max2=max;
              max=arr[i];
           }   
         else if(arr[i]>max2&& arr[i]!=max){
            max2=arr[i];
         }
    }
    printf(" the first largest no :%d\n",max);
    if(max2==-1){
        printf("second largest is not there");
    }
    else{
        printf("the second largest no :%d",max2);
    }
   
     
    return 0;
}