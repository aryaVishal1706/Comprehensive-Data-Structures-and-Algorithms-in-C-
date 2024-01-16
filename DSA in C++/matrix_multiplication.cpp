// Matrix Multiplication
#include<iostream>
using namespace std;
/*
3 4 
2 4 1 2 
8 4 3 6 
1 7 9 5
4 3
1 2 3
4 5 6
7 8 9
4 5 6
*/
int main(){
     int r1,c1;
     cin>> r1>>c1;
     int a[r1][c1];
     // Enter Matrix 1
     for (int i = 0; i < r1; i++)
     {
          for (int j = 0; j < c1; j++)
          {
               cin>>a[i][j];
          }
          
     }

  
     int r2,c2;
     cin>> r2>>c2;
     int b[r2][c2];
     // Enter Matrix 2
     if(r2!=c1){
          cout<<"Matrix multiplication is not possible...";
          return 0;
     }
     for (int i = 0; i < r2; i++)
     {
          for (int j = 0; j < c2; j++)
          {
               cin>>b[i][j];
          }
          
     }
     
     int ans[r1][c2];
     // Matrix Multiplication
     for(int i =0;i<r1;i++){ //--> for row of the first matrix
          for(int j=0;j<c2;j++){ // --> for the column of the second matrix
               for(int k=0;k<c1;j++){ //--> for sum of all the column *row 
                    ans[i][j] += a[i][k]* b[k][j]; 
               }
          }
     }
     cout<<"The Answer ";
      for (int i = 0; i < r1; i++)
     {
          for (int j = 0; j < c2; j++)
          {
               cout<<ans[i][j]<<" ";
          }
          cout<<endl;
          
     }
     return 0;
}