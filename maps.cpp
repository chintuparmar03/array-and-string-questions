#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s1;
 string s2;
 getline(cin,s1);
 getline(cin,s2);
 string word;
 map<string,int>m1;
stringstream ss1(s1);
stringstream ss2(s2);
while(ss1>>word){
    m1[word]++;
}
while(ss2>>word){
    m1[word]++;
}
 for(auto& pair:m1){
    if(pair.second>1){
        cout<<pair.first<<" ";
    }
 }
   return 0;
}