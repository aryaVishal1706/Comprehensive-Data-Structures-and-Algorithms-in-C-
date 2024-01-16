#include<iostream>
using namespace std;

// Insert an elememnt from unsorted
// to its correct position in sorted array

int main(){
     int n;
     cin>> n;

     int a[n];
     for(int i=0;i<n;i++){
          cin>>a[i];
     }

     for(int i=1;i<n;i++){
          int curr = a[i];
          int j=i-1;
          for(;j>=0 && a[j]>curr;j--){
               a[j+1]= a[j];
          }
          a[j+1]= curr;
     }

     for(int i=0;i<n;i++){
          cout<<a[i] << endl;
     }
     return 0;
}