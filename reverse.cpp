#include<iostream>
using namespace std;

int main(){
     int n;
     cin >> n;
     // store the reverse elements of n 
     int reverse =0;

     while(n>0){
          // take a last digit 
          int lastdigit = n%10;
          reverse = reverse*10 +lastdigit;
          n=n/10;
     }
     cout<< reverse;
     return 0;
}