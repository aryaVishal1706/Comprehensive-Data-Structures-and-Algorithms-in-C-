#include<iostream>
#include<cmath>
#include<limits.h>
using namespace std;

// Problem 1: Given an array a[] of size n. for every i from 
// 0 to n-1 output max(a[0],a[1],..... a[i])

int main(){
     int n; 
     cin>> n;

     int a[n];
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     // keep a variable max which stores the maximum till ith elements 
     // iterate over the array and updates

     int prefix[n];
     int mx=INT_MIN;
     for(int i=0;i< n;i++){
          mx= max(mx,a[i]);
          prefix[i]=mx;
          cout<< mx <<endl;
     }
     return 0;
}