// put n items with given weight and value
//  in a knapsack of capacity W to get the MAXIMUM
// total value in knapsack
#include <iostream>
using namespace std;

// Example
// i      0    1    2
// w[i]   10   20   30
// v[i]   100    50    150
// capacity--> w
int knapsack(int value[], int wt[], int n, int w)
{
     if (n == 0 || w == 0)
          return 0;
     if (wt[n - 1] > w)
     {
          return knapsack(value, wt, n - 1, w);
     }
     return max(knapsack(value, wt, n - 1, w), value[n - 1] + knapsack(value, wt, n - 1, w - wt[n - 1]));
}
int main()
{
     int n = 3, w = 50;
     int wt[3] = {10, 20, 30};
     int value[n] = {100, 50, 150};
     cout << knapsack(value, wt, n, w);
     return 0;
}