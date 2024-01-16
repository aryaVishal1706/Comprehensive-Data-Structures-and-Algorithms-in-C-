// Problem on the functions
#include<iostream>
#include<cmath>
using namespace std;

// return true if the number is prime 
bool isprime(int n){
     for(int i=2;i<=sqrt(n);i++){
          if(n%i==0){
               return false;
          }
     }
     return true;
}

// fibonacccci sequence 
void fib(int n){
     int t1 = 0;
     int t2 =1;
     int nextterm;
     for(int i =1;i<=n;i++){
          cout<<t1 <<endl;
          nextterm=t1+t2;
          t1=t2;
          t2=nextterm;
     }
     return;
}

// return factorial of number
int fact(int  n){
     if(n==0 || n==1){
          return 1;
     }
     return n*fact(n-1);
}

int sum(int a,int b){
     return a+b;
}
int sum(int a,int b,int c)
{
     return a+b+c;
}

int main(){
     // find the all prime number between a and b
     // int a ,b;
     // cin>>a>>b;
     // cout<<"\nThe prime number between a and b is --> "<<endl;
     // for(int i=a;i<=b;i++){
     //      if(isprime(i)){
     //           cout<<i<<endl;
     //      }
     // }


     // Fibonacci sequence

     // int n;
     // cout << "\nEnter the number of terms you want in Fibonacci Sequence: ";
     // cin>> n;
     // fib(n);

     // Factorial of number 
     // int num ;
     // cout << "\nEnter any positive integer : ";
     // cin >> num;
     // cout << "\nFactorial of " << num << " is " << fact(num) << endl;

     // NCR --> fact(n)/(fact(n-r)*fact(r))
     // int n, r;
     // cout << "\nEnter n and r (where r <= n): ";
     // cin >> n >> r;
     // long long res = fact(n) / ((fact(n - r) * fact(r)));
     // cout << "\nNCR(" << n << ", " << r << ") = " << res << endl;


     //pascal triangle
     /*
     // Pattern
          1
          1 1
          1 2 1
          1 3 3 1
          1 4 6 4 1
     */

//     int n ;
//     cout<<"Enter N ::";
//     cin>> n;
//     cout<<"\nPascal's Triangle\n";
//     for(int i=0;i<n;i++){
//           for(int j=0;j<=i;j++){
//                cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
//           }
//           cout<< endl;
//     }

     cout<<sum(2,3)<<endl;
     cout<<sum(2,3,5)<<endl;
     return 0;
}