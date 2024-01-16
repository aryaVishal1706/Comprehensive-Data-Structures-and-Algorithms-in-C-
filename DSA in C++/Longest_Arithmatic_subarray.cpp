// Google Kick Start
/**
 * @file Longest_Arithmatic_subarray.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-29
 * 
 * Arrays Challenge-Longest Arithmetic Subarray

     (Google kickstart)

     Problem
     An arithmetic array is an array that contains at least two integers and the
     differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
     and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
     not arithmetic arrays.
     Sarasvati has an array of N non-negative integers. The i-th integer of the array is
     Ai
     . She wants to choose a contiguous arithmetic subarray from her array that has
     the maximum length. Please help her to determine the length of the longest
     contiguous arithmetic subarray.
     Input
     The first line of the input gives the number of test cases, T. T test cases follow.
     Each test case begins with a line containing the integer N. The second line
     contains N integers. The i-th integer is Ai
     .

     Output
     For each test case, output one line containing Case #x: y, where x is the test case
     number (starting from 1) and y is the length of the longest contiguous arithmetic
     subarray.
     Constraints
     Time limit: 20 seconds per test set.
     // 1 sec = 10^8 operations
     // 20 sec = 2 x 10^9 operations

     Memory limit: 1GB.  --->10^8
     1 ≤ T ≤ 100.
     0 ≤ Ai ≤ 109
     .
     Test Set 1
     2 ≤ N ≤ 2000.
     Test Set 2
     2 ≤ N ≤ 2 × 105 for at most 10 test cases.
     For the remaining cases, 2 ≤ N ≤ 2000.
 * @copyright Copyright (c) 2023
 * 
 * 
 */

/**   
 *   // Intution and approach
     // loop over the array and find the answers
     // maintain the following variables
          // 1 Previous Common Difference (pd)
          // 2. Current Arithmetic Subarray length(curr)
          // 3. Max arithmatic subarray length

     // cases

     // case 1
     // pd == A[i]-a[i-1]
     // Current ans incress by 1
     // ans = max(ans, curr)

     // cases 2
     // pd != A[i] - A[i-1] 
     // Update Current ans to 2

  sample test cases
  7
     Array
          10
          7
          4
          6
          8
          10
          11
          Expected Output : 4
 */
#include<iostream>
using namespace std;

int main(){
     int n;
     cin>> n;
     int a[n];
     for(int i =0;i< n;i++){
          cin>>a[i];
     }

     // declare variables
     int pd = a[1]- a[0];
     int j=2;
     int ans =2;
     int curr =2;

     while(j<n){
          if(a[j]-a[j-1]==pd){
               curr++;
          }
          else{
               pd=a[j]-a[j-1];
               curr=2;
          }
          ans = max( ans, curr);
          j++;
     }
     cout<< ans<<endl;
     return 0;
}