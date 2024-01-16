// notes on array 
// 1. Arrays are ordered collection of data values that can hold multiple data types, such as numbers and strings.
#include<iostream>
#include<climits>
using namespace std;

int main(){
     // int arr[4] = {12,23, 55,67};
     // cout<< arr[2];

     // initialize array 
     int n;
     cin >> n;

     int arr[n];
     for(int i=0 ;i < n ; i++){
          cin >> arr[i];
     }
     int max =INT_MIN, min=INT_MAX;
     for(int i=0;i< n;i++){
          if(arr[i]>max){
               max= arr[i];
          }
          if(arr[i]<min){
               min = arr[i];
          }
     }

     cout<<"\n The Minimu value is "<< min <<" Maximum value is "<< max;
     return 0;
}