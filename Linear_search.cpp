#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int n, int target)
{
     for(int i=0;i<n;i++){
          if(target == arr[i]){
               return true;
          }
     }    
     return false;
}
int main(){
     int n;
     cin >> n;

     int arr[n];

     for(int i=0;i< n;i++){
          cin >>arr[i];
     }
     int x;
     cout<<"Enter Element for search";
     cin>>x;
     if(LinearSearch(arr,n,x))
          cout<<"\nThe element is found in Array";     
     else     cout<<"\nThe element is not found in Array";     
     return 0;
}