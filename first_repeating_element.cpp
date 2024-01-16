#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Using vector instead of VLA
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    const int N = 1e6 + 2;  // 1000002
    int mididx = INT_MAX;

    // Using vector instead of array and initializing with size N
    vector<int> idx(N, -1);

    for (int i = 0; i < n; i++) {
        if (idx[a[i]] != -1) {
            mididx = min(mididx, idx[a[i]]);
        } else {
            idx[a[i]] = i;
        }
    }

    if (mididx == INT_MAX) {
        cout << "-1";
    } else {
        cout << mididx + 1;
    }

    return 0;
}


     /**
      * @file first_repeating_element.cppArrays Challenge-First Repeating Element

     (Amazon, Oracle)

     Problem
     Given an array arr[] of size N. The task is to find the first repeating element in an
     array of integers, i.e., an element that occurs more than once and whose index of
     first occurrence is smallest.
     Constraints
     1 <= N <= 106
     0 <= Ai <= 106
     Example
     Input:
     7
     1 5 3 4 3 5 6
     Output:
     2
     Explanation:
     5 is appearing twice and its first appearance is at index 2 which is less than 3
     whose first occurring index is 3.
     Solution
     Base idea: To check if an element is repeating, we maintain an array idx[], which
     stores the first occurrence (index) of a particular element a[i].
     Steps
     1. Initialise the idx[] with -1, and minidx with INT_MAX.

     2. Keep updating idx[], while traversing the given array.

     */

/*
     7
     1 5 3 4 3 5 6
     Output: 2
     smallest repeating elements
*/
