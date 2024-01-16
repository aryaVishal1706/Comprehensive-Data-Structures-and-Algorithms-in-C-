// Find the maximum sum from subarray (array must be continous)

#include<iostream>
#include<limits.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
          cin>> a[i];
     }
     // /*********APPROACH - 1**********
     // int maxsum=INT_MIN;
     // for(int i=0;i<n;i++){
     //      for(int j=i+1;j<n;j++){
     //           int sum =0;
     //           for(int k=i;k<=j;k++){
     //                sum+=a[k];
     //           }
     //           maxsum = max(maxsum,sum);
     //      }
     // }
     // cout<< maxsum<<endl;


     // ************APPROACCH-2*********************
     // Create array of size N 
     // store the cummulative sum of the array

     int cum[n+1];
     cum[0]=0;
     for(int i=1;i<=n;i++)
          cum[i]=cum[i-1]+a[i-1];
     // cout<<cum[n-2]<<endl;
     int maxsum =INT_MIN;
     // int maxsum=INT_MIN;
     cout<<a[0]<<endl;
     for(int i=1;i<=n;i++){
          int sum =0;
          maxsum = max(maxsum,cum[i]);  
          for(int j=0;j<i;j++){
               sum = cum[i] - cum[j];
               cout<<a[i]<<" "<<a[j]<<" "<<cum[i] <<" "<< cum[j]<<" "<< sum<<endl;
               maxsum = max(maxsum,sum);
          }
     }   
     cout<<maxsum;
     return 0;
}

