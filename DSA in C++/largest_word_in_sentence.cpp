#include<iostream>
using namespace std;

int main(){
     // largest word in sentences
     int n;
     cin>>n;
     cin.ignore(); 
     char arr[n+1];
     cin.getline(arr,n);
     cin.ignore();

     // cout<< arr <<endl;
     int currlength =0,maxlength =0,maxst =0,st =0;
     int i =0;
     while(1){
          if(arr[i] == ' '|| arr[i] == '\0'){
               if(currlength > maxlength){
                    maxlength = currlength;
                    maxst = st;
               }
               st =i + 1;
               currlength =0;
          }
          else 
               currlength++;
          if(arr[i]== '\0'){
               break;
          }
          i++;
     }
     cout<<maxst <<endl;
     
    cout<<"Maximum length of word in sentences : " <<maxlength;

    for(int i=0;i< maxlength;i++){
     cout<<arr[i+maxst];
    }
     return 0;
}