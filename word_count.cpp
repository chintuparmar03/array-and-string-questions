#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

int main() {
    string c;
    cout<<"enter the text:";
    getline(cin,c);
  
    for(char& ch : c){
        ch = tolower(ch);
    }
    for (char& ch : c) {
        if (ch=='.'|| ch == ',' || ch == '!' || ch == '?' || ch == ';' || ch == ':' || ch == '"') {
            ch= ' ';
        }
    }
    
    string word;
    map<string,int>wordcount;
    stringstream ss(c);

    while(ss>>word){
        wordcount[word]++;
    }

    for(auto& pair : wordcount){
        cout<<pair.first<<":"<<pair.second<<endl;
    }
    
    return 0;
}