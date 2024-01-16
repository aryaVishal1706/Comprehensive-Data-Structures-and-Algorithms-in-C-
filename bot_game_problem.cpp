// Find the count of ways to reach the destinations
// the maximum steps are depends on the dices it means 1 to 6

#include<iostream>
using namespace std;
int countpath(int s,int e){
     if(s == e){
          return 1;
     }
     if(s>e){
          return 0;
     }
     int count =0;
     for (int i = 1; i < 6; i++)
     {
          count += countpath(s+i,e);
     }
     return count;
     
}

// here n x n matrix is given we have to reach nXn to buttom of right 
// we can move left or right  
int countpathMaze(int n,int i,int j){
     if(i == n-1 && j==n-1 ){
          return 1;
     }
     if(i>=n || j>=n){
          return 0;
     }
     return countpathMaze(n,i+1,j)+ countpathMaze(n,i,j+1);
}


int main(){
     // cout<< countpath(0,3);
     cout<< countpathMaze(3,0,0);
     return 0;
}