#include<iostream>
using namespace std;
int main()
{
    string str={"135"};
    int odd=0;
     int odd1=0;
    for (int i=0;i<3;i++){
        odd1=str[i]%2;
        if(odd1!=0){
            odd=odd1;
        }
    }
    cout<<odd;
   return 0;
}