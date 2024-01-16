#include<iostream>
using namespace std;
// Basic Concept
/*
     6    3    5    2    7    8    9

     Partitions(arr ,l,r) -->Search a array till j is not less than right
     step 1:
        null     6    3    5    2    9    8    7
          i      j                           pivot     
     Now increase the j and check if the j is less than pivot or not 
     if the j is less than pivot then swap with arr[i] to arr[pivot]
     else increase j until r 

     at the end  swap pivot with i+1
     /--> we get smaller part of pivot on left side 
     --> larfer part on right side 
     */
void swap(int arr[],int i,int j){
     int temp = arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
}
int partition(int arr[], int l,int r){
     int pivot =  arr[r];
     int i =l-1;

     for(int j=l ;j<r;j++){
          if(arr[j]< pivot){
               i++;
               // swap(arr[i],arr[j]);
               swap(arr,i,j);
          }
     }
     // swap(arr[i+1],arr[r]);
     swap(arr,i+1,r);
     return (i + 1);
}
void quickSort(int arr[], int l,int r){
     if(l<r){
          int pi = partition(arr,l,r);
          quickSort(arr,l,pi-1);
          quickSort(arr,pi+1,r);
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
     
     quickSort(arr,0,n-1);

     cout<<"Sorted Array is :--> \n";
     for (int i = 0; i < n; i++)
     {
          cout<< arr[i]<<" ";
     }
     
     return 0;
}
