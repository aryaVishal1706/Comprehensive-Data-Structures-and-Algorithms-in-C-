/**
 * 1) Find the count of every distrinct elements
 * in  the Array
 * 2) Calculate the positions of each element in sorted 
 * array
 * 
 * 
*/

#include<iostream>
using namespace std;

void countSort(int arr[],int n){
     int  k= arr[0];
     // Find maximum element of the array
     for (int i = 0; i < n; i++)
     {
          k=max(k,arr[i]);
     }
     
     int count[10] ={0};
     for (int i = 0; i < n; i++)
     {
          count[arr[i]]++;
     }

     for (int i = 1; i <= k; i++)
     {
          count[i]+=count[i-1];
     }
     
     int output[n];
     // put in the position of count of array[i]--
     for (int i = n-1; i >= 0; i--)
     {
          output[--count[arr[i]]] = arr[i];
     }
     
     // put the output in arr
     for (int i = 0; i < n; i++)
     {
          arr[i]= output[i];
     }
     
     
}
int main(){
     int arr[] = {1 ,3,2,3,4,1,6,4,3};
     countSort(arr,9);
     // int countArr[];
     for (int i = 0; i < 9; i++)
     {
          std::cout << arr[i] << std::endl;
     }
     
     return 0;
}