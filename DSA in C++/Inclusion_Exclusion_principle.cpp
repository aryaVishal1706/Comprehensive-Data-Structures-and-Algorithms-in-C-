#include<iostream>
using namespace std;
int divisible(int n,int a,int b){
     int c1 =n/a;
     int c2 = n/b;
     int c3 =n/(a*b);
     cout<< c1<<c2<<c3<<endl;
     return c1+c2-c3;
}
int main(){
     // 40 5 7
     int n,a,b;
     cin >> n>>a>>b;
     cout<< divisible(n,a,b);
     return 0;
}