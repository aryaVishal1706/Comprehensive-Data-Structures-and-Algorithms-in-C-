#include<iostream>
using namespace std;
int getBit(int n,int pos){
     return ((n>> pos)&1);
}
// set bit to the position 
int setBit(int n,int pos){
     return (n | (1<<pos));
}
// clear bit --> clear to the 0 in the given position
int clearBit(int n,int pos){
     int mask = ~(1<<pos);
     return (mask & n);
}
int updateBit(int n,int pos,int value){
     int mask = ~ (1<< pos);
     n = n & mask;
     return (n|(value <<pos));
}

// n =8        1000
// n-1 = 7     0111
//             0000 --> answer !0 =1

int ispowerof2(int n){
     return (n && !(n & n-1));  // n&&Condtion --> n is used for base case if n is 0
}


// input 19 --> 1 0 0 1 1  
// output 3
// return the number of ones in the number in binary form
int numberofones(int n){
     int count =0;
     while(n){
          n=n &(n-1);
          count++;
     }
     return count;
}

int subset(int arr[],int n){
     for(int i =0;i< (1<<n ); i++){
          for(int j=0;j< n;j++){
               if(i & (1 <<j)){
                    cout<< arr[j]<<" ";
               }
          }
          cout<<endl;
     }

}
int main(){
     // supporse we have given one values
     //  n=0101
     //  pos = 2;
     // return 1 if the n[pos] = 1 
     // else return 0;
     // int n,pos;
     // cin>>n>>pos;
     // cout<< getBit(n,pos);

     // cin>>n>>pos;
     // cout<< setBit(n,pos);

// Input :5 2 
//  101 --> remove 2nd 1  the output is 001
// Output: 1
     // cin>>n>>pos;
     // cout<< clearBit(n,pos);
     
     // cin>>n>>pos;
     // cout<< updateBit(5,1,1);  //--> answer -- 7

     // int n;
     // cin>>n;
     // cout<<ispowerof2(n);
     
     // int n;
     // cin>>n;
     //  input 19 --> 1 0 0 1 1  
     // output 3
     // cout<<numberofones(n);
     int a[4] = {1,2,3,4};
     subset(a,4);
     return 0;
}