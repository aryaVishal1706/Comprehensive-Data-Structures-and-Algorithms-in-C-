/*
IN this the string is having x or any charaacter
for example string s----> axxbdxcefxhix

so the ans --> abdcefhihixxxx
     */

#include <iostream>
using namespace std;

string moveallX(string s){
     if(s.length()==0) return "";

     char ch = s[0];
     // Go to at the last of string character
     string ans = moveallX(s.substr(1));
     // then check if it is X or not if it is x then add at ends
     if(ch == 'x' ){
          return ans + ch;
     }
     return ch+ans;
}
int main()
{
     cout<< moveallX("axxbdxcefxhix")<<endl;
     return 0;
}