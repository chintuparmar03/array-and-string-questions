#include<stdio.h>
int main(){
  int n;
  printf("enter the size of array : ",n);
  scanf("%d",&n);
  int arr[n];

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
  }
  int d;
  printf("enter the element to delete: ",d);
  scanf("%d",&d);
  
  int del=-1;
  for(int i=0;i<n;i++){
    if(arr[i]==d){
      del=i;
      break;
    }
     
  }
   
  for(int i=del;i<n-1;i++){
    arr[i]=arr[i+1];
  }
  for(int i=0;i<n-1;i++){
    printf("%d",arr[i]);
  }
   return 0;
}