#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2;
    cout<<"enter the  sentence:";
    getline(cin,s1);
    cout<<"enter the sentence:";
    getline(cin,s2);
     string word;
     unordered_map<string,int>m1;
     stringstream ss1(s1);
     stringstream ss2(s2);
     while(ss1>>word){
        m1[word]++;
     }
     while(ss2>>word){
        m1[word]++;
     }
     for(auto p:m1){
        if(p.second>1){
            cout<<p.first<<" ";
        }
     }
    return 0;
}