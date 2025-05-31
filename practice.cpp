#include<iostream>
using namespace std;
int main(){
 char ch;
 cout<<"enetr the character:";
 cin>>ch;
 int CH=(int)ch;

 if(CH>=48 && CH <= 57)
  cout<<"it is a digit ";
 else if(CH >= 65 && CH<= 90 || CH>=97 && CH <= 122)
  cout<<"it is alphabet";
  else if(CH>=32 && CH<= 47 || CH >= 58 && CH <= 64 || CH >= 91 && CH <= 91)
   cout<<"it is a special character"; 
 else
  cout<<"not valid";
 
    return 0;
}