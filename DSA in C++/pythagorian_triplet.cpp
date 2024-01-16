#include<iostream>
#include<math.h>

using namespace std;
bool check(int x,int y,int z){
     int a = max(x,max(y,z));
     if(a==x){
          return (a*a) ==(y*y)+(z*z); 
     }
     else if(a==y){
          return (a*a) ==(x*x)+(z*z); 
     }
     else{
          return (a*a) ==(y*y)+(x*x); 
     }
}
int main(){
     // check the 3 number is pythagorian triplet or not

     // we have given x,y and z and we have to check
     // now store value of max in A
     // square(A)= square(x)+ square(y)
     // so we return true

     int x,y,z;
     // cout<<"Enter 3 Numbers"<<endl;
     cin >> x>>y>>z;
     if(check(x,y,z)){
          cout<<"Pythagorean Triplet";
     }
     else{
          cout<<"Not Pythagorean Triplet";
     }
     return 0;
}