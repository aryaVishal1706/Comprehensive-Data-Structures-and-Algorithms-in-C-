#include<iostream>
using namespace std;


void merge(int arr[],int l,int mid, int r){
     int n1 = mid - l+1;
     int n2 = r-mid ;
     int L[n1] , R[n2] ;  //create temp arrays
     // Initialitations
     for (int i = 0; i < n1; i++)
     {
          L[i]=arr[l + i] ;   //copy data to temp array from
     }
     for (int i = 0; i < n2; i++)
     {
          R[i] = arr[mid+i+1];     
     }

     // Allocations
     int i =0,j=0,k=l;
     while(i<n1 && j<n2){
          if(L[i]< R[i]){
               arr[k] =L[i];
               k++;
               i++;
          }
          else{
               arr[k] = R[j];
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
     while(j< n2){
          arr[k]=  R[j];
          j++;
          k++;
     }
}
void mergeSort(int arr[],int l, int r){
     if(l<r){
          int mid = (l+r)/2;
          mergeSort(arr,l,mid);
          mergeSort(arr,mid+1,r);
          merge(arr,l,mid,r);
     }
}

int main(){
     int n;
     cin>>n;

     int arr[n];
     for (int i = 0; i < n; i++)
     {
          cin>> arr[i];
     }
     
     mergeSort(arr,0,n-1);

     cout<<"Sorted Array is :--> \n";
     for (int i = 0; i < n; i++)
     {
          cout<< arr[i]<<" ";
     }
     
     return 0;
}
