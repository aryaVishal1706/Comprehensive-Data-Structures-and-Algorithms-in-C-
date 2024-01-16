#include<iostream>
using namespace std;
// Return the count of 
int main(){
     string str = "helosllallakjsljffjskjf";
     int freq[26];

     for(int i =0;i< 26;i++){
          freq[i] =0;
     }
     for(int i =0;i< str.size();i++){
          freq[str[i] - 'a']++;
     }
     int ans =0;
     for(int i =0;i< 26;i++){
          // freq[i] =0
          if(ans < freq[i]){
               ans = freq[i];
          }
     }
     cout<<ans<< endl;     
     return 0;
}