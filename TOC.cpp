#include<iostream>
#include<map>
using namespace std;
int main(){
    int size;
    bool string_in_ab=true;
    cout<<"enter the finite size:";
    cin>>size;
    char str[size];
     cin>>str;
     map<char,int>mapp;
     for(auto p:str){
        mapp[p]++;
     }
     for(auto p:mapp){
        if(p.first!='a'&&p.first!='b'){
            string_in_ab=false;
        }
     }
     if(string_in_ab==false){
         cout<<"valid inputs are a and b only!\n";
     }
    else if(mapp.size()==2&&str[0]=='a'&&str[1]=='b'){
        string_in_ab=true;
     }
     else{
        cout<<"the string should start with a and b only!\n";
        string_in_ab=false;
     }
     if(string_in_ab){
           cout<<"accepted!";
     }
     else{
        cout<<"rejected!";
     }
     
    return 0;
}