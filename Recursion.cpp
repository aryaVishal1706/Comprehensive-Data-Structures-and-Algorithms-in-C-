// Recursion --> A function call itself
#include<iostream>
using namespace std;
int fact(int n){
     if(n==0|| n==1)
          return 1;
     return n*fact(n-1);
}
int sum(int n){
     if(n==0|| n==1)
          return n;
     
     return n+sum(n-1);  
}
int pow(int n,int p){
     if(p==0)
          return 1;
     if(n==1)
          return n;
     return n*pow(n,p-1);
}
// fibonacci number
int fib(int n){
     if(n==0|| n==1){
          return n;
     }
     return fib(n-1)+fib(n-2);
}
void dec(int n){
     if(n==0){
          return ;
     }
     cout<< n<<endl;
     dec(n-1);
}

void inc(int n){
     if(n==0){
          return ;
     }
     inc(n-1);
     cout<< n<<endl;
}

// Find the first and last occurence of elements
// i is 0 first time
int firstocc(int arr[],int n,int i,int key){
     if(i==n){
          return -1;
     }
     if(arr[i]== key)
          return i;
     return firstocc(arr,n,i+1,key);
}
// return last occurence of the array;
int lastocc(int arr[],int n,int i,int key){
     if(i==n){
          return -1;
     }
     int restArray = lastocc(arr,n,i+1,key);
     if(restArray!=-1){
          return restArray;
     }
     if(arr[i]== key)
          return i;
     return -1;
}

int main(){
     // int n;
     // cin>> n;
     // cout<< fact(n);
     // cout<<sum(n);

     // int n,p;
     // cin>>n >> p;
     // cout<<pow(n,p);

     
     // int n;
     // cin>> n;
     // cout<< fib(n);

     // inc(n);
     // dec(n);

     // example
     // arr=  { 4 , 2, 1, 2, 5, 2, 7}
     // key = 2;
     int n,key;
     cin>>n>>key;
     int arr[n];

     for(int i=0;i<n;i++){
          cin>>arr[i];
     }
     // int f = firstocc(arr,n,0,key);
     cout<<lastocc(arr, n, 0,key);
     return 0;
}