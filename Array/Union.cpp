// Given two arrays a[] and b[] of size n and m respectively. The task is to find the number of elements in the union between these two arrays.

// Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.

// Note : Elements are not necessarily distinct.

// Example 1:

// Input:
// 5 3
// 1 2 3 4 5
// 1 2 3
// Output: 
// 5
// Explanation: 
// 1, 2, 3, 4 and 5 are the
// elements which comes in the union set
// of both arrays. So count is 5.
// Example 2:

// Input:
// 6 2 
// 85 25 1 32 54 6
// 85 2 
// Output: 
// 7
// Explanation: 
// 85, 25, 1, 32, 54, 6, and
// 2 are the elements which comes in the
// union set of both arrays. So count is 7.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter size of arrays:";
    cin>>n>>m;
    int a[n];
    int b[m];
    unordered_set<int>s;
    cout<<"Enter element for first array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
     cout<<"Enter element for second array: \n";
        for(int i=0;i<m;i++)
    {
        cin>>b[i];
        s.insert(b[i]);
    }
    cout<<"size of array after union: "<<s.size();
}