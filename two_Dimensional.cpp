#include<iostream>
using namespace std;


// void searchmatrix(int a[][],int n, int m ,int x){
//      cout<<"THe Searching in Matrix :-";
//      int x;
//      bool flag = 0;
//      cin>> x;
//      for (int i = 0; i < n; i++)
//      {
//           for (int j = 0; j < n; j++)
//           {
//                if(a[i][j] ==x ){
//                     cout<<"Element is found";
//                     flag= true;
//                     break;
//                }
//           }
//           cout<<endl;
//      }
//      if(flag==0){
//           cout<<"Element is not found"<<endl;
//      }
//      // return  false;
// }

// The spiral Matrix display the array in the spiral way

// for example ,
// the matrix size 3 3
     // 1 2    3
     // 4 5   6
     // 7 8   9
// The Output is --> 1   2    3    6    9    8    7    4    
// void spiral(int a[][],int n ,int m){
//   int row_start = 0, row_end =n-1, column_start =0,column_end =m-1;
//      while(row_start <= row_end && column_start <= column_end){
//           // for rows
//           for(int col = column_start ; col <= column_end ;col++){
//                cout<< a[row_start][col]<<" ";
//           }
//           row_start++;
//           // for column_end
//           for(int row = row_start; row <= row_end ;row++){
//                cout<< a[row][column_end]<<" ";
//           }
//           column_end--;
//           // for last row
//           for(int col = column_end ; col >= column_start ;col--){
//                cout<< a[row_end][col]<<" ";
//           }
//           row_end--;
//           // for first column
//             for(int row = row_end; row >= row_start ;row--){
//                cout<< a[row][column_start]<<" ";
//           }
//           column_start++;
//      }
// }

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
     // cout<<"The Matrix :-"<<endl;
     // for (int i = 0; i < n; i++)
     // {
     //      for (int j = 0; j < n; j++)
     //      {
     //           cout<<a[i][j];
     //      }
     //      cout<<endl;
     // }
   
     return 0;
}