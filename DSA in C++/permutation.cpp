#include <bits/stdc++.h>
#include<vector>
using namespace std;

// Using reccursions
// void permutation(string s , string ans){
//      if(s.length() == 0){
//           cout<<ans << endl;
//      }
//      for(int i =0;i<s.length();i++){
//           char ch=s[i];
//           string ros = s.substr(0,i)+ s.substr(i+1);
//           cout<< "ros " <<ros<<endl;
//           permutation(ros,ans+ch);
//      }
// }

// Using backtracking --> Given an Array nums
// of distinct integers,return all the possible permutations
// you can return the answer in any orders
// sample test cases
// input  nums = [1,2,3]
// output --> [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
// case 2
// nums [0,1]
// output --> [[0,1],[1,0]]
vector<vector<int>> ans;

// void permutation(vector<int> a, int idx)
// {
//      if (idx == a.size())
//      {
//           ans.push_back(a);
//           return;
//      }
//      for (int i = idx; i < a.size(); i++)
//      {
//           swap(a[i], a[idx]);
//           permutation(a, idx + 1);
//           swap(a[idx], a[i]);
//      }
// }

void helper(vector<int> a , vector<vector<int>> &ans , int idx){
     if(idx == a.size()){
          ans.push_back(a);
          return ;
     }
     for(int i =idx; i<a.size();i++){
          if(i !=idx and a[i] == a[idx]){
               continue;
          }
          swap(a[i],a[idx]);
          helper(a,ans,idx+1);
     }
}
vector<vector<int>> permute(vector<int> a){
     sort(a.begin(),a.end());
     vector<vector<int>> ans;
     helper(a, ans,0);
     return ans;
}
int32_t main()
{
     // using recurssion
     // permutation("ABC","");

     // permutations
     // int n;
     // cin >> n;

     // vector<int> a(n);
     // for (auto &i : a)
     // {
     //      cin >> i;
     // }
     // permutation(a, 0);
     //    for (auto v : ans)
     // {
     //      for (auto i : v)
     //      {
     //           cout << i << " ";
     //      }
     //      cout << endl;
     // }

     // STL-> find the shortest path
     //  int n;
     // cin >> n;

     // vector<int> a(n);
     // for (auto &i : a)
     // {
     //      cin >> i;
     // }

     // sort(a.begin(),a.end());
     // do{
     //      ans.push_back(a);
     // }while(next_permutation(a.begin(),a.end()));

     //  for (auto v : ans)
     // {
     //      for (auto i : v)
     //      {
     //           cout << i << " ";
     //      }
     //      cout << endl;
     // }

     // Given a collections of numbers,nums
     // that might contains duplicates, return all possible
     // unique permutations in any orders
     // remove duplicates
     
     int n;
     cin >> n;

     vector<int> a(n);
     for (auto &i : a)
     {
          cin >> i;
     }

     vector<vector<int>> res = permute(a);

     for(auto v: res){
          for(auto i :v){
               cout<< i <<" ";
          }
          cout<<endl;
     }
     return 0;
}