#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int kadane(int a[],int n){
     int currsum =0;
     int maxsum = INT_MIN;
     for(int i=0;i<n;i++){
          currsum +=a[i];
          if(currsum <0){
               currsum =0;
          }
          maxsum = max(maxsum,currsum);
     }
     return maxsum;
}
int main(){
     //the sum of circular array
     // the array elemnt can  be chosen last to first so it is considered continous array
     //Case 1
     //  A = -1 4 -6 7 5 -4
     // case II:
     //  A[] = 4 -4 6 -6 10 -11 12
     // max_subarray_sum = Total Sum of 
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
          cin>> a[i];
     }

     int wrapsum ;
     int nonwrapping ;
     nonwrapping = kadane(a,n);
     int totalsum =0;
     for(int i=0;i<n;i++){
          totalsum +=a[i];
          a[i]= -a[i];
     }
     wrapsum = totalsum  + kadane(a,n);
     cout<< max(wrapsum,nonwrapping);
     return 0;
}