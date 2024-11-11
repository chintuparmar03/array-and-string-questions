#include<stdio.h>
int main(){
    int arr[5]={1,2,7,4,5};
    int   check=arr[1];
    int count=0;
    for(int i=0;i<5-1;i++){
        if (arr[i]>arr[i+1]){
            count++;
        }
        }
      
    
    if(count>0){
        printf("it is not sorted");
    }
    else {
        printf("it is sorted");
    }

    return 0;
}