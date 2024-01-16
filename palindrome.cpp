#include<iostream>
using namespace std;
// In this the string is palidrome
// if the rever string is some as the string
// for example
// NITIN == Rev(NITIN)
// OUTPUT : TRUE
int main(){
     int n;
     cin>> n;

     char arr[n+1];
     cin>> arr;

     bool check =1;

     for(int i =0;i<n;i++){
          if(arr[i] != arr[n-i-1]){
               check =0;
               break;
          }
     }
     if(check == true){
          cout<<"The word is palidrome"<<endl;
     }
     else{
          cout<<"The word is not palidrome"<<endl;
     }
     return 0;
}

