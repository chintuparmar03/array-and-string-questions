#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string str;
    cout<<"enter  the string :";
    getline(cin,str);
    map<char, int> m1;
    int a=0;
    multimap<int, char, greater<int>> sort;
    for(auto & p:str){
        m1[p]++;
    }
    for (const auto& pair : m1) {
        sort.insert({pair.second, pair.first});
    }
    cout<<"the required string is: ";
    for (const auto& pair : sort) {
       a=pair.first;
       while(a--){
        cout<<pair.second;
       }
    }
    return 0;
}