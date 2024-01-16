#include<iostream>
using namespace std;

int main(){
     int n,m;
     cin>> n>>m;
    int a[n][m];

     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               cin>>a[i][j];
          }
          
     }

     // Search in 2D Matrix
     // Brute force Approach
     bool flag = 0;
     int x;
     cin>>x;
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               if(a[i][j]== x){
                    cout<<"The Element is Found at location a["<<i<<" ]["<< j << "]" <<endl;
                    flag = true;
                    break;
               }
          }          
     }
     if(flag ==0){
          cout<<"Element Not found";
     }

     // IF the matrix is sorted then

     int r=0, c=m-1;
     bool found = 0;
     while(r<n  and c>=0){
          if(a[r][c] == x){
               found = 1;
          }
          if(a[r][c]>x){
               c--;
          }
          else{
               r++;
          }
     }
     if(found)
     {
          cout<< "Element is found";
     }
     else{
          cout<< "Element not found";
     }
     // Display 2D Matrix
     // for (int i = 0; i < n; i++)
     // {
     //      for (int j = 0; j < m; j++)
     //      {
     //           cout<<a[i][j];
     //      }
          
     // }
     return 0;
}