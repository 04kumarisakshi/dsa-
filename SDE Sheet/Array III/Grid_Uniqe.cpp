// Problem Statement: Given a matrix m X n, count paths from left-top to the right bottom of a matrix with the constraints that from each cell you can either only move to the rightward direction or the downward direction.

// Example 1:

// Input Format: m = 2, n= 2
// Output: 2
#include<bits/stdc++.h>
using namespace std;
int uniquePaths(int m, int n) {
            int N = n + m - 2;
            int r = m - 1; 
            double res = 1;
            
            for (int i = 1; i <= r; i++)
                res = res * (N - r + i) / i;
            return (int)res;
    }

int main()
{
   
    int n,m;
    cin>>n>>m;
  int ans= uniquePaths(m,n);
  cout<<ans;


}