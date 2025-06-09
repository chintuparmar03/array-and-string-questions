// program in C to print all unique elements in an array.
#include <stdio.h>

int main(){
    int n,i,j,count;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array:");

    for(i=0; i<n; i++)
    {
         printf("element :%d", i);
        scanf("%d",&a[i]);
    }
    printf("the unique elements in the array are:");
    for(i=0; i<n; i++)
    {   count =0;
        for(j=0; j<n; j++)
        {
            if(a[i] == a[j])
            count++;
        }
        if(count==1)
        printf("%d ", a[i]);
        }
    
    return 0;
}