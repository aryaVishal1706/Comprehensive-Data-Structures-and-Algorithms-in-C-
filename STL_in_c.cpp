#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool myCompare(pair<int,int> p1, pair<int,int> p2){
     return p1.first < p2.first;
}
int main(){
     // vector<int> v;
     // v.push_back(1);
     // v.push_back(2);
     // v.push_back(5);
     
     // for (int i = 0; i < v.size(); i++)
     // {
     //      cout<<v[i]<<endl;
     // }
     
     // vector<int> ::iterator  it;
     // for(it = v.begin();it!= v.end();it++){
     //      cout<< *it<<endl;
     // }
     
     // for(auto i : v){
     //           cout<< i <<endl;
     // }

     // vector<int> v2(3,20);

     // swap(v,v2);
     // for(auto i : v){
     //      cout<<i<<endl;
     // }
     // sort(v.begin(),v.end());
     // for(auto i : v2){
     //      cout<<i<<endl;
     // }


     // pairs in stl
     // pair<int,char> p;

     // p.first = 12; // first 
     // p.second = 'a';// second
     // cout<<"First: "<<p.first<<"\nSecond: "<<p.second;

     // reduce the values 
     int arr[] = {10,16,7,14,5,3,2,9};
     vector<pair<int,int>> v;
     int n = (sizeof(arr)/sizeof(arr[0]));
     for (int i = 0; i < n; i++)
     {
          v.push_back(make_pair(arr[i],i));
     }
     
     sort(v.begin(),v.end(),myCompare);
     for (int i = 0; i < v.size(); i++)
     {
          arr[v[i].second] = i; 
     }
     
     for (int i = 0; i < v.size(); i++)
          cout<< arr[i]<<" ";
     return 0;
}