#include<iostream>
using namespace std;
int main(){
    string stack[6];
    int j=5;
    string str[6]={"c","h","i","n","t","u"};

    for(int i=0;i<6;i++){
        stack[j]=str[i];
        j--;
    }
    for(int k=0;k<6;k++){
        cout<<stack[k];
    }
    
    return 0;
}