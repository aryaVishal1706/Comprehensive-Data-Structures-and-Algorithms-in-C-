// bit manipulators
#include<iostream>
using namespace std;

int unique(int a[], int n){
     int xorsum= 0;
     for(int  i =0;i< n;i++){
          xorsum = xorsum ^ a[i];
     }
     return xorsum;
}

int setBit(int n,int pos){
     return ((n& (1 << pos)) !=0);
}
/*
     { 2, 4, 6, 7 , 4, 5, 6 ,2}
     find exor of  --> 5^7
     // --> 2 --> 0010
     now ex or with every element to 2
*/
void  twoUnique(int arr[],int n){
     int xorsum= 0;
     // reutrn the cor of all the elements 
     for(int  i =0;i< n;i++){
          xorsum = xorsum ^ arr[i];
     }
     // now find the first unique numbers
     int tempxor = xorsum;
     int setbit = 0;
     int pos=0;
     // find the position of the bit 1 in xorsum
     while(setbit != 1){
          setbit =  xorsum & 1;
          pos++;
          xorsum = xorsum >> 1;
     }
     // we find the first number using the ex or of all the element 
     // have the 1 in pos variable value so   
     int newxor =0;
     for(int i =0; i< n;i++){
          if(setBit(arr[i],pos-1)){
               newxor = newxor ^arr[i];
          }
     }
     // new or --> unique numbr
     cout<< newxor <<endl;
     cout<< (tempxor ^newxor)<<endl;

}

bool getBit(int n ,int pos){
     return  ((n& ( 1<<pos))!= 0);
}
int setBit2(int n,int pos){
     return (n| (1<<pos));
}
int ThreeUnique(int arr[], int n){
     // 64 is bits size to store arr[i]
     int result=0;
     for(int i =0;i< 64 ;i++){
          int sum =0;
          for(int j=0;j<n;j++){
               if(getBit(arr[j],i)){
                    sum++;
               }
          }
          if(sum%3 !=0){
               result = setBit2(result,i);
          }
     }
     return result;
}
int main(){
     // int a[] = {1,2,3,4,1,2,3};
     // cout<< unique(a,7); //--> output -> 4


     // int arr[] = {2,4,6,7,4,5,6,2};
     //arr[]= {1,3,2,3,4,2,1,1,3,2};
     int arr[]= {1,3,2,3,4,2,1,1,3,2};
     int  n =10;
     
     cout <<ThreeUnique(arr,n);
     return 0;
}