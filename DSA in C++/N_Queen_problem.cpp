// How many Queens are placed in chess board such that
// no queen can attack to other queens
// --> use reccursions to find the sollutions

#include<iostream>
using namespace std;

bool isSafe(int** arr, int x,int y, int n){
     // check for rows
     for(int row = 0;row<x ;row++){
          if(arr[row][y]==1){
               return false;
          }
     }
     int row = x;
     int col = y;
     while(row>=0 && col >=0){
          if(arr[row][col] == 1){
               return false;
          }
          row--;
          col--;
     }
     row = x;
     col = y;
     while(row>=0 && col <n){
          if(arr[row][col] == 1){
               return false;
          }
          row--;
          col++;
     }
     return true;
}


// x --> row , y-> column
// bool isSafe(int ** arr,int x, int y,int n){
//      // for rows
//      for (int row = 0; row < x; row++)
//      {
//           if(arr[row][y]==1){
//                return false;
//           }
//      }
//      // upper left diagonal 
//      int row = x,col=y;
//      while(row>=0 && col>=0){
//           if(arr[row][col]==1){
//                return false;
//           }
//           row--;
//           col--;
//      }
//      // upper right diagonal
//      /*
//           ___________________________
//           |    |    |    |  /  |    |    
//           |    |    |    |/    |    |
//           ___________________________
//           |    |    |  / |     |    |
//           |    |    | /  |     |    |
//           ___________________________
//           |    |  / |    |     |    |
//           |    | /  |    |     |    |==> row is decreases on right side
//           ___________________________ => col is increases by 1
//           | /  |    |    |     |    |
//           |/   |    |    |     |    |
//           ___________________________  
//           */
//      row = x;
//      col =y;
//      while(row>=0 and col<n){
//           if(arr[row][col]==1){
//                return false;
//           }
//           row--;
//           col++;
//      }
// }


bool nQueen(int** arr ,int x,int n){
     if(x>=n){
          return true;
     }
     for (int  col = 0; col < n; col++)
     {
          if(isSafe(arr,x,col,n))
          {
               arr[x][col] =1;
               if(nQueen(arr,x+1,n)==true)
               {
                    return true;
               }
               arr[x][col] =0;     //backtracking
          }
     }
     return false;
}



int main(){
     int n;
     cin >> n;

     int** arr =new int*[n];

     for(int i =0;i<n;i++){
          arr[i]= new int[n];
          for (int j = 0; j < n; j++)
          {
               arr[i][j]= 0;
          }
          
     }

     if(nQueen(arr,0,n)){
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < n; j++)
               {
                    cout<< arr[i][j]<<" ";
               }cout<< endl;               
          }
          
     }
     return 0;
}