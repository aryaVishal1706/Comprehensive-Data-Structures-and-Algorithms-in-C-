#include<iostream>
using namespace std;

long long merge(int arr[],int l,int mid,int r){
     long long inv =0;
     int n1 = mid -l +1;
     int n2 =  r-mid;
     int L[n1] , R[n2];
     for(int i=0;i<n1;i++){
          L[i]=arr[l+i];
     }
     
     for(int i=0;i<n1;i++){
          R[i]=arr[mid+i+1];
     }
     int i = 0,j=0, k=l;
     while(i<n1 and j<n2){
          if(L[i]<=R[j]){
               arr[k]= L[i];
               k++;
               i++;
          }
          else{
               inv += n1-i;
               arr[k]=  R[j];
               j++;
               k++;
          }
     }
     while (i<n1)
     {
          arr[k] = L[i];
          i++;
          k++;
     }
     while (j < n2){
          arr[k] = R[j];
          j++;
          k++;
     }
     
     return inv;
}
long long mergeSort(int arr[],int l,int r){
     long long inv=0 ;
     if(l<r){
          int mid = (l+r)/2;
          inv += mergeSort(arr,l,mid);
          inv+= mergeSort(arr,mid+1,r);
          inv += merge(arr,l,mid,r);
     }
     return inv;
}
int main(){
     /*
     Input
     8
     3 5 6 9 1 2 7 8
     */
     int n;
     cin>> n;
     int arr[n];

     for (int i = 0; i < n; i++)
     {
          cin>> arr[i];
     }
     // Brute force approach
     // int count =0;
     // for (int i = 0; i < n; i++)
     // {
     //      for (int  j = i + 1; j < n; j++)
     //      {
     //           if(arr[i]>arr[j])
     //                count++;
     //      }
          
     // }
     // cout<< count<<endl;

     // Another Approach is use merge sort
     cout<<mergeSort(arr,0,n-1);
     // for (int i = 0; i < n; i++)
     // {
     //      cout<< arr[i];
     // }

     return 0;
}