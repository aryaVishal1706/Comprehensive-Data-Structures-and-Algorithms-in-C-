#include<iostream>
#include<cmath>
using namespace std;
// return prime number from 1 to n 
void  primeSieve(int n){
     int prime[100] = {0};

     for(int i=2;i<=n;i++){
          if(prime[i]==0){
               for(int j =i*i;j<=n;j+=i){
                    prime[j]=1;
               }
          }
     }
     for(int i=2;i<=n;i++){
          if(prime[i] ==0){
               cout<< i <<" ";
          }
     }
     cout<<endl;
}
// smallest prime factor of i
void primefactor(int n){
     int spf[100]={0};
     for (int i = 2; i <= n; i++)
     {
          spf[i]=i;
     }
     
     for (int i = 2; i < n+1; i++)
     {
          if(spf[i]==i){
               for(int j= i*i; j<=n;j+=i){
                    if(spf[j]==j) 
                         spf[j] =i; 
               }
          }
     }
     // it returns all the spf elements
     while(n!=1){
          cout<< spf[n]<< " ";
          n = n/spf[n];
     }
     
}
int main(){
     // APPROACH 1:
     // int n;

     // cin >> n;
     // bool flag =0;
     // for(int i =2 ; i<sqrt(n); i++){
     //      if(n%i==0){
     //           cout<< "None-prime"<<endl;
     //           flag =1;
     //           break;
     //      }
     // }
     // if(flag == 0){
     //      cout<<"Prime"<<endl;
     // }
     
     // APPROACH 2:Sieve of Eratosthenes
     // find 1 to n prime numbers 
     // Find the prime numbers by removing non-prime numbers
     int n;
     cin>> n;
     // primeSieve(n);
     primefactor(n);
}