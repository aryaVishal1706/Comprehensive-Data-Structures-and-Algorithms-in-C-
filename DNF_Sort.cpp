/*
     0 1 2 sorts
     We divide the array into  4 parts

     0    0    1    1    1    ?    ?    ?    2    2
     Zeros          Ones        Unknown        Twos  

     check value of arr[mid]
     if 0, swap arr[low] and arr[mid] , low++ , mid++
     else if 1, mid++
     else if 2 , swap arr[mid] and arr[high], high--
*/
/*
DNF Time Complexity
     Time compliexity-->In each operations, either
     mid gets increased or high gets decresed 
*/
#include<iostream>
using namespace std;

void swap(int arr[],int i,int j){
     int temp = arr[i];
     arr[i] = arr[j];
     arr[j] = temp;
}
void dnfSort(int arr[],int n){

     int low =0 ;
     int mid = 0;
     int high =n-1;
     while (mid<=high)
     {    
          if(arr[mid] ==0){
               swap(arr,low,mid);
               low++;
               mid++;
          }
          else if(arr[mid] ==1){
               mid++;
          }
          else{
               swap(arr,mid,high);
               high--;
          }
     }
          
}
int main(){
     int arr[] = {1,1,2,0,0,1,2,2,1,0};
     int n = 10;
     dnfSort(arr,n);

     for (int i = 0; i < n; i++)
     {
          std::cout << arr[i] << std::endl;
     }
     
     return 0;
}