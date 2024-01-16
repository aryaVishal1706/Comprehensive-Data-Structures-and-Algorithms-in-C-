#include<iostream>
using namespace std;
/*
        .|.     |     |     |
       ..|..    |     |     |
      ...|...   |     |     |
     ....|....  |     |     |
     ____||_____|_____|_____|
         A      B      C     
     
     
         |         |      |     |
         |        .|.     |     |
         |       ..|..    |     |
     ....|....  ...|...   |     |
     ____||________|______|_____|
         A         B      C     
     */
void towerofHanoi(int n,char src, char dest, int helper){
     if(n==0)return;
     towerofHanoi(n-1,src,helper,dest);
     cout<<"Move from "<< src << " to "<< dest <<endl;
     towerofHanoi(n-1,helper,dest,src);
}
int main(){
     towerofHanoi(3,'A','C', 'B');
     return 0;
}