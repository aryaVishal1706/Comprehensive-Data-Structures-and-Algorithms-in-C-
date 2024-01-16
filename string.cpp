#include<iostream>
using namespace std;

int main(){
     // string s;
     // cin>> s;
     // cout << s;
     // string str(5,'n');
     // cout<<str;
     // string str = "Hello";
     // cout<<str;

     // string str;
     // getline(cin,str); //--> use for sentence inputs 
     // take a string with spaces  
     // cout<<str;

     // string s1 , s2;
     // s1 = "fam";
     // s2 ="ily";
     // s1.append(s2);
     // cout<<s1;

     // cout<<s1+s2; //--> append withour changinf any string
     // s1.clear();
     // if(s1.empty()){
     //      cout<<"The string is empty";
     // }
     // cout<<s1;

     // cout<< s1.find("m")<<endl; //--> return the index of m string in s1
     // cout<<s1.size()<<endl; // --> return the size of string
     string str = "HELllo how are y?";
     string s2= "HEloo";
     //  Converting into upper case 
     for(int i=0;i< str.size();i++){
          if(str[i]>= 'a' && str[i]<='z'){
               str[i]-=32;
          }
     }

     cout<< str;
     
     //  Converting into Lower case 
     for(int i=0;i< str.size();i++){
          if(str[i]>= 'A' && str[i]<='Z'){
               str[i]+=32;
          }
     }
     cout<< str;
     return 0;
}
/**
 * @brief 
 * character Array  
 *   --> The size is given by user beforehand
 *   --> The larget size is required for operations (concatenate or append)
 *   --> No terminating extra charactes
 * 
 * String 
 *   -->No need to know the size beforehand
 *   --> performing operation like concatanation and appending is easy
 *   --> Terminated with speacial operator '\0'
 * 
 */