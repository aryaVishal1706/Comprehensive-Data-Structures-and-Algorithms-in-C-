#include<iostream>

using namespace std;
// In this Given a 2 x N board and tiles of size 2 X a count the number of ways to tile the given board 
// using these tiles
// Example 2 x 4 --> board
// N--> 4
// some like fibonacci
int tiling_ways(int n){  
     if(n==0) return 0;
     if(n==1) return 1;

     return tiling_ways(n-1)+tiling_ways(n-2);
}

// Find the number of ways in which n 
// friends can remain single or canbe paired up
int friendspairing(int n){
     if(n==0 || n==1 ||n==2) return n;

     return friendspairing(n-1)+friendspairing(n-2)*(n-1);
}
int main(){
     // cout<< tiling_ways(4);
     cout<< friendspairing(4);
     return 0;
}