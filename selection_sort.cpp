#include<iostream>
using namespace std;

// selection sort
// Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. 

// The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted part.

int main(){
     int n;
     cin>> n;
     
     int arr[n];
     for(int i=0;i< n;i++){
          cin>> arr[i];
     }
     
     for(int i=0;i<n-1;i++){
          for(int j=i+1;j<=n;j++){
               if(arr[j]<arr[i]){
                    int temp = arr[i];
                    arr[i]=arr[j];
                    arr[j]= temp;
               }
          }
     }

     cout<< "\nThe Sorted array"<<endl;
     for(int i=0;i< n;i++)
     {
          cout<<arr[i]<<endl;
     }
     return 0;
}