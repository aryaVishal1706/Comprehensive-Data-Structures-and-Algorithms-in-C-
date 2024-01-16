// Find the maximum sum from subarray (array must be continous)

#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    
     // /*********APPROACH - 1**********
     // int n;
     // cin>>n;
     // int a[n];
     // for(int i=0;i<n;i++){
     //      cin>> a[i];
     // }
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


     // int n;
     // cin>>n;
     // int a[n];
     // for(int i=0;i<n;i++){
     //      cin>> a[i];
     // }   
     // int cumsum[n+1];

     // cumsum[0]=0;
     // for(int i =1;i<=n;i++){
     //      cumsum[i] = cumsum[i-1] + a[i-1];
     // }

     // int maxsum= INT_MIN;

     // for(int i =1;i<=n;i++){
     //      int sum =0;
     //      maxsum= max(maxsum,cumsum[i]);     
     //      for(int j= 1;j<=i;j++){
     //           sum = cumsum[i]- cumsum[j-1];
     //           maxsum= max(maxsum , sum);

     //           cout<< cumsum[i] << " "<< cumsum[j-1]<<" "<< " a[i] --> "<<a[j]<<" "<< a[j-1]<<" "<<sum <<endl; 
     //      }
     // }
     // cout<<maxsum<<endl;

     // ************APPROACCH-3*********************
     // KADANE's ALGORITHM
     // add sum to 0 if the previous sum is negetive
     // choose maximum positive number

     // example 
     // -1 4 -6 7 -4
     // so the the curr_sum[] is --> 0 4 -2 7 3
     // Better Approach
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
          cin>> a[i];
     }

     int curr_sum = 0,maxsum=INT_MIN;

     for(int i =0;i<n;i++){
          curr_sum +=a[i];
          if(curr_sum<0){
               curr_sum = 0;
          }
          maxsum = max(maxsum,curr_sum);
     }
     cout<<maxsum;
     return 0;
}