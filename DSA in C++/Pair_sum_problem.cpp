// PAIR SUM PROBLEM
// Check if there exists 2 elements in an array such that their sum is equal to given
// k

#include<iostream>
using namespace std;
/****************APROACH - I**************/
bool pairsum(int a[],int n,int k){
     // Time Complexity --> O(n^2)
     for(int i=0;i<n-1;i++){
          for(int j=0;j < n-1 ;j++){
               if(a[i]+a[j] == k){
                    return true;
               }
          }
     }
     return false;
}
/****************APROACH - I**************/
// The array must be sorted for this approach
bool pairsum2(int arr[],int n,int k){
     int low =0;
     int high = n-1;

     while(low<high){
          if(arr[low] + arr[high] ==k){
               return true;
          }
          if(arr[low] + arr[high] <k){
               low++;
          }
          else{
               high--;
          }
     }
     return false;
 } 
int main(){
     int n,k;
     cin >>n>>k;
     int a[n];
     for(int i=0;i<n;i++){
          cin>>a[i];          
     }
     if(pairsum2(a,n,k)){
          cout<<"The sum is present";
     }
     else{
          cout<<"The sum is not present";    
     }
     return 0;
}