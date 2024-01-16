#include<iostream>
using namespace std;

// Bubble sort 
// Notes --> Repetedly swap two abjacent elements if they are in wrong order


int main(){
     int n;
     cin>> n;

     int a[n];
     for(int i=0;i< n;i++){
          cin >> a[i];
     }

     for(int i =0;i<n;i++){
          for(int j=0;j<n-i;j++){
               // Swapping the elements of array if the element at index 'j' is greater than the one at index 'j+1'.
               if(a[j]>a[j+1]){
                    int temp = a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
               }
          }
     }
 
     for(int i=0;i< n;i++){
          cout<< a[i] << endl;
     }
     return 0;
}