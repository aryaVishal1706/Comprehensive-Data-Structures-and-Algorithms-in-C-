#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
     int ans =0;

     int x= 1;
     while(n>0){
          int r = n % 10;
          ans += r*x;
          x*=2;
          n/=10;
     }
     return ans;
}

int octalToDecimal(int n){
      int ans =0;

     int x= 1;
     while(n>0){
          int r = n % 10;
          ans += r*x;
          x*=8;
          n/=10;
     }
     return ans;
}

int hexadecimaltoDecimal(string n){
     int ans =0;

     int x= 1;
     for(int i = n.size()-1; i>=0;i--){
          if(n[i] >='0' && n[i]<= '9'){
               ans += x*(n[i]-'0');
          }
          else if(n[i]>='A'  && n[i]<= 'F'){
               ans += x*(n[i]-'A'+10);
          }
          x*=16;
     }
     return ans;
}

int DecimalToBinary(int n){
     int ans =0;
     int x= 1;
     while(x <= n){
          x*=2;
     }
     x/=2;
     while(x>0) {
          int lastdigit = n/x;
          n -= (lastdigit * x);
          x/=2;
          ans =  ans*10 + lastdigit;
     }
     return ans;
}

int DecimalToOctal(int n){
     int ans =0;
     int x= 1;
     while(x <= n){
          x*=8;
     }
     x/=8;
     while(x>0) {
          int lastdigit = n/x;
          n -= (lastdigit * x);
          x/=8;
          ans =  ans*10 + lastdigit;
     }
     x= ans;
    
     return ans;
}

string DecimalToHexadecimal(int n){
     int x=1;
     string ans ="";
     while(n>=x){
          x*=16;
     }
     x/=16;
     char hd[]="0123456789ABCDEF";
     while(x>0){
          int ld = n/x;
          ans +=hd[ld];
          n-=(ld*x);
          x/=16;
     }
     return ans;
}
int32_t main(){
     int n;

     // cin >> n;
     // cout<<n<< " Binary to decimal number conversion system "<<binaryToDecimal(n)<<endl;
     
     // cin >> n;
     // cout<<n<< " octal to decimal number conversion system "<<octalToDecimal(n)<<endl;
     
     // string f;
     // cin >> f;

     // cout<<f<< "hexadeximal to decimal number conversion system "<<hexadecimaltoDecimal(f)<<endl;

     // cin>>n;
     // cout<<n<< " Decimal to Binary number conversion system "<<DecimalToBinary(n)<<endl;

     // cin>>n;
     // cout<<n<< " Decimal to octal number conversion system "<<DecimalToOctal(n)<<endl;

     cin>>n;
     cout<<" Decimal to hexadecimal number conversion system "<<DecimalToHexadecimal(n)<<endl;


     return 0;
}