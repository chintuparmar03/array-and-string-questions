#include<iostream>
using namespace std;
int main()
{
    string str={"1325"};
     string odd1="";
    for (int i=0;i<3;i++){
        if(str[i]%2!=0){
            odd1 += str[i];
        }
    }
    for(int i=0;i<3;i++){
        cout<<odd1[i];
    }
    return 0;

}