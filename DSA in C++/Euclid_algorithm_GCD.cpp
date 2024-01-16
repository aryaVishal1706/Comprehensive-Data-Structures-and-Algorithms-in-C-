#include<iostream>
using namespace std;
// Greatest Common Division
// 24 --> 2 x 2 x 2 x 3
// 42 -->2x 3 x 7
//  GCD (24,42) --> 2 x 3 --> 6
// Another Way
// 42 % 24 == 18
// 24 % 18 == 6 --> answer is 6
// 18 % 6  == 0
int gcd(int a ,int b){
     while(b!=0){
          int rem = a%b;
          a = b;
          b= rem;
     }
     return a;
}
int main(){
     int a,b;
     cin >> a >> b;
     cout<< gcd(a,b);
     return 0;
}