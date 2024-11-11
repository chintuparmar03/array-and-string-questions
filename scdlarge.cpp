#include<iostream>
using namespace std;
int main(){
   
   int arr[5]={1,2,3,4,5};
    int max=arr[0];
    int max2=arr[0];

    for(int i=1;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=1;i<5;i++){
        if(arr[i]>max2&&arr[i]!=max){
            max2=arr[i];
        }
    }
    cout<<"the first largest number :"<<max<<endl;
    cout<<"the second laegest number :"<<max2;

   return 0;
}