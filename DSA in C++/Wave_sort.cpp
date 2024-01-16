// explain wave sort problems
// 1. Wave Sorting: Given an array of integers, the task is to sort
// it in ascending order by alternating between increasing and decreasing.
// For example, if we have input [4,3,2,10,9] then
// output should be [1,2,3,4,9]. The first two elements are
// sorted in non-decreasing manner while the next two are sorted

// arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4]... 

#include<iostream>
using namespace std;
void swap(int arr[],int i ,int j){
     int temp = arr[i];
     arr[i] = arr[j];
     arr[j] = temp;
}
void waveSort(int arr[],int n){
     for (int i = 1; i < n; i+=2)
     {
          if(arr[i]> arr[i-1]){
               swap(arr,i,i-1);
          }
          if(arr[i]>arr[i+1] && i <= n-2){
               swap(arr,i,i+1);
          }
     }
     
}
int main(){
     int arr[] = {1,3,4,7,5,6,2};
     // int n;
     waveSort(arr,7);
     for (int i = 0; i < 7; i++)
     {
          std::cout << arr[i] << std::endl;
     }
     

     return 0;
}