#include<iostream>
#include<vector>
#include <string>
#include <map>
#include <sstream>
using namespace std;
int main()
{
    vector<string> s;
   cout<<"enter the text :";
      for(int &p:s){
        getline(cin,*p);
      }
   return 0;
}